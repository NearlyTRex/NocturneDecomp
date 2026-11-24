#include "platform/processheap.h"

#include <format>
#include <string>

#ifdef __has_feature
#if __has_feature(address_sanitizer)
#define NOCTURNE_HEAP_VIA_ASAN 1
#endif
#endif

#ifdef NOCTURNE_HEAP_VIA_ASAN
#include <sanitizer/allocator_interface.h>
#elifdef __GLIBC__
#include <malloc.h>
#endif

namespace nocturne::platform {
namespace {

constexpr double kPerKilobyte = 1.0 / 1024.0;

} // namespace

std::string CProcessHeap::describe() {
#ifdef NOCTURNE_HEAP_VIA_ASAN
    return std::format("Used: {:.1f}k Free: {:.1f}k Heap: {:.1f}k",
                       static_cast<double>(__sanitizer_get_current_allocated_bytes()) *
                           kPerKilobyte,
                       static_cast<double>(__sanitizer_get_free_bytes()) * kPerKilobyte,
                       static_cast<double>(__sanitizer_get_heap_size()) * kPerKilobyte);
#elifdef __GLIBC__
    // The main arena's blocks alone miss what is past the mmap threshold, most of a level.
    const struct mallinfo2 info = mallinfo2();
    return std::format("Used: {:.1f}k Free: {:.1f}k Blocks: {}",
                       static_cast<double>(info.uordblks + info.hblkhd) * kPerKilobyte,
                       static_cast<double>(info.fordblks) * kPerKilobyte, info.ordblks);
#else
    return {};
#endif
}

} // namespace nocturne::platform
