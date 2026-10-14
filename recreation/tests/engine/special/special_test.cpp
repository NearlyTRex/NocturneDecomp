#include "engine/2d/2d.h"
#include "engine/3d/3d.h"
#include "engine/dosio/dosio.h"
#include "engine/light/light.h"
#include "engine/matrix/matrix.h"
#include "engine/special/special.h"
#include "engine/texture/currenttexture.h"
#include "platform/mrgltexturebasic.h"
#include "platform/rendervertex.h"
#include "tests/mocks/engine/mockrawinput.h"
#include "tests/mocks/engine/mockscreendevice.h"
#include "tests/mocks/platform/mockfilesystem.h"
#include "tests/mocks/platform/mockrenderer.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <algorithm>
#include <array>
#include <cstddef>
#include <cstdint>
#include <span>
#include <type_traits>
#include <utility>

namespace nocturne::engine {
namespace {

using ::testing::_;
using ::testing::InSequence;
using ::testing::NiceMock;
using ::testing::Return;
using ::testing::ReturnRef;

constexpr int kWidth = 4;
constexpr int kHeight = 2;

TEST(CSpecial, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CSpecial::getUseDirect3D), bool (CSpecial::*)() const>);
    static_assert(std::is_same_v<decltype(&CSpecial::setUseDirect3D), void (CSpecial::*)(bool)>);
    static_assert(
        std::is_same_v<decltype(&CSpecial::getUseExternalRenderer), bool (CSpecial::*)() const>);
    static_assert(
        std::is_same_v<decltype(&CSpecial::getCurrentGraphicsBoard), int (CSpecial::*)() const>);
    static_assert(
        std::is_same_v<decltype(&CSpecial::setCurrentGraphicsBoard), void (CSpecial::*)(int)>);
    static_assert(std::is_same_v<decltype(&CSpecial::clearScreen), void (CSpecial::*)()>);
    static_assert(std::is_same_v<decltype(&CSpecial::clearZBufferNative), void (CSpecial::*)()>);
    static_assert(std::is_same_v<decltype(&CSpecial::renderMMXPerspectiveScanline32),
                                 void (CSpecial::*)(SSoftwareEdge *, SSoftwareEdge *, int)>);
    static_assert(std::is_same_v<decltype(&CSpecial::renderMMXPerspectiveScanline16),
                                 void (CSpecial::*)(SSoftwareEdge *, SSoftwareEdge *, int)>);
    static_assert(std::is_same_v<decltype(&CSpecial::renderPerspectiveCorrectScanline32),
                                 void (CSpecial::*)(SSoftwareEdge *, SSoftwareEdge *, int)>);
    static_assert(std::is_same_v<decltype(&CSpecial::renderPerspectiveCorrectScanline16),
                                 void (CSpecial::*)(SSoftwareEdge *, SSoftwareEdge *, int)>);
    static_assert(
        std::is_same_v<decltype(&CSpecial::renderAlphaRow32),
                       void (CSpecial::*)(std::span<std::uint32_t>, std::span<const std::uint8_t>,
                                          std::span<const std::uint8_t>, int)>);
    static_assert(
        std::is_same_v<decltype(&CSpecial::renderAlphaRow16),
                       void (CSpecial::*)(std::span<std::uint16_t>, std::span<const std::uint8_t>,
                                          std::span<const std::uint8_t>, int)>);
    static_assert(std::is_same_v<decltype(&CSpecial::renderScanline),
                                 void (CSpecial::*)(SSoftwareEdge *, SSoftwareEdge *, int)>);
    static_assert(std::is_same_v<decltype(&CSpecial::transformAndProjectPoint),
                                 void (CSpecial::*)(platform::SProjectedVertex &,
                                                    const common::CVector3i &) const>);
    static_assert(
        std::is_same_v<decltype(&CSpecial::transformPoint),
                       void (CSpecial::*)(platform::SProjectedVertex *, common::CVector3i *)>);
    static_assert(std::is_same_v<decltype(&CSpecial::loadExternalRenderer), int (CSpecial::*)()>);
    static_assert(std::is_same_v<decltype(&CSpecial::kill), int (CSpecial::*)()>);
    static_assert(std::is_same_v<decltype(&CSpecial::lockFrame), int (CSpecial::*)()>);
    static_assert(std::is_same_v<decltype(&CSpecial::unlockFrame), int (CSpecial::*)()>);
    static_assert(std::is_same_v<decltype(&CSpecial::beginScene), int (CSpecial::*)()>);
    static_assert(std::is_same_v<decltype(&CSpecial::endScene), int (CSpecial::*)()>);
    static_assert(
        std::is_same_v<decltype(&CSpecial::selectTextureFromPalette),
                       int (CSpecial::*)(platform::SMRGLTextureBasic &, std::span<std::uint8_t>)>);
    static_assert(
        std::is_same_v<decltype(&CSpecial::updateTextureFromPalette),
                       int (CSpecial::*)(platform::SMRGLTextureBasic &, std::span<std::uint8_t>)>);
    static_assert(std::is_same_v<decltype(&CSpecial::setResolutionAndColorTable),
                                 int (CSpecial::*)(int, int, int)>);
    static_assert(std::is_same_v<decltype(&CSpecial::restoreVideoMode), int (CSpecial::*)()>);
    static_assert(std::is_same_v<decltype(&CSpecial::drawPolygon),
                                 int (CSpecial::*)(std::span<platform::SRenderVertex>, int)>);
    static_assert(std::is_same_v<decltype(&CSpecial::drawPolygon2),
                                 int (CSpecial::*)(std::span<platform::SRenderVertex *>, int)>);
    static_assert(
        std::is_same_v<decltype(&CSpecial::drawPolyList),
                       int (CSpecial::*)(platform::SRenderVertex *,
                                         std::span<platform::SMRGLPrimitiveQuad *>, int)>);
    static_assert(std::is_same_v<decltype(&CSpecial::drawPolyList2),
                                 int (CSpecial::*)(platform::SRenderVertex *,
                                                   platform::SInputFace **, int, int)>);
    static_assert(std::is_same_v<decltype(&CSpecial::clear), int (CSpecial::*)()>);
    static_assert(
        std::is_same_v<decltype(&CSpecial::setFogColor), int (CSpecial::*)(int, int, int)>);
    static_assert(std::is_same_v<decltype(&CSpecial::sync), int (CSpecial::*)()>);
    static_assert(std::is_same_v<decltype(&CSpecial::clearZBuffer), int (CSpecial::*)()>);
    static_assert(
        std::is_same_v<decltype(&CSpecial::presentToExternalRenderer), void (CSpecial::*)()>);
    static_assert(std::is_same_v<decltype(&CSpecial::masterZBuffer), int (CSpecial::*)(int)>);
    static_assert(std::is_same_v<decltype(&CSpecial::restoreZBuffer),
                                 int (CSpecial::*)(int, int, int, int, int)>);
    static_assert(std::is_same_v<decltype(&CSpecial::getVideoMemory),
                                 int (CSpecial::*)(int *, int *, int *)>);
    static_assert(std::is_same_v<decltype(&CSpecial::selectCard), int (CSpecial::*)(int)>);
    static_assert(std::is_same_v<decltype(&CSpecial::buildCardList),
                                 int (CSpecial::*)(int *, char **, char **, int *, int *)>);
    static_assert(std::is_same_v<decltype(&CSpecial::lockHoldBuffer), int (CSpecial::*)()>);
    static_assert(std::is_same_v<decltype(&CSpecial::unlockHoldBuffer), int (CSpecial::*)()>);
}

