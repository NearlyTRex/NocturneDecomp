// Name: crt_unknown.c_FUN_005c2a94
// Address: 005c2a94
// Address Range: [[005c2a94, 005c2ab1]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c2a94(void)

#include "nocturne.h"

void FUN_005c2a94(void)

{
  if (g_INT_0061f2a0 != -1) {
    TlsFree(g_INT_0061f2a0);
    g_INT_0061f2a0 = -1;
  }
  return;
}
