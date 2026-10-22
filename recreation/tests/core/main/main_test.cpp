#include "common/error/fatalerror.h"
#include "common/random/watcomrandom.h"
#include "core/actor/actor.h"
#include "core/dfilter/demonfilter.h"
#include "core/dfont/dfont.h"
#include "core/game/game.h"
#include "core/inivar/inivar.h"
#include "core/level/levelloader.h"
#include "core/main/main.h"
#include "core/menu/menu.h"
#include "core/mission/demonmission.h"
#include "core/netgame/netgame.h"
#include "core/set/demonset.h"
#include "core/sound/sound.h"
#include "core/xform/xform.h"
#include "engine/2d/2d.h"
#include "engine/3d/3d.h"
#include "engine/dosio/foundfileinfo.h"
#include "engine/drender/demonrenderer.h"
#include "engine/font/font.h"
#include "engine/ini/ini.h"
#include "engine/keys/keys.h"
#include "engine/light/light.h"
#include "engine/matrix/matrix.h"
#include "engine/menuinput.h"
#include "engine/ncursfx/mouse.h"
#include "engine/pod/pod.h"
#include "engine/prim/prim.h"
#include "engine/special/special.h"
#include "engine/texture/currenttexture.h"
#include "engine/texture/texture.h"
#include "engine/zraster/zraster.h"
#include "platform/rendervertex.h"
#include "shape/edittool/edcontrols.h"
#include "shape/edittool/editortools.h"
#include "shape/edittool/picklist.h"
#include "support/newmsg/newmsg.h"
#include "tests/mocks/core/setparts.h"
#include "tests/mocks/engine/fontsheet.h"
#include "tests/mocks/engine/memoryscreen.h"
#include "tests/mocks/engine/mockgameclock.h"
#include "tests/mocks/engine/mockrawinput.h"
#include "tests/mocks/engine/podimage.h"
#include "tests/mocks/platform/mockclipboard.h"
#include "tests/mocks/platform/mockclock.h"
#include "tests/mocks/platform/mockdisplay.h"
#include "tests/mocks/platform/mockenvironment.h"
#include "tests/mocks/platform/mockosfontfactory.h"
#include "tests/mocks/platform/mockrenderer.h"
#include "tests/mocks/sound/sndmainfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <cstddef>
#include <format>
#include <string>
#include <string_view>
#include <type_traits>
#include <utility>
#include <vector>

namespace nocturne::core {
namespace {

using ::testing::_;
using ::testing::NiceMock;
using ::testing::Return;

TEST(CoreMainFunctions, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&initializeGameSystems), void (*)(const SGameSystemOwners &)>);
    static_assert(std::is_same_v<decltype(&showDeveloperToolsMenu), void (*)()>);
}

TEST(CoreMainFunctions, DisplayErrorAndQuitIsTheCommonOne) {
    EXPECT_THAT([] { displayErrorAndQuit("Out of memory"); },
                ::testing::ThrowsMessage<common::CFatalError>(::testing::StrEq("Out of memory")));
}

constexpr std::string_view kIni = ".\\system\\nocturne.ini";
constexpr int kWidth = 640;
constexpr int kHeight = 480;

// An image of one palette index whose palette makes that index the given grey.
std::pair<std::string, std::string> greyImage(int width, int height, std::uint8_t index,
                                              std::uint8_t grey) {
    std::vector<std::uint8_t> levels(static_cast<std::size_t>(index + 1) * 3, 0);
    levels[static_cast<std::size_t>(index) * 3] = grey;
    levels[(static_cast<std::size_t>(index) * 3) + 1] = grey;
    levels[(static_cast<std::size_t>(index) * 3) + 2] = grey;
    return {std::string(static_cast<std::size_t>(width) * static_cast<std::size_t>(height),
                        static_cast<char>(index)),
            engine::makePalette(levels)};
}

