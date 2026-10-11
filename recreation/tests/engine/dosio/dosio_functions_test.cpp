#include "engine/dosio/dosio_functions.h"

#include <gtest/gtest.h>

namespace nocturne::engine {
namespace {

TEST(GetRelativeFilePath, JoinsWithABackslash) {
    EXPECT_EQ(getRelativeFilePath("sounds", "door.wav"), "sounds\\door.wav");
}

TEST(GetRelativeFilePath, WithoutADirectoryIsTheFilename) {
    EXPECT_EQ(getRelativeFilePath("", "door.wav"), "door.wav");
}

} // namespace
} // namespace nocturne::engine
