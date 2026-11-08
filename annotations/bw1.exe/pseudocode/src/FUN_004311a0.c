// Name: FUN_004311a0
// Address: 004311a0
// Address Range: [[004311a0, 00431209]]
// Convention: unknown
// Signature: void FUN_004311a0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_004311a0(int param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  if ((*(char *)(param_1 + 0x24a8) != '\0') && (*(int *)(param_1 + 0x2298 + param_2 * 4) != 0)) {
    uVar1 = FUN_00418940(param_1 + 0x20,param_1 + 0x30,param_3,param_1,0,0,
                         *(uint *)(param_1 + 0x27a0));
    FUN_00431210(param_1,uVar1,param_2,param_4);
    FUN_00419b90(uVar1);
    return;
  }
  return;
}
