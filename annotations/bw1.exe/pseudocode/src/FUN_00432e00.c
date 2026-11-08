// Name: FUN_00432e00
// Address: 00432e00
// Address Range: [[00432e00, 00432e79]]
// Convention: unknown
// Signature: void FUN_00432e00(int param_1,float param_2)

#include "nocturne.h"

void FUN_00432e00(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x2754);
  if (-1 < iVar2) {
    iVar1 = FUN_00524a00(param_1 + 0x158);
    iVar2 = iVar2 * 0x120;
    *(float *)(param_1 + 0x2758) =
         param_2 * *(float *)(iVar2 + 0x1c48 + iVar1) + *(float *)(param_1 + 0x2758);
    if ((float)*(int *)(iVar2 + 0x1c8c + iVar1) <= *(float *)(param_1 + 0x2758)) {
      if (*(int *)(param_1 + 0x275c) != 1) {
        *(uint *)(param_1 + 0x2754) = 0xffffffff;
        return;
      }
      *(uint *)(param_1 + 0x2758) = 0;
      return;
    }
  }
  return;
}
