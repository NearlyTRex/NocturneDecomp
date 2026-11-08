// Name: FUN_0044f760
// Address: 0044f760
// Address Range: [[0044f760, 0044f83c]]
// Convention: unknown
// Signature: void FUN_0044f760(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044f760(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_005b7fce(*(uint *)(param_1 + 0x358));
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
    iVar1 = FUN_005b8df8(*(int *)(param_1 + 0x100) * *(int *)(param_1 + 0x354) * 0x38);
    *(int *)(param_1 + 0x358) = iVar1;
    if (iVar1 == 0) {
      _DAT_01d046a0 = "..\\core\\dmodel.cpp";
      _DAT_01d046a4 = 0x470;
      FUN_004e4500("CKeyFramedModel::buildCollisionTriList - out of memory");
    }
    FUN_0044f840(param_1,&DAT_0265370c);
  }
  return;
}
