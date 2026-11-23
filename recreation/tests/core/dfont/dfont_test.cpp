#include "common/error/fatalerror.h"
#include "core/dfont/dfont.h"
#include "engine/2d/2d.h"
#include "engine/3d/3d.h"
#include "engine/font/bitfont.h"
#include "engine/font/font.h"
#include "engine/keys/keys.h"
#include "engine/light/light.h"
#include "engine/matrix/matrix.h"
#include "engine/package/gamecontent.h"
#include "engine/special/special.h"
#include "engine/texture/currenttexture.h"
#include "shape/edittool/editortools.h"
#include "support/newmsg/newmsg.h"
#include "tests/mocks/engine/fontsheet.h"
#include "tests/mocks/engine/memoryscreen.h"
#include "tests/mocks/engine/mockgameclock.h"
#include "tests/mocks/engine/mockrawinput.h"
#include "tests/mocks/engine/podfixture.h"
#include "tests/mocks/engine/shippedgamecontent.h"
#include "tests/mocks/platform/mockclipboard.h"
#include "tests/mocks/platform/mockclock.h"
#include "tests/mocks/platform/mockosfont.h"
#include "tests/mocks/platform/mockosfontfactory.h"
#include "tests/mocks/platform/mockrenderer.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <algorithm>
#include <memory>
#include <string>
#include <string_view>
#include <type_traits>
#include <vector>

namespace nocturne::core {
namespace {

using ::testing::NiceMock;
using ::testing::Return;

TEST(CDFont, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CDFont::initFonts), void (CDFont::*)()>);
    static_assert(std::is_same_v<decltype(&CDFont::freeFonts), void (CDFont::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDFont::getOsFontChoice), EOsFontChoice (CDFont::*)() const>);
    static_assert(
        std::is_same_v<decltype(&CDFont::setOsFontChoice), void (CDFont::*)(EOsFontChoice)>);
    static_assert(std::is_same_v<decltype(&CDFont::getUseOSFonts), bool (CDFont::*)() const>);
    static_assert(
        std::is_same_v<decltype(&CDFont::getMenuFontChoice), EMenuFontChoice (CDFont::*)() const>);
    static_assert(
        std::is_same_v<decltype(&CDFont::setMenuFontChoice), void (CDFont::*)(EMenuFontChoice)>);
    static_assert(
        std::is_same_v<decltype(&CDFont::getMenuFont), engine::CBitFont *(CDFont::*)() const>);
    static_assert(std::is_same_v<decltype(&CDFont::findFont),
                                 engine::CBitFont &(CDFont::*)(std::string_view) const>);
    static_assert(static_cast<int>(EMenuFontChoice::Large) == 0);
    static_assert(static_cast<int>(EMenuFontChoice::Small) == 1);
}

// A font with its glyph, the width of a space and the offset of the printable characters.
void expectFont(const engine::CBitFont *font, int space_width, int offset) {
    ASSERT_NE(font, nullptr);
    EXPECT_EQ(font->getCharWidth(' '), space_width);
    EXPECT_EQ(font->getCharYOffset('A'), offset);
    EXPECT_EQ(font->getCharWidth('!'), 2);
}

// The game's fonts over a screen in memory, with every sheet on disk.
class CDFontTest : public engine::CPodFixture {
protected:
    CDFontTest() {
        givenFile("art\\nocfont.raw", engine::makeSheetOfSize(0x136, 0x1ae, '\0'));
        givenFile("art\\nocsmall.raw", engine::makeSheetOfSize(0xf8, 0x158, '\0'));
        givenFile("art\\menufont.raw", engine::makeSheetOfSize(0xfa, 0x23f, '\0'));
        givenFile("art\\fnte_pfd.RAW", engine::makeSheetOfSize(0x94, 0xec, '\0'));
        givenFile("art\\fnte_f.RAW", engine::makeSheetOfSize(0x94, 0xec, '\xff'));
        givenFile("art\\micro.raw", engine::makeSheetOfSize(0x94, 0xec, '\0'));
        two_d_.setupViewportAndClipping(0, 0, 63, 47);
    }

    void givenMessageFileAskingForOsFonts() {
        givenFile("msglist.txt", "; version\r\n0\r\n; use OS fonts\r\n1\r\n; font\r\n"
                                 "\"Arial\"\r\n");
        messages_.readMessageFile("msglist.txt");
    }

