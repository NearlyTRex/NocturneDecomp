// Name: crt_unknown.c_FUN_00607080
// Address: 00607080
// Address Range: [[00607080, 006070c5]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_00607080(void *param_1,byte *param_2)

#include "nocturne.h"

void FUN_00607080(void *param_1,byte *param_2)

{
  byte bVar1;
  
  memset(param_1,0,0x20);
  bVar1 = *param_2;
  if (bVar1 == 0) {
    return;
  }
  do {
    param_2 = param_2 + 1;
    *(byte *)(((int)(uint)bVar1 >> 3) + (int)param_1) =
         *(byte *)(((int)(uint)bVar1 >> 3) + (int)param_1) |
         *(byte *)((int)&DOUBLE_00665f28 + (uint)(bVar1 & 7));
    bVar1 = *param_2;
  } while (bVar1 != 0);
  return;
}
