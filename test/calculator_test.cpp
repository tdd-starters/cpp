#include <gtest/gtest.h>
#include "calculator.h"

using std::string;
using std::pair;

class CalculatorTest: public testing::TestWithParam<pair<string, uint>> {};

TEST_P(CalculatorTest, CorrectlyEvaluatesExpression)
{
    // Given an expression
    pair<string, uint> data = GetParam();
    string expression = data.first;

    // when the expression is evaluated
    uint result = evaluate(expression);

    // then the result is as expected
    uint expected = data.second;
    ASSERT_EQ(expected, result);
}

INSTANTIATE_TEST_SUITE_P(Expressions, CalculatorTest, testing::Values(
        pair("0", 0)
        //pair("1 + 2", 3)
        // ... more tests here
        //pair("(1 + 2) * 5 / 2 + -3 * 7", -14)
));