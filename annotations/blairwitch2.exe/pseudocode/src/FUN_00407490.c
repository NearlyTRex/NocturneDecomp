// Name: FUN_00407490
// Address: 00407490
// Address Range: [[00407490, 00407638]]
// Convention: unknown
// Signature: int FUN_00407490(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00407490(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int *piVar7;
  uint *puVar8;
  uint *puVar9;
  byte bVar10;
  
  bVar10 = 0;
  piVar7 = (int *)(param_1 + 0x18);
  iVar2 = FUN_00403970(param_1 + 8);
  if (iVar2 != 0) {
    if (_DAT_01c38b40 == 0) {
      if (DAT_006141c0 == 0x20) {
        _DAT_01c35e6c = FUN_0055d0b3;
      }
      else {
        _DAT_01c35e6c = FUN_0055d2e9;
      }
    }
    else if (DAT_006141c0 == 0x20) {
      _DAT_01c35e6c = (code *)&LAB_0055b3b1;
    }
    else {
      _DAT_01c35e6c = (code *)&LAB_0055bb93;
    }
    _DAT_01c38b58 = 1;
    _DAT_01c38b54 = 0x1e7;
    if (((DAT_0070caf8 == 0) || (0x9c3 < DAT_0070cafc)) || (4 < *(int *)(param_1 + 4))) {
      FUN_00431d90(*(uint *)(param_1 + 4),piVar7);
    }
    else {
      iVar3 = DAT_0070cafc * 0x118;
      puVar5 = (uint *)(&DAT_0070cb00 + iVar3);
      DAT_0070cafc = DAT_0070cafc + 1;
      *puVar5 = *(uint *)(param_1 + 4);
      iVar2 = 0x7fffffff;
      iVar6 = 0;
      if (0 < *(int *)(param_1 + 4)) {
        do {
          puVar8 = &DAT_00622014 + *piVar7 * 0xc;
          puVar9 = puVar5 + 1;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
            puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
          }
          if ((int)puVar5[3] < iVar2) {
            iVar2 = puVar5[3];
          }
          puVar5 = puVar5 + 0xc;
          iVar6 = iVar6 + 1;
          piVar7 = piVar7 + 1;
        } while (iVar6 < *(int *)(param_1 + 4));
      }
      puVar5 = (uint *)FUN_005750e0();
      uVar1 = DAT_006141d8;
      puVar8 = (uint *)(&DAT_0070cbc4 + iVar3);
      for (iVar6 = 0x12; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar8 = *puVar5;
        puVar5 = puVar5 + (uint)bVar10 * -2 + 1;
        puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      }
      *(uint *)(&DAT_0070cc0c + iVar3) = uVar1;
      *(int *)(&DAT_0070cc14 + iVar3) = iVar2;
      *(uint *)(&DAT_0070cc10 + iVar3) = _DAT_01c38b4c;
    }
  }
  return param_1 + 0x18 + *(int *)(param_1 + 4) * 0xc;
}