// A 4x2 screen whose rows are two separate buffers, at 32 bits per pixel unless a test says.
class CSpecialTest : public ::testing::Test {
protected:
    CSpecialTest() {
        rows_[0] = first_row_.data();
        rows_[1] = second_row_.data();
        ON_CALL(screen_, getWindowWidth()).WillByDefault(Return(kWidth));
        ON_CALL(screen_, getWindowHeight()).WillByDefault(Return(kHeight));
        ON_CALL(screen_, getBitsPerPixel()).WillByDefault([this] { return bits_per_pixel_; });
        ON_CALL(screen_, setBitsPerPixel(_)).WillByDefault([this](int bits) {
            bits_per_pixel_ = bits;
        });
        ON_CALL(screen_, getScreenRows()).WillByDefault(Return(std::span<void *>(rows_)));
        ON_CALL(screen_, getColorTable16())
            .WillByDefault(Return(std::span<std::uint16_t, 256>(color_table16_)));
        ON_CALL(screen_, getColorChannels()).WillByDefault(ReturnRef(channels_));
        ON_CALL(renderer_, init(_)).WillByDefault(Return(1));
        ON_CALL(renderer_, setVideoMode2(_, _, _, _)).WillByDefault(Return(1));
        ON_CALL(renderer_, lockFrame()).WillByDefault(Return(1));
        ON_CALL(renderer_, unlockFrame()).WillByDefault(Return(1));
    }

