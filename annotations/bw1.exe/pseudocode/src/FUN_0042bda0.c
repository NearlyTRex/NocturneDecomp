// Name: FUN_0042bda0
// Address: 0042bda0
// Address Range: [[0042bda0, 0042be00]]
// Convention: unknown
// Signature: undefined4 FUN_0042bda0(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

uint FUN_0042bda0(int param_1,uint param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 1) {
    iVar1 = *(int *)(param_1 + 0xc1e8);
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*(int *)(iVar1 + 0x154) + 0xf4))(iVar1);
      if (iVar1 == param_1) {
        (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0xf0))
                  (*(int *)(param_1 + 0xc1e8));
      }
    }
    *(uint *)(param_1 + 0x26fc) = param_2;
    *(uint *)(param_1 + 0x2700) = 1;
    return 1;
  }
  return 0;
}
