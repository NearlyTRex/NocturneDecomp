// Name: FUN_0045c7e0
// Address: 0045c7e0
// Address Range: [[0045c7e0, 0045c8e1]]
// Convention: unknown
// Signature: void FUN_0045c7e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045c7e0(int param_1)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  ushort uVar5;
  
  if (*(int *)(param_1 + 0x11e4) == 0) {
    _DAT_01d71de0 = "..\\core\\dlight.cpp";
    _DAT_01d71de4 = 0x164;
    FUN_004e4330("CDemonLight::endScene - Scene not open");
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
    *(float *)(param_1 + 0x140) = (float)uVar5 * (float)_DAT_005bb394;
  }
  FUN_0046d520(DAT_005f2afc,0);
  thunk_FUN_004e6c50(DAT_005f2afc);
  iVar2 = 0;
  iVar4 = param_1;
  if (0 < *(int *)(param_1 + 0x1cc4)) {
    do {
      *(uint *)(&DAT_01c5faec + iVar2 * 4) = *(uint *)(iVar4 + 0x1cd4);
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar2 < *(int *)(param_1 + 0x1cc4));
  }
  FUN_00448fd0(param_1);
  *(uint *)(param_1 + 0x11e4) = 0;
  return;
}
