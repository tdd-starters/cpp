add_library(example)

target_sources(example
    PRIVATE
        calculator.cpp
    PUBLIC
        calculator.h
)

target_include_directories(example
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
)
