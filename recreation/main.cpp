#include "common/error/fatalerror.h"
#include "platform/gl/glrenderer.h"
#include "platform/sdl/sdlaudiodevice.h"
#include "platform/sdl/sdlclipboard.h"
#include "platform/sdl/sdlclock.h"
#include "platform/sdl/sdlcontext.h"
#include "platform/sdl/sdldisplay.h"
#include "platform/sdl/sdlfilesystem.h"
#include "platform/sdl/sdlgamepad.h"
#include "platform/sdl/sdlmovieplayer.h"
#include "platform/sdl/sdlnetwork.h"
#include "platform/sdl/sdlosfontfactory.h"
#include "platform/sdl/sdlwindow.h"
#include "wincore/winrun/winrun.h"

#include <cstddef>
#include <cstdio>
#include <ctime>
#include <exception>
#include <stdexcept>
#include <vector>

namespace {

using nocturne::platform::EWindowEventType;
using nocturne::platform::SWindowEvent;
namespace sdl = nocturne::platform::sdl;

// The mode initializeGameSystems sets before anything else draws.
constexpr int kWidth = 640;
constexpr int kHeight = 480;
constexpr int kBitsPerPixel = 32;
constexpr int kPitch = kWidth * (kBitsPerPixel / 8);

// Everything here is gone by the time a fatal error is reported, as the original tore down its
// sound and graphics before showing the box.
int runGame(sdl::CSdlWindow &window) {
    sdl::CSdlDisplay display(window);
    // Declared after the display, so it is gone before the context it draws in. The engine calls
    // init, with its bridge, only when the INI turns acceleration on.
    [[maybe_unused]] const nocturne::platform::gl::CGlRenderer renderer(display.getGlApi(),
                                                                        display);
    [[maybe_unused]] const sdl::CSdlGamepad gamepad{};
    [[maybe_unused]] const sdl::CSdlClipboard clipboard{};
    [[maybe_unused]] const sdl::CSdlNetwork network;
    [[maybe_unused]] const sdl::CSdlAudioDevice audio;
    [[maybe_unused]] const sdl::CSdlOsFontFactory fonts;
    [[maybe_unused]] const sdl::CSdlMoviePlayer movies(display);

    if (!display.setDisplayMode(kWidth, kHeight, kBitsPerPixel)) {
        throw std::runtime_error("Unable to set 640x480x32 display mode");
    }
    const std::vector<std::byte> frame(static_cast<std::size_t>(kPitch) * kHeight);
    SWindowEvent event;
    while (true) {
        while (window.pollEvent(event)) {
            if (event.type == EWindowEventType::Quit) {
                return 0;
            }
        }
        // Each present waits for vsync, as swapBuffers did.
        display.present(frame, kPitch);
    }
}

int run() {
    // Declared first so it outlives every adapter.
    const sdl::CSdlContext context;
    sdl::CSdlWindow window(nocturne::wincore::CWinRun::kApplicationTitle, kWidth, kHeight);
    sdl::CSdlFileSystem file_system;
    sdl::CSdlClock clock;
    nocturne::wincore::CWinRun winrun(window, clock);
    try {
        return runGame(window);
    } catch (const nocturne::common::CFatalError &error) {
        const std::time_t now = std::time(nullptr);
        std::tm local_time{};
        localtime_r(&now, &local_time);
        file_system.appendFile("gtfo.txt", error.getLogEntry(local_time));
        winrun.displayMessageBoxAndQuit(error);
        return 1;
    }
}

} // namespace

int main() {
    try {
        return run();
    } catch (const std::exception &error) {
        std::fprintf(stderr, "nocturne: %s\n", error.what());
        return 1;
    }
}
