#pragma once

#include "platform/heap.h"

#include <string>

namespace nocturne::platform {

// The decomp's heap report (shims/core/heap_report.cpp), which stands in for the original's walk
// of the Watcom heap: AddressSanitizer's counts under it, glibc's mallinfo2 otherwise, including
// what the allocator mapped for its large blocks.
class CProcessHeap final : public IHeap {
public:
    [[nodiscard]] std::string describe() override;
};

} // namespace nocturne::platform
