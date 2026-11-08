// Name: FUN_00431490
// Address: 00431490
// Address Range: [[00431490, 004314e4]]
// Convention: unknown
// Signature: void FUN_00431490(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_00431490(int param_1,int param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = param_1 + 0x25a8;
  do {
    while (param_2 == *(int *)(iVar1 + 8)) {
      (**(code **)(*(int *)(*(int *)(iVar1 + 8) + 0x154) + 0x8c))(param_2,param_3);
      *(uint *)(iVar1 + 8) = 0;
      iVar1 = iVar1 + 0x78;
      if (iVar1 == param_1 + 0x2698) {
        return;
      }
    }
    iVar1 = iVar1 + 0x78;
  } while (iVar1 != param_1 + 0x2698);
  return;
}
