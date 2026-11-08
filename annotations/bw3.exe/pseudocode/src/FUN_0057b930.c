// Name: FUN_0057b930
// Address: 0057b930
// Address Range: [[0057b930, 0057b9fc]]
// Convention: unknown
// Signature: undefined4 FUN_0057b930(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0057b930(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040c840(*(uint *)(param_1 + 0x304),_DAT_01d5ba70);
  if ((0.0 < *(float *)(param_1 + 0x300)) ||
     (((iVar1 != 0 && (*(int *)(iVar1 + 0x20b60) != 0)) && (*(int *)(param_1 + 0x56c) == 10)))) {
    return 0;
  }
  if (*(int *)(param_1 + 0x590) != 0) {
    iVar1 = FUN_0040c840(*(uint *)(param_1 + 0x304),_DAT_01d5ba70);
    if (iVar1 != 0) {
      if ((*(int *)(param_1 + 0x56c) == 10) &&
         (*(int *)(iVar1 + 0x20b80) < *(int *)(param_1 + 0x58c))) {
        FUN_005609d0(0x02CF5680,param_1,"=wp_nomana.wav" + 1,param_1 + 0x20);
        *(uint *)(param_1 + 0x300) = 0x3f800000;
        return 0;
      }
      if ((*(int *)(param_1 + 0x56c) == 0xb) &&
         (*(int *)(iVar1 + 0x20b84) < *(int *)(param_1 + 0x58c))) {
        return 0;
      }
    }
  }
  return 1;
}
