// Name: FUN_004889d0
// Address: 004889d0
// Address Range: [[004889d0, 00488a7a]]
// Convention: unknown
// Signature: void FUN_004889d0(int param_1)

#include "nocturne.h"

void FUN_004889d0(int param_1)

{
  int iVar1;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  if (*(int *)(param_1 + 0x10a78) != 0) {
    FUN_00436710(PTR_DAT_00609ed0,"CEnemy::stopGrabbing %s\n",*(int *)(param_1 + 0x10a78));
    iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0xfc))
                      (*(int *)(param_1 + 0x10a78));
    if (iVar1 == param_1) {
      (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0xf8))
                (*(int *)(param_1 + 0x10a78));
      if ((*(byte **)(param_1 + 0x68) == &DAT_0078a123) && (*(int *)(param_1 + 0x2564) != 0)) {
        uStack_14 = 0;
        uStack_10 = 0;
        uStack_c = 0xba83126f;
        FUN_00423a60(param_1,&uStack_14);
      }
      *(uint *)(param_1 + 0x10a78) = 0;
      return;
    }
  }
  return;
}
