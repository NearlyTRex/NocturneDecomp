// Name: cockpit_ckptutil.c_mmxOptimizedMemcpy_FUN_00431622
// Address: 00431622
// MANUAL RECONSTRUCTION
// MMX-accelerated memcpy with 32-byte alignment handling and software prefetch.
// Copies in 32-byte chunks via movq (4x 8-byte loads/stores), with scalar
// fallback for unaligned head/tail bytes.

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_mmxOptimizedMemcpy_FUN_00431622(void *dest_buffer, void *src_buffer, int byte_count)
{
    memcpy(dest_buffer, src_buffer, byte_count);
}
