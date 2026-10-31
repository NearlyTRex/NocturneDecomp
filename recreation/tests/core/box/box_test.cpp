#include "common/math/vector3f.h"
#include "common/text/textscanner.h"
#include "core/box/box.h"

#include <gtest/gtest.h>

#include <string>
#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CBox, IsConcrete) {
    static_assert(!std::is_abstract_v<CBox>);
}

TEST(CBox, Constructors) {
    static_assert(std::is_constructible_v<CBox>);
}

TEST(CBox, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CBox::setupCorners),
                                 void (CBox::*)(common::CVector3f *, common::CVector3f *,
                                                common::CVector3f *, float)>);
    static_assert(std::is_same_v<decltype(&CBox::process), void (CBox::*)(float)>);
    static_assert(std::is_same_v<decltype(&CBox::processPhysics), void (CBox::*)(float)>);
    static_assert(
        std::is_same_v<decltype(&CBox::loadFromFile), void (CBox::*)(common::CTextScanner &)>);
    static_assert(std::is_same_v<decltype(&CBox::saveToFile), void (CBox::*)(std::FILE *, char *)>);
    static_assert(std::is_same_v<decltype(&CBox::setupVelocities),
                                 void (CBox::*)(common::CVector3f *, common::CVector3f *)>);
}

void expectVector(const common::CVector3f &actual, const common::CVector3f &expected) {
    EXPECT_FLOAT_EQ(actual.x, expected.x);
    EXPECT_FLOAT_EQ(actual.y, expected.y);
    EXPECT_FLOAT_EQ(actual.z, expected.z);
}

TEST(CBox, StartsAsNoBoxAtTheOriginAtRest) {
    const CBox box;
    expectVector(box.getPosition(), {});
    expectVector(box.getExtents(), {});
    expectVector(box.getAngularVelocity(), {});
    EXPECT_EQ(box.getValidity(), 0);
}

// As a mission file holds one, with Windows line ends.
TEST(CBox, ReadsTheBoxAfterItsVersion) {
    const std::string text = "\t\tboxVersion\r\n\t\t1\r\n\t\tboxStateInfo\r\n"
                             "\t\t1,2,3\r\n\t\t0.1,0.2,0.3\r\n\t\t4,5,6\r\n\t\t7\r\n"
                             "\t\t8,9,10\r\n\t\t11,12,13\r\n\t\t1\r\n\t}\r\nnext";
    common::CTextScanner scanner(text);
    CBox box;
    box.loadFromFile(scanner);
    expectVector(box.getPosition(), {.x = 1.0F, .y = 2.0F, .z = 3.0F});
    expectVector(box.getOrientation(), {.x = 0.1F, .y = 0.3F, .z = 0.2F});
    expectVector(box.getExtents(), {.x = 4.0F, .y = 5.0F, .z = 6.0F});
    expectVector(box.getLocalLinearVelocity(), {.x = 8.0F, .y = 9.0F, .z = 10.0F});
    expectVector(box.getAngularVelocity(), {.x = 11.0F, .y = 12.0F, .z = 13.0F});
    EXPECT_EQ(box.getValidity(), 1);
    EXPECT_EQ(scanner.readLine(), "}\r");
}

// Being set up as its shape is read, a box short of its validity is valid at rest.
TEST(CBox, AShortBoxKeepsWhatItCouldntReadButIsSetUp) {
    const std::string full = "v\n1\ns\n0,0,0\n0.5,0,0\n4,0,0\n1\n1,1,1\n2,2,2\n0\n";
    common::CTextScanner full_scanner(full);
    CBox box;
    box.loadFromFile(full_scanner);
    const std::string text = "boxVersion\n1\nboxStateInfo\n1,2,3\n";
    common::CTextScanner scanner(text);
    box.loadFromFile(scanner);
    expectVector(box.getPosition(), {.x = 1.0F, .y = 2.0F, .z = 3.0F});
    expectVector(box.getOrientation(), {.x = 0.5F});
    expectVector(box.getExtents(), {.x = 4.0F});
    expectVector(box.getLocalLinearVelocity(), {});
    expectVector(box.getAngularVelocity(), {});
    EXPECT_EQ(box.getValidity(), 1);
    EXPECT_TRUE(scanner.atEnd());
}

TEST(CBox, SettingItsCornersPutsItAtRestWhereItIsPut) {
    CBox box;
    common::CVector3f position{.x = 1.0F, .y = 2.0F, .z = 3.0F};
    common::CVector3f orientation{.z = 0.25F};
    common::CVector3f extents{.x = 4.0F, .y = 5.0F, .z = 6.0F};
    box.setupCorners(&position, &orientation, &extents, 7.0F);
    expectVector(box.getPosition(), position);
    expectVector(box.getOrientation(), orientation);
    expectVector(box.getExtents(), extents);
    EXPECT_EQ(box.getValidity(), 1);
}

} // namespace
} // namespace nocturne::core
