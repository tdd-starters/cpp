# A simple starter for TDD in C++.

The file _test/calculator_test.cpp_ contains one test case and a few in comments.
Start by coming up with a few test cases and add them to the lists,
then implement them one at a time,
test-driving the solution forwards.

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

### Using unit_tests

```shell
cd build
./bin/unit_tests
```

## Acknowledgments
This project borrows from [bast/gtest-demo](https://github.com/bast/gtest-demo).