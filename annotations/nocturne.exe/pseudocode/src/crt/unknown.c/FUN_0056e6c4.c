// Name: crt_unknown.c_FUN_0056e6c4
// Address: 0056e6c4
// Address Range: [[0056e6c4, 0056e6e1]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_0056e6c4(void)

#include "nocturne.h"

void FUN_0056e6c4(void)

{
  if (g_INT_005c1ab8 != -1) {
    TlsFree(g_INT_005c1ab8);
    g_INT_005c1ab8 = -1;
  }
  return;
}
