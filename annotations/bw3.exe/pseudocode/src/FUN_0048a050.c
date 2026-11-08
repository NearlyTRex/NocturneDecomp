// Name: FUN_0048a050
// Address: 0048a050
// Address Range: [[0048a050, 0048a0fa]]
// Convention: unknown
// Signature: void FUN_0048a050(int param_1)

#include "nocturne.h"

void FUN_0048a050(int param_1)

{
  int iVar1;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  if (*(int *)(param_1 + 0xcde4) != 0) {
    FUN_00441ff0(PTR_DAT_005f1690,"CEnemy::stopGrabbing %s\n",*(int *)(param_1 + 0xcde4));
    iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xf4))
                      (*(int *)(param_1 + 0xcde4));
    if (iVar1 == param_1) {
      (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xf0))(*(int *)(param_1 + 0xcde4))
      ;
      if ((*(byte **)(param_1 + 0x68) == &DAT_0078a123) && (*(int *)(param_1 + 0x24f8) != 0)) {
        uStack_14 = 0;
        uStack_10 = 0;
        uStack_c = 0xba83126f;
        FUN_0042c230(param_1,&uStack_14);
      }
      *(uint *)(param_1 + 0xcde4) = 0;
      return;
    }
  }
  return;
}
