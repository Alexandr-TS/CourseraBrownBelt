#pragma once

#include <istream>
#include <map>
#include <string>
#include <sstream>
#include <variant>
#include <vector>

namespace Json {
    class Node : std::variant<std::vector<Node>,
        std::map<std::string, Node>,
        double,
        std::string> {
    public:
        using variant::variant;

        const auto& AsArray() const {
            return std::get<std::vector<Node>>(*this);
        }
        const auto& AsMap() const {
            return std::get<std::map<std::string, Node>>(*this);
        }
        double AsDouble() const {
            return std::get<double>(*this);
        }
        const auto& AsString() const {
            return std::get<std::string>(*this);
        }
        
        void Print(std::ostream& os) const;
    };

    class Document {
    public:
        explicit Document(Node root);

        const Node& GetRoot() const;

    private:
        Node root;
    };

    Document Load(std::istream& input);
}