// Name: crt_unknown.c_FUN_0056ada0
// Address: 0056ada0
// Address Range: [[0056ada0, 0056ade3]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_0056ada0(void)

#include "nocturne.h"

void FUN_0056ada0(void)

{
  byte bVar1;
  
  if (g_BYTE_005c1794 == 0) {
    g_BYTE_005c1795 = g_BYTE_005c1794;
    bVar1 = FUN_0056ad64();
    if (DAT_005c1d04 == '\0') {
      g_BYTE_005c1794 = bVar1;
      g_BYTE_005c1795 = bVar1;
    }
  }
  return;
}
