#include "common/video/framebuffer.h"
#include "engine/2d/2d.h"
#include "engine/3d/3d.h"
#include "engine/light/light.h"
#include "engine/matrix/matrix.h"
#include "engine/special/special.h"
#include "engine/texture/currenttexture.h"
#include "tests/mocks/engine/podfixture.h"
#include "tests/mocks/platform/mockclock.h"
#include "tests/mocks/platform/mockdisplay.h"
#include "tests/mocks/platform/mocklog.h"
#include "tests/mocks/platform/mockrenderer.h"
#include "tests/mocks/platform/mockwindow.h"
#include "wincore/wddvmem/wddvmem.h"
#include "wincore/winrun/winrun.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstddef>
#include <cstdint>
#include <string>
#include <string_view>
#include <type_traits>
#include <vector>

namespace nocturne::wincore {
namespace {

using ::testing::_;
using ::testing::AnyNumber;
using ::testing::NiceMock;
using ::testing::Return;

TEST(CWddVMem, PublicInterface) {
    static_assert(std::is_base_of_v<engine::IScreenDevice, CWddVMem>);
    static_assert(
        std::is_same_v<decltype(&CWddVMem::initializeGraphicsSystem), int (CWddVMem::*)(int, int)>);
    static_assert(std::is_same_v<decltype(&CWddVMem::cleanupGraphicsSystem), void (CWddVMem::*)()>);
    static_assert(std::is_same_v<decltype(&CWddVMem::setScreenResolution),
                                 bool (CWddVMem::*)(int, int, int)>);
    static_assert(std::is_same_v<decltype(&CWddVMem::resetGraphicsSystem), void (CWddVMem::*)()>);
    static_assert(
        std::is_same_v<decltype(&CWddVMem::reinitializeGraphicsSystem), void (CWddVMem::*)()>);
    static_assert(std::is_same_v<decltype(&CWddVMem::openScreenDevice), void (CWddVMem::*)()>);
    static_assert(std::is_same_v<decltype(&CWddVMem::closeScreenDevice), void (CWddVMem::*)()>);
    static_assert(std::is_same_v<decltype(&CWddVMem::setupColorPalette), void (CWddVMem::*)()>);
    static_assert(
        std::is_same_v<decltype(&CWddVMem::convertPaletteToDirectColor), void (CWddVMem::*)()>);
    static_assert(std::is_same_v<decltype(&CWddVMem::swapBuffers), void (CWddVMem::*)()>);
}

// Entry 1 of the palette is (255, 128, 0); the rest are black.
class CWddVMemTest : public engine::CPodFixture {
protected:
    CWddVMemTest() {
        std::string palette(engine::C2d::kPaletteBytes, '\0');
        palette.replace(3, 3, "\xff\x80\x00", 3);
        givenFile("art\\vga.act", palette);
        two_d_.loadPaletteFile("vga.act");
        ON_CALL(display_, setDisplayMode).WillByDefault(Return(true));
        ON_CALL(clock_, getCounterFrequency).WillByDefault(Return(1000));
        ON_CALL(display_, getPixelFormat).WillByDefault([this] {
            return common::getPixelFormat(*common::layoutForDepth(wddvmem_.getBitsPerPixel()));
        });
        ON_CALL(display_, present)
            .WillByDefault([this](std::span<const std::byte> pixels, int /*pitch*/) {
                presented_.assign(pixels.begin(), pixels.end());
            });
    }

    // The renderer running the current mode; the setup's lock leaves the frame marked drawn.
    void startRenderer() {
        ON_CALL(renderer_, init).WillByDefault(Return(1));
        ON_CALL(renderer_, setVideoMode2).WillByDefault(Return(1));
        ON_CALL(renderer_, lockFrame).WillByDefault(Return(1));
        special_.setUseDirect3D(true);
        ASSERT_EQ(special_.setResolutionAndColorTable(wddvmem_.getWindowWidth(),
                                                      wddvmem_.getWindowHeight(), 32),
                  1);
    }