// Startup over a disk holding every file it reads, on a 640x480 memory screen.
class CInitializeGameSystemsTest : public sound::CSndMainFixture {
protected:
    CInitializeGameSystemsTest() {
        ON_CALL(file_system_, readFile(kIni)).WillByDefault([this](std::string_view) {
            return std::optional(ini_text_);
        });
        ON_CALL(file_system_, setReadOnly(kIni, false)).WillByDefault(Return(true));
        givenFile("art\\vga.act", engine::makePalette({}));
        givenFile("fog\\vga.lte", std::string(engine::C2d::kLightLevels * 256, '\0'));
        givenFile("fog\\vga.map", std::string(engine::C2d::kColorCubeSize, '\0'));
        givenFile("art\\nocfont.raw", engine::makeSheetOfSize(0x136, 0x1ae, '\0'));
        givenFile("art\\nocsmall.raw", engine::makeSheetOfSize(0xf8, 0x158, '\0'));
        givenFile("art\\menufont.raw", engine::makeSheetOfSize(0xfa, 0x23f, '\0'));
        givenFile("art\\fnte_pfd.RAW", engine::makeSheetOfSize(0x94, 0xec, '\0'));
        givenFile("art\\fnte_f.RAW", engine::makeSheetOfSize(0x94, 0xec, '\xff'));
        givenFile("art\\micro.raw", engine::makeSheetOfSize(0x94, 0xec, '\0'));
        givenImage("fangs", greyImage(kWidth, kHeight, 1, 200));
        givenImage("brightness", greyImage(kWidth, kHeight, 1, 100));
        for (int i = 1; i <= 8; ++i) {
            givenImage(std::format("crsr{}", i), greyImage(0x36, 0x37, 2, 50));
        }
        for (int i = 1; i <= 7; ++i) {
            givenImage(std::format("flame{}", i), greyImage(0x36, 0x37, 2, 50));
            givenImage(std::format("crsrskll{}", i), greyImage(0x36, 0x37, 2, 50));
        }
        givenFile("msglist.txt", "; version\n0\n; use OS fonts\n0\n; font\n\"Arial\"\n"
                                 "\"Loading...\", \"Chargement...\"\n");
    }

    void givenImage(const std::string &name, const std::pair<std::string, std::string> &image) {
        givenFile("art\\" + name + ".raw", image.first);
        givenFile("art\\" + name + ".act", image.second);
    }

    void start() {
        initializeGameSystems(owners_);
    }

    // A filter's level at its centre.
    static int centre(const CDemonFilter &filter) {
        const auto row = static_cast<std::size_t>(filter.getSize());
        return filter.getData()[((row / 2) * row) + (row / 2)];
    }

