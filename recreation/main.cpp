#include "core/main/main.h"

#include "buildversion.h"
#include "common/error/fatalerror.h"
#include "common/random/watcomrandom.h"
#include "core/actor/actor.h"
#include "core/dfilter/demonfilter.h"
#include "core/dfont/dfont.h"
#include "core/game/game.h"
#include "core/inivar/inivar.h"
#include "core/level/levelloader.h"
#include "core/menu/menu.h"
#include "core/mission/demonmission.h"
#include "core/netgame/netgame.h"
#include "core/podmain/demonpod.h"
#include "core/set/demonset.h"
#include "core/sound/sound.h"
#include "core/xform/xform.h"
#include "engine/2d/2d.h"
#include "engine/3d/3d.h"
#include "engine/console/console.h"
#include "engine/dosio/dosio.h"
#include "engine/drender/demonrenderer.h"
#include "engine/font/font.h"
#include "engine/ini/ini.h"
#include "engine/keys/keys.h"
#include "engine/light/light.h"
#include "engine/matrix/matrix.h"
#include "engine/menuinput.h"
#include "engine/ncursfx/mouse.h"
#include "engine/prim/prim.h"
#include "engine/special/special.h"
#include "engine/texture/currenttexture.h"
#include "engine/texture/texture.h"
#include "engine/zraster/zraster.h"
#include "platform/gl/glrenderer.h"
#include "platform/rendervertex.h"
#include "platform/sdl/sdlaudiodevice.h"
#include "platform/sdl/sdlclipboard.h"
#include "platform/sdl/sdlclock.h"
#include "platform/sdl/sdlcontext.h"
#include "platform/sdl/sdldisplay.h"
#include "platform/sdl/sdlenvironment.h"
#include "platform/sdl/sdlfilesystem.h"
#include "platform/sdl/sdlgamepad.h"
#include "platform/sdl/sdlmovieplayer.h"
#include "platform/sdl/sdlnetwork.h"
#include "platform/sdl/sdlosfontfactory.h"
#include "platform/sdl/sdlwindow.h"
#include "shape/edittool/edcontrols.h"
#include "shape/edittool/editortools.h"
#include "shape/edittool/picklist.h"
#include "sound/sndmain/sndmain.h"
#include "support/newmsg/newmsg.h"
#include "wincore/wddvmem/wddvmem.h"
#include "wincore/winrun/winrun.h"
#include "wincore/winvideo/winvideo.h"

#include <array>
#include <cstddef>
#include <cstdio>
#include <ctime>
#include <exception>
#include <format>
#include <new>
#include <string_view>
#include <vector>

namespace {

namespace core = nocturne::core;
namespace engine = nocturne::engine;
namespace sdl = nocturne::platform::sdl;
namespace wincore = nocturne::wincore;

constexpr int kWidth = 640;
constexpr int kHeight = 480;
// The size of the original's g_RenderVertexBuffer.
constexpr std::size_t kRenderVertexCount = 20000;

std::tm getLocalTime() {
    const std::time_t now = std::time(nullptr);
    std::tm local_time{};
    localtime_r(&now, &local_time);
    return local_time;
}

// Every system the game runs on, made once and handed to what needs it. Several refer to ones
// declared after them, so they live as members, in an order that lets each be built.
class CGameSystems {
public:
    CGameSystems(sdl::CSdlWindow &window, sdl::CSdlFileSystem &file_system, sdl::CSdlClock &clock,
                 wincore::CWinRun &winrun)
        : window_(window), file_system_(file_system), clock_(clock), winrun_(winrun) {}

    void initializeGameSystems() {
        core::initializeGameSystems(
            {.ini = ini_,
             .file_system = file_system_,
             .ini_owners = ini_owners_,
             .dosio = dosio_,
             .pod = pod_,
             .messages = messages_,
             .texture = texture_,
             .two_d = two_d_,
             .screen = screen_,
             .special = special_,
             .raw_input = winrun_,
             .play_movie =
                 [this](std::string_view directory, std::string_view filename) {
                     return wincore::playMovie(movie_owners_, directory, filename);
                 },
             .sound = sound_,
             .mission = mission_,
             .global_filters = global_filters_,
             .player_filters = player_filters_,
             .mouse = mouse_,
             .net_game = net_game_,
             .menu = menu_});
    }

