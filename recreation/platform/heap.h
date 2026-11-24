#pragma once

#include <string>

namespace nocturne::platform {

// The process's heap, as its allocator accounts for it.
class IHeap {
public:
    virtual ~IHeap() = default;

    // One line of what is in use and free; empty when the allocator says nothing.
    [[nodiscard]] virtual std::string describe() = 0;
};

} // namespace nocturne::platform
