#include "common/text/path.h"

#include <gtest/gtest.h>

namespace nocturne::common {
namespace {

TEST(Path, BackslashesBecomeSlashes) {
    EXPECT_EQ(toPortablePath(".\\system\\nocturne.ini"), "./system/nocturne.ini");
    EXPECT_EQ(toPortablePath("save/SAVE1.NOC"), "save/SAVE1.NOC");
}

TEST(Path, LeafIsAfterTheLastSeparatorOfEitherKind) {
    EXPECT_EQ(pathLeaf("..\\engine\\ini.cpp"), "ini.cpp");
    EXPECT_EQ(pathLeaf("/src/engine/ini.cpp"), "ini.cpp");
    EXPECT_EQ(pathLeaf("art\\textures/sky.raw"), "sky.raw");
}

TEST(Path, LeafOfABareNameIsTheName) {
    EXPECT_EQ(pathLeaf("gtfo.txt"), "gtfo.txt");
}

} // namespace
} // namespace nocturne::common
