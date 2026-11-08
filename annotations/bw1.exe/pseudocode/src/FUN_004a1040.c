// Name: FUN_004a1040
// Address: 004a1040
// Address Range: [[004a1040, 004a10ea]]
// Convention: unknown
// Signature: void FUN_004a1040(int param_1)

#include "nocturne.h"

void FUN_004a1040(int param_1)

{
  int iVar1;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  if (*(int *)(param_1 + 0xc1e8) != 0) {
    FUN_00445430(PTR_DAT_00611100,"CEnemy::stopGrabbing %s\n",*(int *)(param_1 + 0xc1e8));
    iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0xf4))
                      (*(int *)(param_1 + 0xc1e8));
    if (iVar1 == param_1) {
      (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0xf0))(*(int *)(param_1 + 0xc1e8))
      ;
      if ((*(byte **)(param_1 + 0x68) == &DAT_0078a123) && (*(int *)(param_1 + 0x24f8) != 0)) {
        uStack_14 = 0;
        uStack_10 = 0;
        uStack_c = 0xba83126f;
        FUN_0042d750(param_1,&uStack_14);
      }
      *(uint *)(param_1 + 0xc1e8) = 0;
      return;
    }
  }
  return;
}
