﻿# CMakeList.txt: проект CMake для CMakeProject1; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.10)

# Добавьте источник в исполняемый файл этого проекта.
add_executable (CMakeProject1 "main.cpp" "profile.h" "test_runner.h" "stats_aggregator.cpp" "stats_aggregator.h" "stats_aggregator_test.cpp")

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