    // The renderer running at 32 bits; the setup's lock leaves the frame marked as drawn.
    void startRenderer() {
        special_.setUseDirect3D(true);
        ASSERT_EQ(special_.setResolutionAndColorTable(kWidth, kHeight, 32), 1);
    }

    int bits_per_pixel_ = 32;
    std::array<std::byte, 32> first_row_{};
    std::array<std::byte, 16> second_row_{};
    std::array<void *, 3> rows_{};
    std::array<std::uint16_t, 256> color_table16_{};
    SColorChannels channels_;
    NiceMock<platform::MockFileSystem> file_system_;
    CDosIo dosio_{file_system_};
    NiceMock<MockScreenDevice> screen_;
    NiceMock<MockRawInput> raw_input_;
    C2d two_d_{dosio_, screen_, raw_input_};
    NiceMock<platform::MockRenderer> renderer_;
    CLight light_;
    CMatrix matrix_{two_d_, light_};
    C3d three_d_{matrix_};
    SCurrentTexture current_texture_;
    CSpecial special_{renderer_, screen_, two_d_, matrix_, three_d_, current_texture_};
};

TEST_F(CSpecialTest, StartsWithTheRendererOff) {
    EXPECT_FALSE(special_.getUseDirect3D());
    EXPECT_FALSE(special_.getUseExternalRenderer());
}

TEST_F(CSpecialTest, KeepsTheGraphicsBoardTheOptionsPicked) {
    EXPECT_EQ(special_.getCurrentGraphicsBoard(), 0);
    special_.setCurrentGraphicsBoard(2);
    EXPECT_EQ(special_.getCurrentGraphicsBoard(), 2);
}

// The original cleared in 32-byte strides, past a 4-byte row's end.
TEST_F(CSpecialTest, ClearScreenZeroesEachRowAndNothingPastIt) {
    bits_per_pixel_ = 8;
    first_row_.fill(std::byte{0xff});
    second_row_.fill(std::byte{0xff});
    special_.clearScreen();
    for (std::size_t i = 0; i < first_row_.size(); ++i) {
        EXPECT_EQ(first_row_[i], i < kWidth ? std::byte{0} : std::byte{0xff}) << i;
    }
    for (std::size_t i = 0; i < second_row_.size(); ++i) {
        EXPECT_EQ(second_row_[i], i < kWidth ? std::byte{0} : std::byte{0xff}) << i;
    }
}

TEST_F(CSpecialTest, ClearScreenOfAnEmptyModeTouchesNothing) {
    ON_CALL(screen_, getWindowHeight()).WillByDefault(Return(0));
    first_row_.fill(std::byte{0xff});
    special_.clearScreen();
    EXPECT_EQ(first_row_[0], std::byte{0xff});
}

TEST_F(CSpecialTest, WithTheRendererOnClearScreenClearsThroughIt) {
    startRenderer();
    first_row_.fill(std::byte{0xff});
    EXPECT_CALL(renderer_, clear()).WillOnce(Return(1));
    special_.clearScreen();
    EXPECT_EQ(first_row_[0], std::byte{0xff});
}

std::array<platform::SRenderVertex *, 3>
getCorners(std::array<platform::SRenderVertex, 3> &vertices) {
    std::array<platform::SRenderVertex *, 3> corners{};
    std::ranges::transform(vertices, corners.begin(),
                           [](platform::SRenderVertex &vertex) { return &vertex; });
    return corners;
}