    // The four OS fonts, by height, each measuring any text as 30 by 9.
    void expectOsFonts() {
        for (const int height : {14, 18, 12, 10}) {
            EXPECT_CALL(os_fonts_, createOsFont(std::string_view("Arial"), height))
                .WillOnce([](std::string_view, int) {
                    auto font = std::make_unique<NiceMock<platform::MockOsFont>>();
                    ON_CALL(*font, measureText)
                        .WillByDefault(Return(common::SExtent{.width = 30, .height = 9}));
                    return font;
                });
        }
    }

    engine::CMemoryScreen screen_{64, 48, 32};
    NiceMock<engine::MockRawInput> raw_input_;
    engine::C2d two_d_{dosio_, screen_, raw_input_};
    NiceMock<platform::MockRenderer> renderer_;
    engine::CLight light_;
    engine::CMatrix matrix_{two_d_, light_};
    engine::C3d three_d_{matrix_};
    engine::SCurrentTexture current_texture_;
    engine::CSpecial special_{renderer_, screen_, two_d_, matrix_, three_d_, current_texture_};
    engine::CKeys keys_{raw_input_, screen_};
    NiceMock<platform::MockClock> clock_;
    NiceMock<engine::MockGameClock> game_clock_;
    NiceMock<platform::MockClipboard> clipboard_;
    shape::CEditorTools editor_tools_{{.two_d = two_d_,
                                       .matrix = matrix_,
                                       .three_d = three_d_,
                                       .screen = screen_,
                                       .special = special_,
                                       .keys = keys_,
                                       .raw_input = raw_input_,
                                       .game_clock = game_clock_,
                                       .clock = clock_,
                                       .clipboard = clipboard_,
                                       .content = engine::getShippedGameContent()}};
    engine::CFontColors colors_;
    NiceMock<platform::MockOsFontFactory> os_fonts_;
    support::CNewMsg messages_{dosio_};
    engine::SGameContent content_ = engine::getShippedGameContent();
    CDFont fonts_{dosio_,    screen_,   two_d_,        three_d_, colors_,
                  os_fonts_, messages_, editor_tools_, content_};
};

TEST_F(CDFontTest, NothingIsLoadedBeforeInit) {
    EXPECT_EQ(fonts_.getMediumFont(), nullptr);
    EXPECT_EQ(editor_tools_.getEditorFont(), nullptr);
    EXPECT_EQ(fonts_.getOsFontChoice(), EOsFontChoice::Auto);
    EXPECT_EQ(fonts_.getMenuFontChoice(), EMenuFontChoice::Large);
}

TEST_F(CDFontTest, TheMenuFontIsTheThemeFontLargeAndTheSmallEditorFontSmall) {
    fonts_.initFonts();
    EXPECT_EQ(fonts_.getMenuFont(), fonts_.getThemeFont());
    fonts_.setMenuFontChoice(EMenuFontChoice::Small);
    EXPECT_EQ(fonts_.getMenuFontChoice(), EMenuFontChoice::Small);
    EXPECT_EQ(fonts_.getMenuFont(), fonts_.getSmallEditorFont());
}

// The game's menus name the two; either can be any [[font]].
TEST_F(CDFontTest, TheMenuFontsAreTheOnesTheMenusName) {
    fonts_.initFonts();
    content_.menu->text_font_large = "tiny";
    content_.menu->text_font_small = "theme";
    EXPECT_EQ(fonts_.getMenuFont(), fonts_.getTinyFont());
    fonts_.setMenuFontChoice(EMenuFontChoice::Small);
    EXPECT_EQ(fonts_.getMenuFont(), fonts_.getThemeFont());
}

TEST_F(CDFontTest, WithoutTheMenusTheMenuFontIsFatal) {
    content_.menu.reset();
    EXPECT_THAT([this] { static_cast<void>(fonts_.getMenuFont()); },
                ::testing::ThrowsMessage<common::CFatalError>(
                    ::testing::StrEq("No package gives the menus' layout")));
}

TEST_F(CDFontTest, AManifestFindsEachFontByItsId) {
    fonts_.initFonts();
    EXPECT_EQ(&fonts_.findFont("medium"), fonts_.getMediumFont());
    EXPECT_EQ(&fonts_.findFont("tiny"), fonts_.getTinyFont());
    EXPECT_EQ(&fonts_.findFont("theme"), fonts_.getThemeFont());
    EXPECT_EQ(&fonts_.findFont("small_editor"), fonts_.getSmallEditorFont());
    EXPECT_EQ(&fonts_.findFont("console"), fonts_.getConsoleFont());
    EXPECT_EQ(&fonts_.findFont("micro"), fonts_.getMicroFont());
}