    std::vector<std::byte> presented_;
    NiceMock<platform::MockDisplay> display_;
    NiceMock<platform::MockRenderer> renderer_;
    NiceMock<platform::MockWindow> window_;
    NiceMock<platform::MockClock> clock_;
    NiceMock<platform::MockLog> log_;
    CWinRun winrun_{window_, clock_};
    CWddVMem wddvmem_{display_, renderer_, winrun_, special_, two_d_, clock_, log_};
    engine::C2d two_d_{dosio_, wddvmem_, winrun_};
    engine::CLight light_;
    engine::CMatrix matrix_{two_d_, light_};
    engine::C3d three_d_{matrix_};
    engine::SCurrentTexture current_texture_;
    engine::CSpecial special_{renderer_, wddvmem_, two_d_, matrix_, three_d_, current_texture_};
};

TEST_F(CWddVMemTest, StartsAtThreeHundredAndTwentyByTwoHundredInEightBits) {
    EXPECT_EQ(wddvmem_.getWindowWidth(), 320);
    EXPECT_EQ(wddvmem_.getWindowHeight(), 200);
    EXPECT_EQ(wddvmem_.getBitsPerPixel(), 8);
}

TEST_F(CWddVMemTest, InitializingStartsTheRendererOnlyWithDirect3D) {
    EXPECT_CALL(renderer_, init).Times(0);
    EXPECT_EQ(wddvmem_.initializeGraphicsSystem(0, 0), 1);
    special_.setUseDirect3D(true);
    EXPECT_CALL(renderer_, init).WillOnce(Return(1));
    EXPECT_EQ(wddvmem_.initializeGraphicsSystem(0, 0), 1);
}

TEST_F(CWddVMemTest, OnlyEightSixteenAndThirtyTwoBitsAreAccepted) {
    EXPECT_CALL(display_, setDisplayMode).Times(0);
    EXPECT_FALSE(wddvmem_.setScreenResolution(640, 480, 24));
    EXPECT_EQ(wddvmem_.getBitsPerPixel(), 8);
}

// The original replaced its buffers first and left the rows pointing into freed ones.
TEST_F(CWddVMemTest, ARefusedModeLeavesTheScreenAsItWas) {
    ASSERT_TRUE(wddvmem_.setScreenResolution(4, 2, 8));
    void *const first_row = wddvmem_.getScreenRows()[0];
    EXPECT_CALL(display_, setDisplayMode(640, 480, 32)).WillOnce(Return(false));
    EXPECT_FALSE(wddvmem_.setScreenResolution(640, 480, 32));
    EXPECT_EQ(wddvmem_.getWindowWidth(), 4);
    EXPECT_EQ(wddvmem_.getBitsPerPixel(), 8);
    EXPECT_EQ(wddvmem_.getScreenRows()[0], first_row);
}

TEST_F(CWddVMemTest, AModeWithNoRowsOrMoreThanTheTallestIsRefused) {
    EXPECT_CALL(display_, setDisplayMode).Times(0);
    EXPECT_FALSE(wddvmem_.setScreenResolution(1600, 1201, 32));
    EXPECT_FALSE(wddvmem_.setScreenResolution(0, 480, 32));
    EXPECT_FALSE(wddvmem_.setScreenResolution(640, 0, 32));
}

TEST_F(CWddVMemTest, ANewModeLaysTheRowsOverFreshBuffers) {
    ASSERT_TRUE(wddvmem_.setScreenResolution(4, 3, 32));
    const auto rows = wddvmem_.getScreenRows();
    EXPECT_EQ(static_cast<std::byte *>(rows[1]) - static_cast<std::byte *>(rows[0]), 16);
    EXPECT_EQ(static_cast<std::byte *>(rows[2]) - static_cast<std::byte *>(rows[0]), 32);
    const auto z_rows = wddvmem_.getZBufferRows();
    EXPECT_EQ(z_rows[2] - z_rows[0], 8);
}

TEST_F(CWddVMemTest, ANewModeClipsToItAndClearsEveryBufferOfTheChain) {
    EXPECT_CALL(display_, present(_, 16)).Times(3);
    EXPECT_CALL(window_, pollEvent).Times(AnyNumber());
    ASSERT_TRUE(wddvmem_.setScreenResolution(4, 3, 32));
    EXPECT_EQ(two_d_.getClipRight(), 3);
    EXPECT_EQ(two_d_.getClipBottom(), 2);
}

TEST_F(CWddVMemTest, AnEightBitModeHandsThePaletteToTheDisplay) {
    EXPECT_CALL(display_, setPalette).WillOnce([](std::span<const std::uint8_t, 768> rgb) {
        EXPECT_EQ(rgb[3], 255);
        EXPECT_EQ(rgb[4], 128);
    });
    EXPECT_CALL(display_, getPixelFormat).Times(0);
    ASSERT_TRUE(wddvmem_.setScreenResolution(4, 2, 8));
}

TEST_F(CWddVMemTest, ASixteenBitModeBuildsItsTableAndMasksFromTheDisplaysFormat) {
    ASSERT_TRUE(wddvmem_.setScreenResolution(4, 2, 16));
    const engine::SColorChannels &channels = wddvmem_.getColorChannels();
    EXPECT_EQ(channels.red,
              (common::SChannelLayout{.bit_position = 11, .scale_factor = 8, .dither_shift = 3}));
    EXPECT_EQ(channels.green,
              (common::SChannelLayout{.bit_position = 5, .scale_factor = 4, .dither_shift = 2}));
    EXPECT_EQ(wddvmem_.getColorTable16()[1], 0xfc00);
    EXPECT_EQ(wddvmem_.getColorTable16()[0], 0);
    EXPECT_EQ(wddvmem_.getColorMasks(), (engine::SColorMasks{.red_mask16 = 0xf800,
                                                             .green_mask16 = 0x07e0,
                                                             .blue_mask16 = 0x001f,
                                                             .red_mask32 = 0xf80000,
                                                             .green_mask32 = 0xfc00,
                                                             .blue_mask32 = 0xf8,
                                                             .blue_bit_shift = 3,
                                                             .total_dither_shift = 8,
                                                             .green_blue_dither_shift = 5}));
}

// A channel of eight bits or more has a dither shift of 32, which x86 shifts by as 0.
TEST_F(CWddVMemTest, ADitherShiftOfThirtyTwoShiftsByNothing) {
    ASSERT_TRUE(wddvmem_.setScreenResolution(4, 2, 16));
    wddvmem_.getColorChannels().red.dither_shift = 32;
    wddvmem_.convertPaletteToDirectColor();
    EXPECT_EQ(wddvmem_.getColorMasks().red_mask16, 0xffU << 11U);
    EXPECT_EQ(wddvmem_.getColorMasks().red_mask32, 0xffU << 16U);
}

TEST_F(CWddVMemTest, AThirtyTwoBitModeBuildsItsTableUnscaled) {
    ASSERT_TRUE(wddvmem_.setScreenResolution(4, 2, 32));
    EXPECT_EQ(wddvmem_.getColorTable32()[1], 0xff8000U);
}

TEST_F(CWddVMemTest, AnEightBitModeBuildsNoTable) {
    ASSERT_TRUE(wddvmem_.setScreenResolution(4, 2, 8));
    wddvmem_.convertPaletteToDirectColor();
    EXPECT_EQ(wddvmem_.getColorTable16()[1], 0);
    EXPECT_EQ(wddvmem_.getColorTable32()[1], 0U);
}

TEST_F(CWddVMemTest, TheHardwarePalettesStartBlackAndOutliveAModeChange) {
    EXPECT_EQ(wddvmem_.getHardwarePalette16()[7], 0U);
    EXPECT_EQ(wddvmem_.getHardwarePalette32()[7], 0U);
    wddvmem_.getHardwarePalette16()[7] = 0x1234;
    wddvmem_.getHardwarePalette32()[7] = 0x123456;
    ASSERT_TRUE(wddvmem_.setScreenResolution(4, 2, 32));
    EXPECT_EQ(wddvmem_.getHardwarePalette16()[7], 0x1234U);
    EXPECT_EQ(wddvmem_.getHardwarePalette32()[7], 0x123456U);
}

TEST_F(CWddVMemTest, TheRendererBuildsTheSixteenBitTableWhileItRuns) {
    ASSERT_TRUE(wddvmem_.setScreenResolution(4, 2, 16));
    startRenderer();
    EXPECT_CALL(renderer_, setColorTable16(two_d_.getSourcePaletteData().data(),
                                           wddvmem_.getColorTable16().data()));
    EXPECT_CALL(display_, getPixelFormat).Times(0);
    wddvmem_.setupColorPalette();
}

TEST_F(CWddVMemTest, ASwapShowsTheBackBufferAndPumpsMessages) {
    ASSERT_TRUE(wddvmem_.setScreenResolution(4, 2, 8));
    *static_cast<std::byte *>(wddvmem_.getScreenRows()[1]) = std::byte{9};
    EXPECT_CALL(display_, present(_, 4));
    EXPECT_CALL(window_, pollEvent).WillOnce(Return(false));
    wddvmem_.swapBuffers();
    ASSERT_EQ(presented_.size(), 8U);
    EXPECT_EQ(presented_[4], std::byte{9});
}

TEST_F(CWddVMemTest, DrawingOnTheSurfaceIsWhatTheNextSwapShows) {
    ASSERT_TRUE(wddvmem_.setScreenResolution(4, 2, 8));
    void *const back_row = wddvmem_.getScreenRows()[0];
    wddvmem_.openScreenDevice();
    EXPECT_NE(wddvmem_.getScreenRows()[0], back_row);
    *static_cast<std::byte *>(wddvmem_.getScreenRows()[0]) = std::byte{7};
    wddvmem_.closeScreenDevice();
    EXPECT_EQ(wddvmem_.getScreenRows()[0], back_row);
    wddvmem_.swapBuffers();
    EXPECT_EQ(presented_[0], std::byte{7});
    wddvmem_.swapBuffers();
    EXPECT_EQ(presented_[0], std::byte{0});
}

TEST_F(CWddVMemTest, WithTheRendererRunningSwapsGoThroughIt) {
    ASSERT_TRUE(wddvmem_.setScreenResolution(4, 2, 32));
    startRenderer();
    void *const row = wddvmem_.getScreenRows()[0];
    wddvmem_.openScreenDevice();
    wddvmem_.closeScreenDevice();
    EXPECT_EQ(wddvmem_.getScreenRows()[0], row);
    EXPECT_CALL(display_, present).Times(0);
    EXPECT_CALL(renderer_, toggle).WillOnce(Return(1));
    EXPECT_CALL(window_, pollEvent).WillOnce(Return(false));
    wddvmem_.swapBuffers();
}

// The decomp's Flip trace: the first four, then every 300th. Setting the mode swaps three times.
TEST_F(CWddVMemTest, EachSwapIsTracedAtFirstThenOnlyNowAndAgain) {
    std::vector<std::string> traced;
    ON_CALL(log_, write(platform::ELogSubsystem::Render, _))
        .WillByDefault([&](platform::ELogSubsystem, std::string_view line) {
            if (line.contains(" present ")) {
                traced.emplace_back(line.substr(line.find("] ") + 2));
            }
        });
    ASSERT_TRUE(wddvmem_.setScreenResolution(4, 2, 8));
    wddvmem_.openScreenDevice();
    wddvmem_.closeScreenDevice();
    for (int swap = 4; swap <= 300; ++swap) {
        wddvmem_.swapBuffers();
    }
    EXPECT_EQ(traced, (std::vector<std::string>{
                          "#1 present 4x2 at 8 bits per pixel from the back buffer",
                          "#2 present 4x2 at 8 bits per pixel from the back buffer",
                          "#3 present 4x2 at 8 bits per pixel from the back buffer",
                          "#4 present 4x2 at 8 bits per pixel from the back surface",
                          "#300 present 4x2 at 8 bits per pixel from the back buffer"}));
}

TEST_F(CWddVMemTest, AHardwareFrameIsTracedAsTheRenderers) {
    ASSERT_TRUE(wddvmem_.setScreenResolution(4, 2, 32));
    startRenderer();
    EXPECT_CALL(log_, write(platform::ELogSubsystem::Render,
                            ::testing::HasSubstr("#4 present 4x2 at 32 bits per pixel from the "
                                                 "hardware renderer")));
    wddvmem_.swapBuffers();
}

// A frame every tenth of a second after the mode's three, the first starting the count.
TEST_F(CWddVMemTest, TheFrameRateIsLoggedOnceASecondAtFirst) {
    std::uint64_t now = 0;
    ON_CALL(clock_, getCounter).WillByDefault([&] { return now; });
    ASSERT_TRUE(wddvmem_.setScreenResolution(4, 2, 8));
    std::vector<std::string> rates;
    ON_CALL(log_, write(platform::ELogSubsystem::Render, _))
        .WillByDefault([&](platform::ELogSubsystem, std::string_view line) {
            if (line.contains("frames a second")) {
                rates.emplace_back(line.substr(line.find("] ") + 2));
            }
        });
    for (int frame = 0; frame <= 10; ++frame) {
        wddvmem_.swapBuffers();
        now += 100;
    }
    EXPECT_EQ(rates, std::vector<std::string>{
                         "13.0 frames a second over 1.0s (13 frames), the slowest 100.0ms"});
}

TEST_F(CWddVMemTest, TheDepthCanBeHandedToTheRenderer) {
    wddvmem_.setBitsPerPixel(16);
    EXPECT_EQ(wddvmem_.getBitsPerPixel(), 16);
}

TEST_F(CWddVMemTest, ResettingWithoutDirect3DLeavesTheModeAlone) {
    ASSERT_TRUE(wddvmem_.setScreenResolution(4, 2, 32));
    EXPECT_CALL(renderer_, init).Times(0);
    EXPECT_CALL(display_, setDisplayMode).Times(0);
    wddvmem_.resetGraphicsSystem();
    EXPECT_FALSE(special_.getUseExternalRenderer());
}

TEST_F(CWddVMemTest, ResettingWithDirect3DHandsTheModeToTheRenderer) {
    ASSERT_TRUE(wddvmem_.setScreenResolution(4, 2, 32));
    ON_CALL(renderer_, init).WillByDefault(Return(1));
    ON_CALL(renderer_, lockFrame).WillByDefault(Return(1));
    special_.setUseDirect3D(true);
    EXPECT_CALL(renderer_, setVideoMode2(4, 2, 32, _)).WillOnce(Return(1));
    EXPECT_CALL(display_, setDisplayMode).Times(0);
    wddvmem_.resetGraphicsSystem();
    EXPECT_TRUE(special_.getUseExternalRenderer());
    EXPECT_TRUE(special_.getUseDirect3D());
}

// A renderer that won't start leaves the game drawing the same mode in software.
TEST_F(CWddVMemTest, ARendererThatRefusesTheModeTurnsDirect3DOff) {
    ASSERT_TRUE(wddvmem_.setScreenResolution(4, 2, 32));
    ON_CALL(renderer_, init).WillByDefault(Return(1));
    special_.setUseDirect3D(true);
    EXPECT_CALL(renderer_, setVideoMode2).WillOnce(Return(0));
    EXPECT_CALL(display_, setDisplayMode(4, 2, 32)).WillOnce(Return(true));
    wddvmem_.resetGraphicsSystem();
    EXPECT_FALSE(special_.getUseExternalRenderer());
    EXPECT_FALSE(special_.getUseDirect3D());
}

// An 8-bit mode is switched to 16 bits, with a warning that waits for a key.
TEST_F(CWddVMemTest, ResettingAnEightBitModeForcesSixteenBitsAfterAWarning) {
    ASSERT_TRUE(wddvmem_.setScreenResolution(400, 100, 8));
    ON_CALL(renderer_, init).WillByDefault(Return(1));
    ON_CALL(renderer_, lockFrame).WillByDefault(Return(1));
    special_.setUseDirect3D(true);
    bool typed = false;
    ON_CALL(window_, pollEvent).WillByDefault([&typed](platform::SWindowEvent &event) {
        if (typed) {
            return false;
        }
        typed = true;
        event = {.type = platform::EWindowEventType::Character, .character = 'x'};
        return true;
    });
    EXPECT_CALL(display_, setDisplayMode(400, 100, 16)).WillOnce(Return(true));
    EXPECT_CALL(renderer_, setVideoMode2(400, 100, 16, _)).WillOnce(Return(1));
    wddvmem_.resetGraphicsSystem();
    EXPECT_TRUE(typed);
    EXPECT_EQ(wddvmem_.getBitsPerPixel(), 16);
    EXPECT_TRUE(special_.getUseExternalRenderer());
}

} // namespace
} // namespace nocturne::wincore
