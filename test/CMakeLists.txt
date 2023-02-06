include(FetchContent)
FetchContent_Declare(gtest
    QUIET
    URL https://github.com/google/googletest/archive/refs/tags/v1.13.0.tar.gz
)

# Configure build of googletest
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
set(BUILD_GMOCK OFF CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(gtest)

add_executable(
    unit_tests
        calculator_test.cpp
)

target_link_libraries(unit_tests
    PRIVATE
        example
        gtest_main
)

# Automatic discovery of unit tests
include(GoogleTest)
gtest_discover_tests(unit_tests
    PROPERTIES
        LABELS "unit"
    DISCOVERY_TIMEOUT
        240
)
