#include "common/math/vector3i.h"
#include "core/color3i.h"
#include "core/dfont/dfont.h"
#include "core/level/levelloader.h"
#include "engine/2d/2d.h"
#include "engine/font/bitfont.h"
#include "engine/font/font.h"
#include "engine/keys/keys.h"
#include "platform/mrglprimitivequad.h"
#include "platform/rendervertex.h"
#include "shape/edittool/editortools.h"
#include "support/newmsg/newmsg.h"
#include "tests/mocks/core/moonfixture.h"
#include "tests/mocks/engine/fontsheet.h"
#include "tests/mocks/engine/mockrawinput.h"
#include "tests/mocks/platform/mockclipboard.h"
#include "tests/mocks/platform/mockclock.h"
#include "tests/mocks/platform/mockosfontfactory.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <algorithm>
#include <array>
#include <cstddef>
#include <cstdint>
#include <span>
#include <string>
#include <string_view>
#include <type_traits>
#include <vector>

namespace nocturne::core {
namespace {

using engine::SClipRect;
using ::testing::_;
using ::testing::NiceMock;
using ::testing::Return;

TEST(CLevelLoader, PublicInterface) {
    static_assert(std::is_constructible_v<CLevelLoader, const SLevelLoaderOwners &>);
    static_assert(std::is_base_of_v<ILoadingScreen, CLevelLoader>);
    static_assert(std::is_same_v<decltype(&CLevelLoader::reset), void (CLevelLoader::*)()>);
    static_assert(
        std::is_same_v<decltype(&CLevelLoader::show), void (CLevelLoader::*)(int, bool, int)>);
    static_assert(std::is_same_v<decltype(&CLevelLoader::update),
                                 void (CLevelLoader::*)(std::string_view, bool)>);
    static_assert(std::is_same_v<decltype(&CLevelLoader::cleanup), void (CLevelLoader::*)()>);
}

constexpr std::uint32_t kBackground = 0x555555;
constexpr std::uint32_t kText = 0xabcdef;
// Each picture's pixels are palette entry 0x40, grey 0x40.
constexpr std::uint32_t kPicture = 0x404040;
constexpr SClipRect kFullScreen{.left = 0, .top = 0, .right = 639, .bottom = 479};
// The status box on a 640x480 screen: from (31, 447) to (609, 473).
constexpr int kBoxLeft = 31;
constexpr int kBoxTop = 447;
constexpr int kBoxRight = 609;
constexpr int kBoxBottom = 473;
// The field of view in each case, as setProjectionScale bakes it from 18 / the scale.
constexpr int kFullScreenProjection = 21065;
constexpr int kWindowProjection = 14043;
constexpr int kLightReach = 37000;

// What a draw saw: the clip and the projection then, its flags and, for the glow, its corners.
struct SDraw {
    SClipRect clip;
    int projection = 0;
    int flags = 0;
    std::vector<platform::SRenderVertex> corners;
};

// The loading screen over the moon fixture, drawing through the hardware renderer, with the
// game's fonts, the theme font's glyphs blocks, and four pictures on disk.
class CLevelLoaderTest : public CMoonFixture {
protected:
    CLevelLoaderTest() {
        givenFile("art\\nocfont.raw", engine::makeSheetOfSize(0x136, 0x1ae, '\0'));
        givenFile("art\\nocsmall.raw", engine::makeSheetOfSize(0xf8, 0x158, '\0'));
        givenFile("art\\menufont.raw", engine::makeBlockFontSheet(0xfa, 0x23f, 0x99, 1, 2));
        givenFile("art\\menufont.act", solidGlyphs());
        givenFile("art\\fnte_pfd.RAW", engine::makeSheetOfSize(0x94, 0xec, '\0'));
        givenFile("art\\fnte_f.RAW", engine::makeSheetOfSize(0x94, 0xec, '\xff'));
        givenFile("art\\micro.raw", engine::makeSheetOfSize(0x94, 0xec, '\0'));
        givenFile("art\\MOONGLOW.RAW", std::string(std::size_t{32} * 32, '\x01'));
        for (const char *name : {"load1", "load2", "load3", "load4"}) {
            givenImage(name, std::string(std::size_t{kWidth} * kHeight, '\x40'));
        }
        fonts_.initFonts();
        color_table32_[0xf8] = kText;
        ON_CALL(screen_, getColorTable32())
            .WillByDefault(Return(std::span<const std::uint32_t, 256>(color_table32_)));
        ON_CALL(renderer_, drawPolygon2(_, _, _))
            .WillByDefault([this](platform::SRenderVertex **corners, int count, int flags) {
                SDraw draw = seen(flags);
                for (int i = 0; i < count; ++i) {
                    draw.corners.push_back(*corners[i]);
                }
                glows_.push_back(draw);
                return 1;
            });
        ON_CALL(renderer_, drawPolyList(_, _, _, _))
            .WillByDefault([this](platform::SRenderVertex *,
                                  const platform::SMRGLPrimitiveQuad *const *, int, int flags) {
                moons_.push_back(seen(flags));
                return 1;
            });
        special_.setUseDirect3D(true);
        EXPECT_EQ(special_.setResolutionAndColorTable(kWidth, kHeight, 32), 1);
        three_d_.setRenderAlpha(0xffff);
        std::ranges::fill(pixels_, kBackground);
    }

