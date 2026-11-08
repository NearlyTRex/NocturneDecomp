// Name: FUN_00427a60
// Address: 00427a60
// Address Range: [[00427a60, 00427ab4]]
// Convention: unknown
// Signature: void FUN_00427a60(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_00427a60(int param_1,int param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = param_1 + 0x2618;
  do {
    while (param_2 == *(int *)(iVar1 + 8)) {
      (**(code **)(*(int *)(*(int *)(iVar1 + 8) + 0x2b0) + 0x94))(param_2,param_3);
      *(uint *)(iVar1 + 8) = 0;
      iVar1 = iVar1 + 0x78;
      if (iVar1 == param_1 + 0x2708) {
        return;
      }
    }
    iVar1 = iVar1 + 0x78;
  } while (iVar1 != param_1 + 0x2708);
  return;
}