TEST_F(CDFontTest, AFontNotLoadedOrNotKnownIsFatal) {
    EXPECT_THAT(
        [this] { static_cast<void>(fonts_.findFont("theme")); },
        ::testing::ThrowsMessage<common::CFatalError>(::testing::StrEq("No font theme is loaded")));
    fonts_.initFonts();
    EXPECT_THAT([this] { static_cast<void>(fonts_.findFont("gothic")); },
                ::testing::ThrowsMessage<common::CFatalError>(
                    ::testing::StrEq("No font gothic is loaded")));
}

TEST_F(CDFontTest, InitLoadsEachFontWithItsSpacesAndOffsets) {
    fonts_.initFonts();
    expectFont(fonts_.getMediumFont(), 8, 3);
    expectFont(fonts_.getTinyFont(), 5, 2);
    expectFont(fonts_.getThemeFont(), 8, 3);
    expectFont(fonts_.getSmallEditorFont(), 4, 3);
    expectFont(fonts_.getConsoleFont(), 4, 3);
    expectFont(fonts_.getMicroFont(), 4, 1);
    EXPECT_EQ(fonts_.getMediumFont()->getCharYOffset(0xc0), 1);
    EXPECT_EQ(fonts_.getThemeFont()->getCharYOffset(0xc0), 0);
    EXPECT_EQ(fonts_.getThemeFont()->getCharYOffset(0xe0), 1);
    EXPECT_FALSE(fonts_.getUseOSFonts());
}

// A game's own spacing and offsets for a role.
TEST_F(CDFontTest, AFontsSpacingAndOffsetsAreTheGamesOwn) {
    const auto tiny = std::ranges::find(content_.fonts, "tiny", &engine::SFontSpec::id);
    ASSERT_NE(tiny, content_.fonts.end());
    tiny->space_width = 7;
    tiny->y_offsets = {{.offset = 4, .first = 0x20, .last = 0x7e}};
    fonts_.initFonts();
    expectFont(fonts_.getTinyFont(), 7, 4);
}

TEST_F(CDFontTest, ARoleNoPackageGivesIsFatal) {
    std::erase_if(content_.fonts, [](const engine::SFontSpec &font) { return font.id == "micro"; });
    EXPECT_THAT([this] { fonts_.initFonts(); },
                ::testing::ThrowsMessage<common::CFatalError>(
                    ::testing::StrEq("No package gives the micro font")));
}

// BW3's menu fonts: found by their ids, with no OS text whatever the message file says.
TEST_F(CDFontTest, AFontNoRoleTakesIsTheGamesOwn) {
    engine::SFontSpec gothic = content_.fonts.front();
    gothic.id = "gothic";
    content_.fonts.push_back(gothic);
    fonts_.initFonts();
    EXPECT_NE(&fonts_.findFont("gothic"), fonts_.getMediumFont());
    EXPECT_THAT(
        [this] { static_cast<void>(fonts_.findFont("serif")); },
        ::testing::ThrowsMessage<common::CFatalError>(::testing::StrEq("No font serif is loaded")));
    fonts_.freeFonts();
    EXPECT_THAT([this] { static_cast<void>(fonts_.findFont("gothic")); },
                ::testing::ThrowsMessage<common::CFatalError>(
                    ::testing::StrEq("No font gothic is loaded")));
}

// Only the console font draws its sheet's indices as they are; it is ready, so a glyph past the
// clip is cut rather than dropped, and its shadow falls a pixel right and down.
TEST_F(CDFontTest, TheConsoleFontIsSolidReadyAndShadowedByOnePixel) {
    fonts_.initFonts();
    engine::CBitFont &console = *fonts_.getConsoleFont();
    console.drawCharacter('!', 10, -3, 0x10, 0x20);
    EXPECT_EQ(screen_.pixel(10, 0), 0x101010U);
    EXPECT_EQ(screen_.pixel(11, 1), 0x202020U);
    console.drawCharacter('!', 63, -3, 0x10, engine::CBitFont::kNoShadow);
    EXPECT_EQ(screen_.pixel(63, 0), 0x101010U);
}

// The medium font blends its grey levels; on white ink a full level is 254 of 255.
TEST_F(CDFontTest, TheMediumFontIsAntialiasedAndShadowedByTwoPixels) {
    std::string palette(768, '\0');
    palette.replace(static_cast<std::size_t>('#') * 3, 3, "\xff\xff\xff");
    givenFile("art\\nocfont.act", palette);
    fonts_.initFonts();
    fonts_.getMediumFont()->drawCharacter('!', 0, -3, 0x10, 0x20);
    EXPECT_EQ(screen_.pixel(0, 0), 0x0f0f0fU);
    EXPECT_EQ(screen_.pixel(2, 1), 0x1f1f1fU);
}

