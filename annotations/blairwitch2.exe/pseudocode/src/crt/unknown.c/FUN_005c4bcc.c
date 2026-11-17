// Name: crt_unknown.c_FUN_005c4bcc
// Address: 005c4bcc
// Address Range: [[005c4bcc, 005c4c1f]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c4bcc(undefined *param_1)

#include "nocturne.h"

void FUN_005c4bcc(byte *param_1)

{
  byte **ppuVar1;
  byte **ptr;
  
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2d0)();
  ppuVar1 = &g_PTR_026810b0;
  ptr = (byte **)g_PTR_026810b0;
  do {
    if (ptr == (byte **)0x0) {
LAB_005c4c16:
      (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2d4)();
      return;
    }
    if (param_1 == ptr[1]) {
      if (ptr[3] != (byte *)0x0) {
        debugFree(ptr[2]);
      }
      *ppuVar1 = *ptr;
      debugFree(ptr);
      goto LAB_005c4c16;
    }
    ppuVar1 = ptr;
    ptr = (byte **)*ptr;
  } while( true );
}
