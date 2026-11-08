// Name: FUN_00599c60
// Address: 00599c60
// Address Range: [[00599c60, 00599cc0]]
// Convention: unknown
// Signature: undefined4 FUN_00599c60(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

uint FUN_00599c60(int param_1,uint param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 1) {
    iVar1 = *(int *)(param_1 + 0x10a78);
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0xfc))(iVar1);
      if (iVar1 == param_1) {
        (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0xf8))
                  (*(int *)(param_1 + 0x10a78));
      }
    }
    *(uint *)(param_1 + 0x276c) = param_2;
    *(uint *)(param_1 + 0x2770) = 1;
    return 1;
  }
  return 0;
}
