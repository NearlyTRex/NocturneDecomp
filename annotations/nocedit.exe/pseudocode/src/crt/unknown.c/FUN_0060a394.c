// Name: crt_unknown.c_FUN_0060a394
// Address: 0060a394
// Address Range: [[0060a394, 0060a3b1]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_0060a394(void)

#include "nocturne.h"

void crt_unknown_c_FUN_0060a394(void)

{
  if (g_TLSIndex != 0xffffffff) {
    (*g_TlsFreeFunc)(g_TLSIndex);
    g_TLSIndex = 0xffffffff;
  }
  return;
}
