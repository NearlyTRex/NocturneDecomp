// Name: FUN_0044a2d0
// Address: 0044a2d0
// Address Range: [[0044a2d0, 0044a3d1]]
// Convention: unknown
// Signature: void FUN_0044a2d0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044a2d0(int param_1)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  ushort uVar5;
  
  if (*(int *)(param_1 + 0x11e4) == 0) {
    _DAT_01d046a0 = "..\\core\\dlight.cpp";
    _DAT_01d046a4 = 0x165;
    FUN_004e4500("CDemonLight::endScene - Scene not open");
  }
  if (*(int *)(param_1 + 0x168) == 0) {
    puVar3 = *(ushort **)(param_1 + 0x2f94);
    uVar5 = 0;
    for (iVar4 = *(int *)(param_1 + 0x1cc0) * *(int *)(param_1 + 0x1cc4); 0 < iVar4;
        iVar4 = iVar4 + -1) {
      uVar1 = *puVar3;
      if ((uVar1 != 0xffff) && (uVar5 < uVar1)) {
        uVar5 = uVar1;
      }
      puVar3 = puVar3 + 1;
    }
    *(float *)(param_1 + 0x140) = (float)uVar5 * (float)_DAT_005cf35f;
  }
  FUN_0046b940(DAT_0060b280,0);
  thunk_FUN_004ea570(DAT_0060b280);
  iVar2 = 0;
  iVar4 = param_1;
  if (0 < *(int *)(param_1 + 0x1cc4)) {
    do {
      *(uint *)(&DAT_01c2a38c + iVar2 * 4) = *(uint *)(iVar4 + 0x1cd4);
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar2 < *(int *)(param_1 + 0x1cc4));
  }
  FUN_0043b7d0(param_1);
  *(uint *)(param_1 + 0x11e4) = 0;
  return;
}
