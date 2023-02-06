# A simple starter for TDD in C++.

## Build
Build the project using the following commands.

```shell
git clone https://github.com/tdd-starters/cpp.git
cd cpp
cmake -S. -Bbuild 
cmake --build build
````

## Test

Tests can be run directly in your IDE, for example CLion, or through the command line using one of the following methods

### Using ctest

```shell
cd build
ctest
```

Example output

```txt
Test project /home/user/tdd-starters/cpp/build
    Start 1: example.greet
1/1 Test #1: example.greet ....................   Passed    0.00 sec

100% tests passed, 0 tests failed out of 1

Label Time Summary:
unit    =   0.00 sec*proc (1 test)

Total Test time (real) =   0.00 sec
```

### Using unit_tests

```shell
cd build
./bin/unit_tests
```

Example output

```txt
Running main() from /home/user/tdd-starters/cpp/build/_deps/gtest-src/googletest/src/gtest_main.cc
[==========] Running 1 test from 1 test suite.
[----------] Global test environment set-up.
[----------] 1 test from example
[ RUN      ] example.greet
[       OK ] example.greet (0 ms)
[----------] 1 test from example (0 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test suite ran. (0 ms total)
[  PASSED  ] 1 test.
```

## Acknowledgments
This project borrows from [bast/gtest-demo](https://github.com/bast/gtest-demo).