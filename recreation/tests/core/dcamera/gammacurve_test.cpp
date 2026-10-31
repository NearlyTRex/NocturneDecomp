#include "core/dcamera/gammacurve.h"

#include <gtest/gtest.h>

namespace nocturne::core {
namespace {

TEST(GammaCurve, A1616GammaIsItsPower) {
    EXPECT_EQ(gammaExponent(0x10000), 1.0F);
    EXPECT_EQ(gammaExponent(0x8000), 0.5F);
    EXPECT_EQ(gammaExponent(0xc000), 0.75F);
}

TEST(GammaCurve, ALevelIsRaisedScaledAndChopped) {
    EXPECT_EQ(applyGammaCurve(0.25, 0.5F, 255), 127);
    EXPECT_EQ(applyGammaCurve(0.0, 0.5F, 255), 0);
    EXPECT_EQ(applyGammaCurve(1.0, 0.75F, 0x10000), 0x10000);
    EXPECT_EQ(applyGammaCurve(0.999, 1.0F, 1), 0);
}

// At a gamma of one nocedit's own code gives 33 for level 34, and one under for many others.
TEST(GammaCurve, ALevelAHairUnderItsWholeValueStaysWhole) {
    EXPECT_EQ(applyGammaCurve(34.0 * (1.0 / 255.0), 1.0F, 255), 34);
    for (int level = 0; level < 256; ++level) {
        EXPECT_EQ(applyGammaCurve(level * (1.0 / 255.0), 1.0F, 255), level);
    }
}

} // namespace
} // namespace nocturne::core
