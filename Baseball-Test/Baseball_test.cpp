#include "pch.h"
#include<stdexcept>
#include "../Baseball/Baseball.cpp"
using namespace std;

TEST(BaseballGame, TryGameTest) {
	EXPECT_EQ(1, 1);
}

TEST(BaseballGame, ThrowExceptionWhenInputLengthIsUnmached) {
	Baseball game;
	EXPECT_THROW(game.guess(string("12")), length_error);
}