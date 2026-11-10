// Name: crt_unknown.c_FUN_005c20d0
// Address: 005c20d0
// Address Range: [[005c20d0, 005c2115]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c20d0(void *param_1,byte *param_2)

#include "nocturne.h"

void FUN_005c20d0(void *param_1,byte *param_2)

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
         *(byte *)(((int)(uint)bVar1 >> 3) + (int)param_1) | (&DAT_00601428)[bVar1 & 7];
    bVar1 = *param_2;
  } while (bVar1 != 0);
  return;
}