TEST_F(CSpecialTest, WithoutTheRendererNoPolygonIsDrawn) {
    std::array<platform::SRenderVertex, 3> vertices{};
    std::array<platform::SRenderVertex *, 3> corners = getCorners(vertices);
    std::array<platform::SMRGLPrimitiveQuad *, 1> polygons{};
    EXPECT_CALL(renderer_, drawPolygon(_, _, _)).Times(0);
    EXPECT_CALL(renderer_, drawPolygon2(_, _, _)).Times(0);
    EXPECT_CALL(renderer_, drawPolyList(_, _, _, _)).Times(0);
    EXPECT_EQ(special_.drawPolygon(vertices, 1), 0);
    EXPECT_EQ(special_.drawPolygon2(corners, 1), 0);
    EXPECT_EQ(special_.drawPolyList(vertices.data(), polygons, 1), 0);
}

TEST_F(CSpecialTest, WithTheRendererPolygonsGoThroughIt) {
    startRenderer();
    std::array<platform::SRenderVertex, 3> vertices{};
    std::array<platform::SRenderVertex *, 3> corners = getCorners(vertices);
    std::array<platform::SMRGLPrimitiveQuad *, 2> polygons{};
    EXPECT_CALL(renderer_, drawPolygon(vertices.data(), 3, 5)).WillOnce(Return(7));
    EXPECT_CALL(renderer_, drawPolygon2(corners.data(), 3, 6)).WillOnce(Return(8));
    EXPECT_CALL(renderer_, drawPolyList(vertices.data(), polygons.data(), 2, 9))
        .WillOnce(Return(10));
    EXPECT_EQ(special_.drawPolygon(vertices, 5), 7);
    EXPECT_EQ(special_.drawPolygon2(corners, 6), 8);
    EXPECT_EQ(special_.drawPolyList(vertices.data(), polygons, 9), 10);
}

TEST_F(CSpecialTest, WithoutDirect3DTheRendererIsNotStarted) {
    EXPECT_CALL(renderer_, init(_)).Times(0);
    EXPECT_EQ(special_.loadExternalRenderer(), 0);
}

TEST_F(CSpecialTest, LoadingSharesTheColourChannelsAndSelectsTheCard) {
    special_.setUseDirect3D(true);
    platform::CExternalRendererBridge shared;
    EXPECT_CALL(renderer_, init(_)).WillOnce([&shared](platform::CExternalRendererBridge *bridge) {
        shared = *bridge;
        return 1;
    });
    EXPECT_CALL(renderer_, selectCard(0)).WillOnce(Return(1));
    EXPECT_EQ(special_.loadExternalRenderer(), 1);
    const std::array<std::pair<int *, int *>, 9> channels = {{
        {shared.red_bit_position, &channels_.red.bit_position},
        {shared.red_scale_factor, &channels_.red.scale_factor},
        {shared.red_dither_shift, &channels_.red.dither_shift},
        {shared.green_bit_position, &channels_.green.bit_position},
        {shared.green_scale_factor, &channels_.green.scale_factor},
        {shared.green_dither_shift, &channels_.green.dither_shift},
        {shared.blue_bit_position, &channels_.blue.bit_position},
        {shared.blue_scale_factor, &channels_.blue.scale_factor},
        {shared.blue_dither_shift, &channels_.blue.dither_shift},
    }};
    for (const auto &[bridged, owned] : channels) {
        EXPECT_EQ(bridged, owned);
    }
    EXPECT_EQ(shared.texture_dimension, &current_texture_.dimension);
    EXPECT_EQ(shared.blend_mode, nullptr);
    EXPECT_CALL(renderer_, selectCard(2)).WillOnce(Return(1));
    EXPECT_EQ(special_.selectCard(2), 1);
}

// Processor type 0: the renderer's depth is the reciprocal the software renderer writes.
TEST_F(CSpecialTest, LoadingSharesProcessorTypeZero) {
    special_.setUseDirect3D(true);
    const int *processor_type = nullptr;
    EXPECT_CALL(renderer_, init(_))
        .WillOnce([&processor_type](platform::CExternalRendererBridge *bridge) {
            processor_type = bridge->processor_type;
            return 1;
        });
    ASSERT_EQ(special_.loadExternalRenderer(), 1);
    ASSERT_NE(processor_type, nullptr);
    EXPECT_EQ(*processor_type, 0);
}