    // Shows the screen until the window closes; the game beyond startup comes later.
    void run() {
        while (!winrun_.getInputDisabled()) {
            screen_.swapBuffers();
        }
    }

private:
    sdl::CSdlWindow &window_;
    sdl::CSdlFileSystem &file_system_;
    sdl::CSdlClock &clock_;
    wincore::CWinRun &winrun_;
    sdl::CSdlDisplay display_{window_};
    // Declared after the display, so it is gone before the context it draws in. The engine calls
    // init, with its bridge, only when the INI turns acceleration on.
    nocturne::platform::gl::CGlRenderer renderer_{display_.getGlApi(), display_};
    sdl::CSdlGamepad gamepad_;
    sdl::CSdlClipboard clipboard_;
    sdl::CSdlNetwork network_;
    sdl::CSdlAudioDevice audio_;
    sdl::CSdlOsFontFactory os_fonts_;
    sdl::CSdlMoviePlayer movies_{display_};
    sdl::CSdlEnvironment environment_;
    engine::CDosIo dosio_{file_system_};
    core::CDemonPod pod_{file_system_, dosio_};
    wincore::CWddVMem screen_{display_, renderer_, winrun_, special_, two_d_};
    engine::C2d two_d_{dosio_, screen_, winrun_};
    engine::CLight light_;
    engine::CMatrix matrix_{two_d_, light_};
    engine::C3d three_d_{matrix_};
    engine::SCurrentTexture current_texture_;
    engine::CSpecial special_{renderer_, screen_, two_d_, matrix_, three_d_, current_texture_};
    engine::CKeys keys_{winrun_, screen_};
    nocturne::shape::CEditorTools editor_tools_{{.two_d = two_d_,
                                                 .matrix = matrix_,
                                                 .three_d = three_d_,
                                                 .screen = screen_,
                                                 .special = special_,
                                                 .keys = keys_,
                                                 .raw_input = winrun_,
                                                 .game_clock = winrun_,
                                                 .clock = clock_,
                                                 .clipboard = clipboard_}};
    engine::CFontColors colors_;
    nocturne::support::CNewMsg messages_{dosio_};
    core::CDFont fonts_{dosio_,  screen_,   two_d_,    three_d_,
                        colors_, os_fonts_, messages_, editor_tools_};
    core::CGame game_{winrun_};
    engine::CConsole console_{file_system_, engine::CConsole::kMaxColumns,
                              engine::CConsole::kMaxRows, 1, 1};
    nocturne::sound::CSndMain sound_main_{dosio_, file_system_, audio_, console_, &getLocalTime};
    engine::CIni ini_{file_system_};
    core::SIniDataOwners ini_owners_{.game = game_,
                                     .sound_main = sound_main_,
                                     .console = console_,
                                     .special = special_,
                                     .display = display_,
                                     .fonts = fonts_};
    engine::CTexture texture_{{.dosio = dosio_,
                               .two_d = two_d_,
                               .screen = screen_,
                               .special = special_,
                               .current_texture = current_texture_}};
    core::CSound sound_{sound_main_, pod_, file_system_};
    std::array<core::CDemonFilter, 8> global_filters_;
    std::array<core::CDemonFilter, 4> player_filters_;
    engine::CMouse mouse_{dosio_, screen_, special_};
    core::CNetGame net_game_{file_system_, environment_, winrun_};
    wincore::SMovieOwners movie_owners_{file_system_, movies_,  window_, clock_,
                                        winrun_,      special_, screen_, two_d_};
    std::vector<nocturne::platform::SRenderVertex> vertex_buffer_ =
        std::vector<nocturne::platform::SRenderVertex>(kRenderVertexCount);
    engine::CPrim prim_{special_, two_d_, three_d_, current_texture_};
    engine::CZRaster zraster_{special_, two_d_, three_d_, current_texture_};
    engine::CDemonRenderer demon_renderer_{matrix_,
                                           two_d_,
                                           three_d_,
                                           vertex_buffer_,
                                           special_,
                                           prim_,
                                           zraster_,
                                           current_texture_,
                                           texture_,
                                           screen_,
                                           &core::transformAndClipGeometry};
    core::CDemonSet set_{demon_renderer_, matrix_, special_};
    nocturne::common::CWatcomRandom crt_random_;
    core::CActor actor_{game_, crt_random_};
    engine::CMenuInput menu_input_{keys_};
    core::CMenu menu_{{.dosio = dosio_,
                       .screen = screen_,
                       .special = special_,
                       .two_d = two_d_,
                       .three_d = three_d_,
                       .raw_input = winrun_,
                       .menu_input = menu_input_,
                       .fonts = fonts_,
                       .messages = messages_,
                       .renderer = demon_renderer_,
                       .set = set_,
                       .game = game_,
                       .actor = actor_,
                       .crt_random = crt_random_,
                       .build_version = nocturne::kBuildVersion}};
    nocturne::shape::CEdControls controls_{{.two_d = two_d_,
                                            .screen = screen_,
                                            .raw_input = winrun_,
                                            .clock = winrun_,
                                            .editor_tools = editor_tools_}};
    nocturne::shape::SPickListOwners pick_list_owners_{.controls = controls_,
                                                       .keys = keys_,
                                                       .menu_input = menu_input_,
                                                       .three_d = three_d_,
                                                       .screen = screen_};
    core::CLevelLoader level_loader_{{.dosio = dosio_,
                                      .screen = screen_,
                                      .special = special_,
                                      .two_d = two_d_,
                                      .matrix = matrix_,
                                      .renderer = demon_renderer_,
                                      .set = set_,
                                      .fonts = fonts_,
                                      .crt_random = crt_random_}};
    core::CDemonMission mission_{{.dosio = dosio_,
                                  .messages = messages_,
                                  .actor = actor_,
                                  .level_loader = level_loader_,
                                  .textures = texture_,
                                  .editor_tools = editor_tools_,
                                  .pick_list = pick_list_owners_}};
};

// Everything is gone by the time a fatal error is reported, as the original tore down its sound
// and graphics before showing the box. The original quit "Out of memory" wherever an allocation
// failed; a failed allocation here becomes that fatal error.
int runGame(sdl::CSdlWindow &window, sdl::CSdlFileSystem &file_system, sdl::CSdlClock &clock,
            wincore::CWinRun &winrun) {
    try {
        CGameSystems systems(window, file_system, clock, winrun);
        systems.initializeGameSystems();
        systems.run();
        return 0;
    } catch (const std::bad_alloc &) {
        core::displayErrorAndQuit("Out of memory");
    }
}

int run() {
    // Declared first so it outlives every adapter.
    const sdl::CSdlContext context;
    sdl::CSdlWindow window(wincore::CWinRun::kApplicationTitle, kWidth, kHeight);
    sdl::CSdlFileSystem file_system;
    sdl::CSdlClock clock;
    wincore::CWinRun winrun(window, clock);
    try {
        return runGame(window, file_system, clock, winrun);
    } catch (const nocturne::common::CFatalError &error) {
        // Retail writes no gtfo.txt; nocedit's log is kept so a fatal error outlives its box.
        file_system.appendFile("gtfo.txt", error.getLogEntry(getLocalTime()));
        winrun.displayMessageBoxAndQuit(error);
        return 1;
    }
}

} // namespace

int main() {
    try {
        return run();
    } catch (const std::exception &error) {
        std::fputs(std::format("nocturne: {}\n", error.what()).c_str(), stderr);
        return 1;
    }
}
