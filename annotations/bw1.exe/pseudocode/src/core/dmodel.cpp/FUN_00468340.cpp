// Name: FUN_00468340
// Address: 00468340
// Address Range: [[00468340, 0046841c]]
// Convention: unknown
// Signature: void FUN_00468340(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00468340(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_005c0336(*(uint *)(param_1 + 0x358));
  *(uint *)(param_1 + 0x358) = 0;
  *(uint *)(param_1 + 0x354) = 0;
  if ((0 < *(int *)(param_1 + 0x110)) && (0 < *(int *)(param_1 + 0x100))) {
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x110)) {
      iVar2 = 0;
      do {
        iVar2 = iVar2 + 0x48;
        iVar1 = iVar1 + 1;
        *(int *)(param_1 + 0x354) =
             *(int *)(param_1 + 0x354) + *(int *)(*(int *)(param_1 + 0x114) + -0x44 + iVar2) + -2;
      } while (iVar1 < *(int *)(param_1 + 0x110));
    }
    iVar1 = FUN_005c1268(*(int *)(param_1 + 0x100) * *(int *)(param_1 + 0x354) * 0x38);
    *(int *)(param_1 + 0x358) = iVar1;
    if (iVar1 == 0) {
      _DAT_01d1d400 = "..\\core\\dmodel.cpp";
      _DAT_01d1d404 = 0x470;
      FUN_005030e0("CKeyFramedModel::buildCollisionTriList - out of memory");
    }
    FUN_00468420(param_1,&DAT_02c8af28);
  }
  return;
}
