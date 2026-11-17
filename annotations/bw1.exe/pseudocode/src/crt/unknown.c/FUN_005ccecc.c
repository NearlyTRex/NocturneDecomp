// Name: crt_unknown.c_FUN_005ccecc
// Address: 005ccecc
// Address Range: [[005ccecc, 005ccf1f]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005ccecc(undefined *param_1)

#include "nocturne.h"

void FUN_005ccecc(byte *param_1)

{
  byte **ppuVar1;
  byte **ptr;
  
  (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626628)();
  ppuVar1 = &g_PTR_02c9ffa0;
  ptr = (byte **)g_PTR_02c9ffa0;
  do {
    if (ptr == (byte **)0x0) {
LAB_005ccf16:
      (*(code *)PTR_crt_unknown_c_FUN_005c50d4_0062662c)();
      return;
    }
    if (param_1 == ptr[1]) {
      if (ptr[3] != (byte *)0x0) {
        debugFree(ptr[2]);
      }
      *ppuVar1 = *ptr;
      debugFree(ptr);
      goto LAB_005ccf16;
    }
    ppuVar1 = ptr;
    ptr = (byte **)*ptr;
  } while( true );
}
