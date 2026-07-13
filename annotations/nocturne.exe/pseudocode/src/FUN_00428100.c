// Name: FUN_00428100
// Address: 00428100
// Address Range: [[00428100, 00428154]]
// Convention: unknown
// Signature: void FUN_00428100(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_00428100(int param_1,int param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = param_1 + 0x24a4;
  do {
    while (param_2 == *(int *)(iVar1 + 8)) {
      (**(code **)(*(int *)(*(int *)(iVar1 + 8) + 0x14c) + 0x84))(param_2,param_3);
      *(uint *)(iVar1 + 8) = 0;
      iVar1 = iVar1 + 0x44;
      if (iVar1 == param_1 + 0x252c) {
        return;
      }
    }
    iVar1 = iVar1 + 0x44;
  } while (iVar1 != param_1 + 0x252c);
  return;
}
