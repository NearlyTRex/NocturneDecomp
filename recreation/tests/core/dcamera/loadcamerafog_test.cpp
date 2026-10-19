#include "common/text/textscanner.h"
#include "core/dcamera/dcamera.h"
#include "core/dcamera/fog.h"

#include <gtest/gtest.h>

namespace nocturne::core {
namespace {

constexpr const char *kFog = "fogR,fogG,fogB\n"
                             "35,36,40\n"
                             "fogVel\n"
                             "1.000000,2.000000,3.000000\n"
                             "100.000000,0.800000\n"
                             "20.000000\n"
                             "next";

TEST(LoadCameraFog, ReadsTheColourDriftTaperDensityAndTemperature) {
    common::CTextScanner scanner(kFog);
    SFog fog;
    loadCameraFog(fog, scanner, 26);
    EXPECT_EQ(fog.color_index, (CColor3i{.r = 35, .g = 36, .b = 40}));
    EXPECT_FLOAT_EQ(fog.scroll.x, 1.0F);
    EXPECT_FLOAT_EQ(fog.scroll.y, 2.0F);
    EXPECT_FLOAT_EQ(fog.scroll.z, 3.0F);
    EXPECT_FLOAT_EQ(fog.height_threshold, 100.0F);
    EXPECT_FLOAT_EQ(fog.density_multiplier, 0.8F);
    EXPECT_FLOAT_EQ(fog.temperature, 20.0F);
    EXPECT_EQ(scanner.readLine(), "next");
}

TEST(LoadCameraFog, OlderFilesHaveNoTemperatureAndGetFifty) {
    common::CTextScanner scanner(kFog);
    SFog fog;
    loadCameraFog(fog, scanner, 25);
    EXPECT_FLOAT_EQ(fog.temperature, 50.0F);
    EXPECT_EQ(scanner.readLine(), "20.000000");
}

} // namespace
} // namespace nocturne::core
