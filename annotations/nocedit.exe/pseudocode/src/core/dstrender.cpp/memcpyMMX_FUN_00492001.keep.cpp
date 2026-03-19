// Name: core_dstrender.cpp_memcpyMMX_FUN_00492001
// Address: 00492001
// MANUAL RECONSTRUCTION
// MMX-accelerated memcpy (8 bytes per iteration via movq).
// Original includes manual software prefetch loop (touch every 32 bytes).

#include "nocturne.h"

void __cdecl core_dstrender_cpp_memcpyMMX_FUN_00492001(void *dest, void *src, int byte_count)
{
    memcpy(dest, src, byte_count);
}
