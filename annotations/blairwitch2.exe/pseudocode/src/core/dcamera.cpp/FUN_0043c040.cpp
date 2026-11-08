// Name: FUN_0043c040
// Address: 0043c040
// Address Range: [[0043c040, 0043c1f6]]
// Convention: unknown
// Signature: void FUN_0043c040(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043c040(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  
  bVar7 = 0;
  if (*(int *)(param_1 + 0x11e4) == 0) {
    _DAT_01d046a0 = "..\\core\\dcamera.cpp";
    _DAT_01d046a4 = 0x432;
    FUN_004e4500("CDemonCamera::beginBackgroundScene - Scene not open");
  }
  _DAT_01467158 = _DAT_01467158 + 1;
  if (_DAT_01467158 == 1) {
    _DAT_0146715c = DAT_006141c0;
    _DAT_01467160 = _DAT_01c37788;
    puVar5 = (uint *)&DAT_01c2a38c;
    puVar6 = (uint *)&DAT_01467164;
    for (uVar2 = DAT_006141bc & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(byte *)puVar6 = *(byte *)puVar5;
      puVar5 = (uint *)((int)puVar5 + (uint)bVar7 * -2 + 1);
      puVar6 = (uint *)((int)puVar6 + (uint)bVar7 * -2 + 1);
    }
    _DAT_01468424 = _DAT_01c35814;
    DAT_006141c0 = 0x20;
    _DAT_01c37788 = 0;
    _DAT_01468428 = _DAT_01c35820;
    _DAT_01c35820 = 8;
    _DAT_0146842c = _DAT_01c3582c;
    _DAT_01c3582c = 0;
    _DAT_01c35814 = 0x10;
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x148)) {
      iVar4 = 0;
      do {
        *(int *)(&DAT_01c2a38c + iVar4) =
             *(int *)(param_1 + 0x158) + *(int *)(param_1 + 0x144) * iVar3 * 4;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar3 < *(int *)(param_1 + 0x148));
    }
    FUN_0046b710(DAT_0060b280,0,0,*(int *)(param_1 + 0x144) + -1,*(int *)(param_1 + 0x148) + -1);
    uVar1 = DAT_0060b280;
    *(uint *)(param_1 + 0x1c0) = _DAT_01c35e38;
    *(uint *)(param_1 + 0x1c4) = _DAT_01c35e3c;
    *(uint *)(param_1 + 0x1c8) = _DAT_01c35e40;
    *(uint *)(param_1 + 0x1cc) = _DAT_01c35e44;
    FUN_0046cca0(uVar1,0x1468440);
    FUN_0046afb0(DAT_0060b280,param_1 + 4);
    FUN_0046b4b0(DAT_0060b280,*(uint *)(param_1 + 0x38));
    FUN_0046b060(DAT_0060b280,param_1 + 0x10);
  }
  return;
}
