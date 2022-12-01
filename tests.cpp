#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("Task A: Create Vector 0 to n-1")
{
    std::vector<int> shouldBe1 = {};
    std::vector<int> shouldBe2 = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    std::vector<int> shouldBe3 = {0};

    std::vector<int> v1 = makeVector(0);
    std::vector<int> v2 = makeVector(9);
    std::vector<int> v3 = makeVector(1);
    
    CHECK(shouldBe1 == v1);
    CHECK(shouldBe2 == v2);
    CHECK(shouldBe3 == v3);
}

TEST_CASE("Task B: Remove Vector's Negative Integers")
{
    std::vector<int> test1 = {-23, -1, -3, -5, -6};
    std::vector<int> test2 = {1, 3, 65, 8, 3};
    std::vector<int> test3 = {-21, 3, 2, -2, 2, 312, -21};

    test1 = goodVibes(test1);
    test2 = goodVibes(test2);
    test3 = goodVibes(test3);

    std::vector<int> shouldBe1 = {};
    std::vector<int> shouldBe2 = {1, 3, 65, 8, 3};
    std::vector<int> shouldBe3 = {3, 2, 2, 312};

    CHECK(test1 == shouldBe1);
    CHECK(test2 == shouldBe2);
    CHECK(test3 == shouldBe3);
}

TEST_CASE("Task C: Push_back Second Vector to First Vector and Clear Second Vector")
{
    std::vector<int> test1 = {-23, -1, -3, -5, -6};
    std::vector<int> test2 = {1, 3, 65, 8, 3};
    std::vector<int> test3 = {};
    std::vector<int> test4 = {-21, 3, 2, -2, 2, 312, -21};

    gogeta(test1, test2);
    gogeta(test3, test4);

    std::vector<int> empty1 = {};
    std::vector<int> sum1 = {-23, -1, -3, -5, -6, 1, 3, 65, 8, 3};
    std::vector<int> sum2 = {-21, 3, 2, -2, 2, 312, -21};

    CHECK(test1 == sum1);
    CHECK(test2 == empty1);
    CHECK(test3 == sum2);
    CHECK(test4 == empty1);
}

TEST_CASE("Task D: Sum of Two Vectors Into One")
{
    std::vector<int> test1 = {-23, -1, -3, -5, -6};
    std::vector<int> test2 = {1, 3, 65, 8, 3};
    std::vector<int> test3 = {};
    std::vector<int> test4 = {-21, 3, 2, -2, 2, 312, -21};
    std::vector<int> test5 = {32, 4, -5, -6, 2, 1, 10};
    std::vector<int> test6 = {4, 12, 27, 3, -43};

    test1 = sumPairWise(test1, test2);
    test2 = sumPairWise(test3, test4);
    test3 = sumPairWise(test5, test6);

    std::vector<int> sum1 = {-22, 2, 62, 3, -3};
    std::vector<int> sum2 = {-21, 3, 2, -2, 2, 312, -21};
    std::vector<int> sum3 = {36, 16, 22, -3, -41, 1, 10};

    CHECK(test1 == sum1);
    CHECK(test2 == sum2);
    CHECK(test3 == sum3);
    CHECK(sumPairWise(test1, test2) == sumPairWise(sum1, sum2));
}