    // The block glyphs are '#', which this palette makes full cover of the text colour.
    static std::string solidGlyphs() {
        std::vector<std::uint8_t> levels(std::size_t{'#'} * 3, 0);
        levels.insert(levels.end(), {0xff, 0xff, 0xff});
        return engine::makePalette(levels);
    }

    [[nodiscard]] SDraw seen(int flags) const {
        return {.clip = two_d_.getClipRect(),
                .projection = matrix_.getProjectionScale(),
                .flags = flags,
                .corners = {}};
    }

    // The columns of row y holding text, between the box's sides.
    [[nodiscard]] std::vector<int> textColumns(int y) const {
        std::vector<int> columns;
        for (int x = kBoxLeft; x <= kBoxRight; ++x) {
            if (pixel(x, y) != 0) {
                columns.push_back(x);
            }
        }
        return columns;
    }

    std::array<std::uint32_t, 256> color_table32_{};
    std::vector<SDraw> glows_;
    std::vector<SDraw> moons_;
    NiceMock<engine::MockRawInput> raw_input_;
    engine::CKeys keys_{raw_input_, screen_};
    NiceMock<platform::MockClock> platform_clock_;
    NiceMock<platform::MockClipboard> clipboard_;
    shape::CEditorTools editor_tools_{{.two_d = two_d_,
                                       .matrix = matrix_,
                                       .three_d = three_d_,
                                       .screen = screen_,
                                       .special = special_,
                                       .keys = keys_,
                                       .raw_input = raw_input_,
                                       .game_clock = clock_,
                                       .clock = platform_clock_,
                                       .clipboard = clipboard_}};
    engine::CFontColors colors_;
    NiceMock<platform::MockOsFontFactory> os_fonts_;
    support::CNewMsg messages_{dosio_};
    CDFont fonts_{dosio_, screen_, two_d_, three_d_, colors_, os_fonts_, messages_, editor_tools_};
    CLevelLoader loader_{{.dosio = dosio_,
                          .screen = screen_,
                          .special = special_,
                          .two_d = two_d_,
                          .matrix = matrix_,
                          .renderer = demon_renderer_,
                          .set = set_,
                          .fonts = fonts_,
                          .crt_random = crt_random_}};
};

TEST_F(CLevelLoaderTest, NothingIsDrawnBeforeItIsShown) {
    EXPECT_CALL(screen_, swapBuffers()).Times(0);
    loader_.update("X", true);
    EXPECT_TRUE(moons_.empty());
    EXPECT_EQ(pixel(0, 0), kBackground);
}

TEST_F(CLevelLoaderTest, WithoutAWindowOrPictureTheMoonHasTheClearedScreen) {
    EXPECT_CALL(renderer_, clear());
    loader_.show(4, false, 99);
    EXPECT_CALL(screen_, swapBuffers());
    loader_.update("", false);
    ASSERT_EQ(moons_.size(), 1U);
    EXPECT_EQ(moons_[0].clip, kFullScreen);
    EXPECT_EQ(moons_[0].projection, kFullScreenProjection);
    EXPECT_EQ(moons_[0].flags, 0x205);
    EXPECT_EQ(set_.getFlatColor(), (CColor3i{.r = 0xff00, .g = 0xff00, .b = 0xff00}));
    EXPECT_EQ(set_.getAmbientBaseQuick(), 0x280);
}

TEST_F(CLevelLoaderTest, ClearingBlacksTheScreenFirst) {
    loader_.show(4, false, 99);
    std::ranges::fill(pixels_, kBackground);
    loader_.update("", true);
    EXPECT_EQ(pixel(0, 0), 0U);
    EXPECT_EQ(pixel(639, 479), 0U);
}

// The light starts behind the moon, from the camera's side, and turns half way round it to the
// far side as the frames go by, then stays there.
TEST_F(CLevelLoaderTest, TheLightTurnsHalfWayRoundOverTheFrames) {
    loader_.show(2, false, 99);
    loader_.update("", false);
    EXPECT_EQ(set_.getLightDirection(),
              (common::CVector3i{.x = 0, .y = -kLightReach, .z = -kLightReach}));
    loader_.update("", false);
    EXPECT_EQ(set_.getLightDirection(), (common::CVector3i{.x = kLightReach, .y = -kLightReach}));
    loader_.update("", false);
    loader_.update("", false);
    EXPECT_EQ(set_.getLightDirection(),
              (common::CVector3i{.x = 0, .y = -kLightReach, .z = kLightReach}));
}

// A square of the whole glow texture in the moon's colour, its corners going round from the
// top right.
TEST_F(CLevelLoaderTest, TheGlowIsATexturedSquareOverTheMoon) {
    loader_.show(2, false, 99);
    loader_.update("", false);
    ASSERT_EQ(glows_.size(), 1U);
    EXPECT_EQ(glows_[0].flags, 0x327);
    const std::vector<platform::SRenderVertex> &corners = glows_[0].corners;
    ASSERT_EQ(corners.size(), 4U);
    std::vector<std::array<int, 3>> texels(corners.size());
    std::ranges::transform(corners, texels.begin(), [](const platform::SRenderVertex &corner) {
        return std::array<int, 3>{corner.u, corner.v, corner.g};
    });
    EXPECT_EQ(texels, (std::vector<std::array<int, 3>>{{0x1000000, 0, 0xff00},
                                                       {0, 0, 0xff00},
                                                       {0, 0x1000000, 0xff00},
                                                       {0x1000000, 0x1000000, 0xff00}}));
    EXPECT_LT(corners[1].projected_vertex.screen_x, corners[0].projected_vertex.screen_x);
    EXPECT_LT(corners[0].projected_vertex.screen_y, corners[3].projected_vertex.screen_y);
}

// The second corner fades in with the frames, and stays once they run out; the rest stay clear.
TEST_F(CLevelLoaderTest, TheGlowFadesInByOneCorner) {
    loader_.show(2, false, 99);
    for (int i = 0; i < 4; ++i) {
        loader_.update("", false);
    }
    std::vector<std::array<int, 4>> alphas(glows_.size());
    std::ranges::transform(glows_, alphas.begin(), [](const SDraw &glow) {
        return std::array<int, 4>{glow.corners[0].a, glow.corners[1].a, glow.corners[2].a,
                                  glow.corners[3].a};
    });
    EXPECT_EQ(alphas, (std::vector<std::array<int, 4>>{
                          {0, 0, 0, 0}, {0, 0x7fff, 0, 0}, {0, 0xffff, 0, 0}, {0, 0xffff, 0, 0}}));
}

TEST_F(CLevelLoaderTest, AWindowPutsTheMoonInTheTopRightCornerWithNoStatus) {
    EXPECT_CALL(renderer_, clear()).Times(0);
    loader_.show(4, true, CLevelLoader::kRandomImage);
    EXPECT_EQ(pixel(0, 0), kBackground);
    loader_.update("X", false);
    ASSERT_EQ(moons_.size(), 1U);
    EXPECT_EQ(moons_[0].clip, (SClipRect{.left = 447, .top = 0, .right = 639, .bottom = 192}));
    EXPECT_EQ(moons_[0].projection, kWindowProjection);
    EXPECT_EQ(glows_[0].clip, moons_[0].clip);
    EXPECT_EQ(two_d_.getClipRect(), kFullScreen);
    EXPECT_EQ(pixel(kBoxLeft, kBoxTop), kBackground);
}

// The CRT's first draw from seed 1 is 16838, which picks the third picture.
TEST_F(CLevelLoaderTest, ARandomPictureIsOneOfTheFirstThreeWithTheMoonInItsWindow) {
    loader_.show(4, false, CLevelLoader::kRandomImage);
    EXPECT_EQ(pixel(0, 0), kPicture);
    loader_.update("", false);
    ASSERT_EQ(moons_.size(), 1U);
    EXPECT_EQ(moons_[0].clip, (SClipRect{.left = 159, .top = 1, .right = 249, .bottom = 91}));
    EXPECT_EQ(moons_[0].projection, kWindowProjection);
    EXPECT_EQ(set_.getFlatColor(), (CColor3i{.r = 0x9e00, .g = 0xe100, .b = 0xff00}));
}

TEST_F(CLevelLoaderTest, EachPictureHasItsOwnWindowAndColour) {
    struct SExpected {
        SClipRect clip;
        CColor3i color;
    };
    const std::array<SExpected, 4> expected = {{
        {.clip = {.left = 120, .top = 130, .right = 210, .bottom = 220},
         .color = {.r = 0x8200, .g = 0xc800, .b = 0xf400}},
        {.clip = {.left = 484, .top = 66, .right = 574, .bottom = 156},
         .color = {.r = 0x8200, .g = 0xbd00, .b = 0xff00}},
        {.clip = {.left = 159, .top = 1, .right = 249, .bottom = 91},
         .color = {.r = 0x9e00, .g = 0xe100, .b = 0xff00}},
        {.clip = {.left = 379, .top = 68, .right = 469, .bottom = 158},
         .color = {.r = 0x6b00, .g = 0x9a00, .b = 0xff00}},
    }};
    for (int variant = 0; variant < 4; ++variant) {
        std::ranges::fill(pixels_, kBackground);
        moons_.clear();
        loader_.show(4, true, variant);
        EXPECT_EQ(pixel(0, 0), kPicture);
        loader_.update("", false);
        ASSERT_EQ(moons_.size(), 1U);
        EXPECT_EQ(moons_[0].clip, expected[static_cast<std::size_t>(variant)].clip);
        EXPECT_EQ(set_.getFlatColor(), expected[static_cast<std::size_t>(variant)].color);
    }
}

// The text is centred in the box, its middle at x 320 and the box's middle row.
TEST_F(CLevelLoaderTest, TheStatusIsCentredInABlackBoxNearTheBottom) {
    loader_.show(4, false, 99);
    std::ranges::fill(pixels_, kBackground);
    loader_.update("XX", false);
    EXPECT_EQ(pixel(kBoxLeft - 1, kBoxTop - 1), kBackground);
    EXPECT_EQ(pixel(kBoxRight + 1, kBoxBottom + 1), kBackground);
    EXPECT_EQ(pixel(kBoxLeft, kBoxTop), 0U);
    EXPECT_EQ(pixel(kBoxRight, kBoxBottom), 0U);
    const engine::CBitFont &font = *fonts_.getThemeFont();
    const int top = 460 - (font.getMaxCharHeight() / 2) + font.getCharYOffset('X');
    const std::vector<int> columns = textColumns(top);
    ASSERT_FALSE(columns.empty());
    const int width = font.getTextWidth("XX");
    EXPECT_EQ(columns.front(), 320 - (width / 2));
    EXPECT_EQ(columns.back(), columns.front() + width - 1);
}

TEST_F(CLevelLoaderTest, WithoutTextTheBoxIsEmpty) {
    loader_.show(4, false, 99);
    loader_.update("", false);
    for (int y = kBoxTop; y <= kBoxBottom; ++y) {
        EXPECT_TRUE(textColumns(y).empty());
    }
}

} // namespace
} // namespace nocturne::core
