#pragma once

// =============================================================================
// HEAP REPORT — the memory line, measured on the host allocator
// =============================================================================
//
// CEditorTools::displayMemoryDiagnostics walks the Watcom heap with _heapwalk,
// counting the free blocks and their sizes, and prints
// "Blocks: n Total: n.nk Max: n.nk" — or "Heap is empty." when the walk turns
// up nothing.
//
// _heapwalk asks a question the host cannot answer. It enumerates the Watcom
// runtime's own heap, block by block; here the game allocates through the C
// library, whose heap has no portable walk. The shim in shims/watcom/watcom.cpp
// therefore returns _HEAPEND straight away, and because the shipped code only
// prints its figures when the walk found at least one free block, the line
// always reads "Heap is empty." — never anything else, whatever the game is
// doing.
//
// This reports what the host allocator can actually be asked for instead. The
// fields are not the shipped ones, because the shipped ones describe free
// blocks in a heap that is not there:
//
//   Used    bytes handed out and not yet returned
//   Free    bytes held by the allocator and not handed out
//   Blocks  free chunks the allocator is holding (libc)
//   Heap    bytes the allocator has taken from the system (sanitizer)
//
// Gated by NOCTURNE_AUTHENTIC_HEAP_REPORT at the call site, so the shipped walk
// and its "Heap is empty." remain available.
//
// ASK THE ALLOCATOR THAT IS SERVING THE GAME. A sanitizer build replaces malloc
// wholesale, so the C library's own accounting describes an arena nothing uses
// any more and every figure reads zero. That is the default preset, so the
// sanitizer's allocator interface is the normal path here and mallinfo2 the
// fallback, not the other way round.
//
// COUNT THE MMAPPED BYTES. mallinfo2's uordblks covers the main arena only;
// anything past the mmap threshold is served separately and counted in hblkhd.
// Most of what a level load asks for is over that threshold, so a report
// without hblkhd misses the bulk of it -- 4 MB against 82 MB on a spread of
// 20000 small blocks and 20 large ones.
//
// Off glibc and off the sanitizer the line says it has no figures rather than
// printing zeroes, since a zero here is indistinguishable from a real
// measurement of an idle heap.

#ifdef __cplusplus
extern "C" {
#endif

// Writes the memory line into `out`. Always writes something printable.
void nocturne_heap_report(char *out, int out_size);

#ifdef __cplusplus
}
#endif
