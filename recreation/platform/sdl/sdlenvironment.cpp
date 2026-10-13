#include "platform/sdl/sdlenvironment.h"

#include <SDL3/SDL.h>

namespace nocturne::platform::sdl {

std::optional<std::string> CSdlEnvironment::getVariable(std::string_view name) {
    const char *value = SDL_getenv(std::string(name).c_str());
    if (value == nullptr) {
        return std::nullopt;
    }
    return std::string(value);
}

} // namespace nocturne::platform::sdl
