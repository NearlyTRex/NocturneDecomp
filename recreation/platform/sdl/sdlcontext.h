#pragma once

namespace nocturne::platform::sdl {

// Holds SDL initialised; every other adapter must be destroyed before it.
class CSdlContext final {
public:
    CSdlContext();
    ~CSdlContext();
    CSdlContext(const CSdlContext &) = delete;
    CSdlContext &operator=(const CSdlContext &) = delete;
};

} // namespace nocturne::platform::sdl
