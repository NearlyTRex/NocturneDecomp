#include "core/main/main.h"

#include "common/error/fatalerror.h"
#include "core/dfilter/demonfilter.h"
#include "core/dfont/dfont.h"
#include "core/game/game.h"
#include "core/inivar/inivar.h"
#include "core/mission/demonmission.h"
#include "core/netgame/netgame.h"
#include "core/podmain/demonpod.h"
#include "core/sound/sound.h"
#include "engine/2d/2d.h"
#include "engine/3d/3d.h"
#include "engine/console/console.h"
#include "engine/dosio/dosio.h"
#include "engine/font/font.h"
#include "engine/ini/ini.h"
#include "engine/keys/keys.h"
#include "engine/light/light.h"
#include "engine/matrix/matrix.h"
#include "engine/ncursfx/mouse.h"
#include "engine/special/special.h"
#include "engine/texture/currenttexture.h"
#include "engine/texture/texture.h"
#include "platform/gl/glrenderer.h"
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
#include "shape/edittool/editortools.h"
#include "sound/sndmain/sndmain.h"
#include "support/newmsg/newmsg.h"
#include "wincore/wddvmem/wddvmem.h"
#include "wincore/winrun/winrun.h"
#include "wincore/winvideo/winvideo.h"

#include <array>
#include <cstdio>
#include <ctime>
#include <exception>
#include <format>
#include <string_view>

namespace {

namespace core = nocturne::core;
namespace engine = nocturne::engine;
namespace sdl = nocturne::platform::sdl;
namespace wincore = nocturne::wincore;

constexpr int kWidth = 640;
constexpr int kHeight = 480;

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
             .net_game = net_game_});
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
    nocturne::shape::CEditorTools editor_tools_{two_d_,   matrix_, three_d_, screen_,
                                                special_, keys_,   clock_};
    engine::CFontColors colors_;
    nocturne::support::CNewMsg messages_{dosio_};
    core::CDFont fonts_{dosio_,  screen_,   two_d_,    three_d_,
                        colors_, os_fonts_, messages_, editor_tools_};
    core::CGame game_;
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
    core::CDemonMission mission_;
    std::array<core::CDemonFilter, 8> global_filters_;
    std::array<core::CDemonFilter, 4> player_filters_;
    engine::CMouse mouse_{dosio_, screen_, special_};
    core::CNetGame net_game_{file_system_, environment_, winrun_};
    wincore::SMovieOwners movie_owners_{file_system_, movies_,  window_, clock_,
                                        winrun_,      special_, screen_, two_d_};
};

// Everything is gone by the time a fatal error is reported, as the original tore down its sound
// and graphics before showing the box.
int runGame(sdl::CSdlWindow &window, sdl::CSdlFileSystem &file_system, sdl::CSdlClock &clock,
            wincore::CWinRun &winrun) {
    CGameSystems systems(window, file_system, clock, winrun);
    systems.initializeGameSystems();
    systems.run();
    return 0;
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