TEST_F(CDFontTest, TheDialogsUseTheSmallEditorFontUntilTheFontsAreFreed) {
    fonts_.initFonts();
    EXPECT_EQ(editor_tools_.getEditorFont(), fonts_.getSmallEditorFont());
    fonts_.freeFonts();
    EXPECT_EQ(fonts_.getMediumFont(), nullptr);
    EXPECT_EQ(fonts_.getConsoleFont(), nullptr);
    EXPECT_EQ(editor_tools_.getEditorFont(), nullptr);
}

TEST_F(CDFontTest, AutoUsesOsFontsWhenTheMessageFileAsks) {
    givenMessageFileAskingForOsFonts();
    expectOsFonts();
    fonts_.initFonts();
    EXPECT_TRUE(fonts_.getUseOSFonts());
    EXPECT_EQ(fonts_.getMediumFont()->getTextWidth("ab"), 30);
    EXPECT_EQ(fonts_.getThemeFont()->getTextWidth("ab"), 30);
    EXPECT_EQ(fonts_.getTinyFont()->getTextWidth("ab"), 30);
    EXPECT_EQ(fonts_.getSmallEditorFont()->getTextWidth("ab"), 30);
    // The medium font's OS font sits two pixels lower and adds them twice to its height.
    EXPECT_EQ(fonts_.getMediumFont()->getTextHeight("ab"), 13);
    EXPECT_NE(fonts_.getMicroFont()->getTextWidth("ab"), 30);
}

TEST_F(CDFontTest, TheBitmapChoiceOverridesTheMessageFile) {
    givenMessageFileAskingForOsFonts();
    fonts_.setOsFontChoice(EOsFontChoice::Bitmap);
    EXPECT_CALL(os_fonts_, createOsFont).Times(0);
    fonts_.initFonts();
    EXPECT_FALSE(fonts_.getUseOSFonts());
}

TEST_F(CDFontTest, AnOsFontScaleMakesEachOsFontAgainAtThatSize) {
    fonts_.setOsFontChoice(EOsFontChoice::System);
    fonts_.initFonts();
    for (const int height : {28, 36, 24, 20}) {
        EXPECT_CALL(os_fonts_, createOsFont(::testing::_, height))
            .WillOnce([](std::string_view, int) {
                auto font = std::make_unique<NiceMock<platform::MockOsFont>>();
                ON_CALL(*font, measureText)
                    .WillByDefault(Return(common::SExtent{.width = 60, .height = 18}));
                return font;
            });
    }
    fonts_.setOsFontScale(2.0F);
    EXPECT_EQ(fonts_.getThemeFont()->getTextWidthScaled("ab", 2.0F), 60);
    EXPECT_EQ(fonts_.getSmallEditorFont()->getTextWidthScaled("ab", 2.0F), 60);
}

TEST_F(CDFontTest, NoOsFontScaleIsMadeAtOneOrForBitmapText) {
    fonts_.setOsFontChoice(EOsFontChoice::System);
    fonts_.initFonts();
    EXPECT_CALL(os_fonts_, createOsFont).Times(0);
    fonts_.setOsFontScale(1.0F);
    fonts_.setOsFontChoice(EOsFontChoice::Bitmap);
    fonts_.initFonts();
    fonts_.setOsFontScale(2.0F);
}

TEST_F(CDFontTest, AScaleBeforeTheFontsAreMadeHasNothingToSet) {
    EXPECT_CALL(os_fonts_, createOsFont).Times(0);
    fonts_.setOsFontScale(2.0F);
    EXPECT_EQ(fonts_.getThemeFont(), nullptr);
}

// A font the package gives no OS size keeps its bitmap text.
TEST_F(CDFontTest, AFontWithoutAnOsSizeKeepsItsBitmap) {
    const auto first_with_size = std::ranges::find_if(
        content_.fonts, [](const engine::SFontSpec &spec) { return spec.os_font.has_value(); });
    ASSERT_NE(first_with_size, content_.fonts.end());
    first_with_size->os_font.reset();
    fonts_.setOsFontChoice(EOsFontChoice::System);
    EXPECT_CALL(os_fonts_, createOsFont).Times(3);
    fonts_.initFonts();
}

TEST_F(CDFontTest, TheSystemChoiceUsesOsFontsWithoutAMessageFile) {
    fonts_.setOsFontChoice(EOsFontChoice::System);
    EXPECT_CALL(os_fonts_, createOsFont).Times(4);
    fonts_.initFonts();
    EXPECT_TRUE(fonts_.getUseOSFonts());
}

} // namespace
} // namespace nocturne::core