    std::string ini_text_ = "[Graphics]\r\ngamePIXX=800\r\ngamePIXY=600\r\nuseDirect3D=1\r\n"
                            "[Sound]\r\n[Control]\r\n[Debug]\r\n";
    engine::CMemoryScreen screen_{kWidth, kHeight, 32};
    NiceMock<engine::MockRawInput> raw_input_;
    NiceMock<platform::MockDisplay> display_;
    NiceMock<platform::MockRenderer> renderer_;
    NiceMock<platform::MockClock> clock_;
    NiceMock<platform::MockOsFontFactory> os_fonts_;
    NiceMock<platform::MockEnvironment> environment_;
    NiceMock<engine::MockGameClock> game_clock_;
    engine::C2d two_d_{dosio_, screen_, raw_input_};
    engine::CLight light_;
    engine::CMatrix matrix_{two_d_, light_};
    engine::C3d three_d_{matrix_};
    engine::SCurrentTexture current_texture_;
    engine::CSpecial special_{renderer_, screen_, two_d_, matrix_, three_d_, current_texture_};
    engine::CKeys keys_{raw_input_, screen_};
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
                                       .clipboard = clipboard_}};
    engine::CFontColors colors_;
    support::CNewMsg messages_{dosio_};
    CDFont fonts_{dosio_, screen_, two_d_, three_d_, colors_, os_fonts_, messages_, editor_tools_};
    CGame game_{game_clock_};
    engine::CIni ini_{file_system_};
    SIniDataOwners ini_owners_{.game = game_,
                               .sound_main = sound_,
                               .console = console_,
                               .special = special_,
                               .display = display_,
                               .fonts = fonts_};
    engine::CPod pod_{file_system_, dosio_};
    engine::CTexture texture_{{.dosio = dosio_,
                               .two_d = two_d_,
                               .screen = screen_,
                               .special = special_,
                               .current_texture = current_texture_}};
    CSound game_sound_{sound_, pod_, file_system_};
    std::array<CDemonFilter, 8> global_filters_;
    std::array<CDemonFilter, 4> player_filters_;
    engine::CMouse mouse_{dosio_, screen_, special_};
    CNetGame net_game_{file_system_, environment_, game_clock_};
    std::vector<platform::SRenderVertex> vertex_buffer_ = std::vector<platform::SRenderVertex>(8);
    engine::CPrim prim_{special_, two_d_, three_d_, current_texture_};
    engine::CZRaster zraster_{special_, two_d_, three_d_, current_texture_};
    engine::CDemonRenderer demon_renderer_{
        matrix_,          two_d_,   three_d_, vertex_buffer_,           special_, prim_, zraster_,
        current_texture_, texture_, screen_,  &transformAndClipGeometry};
    CSetParts set_parts_{dosio_};
    CDemonSet set_{
        set_parts_.owners(demon_renderer_, matrix_, special_, two_d_, screen_, raw_input_)};
    common::CWatcomRandom crt_random_;
    CActor actor_{game_, crt_random_};
    engine::CMenuInput menu_input_{keys_};
    CMenu menu_{{.dosio = dosio_,
                 .screen = screen_,
                 .special = special_,
                 .two_d = two_d_,
                 .three_d = three_d_,
                 .raw_input = raw_input_,
                 .menu_input = menu_input_,
                 .fonts = fonts_,
                 .messages = messages_,
                 .renderer = demon_renderer_,
                 .set = set_,
                 .game = game_,
                 .actor = actor_,
                 .crt_random = crt_random_,
                 .textures = texture_,
                 .sound = game_sound_,
                 .sound_main = sound_,
                 .build_version = "0.1.0"}};
    shape::CEdControls controls_{{.two_d = two_d_,
                                  .screen = screen_,
                                  .raw_input = raw_input_,
                                  .clock = game_clock_,
                                  .editor_tools = editor_tools_}};
    shape::SPickListOwners pick_list_owners_{.controls = controls_,
                                             .keys = keys_,
                                             .menu_input = menu_input_,
                                             .three_d = three_d_,
                                             .screen = screen_};
    CLevelLoader level_loader_{{.dosio = dosio_,
                                .screen = screen_,
                                .special = special_,
                                .two_d = two_d_,
                                .matrix = matrix_,
                                .renderer = demon_renderer_,
                                .set = set_,
                                .fonts = fonts_,
                                .crt_random = crt_random_}};
    CDemonMission mission_{{.dosio = dosio_,
                            .messages = messages_,
                            .game = game_,
                            .actor = actor_,
                            .level_loader = level_loader_,
                            .textures = texture_,
                            .editor_tools = editor_tools_,
                            .pick_list = pick_list_owners_}};
    std::vector<std::string> movies_;
    SGameSystemOwners owners_{.ini = ini_,
                              .file_system = file_system_,
                              .ini_owners = ini_owners_,
                              .dosio = dosio_,
                              .pod = pod_,
                              .messages = messages_,
                              .texture = texture_,
                              .two_d = two_d_,
                              .screen = screen_,
                              .special = special_,
                              .raw_input = raw_input_,
                              .play_movie =
                                  [this](std::string_view directory, std::string_view filename) {
                                      movies_.push_back(std::format("{}\\{}", directory, filename));
                                      return true;
                                  },
                              .sound = game_sound_,
                              .mission = mission_,
                              .global_filters = global_filters_,
                              .player_filters = player_filters_,
                              .mouse = mouse_,
                              .net_game = net_game_,
                              .menu = menu_};
};

