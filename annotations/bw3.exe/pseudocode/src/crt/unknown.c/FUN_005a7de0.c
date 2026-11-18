// Name: crt_unknown.c_FUN_005a7de0
// Address: 005a7de0
// Address Range: [[005a7de0, 005a7e23]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005a7de0(void)

#include "nocturne.h"

void FUN_005a7de0(void)

{
  byte bVar1;
  
  if (g_BYTE_006075c0 == 0) {
    g_BYTE_006075c1 = g_BYTE_006075c0;
    bVar1 = FUN_005a7da4();
    if (DAT_00607978 == '\0') {
      g_BYTE_006075c0 = bVar1;
      g_BYTE_006075c1 = bVar1;
    }
  }
  return;
}
