#include "platform/sdl/sdlclock.h"

#include <SDL3/SDL.h>
#include <algorithm>

namespace nocturne::platform::sdl {

std::uint64_t CSdlClock::getCounter() {
    return SDL_GetPerformanceCounter();
}

std::uint64_t CSdlClock::getCounterFrequency() {
    return SDL_GetPerformanceFrequency();
}

void CSdlClock::sleep(std::chrono::duration<double> duration) {
    const auto nanoseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(duration);
    SDL_DelayPrecise(static_cast<Uint64>(std::max<std::int64_t>(nanoseconds.count(), 0)));
}

} // namespace nocturne::platform::sdl