TEST_F(CInitializeGameSystemsTest, ReadsTheIniAndKeepsItsModeAfterTheFirstRun) {
    EXPECT_CALL(display_, setWindowSize(800, 600));
    EXPECT_CALL(raw_input_, getNextKeypress).Times(0);
    start();
    EXPECT_EQ(game_.game_pixx, 800);
    EXPECT_TRUE(special_.getUseDirect3D());
}

TEST_F(CInitializeGameSystemsTest, TheFirstRunDropsTo640x480UnacceleratedAndCalibrates) {
    ini_text_ = "[Graphics]\r\ngamePIXX=800\r\nuseDirect3D=1\r\nfirstTimeFlag=1\r\n";
    EXPECT_CALL(raw_input_, getNextKeypress(_)).Times(5);
    start();
    EXPECT_EQ(game_.first_time_flag, 0);
    EXPECT_EQ(game_.game_pixx, kWidth);
    EXPECT_EQ(game_.game_pixy, kHeight);
    EXPECT_EQ(game_.game_bpp, 32);
    EXPECT_FALSE(special_.getUseDirect3D());
}

TEST_F(CInitializeGameSystemsTest, MessagesAndFontsAreReadyAfterward) {
    start();
    EXPECT_EQ(messages_.getLocalizedString("Loading..."), "Chargement...");
    EXPECT_NE(fonts_.getSmallEditorFont(), nullptr);
}

TEST_F(CInitializeGameSystemsTest, MountedPodsAreSearchedBeforeTheDisk) {
    givenFile("ACT1.POD", engine::makePod2("", {{.name = "door.wav", .data = "D"}}));
    pod_.mount("ACT1.POD");
    start();
    engine::SFoundFileInfo info("door.wav");
    ASSERT_TRUE(dosio_.findFile(info));
    EXPECT_EQ(info.target_path, "/game/ACT1.POD");
}

TEST_F(CInitializeGameSystemsTest, PlaysTheOpeningMovieThenShowsTheLoadingScreen) {
    start();
    EXPECT_EQ(movies_, std::vector<std::string>{"video\\opening.avi"});
    // The fangs' grey of 200 at half opacity over black.
    EXPECT_EQ(screen_.pixel(kWidth - 1, kHeight - 1), 0x636363U);
    EXPECT_EQ(screen_.swaps, 1);
}

TEST_F(CInitializeGameSystemsTest, TakesUpTheSoundDevice) {
    start();
    EXPECT_TRUE(sound_.isSoundSystemActive());
}

TEST_F(CInitializeGameSystemsTest, ClearsAnyMissionAskedFor) {
    mission_.setMissionName("chap1");
    start();
    EXPECT_EQ(mission_.getPendingMissionName(), "");
}

TEST_F(CInitializeGameSystemsTest, LightsTheFiltersBrighterOneByOne) {
    start();
    EXPECT_EQ(global_filters_[0].getSize(), 64);
    EXPECT_EQ(centre(global_filters_[0]), 8);
    EXPECT_EQ(centre(global_filters_[7]), 63);
    EXPECT_EQ(player_filters_[0].getSize(), 256);
    EXPECT_EQ(player_filters_[0].getCount(), 256);
    EXPECT_EQ(centre(player_filters_[0]), 16);
    EXPECT_EQ(centre(player_filters_[3]), 63);
}

TEST_F(CInitializeGameSystemsTest, LoadsTheMouseAndStartsTheNetwork) {
    start();
    screen_.fill(0);
    mouse_.getCursor(0).display(0, 0, 0xffff);
    EXPECT_EQ(screen_.pixel(0, 0), 0x323232U);
    EXPECT_EQ(net_game_.getCurrentGameTime(), 1U);
}

TEST_F(CInitializeGameSystemsTest, AScreenThatRefusesTheModeIsFatal) {
    screen_.refuse_modes = true;
    EXPECT_THROW(start(), common::CFatalError);
    EXPECT_TRUE(movies_.empty());
}

} // namespace
} // namespace nocturne::core