TEST_F(CSpecialTest, WithTheRendererOffTexturesAreNotHandedOver) {
    platform::SMRGLTextureBasic texture;
    EXPECT_CALL(renderer_, selectTexture).Times(0);
    EXPECT_CALL(renderer_, updateTexture).Times(0);
    EXPECT_EQ(special_.selectTextureFromPalette(texture, {}), 0);
    EXPECT_EQ(special_.updateTextureFromPalette(texture, {}), 0);
}

TEST_F(CSpecialTest, TheRendererIsHandedTheCurrentTexture) {
    startRenderer();
    std::array<std::uint8_t, 4> texels{};
    std::array<std::uint8_t, 4> opacity{};
    std::array<std::uint8_t, 768> palette{};
    current_texture_.data = texels;
    current_texture_.dimension = 2;
    platform::SMRGLTextureBasic texture;
    // Without opacity the renderer is given none.
    EXPECT_CALL(renderer_, selectTexture(&texture, 2, texels.data(), palette.data(), nullptr))
        .WillOnce(Return(3));
    EXPECT_EQ(special_.selectTextureFromPalette(texture, palette), 3);
    current_texture_.opacity = opacity;
    EXPECT_CALL(renderer_,
                updateTexture(&texture, 2, texels.data(), palette.data(), opacity.data()))
        .WillOnce(Return(4));
    EXPECT_EQ(special_.updateTextureFromPalette(texture, palette), 4);
}

// The original left the renderer marked loaded after a failed init.
TEST_F(CSpecialTest, AFailedInitTurnsDirect3DOffAndLeavesNothingLoaded) {
    special_.setUseDirect3D(true);
    EXPECT_CALL(renderer_, init(_)).WillOnce(Return(0));
    EXPECT_CALL(renderer_, selectCard(_)).Times(0);
    EXPECT_EQ(special_.loadExternalRenderer(), 0);
    EXPECT_FALSE(special_.getUseDirect3D());
    EXPECT_EQ(special_.selectCard(0), 0);
}

TEST_F(CSpecialTest, SettingTheModeLoadsTheRendererAndHandsItTheScreen) {
    special_.setUseDirect3D(true);
    {
        const InSequence order;
        EXPECT_CALL(renderer_, init(_)).WillOnce(Return(1));
        EXPECT_CALL(renderer_, setVideoMode2(kWidth, kHeight, 32, rows_.data()))
            .WillOnce(Return(1));
        EXPECT_CALL(renderer_,
                    setColorTable16(two_d_.getSourcePaletteData().data(), color_table16_.data()))
            .WillOnce(Return(1));
        EXPECT_CALL(screen_, convertPaletteToDirectColor());
        EXPECT_CALL(renderer_, setFogColor(0, 0, 0)).WillOnce(Return(1));
        EXPECT_CALL(renderer_, lockFrame()).WillOnce(Return(1));
        EXPECT_CALL(renderer_, unlockFrame()).WillOnce(Return(1));
    }
    EXPECT_EQ(special_.setResolutionAndColorTable(kWidth, kHeight, 32), 1);
    EXPECT_TRUE(special_.getUseExternalRenderer());
    EXPECT_EQ(bits_per_pixel_, 32);
}

TEST_F(CSpecialTest, AnEightBitModeDrivesTheRendererAtSixteen) {
    special_.setUseDirect3D(true);
    EXPECT_CALL(renderer_, setVideoMode2(kWidth, kHeight, 16, _)).WillOnce(Return(1));
    bits_per_pixel_ = 8;
    ASSERT_EQ(special_.setResolutionAndColorTable(kWidth, kHeight, 8), 1);
    EXPECT_CALL(renderer_, lockFrame()).WillOnce(Return(1));
    ASSERT_EQ(special_.lockFrame(), 1);
    EXPECT_EQ(bits_per_pixel_, 16);
    special_.unlockFrame();
    EXPECT_EQ(bits_per_pixel_, 8);
}

