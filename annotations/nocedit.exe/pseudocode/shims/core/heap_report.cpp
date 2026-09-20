// =============================================================================
// HEAP REPORT — implementation
// =============================================================================
//
// See heap_report.h for why the shipped _heapwalk figures cannot be produced
// here and what these ones mean instead.

#include "core/heap_report.h"
#include "shim_config.h"

#include <cstdio>

#if !NOCTURNE_AUTHENTIC_HEAP_REPORT

// Which allocator is actually serving the game. A sanitizer build replaces
// malloc wholesale, so the C library's own accounting describes an arena
// nothing is using any more and reads as a flat zero -- ask the sanitizer
// instead. This is not a niche case: the default preset is the ASan one.
#if defined(__SANITIZE_ADDRESS__)
#  define NOCTURNE_HEAP_VIA_ASAN 1
#elif defined(__has_feature)
#  if __has_feature(address_sanitizer)
#    define NOCTURNE_HEAP_VIA_ASAN 1
#  endif
#endif

#if defined(NOCTURNE_HEAP_VIA_ASAN)
#include <sanitizer/allocator_interface.h>
#elif defined(__GLIBC__)
#include <malloc.h>
#endif

extern "C" void nocturne_heap_report(char *out, int out_size)
{
    if ((out == (char *)0) || (out_size < 1)) {
        return;
    }
#if defined(NOCTURNE_HEAP_VIA_ASAN)
    snprintf(out, (size_t)out_size, "Used: %.1fk Free: %.1fk Heap: %.1fk",
             (double)__sanitizer_get_current_allocated_bytes() / 1024.0,
             (double)__sanitizer_get_free_bytes() / 1024.0,
             (double)__sanitizer_get_heap_size() / 1024.0);
#elif defined(__GLIBC__)
    {
        // mallinfo2 rather than mallinfo: the older one carries its totals in
        // int and wraps silently once the process is past 2 GB, which this one
        // reaches with a level loaded.
        struct mallinfo2 info = mallinfo2();

        // uordblks counts the main arena only. Anything past the mmap threshold
        // -- which is most of what a level load asks for -- is served by mmap
        // and lands in hblkhd instead, so a report without it misses the bulk
        // of the game's memory. Measured at 4 MB against 82 MB on a spread of
        // 20000 small blocks and 20 large ones.
        snprintf(out, (size_t)out_size, "Used: %.1fk Free: %.1fk Blocks: %lu",
                 (double)(info.uordblks + info.hblkhd) / 1024.0,
                 (double)info.fordblks / 1024.0, (unsigned long)info.ordblks);
    }
#else
    // Not zeroes: a zero here would read as a measurement rather than as the
    // absence of one.
    snprintf(out, (size_t)out_size, "Heap figures unavailable on this host.");
#endif
}

#else

extern "C" void nocturne_heap_report(char *, int) { }

#endif // !NOCTURNE_AUTHENTIC_HEAP_REPORT
