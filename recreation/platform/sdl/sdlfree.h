#pragma once

#include <SDL3/SDL_stdinc.h>
#include <memory>

namespace nocturne::platform::sdl {

struct SSdlFree {
    void operator()(void *memory) const {
        SDL_free(memory);
    }
};

// Memory SDL hands over for the caller to free.
template <typename T>
using SdlOwned = std::unique_ptr<T, SSdlFree>;

} // namespace nocturne::platform::sdl
