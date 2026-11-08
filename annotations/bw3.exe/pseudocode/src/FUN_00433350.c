// Name: FUN_00433350
// Address: 00433350
// Address Range: [[00433350, 004333d6]]
// Convention: unknown
// Signature: void FUN_00433350(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00433350(int param_1,uint param_2)

{
  int iVar1;
  
  FUN_004320d0(param_1);
  FUN_00433000(param_1);
  FUN_0054dd10(param_1 + 0x158);
  FUN_004322a0(param_1);
  FUN_00431d10(param_1,param_2);
  if (*(int *)(param_1 + 0x27bc) == 0) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x154) + 0x10c))(param_1);
    if (iVar1 != 1) {
      return;
    }
  }
  FUN_0043fc00(param_1 + 0x2f08,param_1 + 0x20,param_1 + 0x30,param_2,
               *(uint *)(param_1 + 0x2504),param_1 + 0x158);
  return;
}
