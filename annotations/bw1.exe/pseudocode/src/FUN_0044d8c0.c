// Name: FUN_0044d8c0
// Address: 0044d8c0
// Address Range: [[0044d8c0, 0044d9eb]]
// Convention: unknown
// Signature: void FUN_0044d8c0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044d8c0(int param_1,int param_2)

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
  _DAT_01482658 = _DAT_01482658 + -1;
  if (_DAT_01482658 == 0) {
    thunk_FUN_00509210(DAT_00612560);
    *(uint *)(param_1 + 0x1c0) = _DAT_01c4eff8;
    *(uint *)(param_1 + 0x1c4) = _DAT_01c4effc;
    *(uint *)(param_1 + 0x1c8) = _DAT_01c4f000;
    uVar3 = DAT_0061b49c;
    *(uint *)(param_1 + 0x1cc) = _DAT_01c4f004;
    DAT_0061b4a0 = _DAT_0148265c;
    _DAT_01c50948 = _DAT_01482660;
    puVar6 = (uint *)&DAT_01482664;
    puVar7 = (uint *)&DAT_01c4354c;
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
    _DAT_01c4e9d4 = _DAT_01483924;
    _DAT_01c4e9e0 = _DAT_01483928;
    _DAT_01c4e9ec = _DAT_0148392c;
    if (param_2 != 0) {
      iVar4 = 0;
      if (0 < *(int *)(param_1 + 0x148)) {
        iVar8 = 0;
        do {
          iVar5 = *(int *)(param_1 + 0x144) * iVar4;
          piVar1 = (int *)(&DAT_01c4480c + iVar8);
          iVar2 = *(int *)(param_1 + 0x144) * 4;
          iVar8 = iVar8 + 4;
          iVar4 = iVar4 + 1;
          FUN_004886f1(iVar5 * 4 + *(int *)(param_1 + 0x15c),*piVar1 + iVar2,iVar2);
        } while (iVar4 < *(int *)(param_1 + 0x148));
      }
      if (_DAT_01c50948 != 0) {
        FUN_00582a80(0);
        return;
      }
    }
  }
  return;
}
