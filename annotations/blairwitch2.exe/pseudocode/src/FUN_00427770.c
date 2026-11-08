// Name: FUN_00427770
// Address: 00427770
// Address Range: [[00427770, 004277d9]]
// Convention: unknown
// Signature: void FUN_00427770(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_00427770(int param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  if ((*(char *)(param_1 + 0x2514) != '\0') && (*(int *)(param_1 + 0x23f4 + param_2 * 4) != 0)) {
    uVar1 = FUN_004154f0(param_1 + 0x20,param_1 + 0x30,param_3,param_1,0,0,
                         *(uint *)(param_1 + 0x280c));
    FUN_004277e0(param_1,uVar1,param_2,param_4);
    FUN_00416700(uVar1);
    return;
  }
  return;
}
