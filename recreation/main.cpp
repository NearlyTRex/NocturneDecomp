#include "platform/sdl/sdlclipboard.h"
#include "platform/sdl/sdlclock.h"
#include "platform/sdl/sdlcontext.h"
#include "platform/sdl/sdlfilesystem.h"
#include "platform/sdl/sdlgamepad.h"
#include "platform/sdl/sdlnetwork.h"
#include "platform/sdl/sdlwindow.h"

#include <chrono>
#include <cstdio>
#include <exception>

namespace {

using nocturne::platform::EWindowEventType;
using nocturne::platform::SWindowEvent;
namespace sdl = nocturne::platform::sdl;

int run() {
    // Declared first so it outlives every adapter.
    const sdl::CSdlContext context;
    sdl::CSdlWindow window("Nocturne", 640, 480);
    sdl::CSdlClock clock;
    [[maybe_unused]] const sdl::CSdlGamepad gamepad{};
    [[maybe_unused]] const sdl::CSdlClipboard clipboard{};
    [[maybe_unused]] const sdl::CSdlFileSystem file_system{};
    [[maybe_unused]] const sdl::CSdlNetwork network;

    constexpr std::chrono::milliseconds kIdle{10};
    SWindowEvent event;
    while (true) {
        while (window.pollEvent(event)) {
            if (event.type == EWindowEventType::Quit) {
                return 0;
            }
        }
        clock.sleep(kIdle);
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
