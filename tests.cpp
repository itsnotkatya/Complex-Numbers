//
// Created by Екатерина on 28/12/2019.
//
#include "gtest/gtest.h"
#include "lib.h"

TEST (operatorAdd,Add) {
    Complex a{7,2}, b{1,1};
    Complex result = a + b;
    EXPECT_EQ(8,result.x);
    EXPECT_EQ(3, result.y);
}

TEST (operatorSub,Sub) {
    Complex a{7,2}, b{1,1};
    Complex result = a - b;
    EXPECT_EQ(6,result.x);
    EXPECT_EQ(1, result.y);
}

TEST (operatorDiv,Div) {
    Complex a{4,2}, b{2,1};
    Complex result = a / b;
    EXPECT_EQ(2,result.x);
    EXPECT_EQ(0, result.y);
}

TEST (operatorMul,Mul) {
    Complex a{7,2}, b{1,1};
    Complex result = a * b;
    EXPECT_EQ(5,result.x);
    EXPECT_EQ(9, result.y);
}

TEST (operatorEqual,Equal) {
    Complex a{1,1}, b{1,1};
    EXPECT_EQ((a == b), true);
}

TEST (operatorNotEqual,NotEqual) {
    Complex a{1,1}, b{0,0};
    EXPECT_EQ((a == b), false);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}