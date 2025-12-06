// Name: crt_unknown.c_FUN_0060a394
// Address: 0060a394
// Address Range: [[0060a394, 0060a3b1]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060a394()

#include "nocturne.h"

void crt_unknown_c_FUN_0060a394(void)

{
  if (g_TLSIndex != 0xffffffff) {
    (*PTR_TlsFree_00611650)(g_TLSIndex);
    g_TLSIndex = 0xffffffff;
  }
  return;
}
