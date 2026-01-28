// Name: crt_tls.c_allocate_tls_index_FUN_0060a27c
// Address: 0060a27c
// Address Range: [[0060a27c, 0060a2d5]]
// Convention: __cdecl
// Signature: BOOL __cdecl crt_tls_c_allocate_tls_index_FUN_0060a27c(void)

#include "nocturne.h"

BOOL __cdecl crt_tls_c_allocate_tls_index_FUN_0060a27c(void)

{
  if (g_TLSIndex == 0xffffffff) {
    g_TLSIndex = (*g_TlsAllocFunc)();
    if ((0x7fff < g_WindowsPlatformVersion) && (g_WindowsMinorVersion < 4)) {
      while ((g_TLSIndex != 0xffffffff && (g_TLSIndex < 3))) {
        g_TLSIndex = (*g_TlsAllocFunc)();
      }
    }
  }
  return (uint)(g_TLSIndex != 0xffffffff);
}
