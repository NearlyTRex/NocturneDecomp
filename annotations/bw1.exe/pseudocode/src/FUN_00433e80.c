// Name: FUN_00433e80
// Address: 00433e80
// Address Range: [[00433e80, 00433f06]]
// Convention: unknown
// Signature: void FUN_00433e80(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00433e80(int param_1,uint param_2)

{
  int iVar1;
  
  FUN_00432cb0(param_1);
  FUN_00433b30(param_1);
  FUN_00569180(param_1 + 0x158);
  FUN_00432e80(param_1);
  FUN_004328f0(param_1,param_2);
  if (*(int *)(param_1 + 0x27bc) == 0) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x154) + 0x10c))(param_1);
    if (iVar1 != 1) {
      return;
    }
  }
  FUN_00441fa0(param_1 + 0x2ca0,param_1 + 0x20,param_1 + 0x30,param_2,
               *(uint *)(param_1 + 0x2504),param_1 + 0x158);
  return;
}
