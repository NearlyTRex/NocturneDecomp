// Name: FUN_00440c50
// Address: 00440c50
// Address Range: [[00440c50, 00440d3b]]
// Convention: unknown
// Signature: void FUN_00440c50(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00440c50(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  
  _DAT_0140efa8 = _DAT_0140efa8 + -1;
  if (_DAT_0140efa8 == 0) {
    DAT_005b7624 = _DAT_0140efac;
    _DAT_01c02594 = _DAT_0140efb0;
    puVar6 = (uint *)&DAT_0140efb4;
    puVar7 = (uint *)&DAT_01bd2fa0;
    for (uVar3 = DAT_005b7620 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(byte *)puVar7 = *(byte *)puVar6;
      puVar6 = (uint *)((int)puVar6 + 1);
      puVar7 = (uint *)((int)puVar7 + 1);
    }
    _DAT_01c00624 = _DAT_01410274;
    _DAT_01c00630 = _DAT_01410278;
    _DAT_01c0063c = _DAT_0141027c;
    if (param_2 != 0) {
      iVar4 = 0;
      if (0 < *(int *)(param_1 + 0x140)) {
        do {
          iVar5 = *(int *)(param_1 + 0x13c) * iVar4;
          iVar1 = *(int *)(param_1 + 0x148) + iVar4;
          iVar2 = *(int *)(param_1 + 0x13c) * 4;
          iVar4 = iVar4 + 1;
          FUN_00465341(iVar5 * 4 + *(int *)(param_1 + 0x15c),
                       *(int *)(&DAT_01bd4260 + iVar1 * 4) + iVar2,iVar2);
        } while (iVar4 < *(int *)(param_1 + 0x140));
      }
      if (_DAT_01c02594 != 0) {
        FUN_00532c70(0);
        return;
      }
    }
  }
  return;
}
