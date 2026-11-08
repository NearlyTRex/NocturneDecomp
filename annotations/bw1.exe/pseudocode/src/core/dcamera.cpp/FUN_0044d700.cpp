// Name: FUN_0044d700
// Address: 0044d700
// Address Range: [[0044d700, 0044d8b6]]
// Convention: unknown
// Signature: void FUN_0044d700(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044d700(int param_1)

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
    _DAT_01d1d400 = "..\\core\\dcamera.cpp";
    _DAT_01d1d404 = 0x436;
    FUN_005030e0("CDemonCamera::beginBackgroundScene - Scene not open");
  }
  _DAT_01482658 = _DAT_01482658 + 1;
  if (_DAT_01482658 == 1) {
    _DAT_0148265c = DAT_0061b4a0;
    _DAT_01482660 = _DAT_01c50948;
    puVar5 = (uint *)&DAT_01c4354c;
    puVar6 = (uint *)&DAT_01482664;
    for (uVar2 = DAT_0061b49c & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(byte *)puVar6 = *(byte *)puVar5;
      puVar5 = (uint *)((int)puVar5 + (uint)bVar7 * -2 + 1);
      puVar6 = (uint *)((int)puVar6 + (uint)bVar7 * -2 + 1);
    }
    _DAT_01483924 = _DAT_01c4e9d4;
    DAT_0061b4a0 = 0x20;
    _DAT_01c50948 = 0;
    _DAT_01483928 = _DAT_01c4e9e0;
    _DAT_01c4e9e0 = 8;
    _DAT_0148392c = _DAT_01c4e9ec;
    _DAT_01c4e9ec = 0;
    _DAT_01c4e9d4 = 0x10;
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x148)) {
      iVar4 = 0;
      do {
        *(int *)(&DAT_01c4354c + iVar4) =
             *(int *)(param_1 + 0x158) + *(int *)(param_1 + 0x144) * iVar3 * 4;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar3 < *(int *)(param_1 + 0x148));
    }
    FUN_00483c10(DAT_00612560,0,0,*(int *)(param_1 + 0x144) + -1,*(int *)(param_1 + 0x148) + -1);
    uVar1 = DAT_00612560;
    *(uint *)(param_1 + 0x1c0) = _DAT_01c4eff8;
    *(uint *)(param_1 + 0x1c4) = _DAT_01c4effc;
    *(uint *)(param_1 + 0x1c8) = _DAT_01c4f000;
    *(uint *)(param_1 + 0x1cc) = _DAT_01c4f004;
    FUN_004851a0(uVar1,0x1483940);
    FUN_004834b0(DAT_00612560,param_1 + 4);
    FUN_004839b0(DAT_00612560,*(uint *)(param_1 + 0x38));
    FUN_00483560(DAT_00612560,param_1 + 0x10);
  }
  return;
}