TEST_F(CSpecialTest, SettingTheModeFailsWhenTheRendererWontLoad) {
    EXPECT_CALL(renderer_, setVideoMode2(_, _, _, _)).Times(0);
    EXPECT_EQ(special_.setResolutionAndColorTable(kWidth, kHeight, 32), 0);
    EXPECT_FALSE(special_.getUseExternalRenderer());
}

TEST_F(CSpecialTest, ARefusedModeTurnsTheRendererOff) {
    startRenderer();
    EXPECT_CALL(renderer_, init(_)).Times(0);
    EXPECT_CALL(renderer_, setVideoMode2(_, _, _, _)).WillOnce(Return(0));
    EXPECT_EQ(special_.setResolutionAndColorTable(kWidth, kHeight, 32), 0);
    EXPECT_FALSE(special_.getUseExternalRenderer());
}

TEST_F(CSpecialTest, AModeTallerThanTheRowsIsRefusedBeforeTheRendererSeesIt) {
    special_.setUseDirect3D(true);
    EXPECT_CALL(renderer_, setVideoMode2(_, _, _, _)).Times(0);
    EXPECT_EQ(special_.setResolutionAndColorTable(kWidth, 4, 32), 0);
    EXPECT_EQ(special_.setResolutionAndColorTable(kWidth, -1, 32), 0);
}

TEST_F(CSpecialTest, WithTheRendererOffTheFrameCallsDoNothing) {
    EXPECT_CALL(renderer_, lockFrame()).Times(0);
    EXPECT_CALL(renderer_, unlockFrame()).Times(0);
    EXPECT_CALL(renderer_, clear()).Times(0);
    EXPECT_CALL(renderer_, toggle()).Times(0);
    EXPECT_EQ(special_.lockFrame(), 0);
    EXPECT_EQ(special_.unlockFrame(), 0);
    EXPECT_EQ(special_.clear(), 0);
    special_.presentToExternalRenderer();
}

TEST_F(CSpecialTest, AFailedLockLeavesTheDepthAlone) {
    startRenderer();
    bits_per_pixel_ = 8;
    EXPECT_CALL(renderer_, lockFrame()).WillOnce(Return(0));
    EXPECT_EQ(special_.lockFrame(), 0);
    EXPECT_EQ(bits_per_pixel_, 8);
}

TEST_F(CSpecialTest, ClearAndUnlockReturnTheRenderersResult) {
    startRenderer();
    EXPECT_CALL(renderer_, clear()).WillOnce(Return(7));
    EXPECT_EQ(special_.clear(), 7);
    EXPECT_CALL(renderer_, unlockFrame()).WillOnce(Return(5));
    EXPECT_EQ(special_.unlockFrame(), 5);
}

// The mode's setup locked the frame, so the first present has nothing to copy.
TEST_F(CSpecialTest, AFrameDrawnWhileLockedIsPresentedWithoutACopy) {
    startRenderer();
    EXPECT_CALL(screen_, openScreenDevice()).Times(0);
    EXPECT_CALL(renderer_, toggle()).WillOnce(Return(1));
    special_.presentToExternalRenderer();
}

TEST_F(CSpecialTest, SoftwareDrawingIsCopiedIntoTheRenderersRowsBeforePresenting) {
    startRenderer();
    special_.presentToExternalRenderer();
    for (std::size_t i = 0; i < 16; ++i) {
        first_row_[16 + i] = std::byte{7};
    }
    {
        const InSequence order;
        EXPECT_CALL(screen_, openScreenDevice());
        EXPECT_CALL(renderer_, lockFrame()).WillOnce(Return(1));
        EXPECT_CALL(renderer_, unlockFrame()).WillOnce(Return(1));
        EXPECT_CALL(screen_, closeScreenDevice());
        EXPECT_CALL(renderer_, toggle()).WillOnce(Return(1));
    }
    special_.presentToExternalRenderer();
    for (const std::byte pixel : second_row_) {
        EXPECT_EQ(pixel, std::byte{7});
    }
}

} // namespace
} // namespace nocturne::engine
