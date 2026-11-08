// Name: FUN_00429320
// Address: 00429320
// Address Range: [[00429320, 00429388]]
// Convention: unknown
// Signature: void FUN_00429320(int param_1,float param_2)

#include "nocturne.h"

void FUN_00429320(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x27c4);
  if (-1 < iVar2) {
    iVar1 = FUN_00503860(param_1 + 0x2b4);
    iVar2 = iVar2 * 0x118;
    *(float *)(param_1 + 0x27c8) =
         param_2 * *(float *)(iVar2 + 0x1c48 + iVar1) + *(float *)(param_1 + 0x27c8);
    if ((float)*(int *)(iVar2 + 0x1c8c + iVar1) <= *(float *)(param_1 + 0x27c8)) {
      *(uint *)(param_1 + 0x27c4) = 0xffffffff;
      return;
    }
  }
  return;
}
