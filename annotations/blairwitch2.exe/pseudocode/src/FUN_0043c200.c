// Name: FUN_0043c200
// Address: 0043c200
// Address Range: [[0043c200, 0043c32b]]
// Convention: unknown
// Signature: void FUN_0043c200(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043c200(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  byte bVar9;
  
  bVar9 = 0;
  _DAT_01467158 = _DAT_01467158 + -1;
  if (_DAT_01467158 == 0) {
    thunk_FUN_004ea570(DAT_0060b280);
    *(uint *)(param_1 + 0x1c0) = _DAT_01c35e38;
    *(uint *)(param_1 + 0x1c4) = _DAT_01c35e3c;
    *(uint *)(param_1 + 0x1c8) = _DAT_01c35e40;
    uVar3 = DAT_006141bc;
    *(uint *)(param_1 + 0x1cc) = _DAT_01c35e44;
    DAT_006141c0 = _DAT_0146715c;
    _DAT_01c37788 = _DAT_01467160;
    puVar6 = (uint *)&DAT_01467164;
    puVar7 = (uint *)&DAT_01c2a38c;
    for (uVar3 = uVar3 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(byte *)puVar7 = *(byte *)puVar6;
      puVar6 = (uint *)((int)puVar6 + (uint)bVar9 * -2 + 1);
      puVar7 = (uint *)((int)puVar7 + (uint)bVar9 * -2 + 1);
    }
    _DAT_01c35814 = _DAT_01468424;
    _DAT_01c35820 = _DAT_01468428;
    _DAT_01c3582c = _DAT_0146842c;
    if (param_2 != 0) {
      iVar4 = 0;
      if (0 < *(int *)(param_1 + 0x148)) {
        iVar8 = 0;
        do {
          iVar5 = *(int *)(param_1 + 0x144) * iVar4;
          piVar1 = (int *)(&DAT_01c2b64c + iVar8);
          iVar2 = *(int *)(param_1 + 0x144) * 4;
          iVar8 = iVar8 + 4;
          iVar4 = iVar4 + 1;
          FUN_00470201(iVar5 * 4 + *(int *)(param_1 + 0x15c),*piVar1 + iVar2,iVar2);
        } while (iVar4 < *(int *)(param_1 + 0x148));
      }
      if (_DAT_01c37788 != 0) {
        FUN_00560030(0);
        return;
      }
    }
  }
  return;
}
