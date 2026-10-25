// =============================================================================
// THREAD-LOCAL STORAGE — the program's own, before anything else uses it
// =============================================================================
//
// The shims keep the Win32 last error and the TlsAlloc slots in thread_local
// variables, so every failing call writes the program's static TLS. On Windows
// the loader builds that block from the image's TLS directory before main runs;
// without it, the first such write faults. Wine and Windows set the block up
// independently, so a pass under one says nothing about the other.
//
// The write itself is the test. Before it, on Windows, what the loader set up
// is printed — where the image is, what its TLS directory says, the index it
// was given, and the block the thread's TLS array holds for it — so a crash
// here comes with the reason in the log beside it.

#include "nocturne_test.h"

#include <cstdint>
#include <cstdio>
#include <cstring>

namespace {

thread_local unsigned int t_probe = 0;

#if defined(_WIN32) && defined(__x86_64__)

// The image's first byte, which the linker defines for every PE.
extern "C" char __ImageBase;
// The index the loader writes into the TLS directory's AddressOfIndex.
extern "C" unsigned long _tls_index;

template <typename T>
T at(const char *base, size_t offset) {
    T value;
    std::memcpy(&value, base + offset, sizeof(value));
    return value;
}

void **thread_tls_array() {
    void **array;
    // TEB.ThreadLocalStoragePointer
    __asm__("movq %%gs:0x58, %0" : "=r"(array));
    return array;
}

void report_loader_tls() {
    const char *image = &__ImageBase;
    const uint32_t pe = at<uint32_t>(image, 0x3c);
    const uint64_t preferred = at<uint64_t>(image, pe + 24 + 24);
    // Data directory 9 is TLS: optional header + 112, eight bytes an entry.
    const uint32_t tls_rva = at<uint32_t>(image, pe + 24 + 112 + 9 * 8);
    std::printf("image at %p, preferred base %#llx, TLS directory at rva %#x\n",
                (const void *)image, (unsigned long long)preferred, tls_rva);
    if (tls_rva != 0) {
        const char *tls = image + tls_rva;
        const uint64_t start = at<uint64_t>(tls, 0), end = at<uint64_t>(tls, 8);
        const uint64_t index_at = at<uint64_t>(tls, 16), callbacks = at<uint64_t>(tls, 24);
        std::printf("  raw data %#llx..%#llx (%llu bytes), index at %#llx, callbacks at %#llx, "
                    "zero fill %u\n",
                    (unsigned long long)start, (unsigned long long)end,
                    (unsigned long long)(end - start), (unsigned long long)index_at,
                    (unsigned long long)callbacks, at<uint32_t>(tls, 32));
        std::printf("  directory fields inside the image: %s\n",
                    (start >= (uint64_t)(uintptr_t)image && index_at >= (uint64_t)(uintptr_t)image)
                        ? "yes"
                        : "no (not relocated)");
    }
    std::printf("_tls_index = %lu at %p\n", _tls_index, (void *)&_tls_index);
    void **array = thread_tls_array();
    std::printf("TEB TLS array at %p\n", (void *)array);
    if (array != nullptr) {
        std::printf("  slot %lu = %p, t_probe at %p\n", _tls_index, array[_tls_index],
                    (void *)&t_probe);
    }
    std::fflush(stdout);
}

#else

void report_loader_tls() {}

#endif

} // namespace

NOCTURNE_TEST(the_programs_thread_local_storage_is_writable_on_the_main_thread) {
    report_loader_tls();
    t_probe = 0x4e4f4354u;
    CHECK_EQ(t_probe, 0x4e4f4354u);
}

NOCTURNE_TEST_MAIN()
