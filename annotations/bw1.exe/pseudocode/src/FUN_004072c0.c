// Name: FUN_004072c0
// Address: 004072c0
// Address Range: [[004072c0, 00407468]]
// Convention: unknown
// Signature: int FUN_004072c0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004072c0(int param_1)

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
  iVar2 = FUN_00403920(param_1 + 8);
  if (iVar2 != 0) {
    if (_DAT_01c51d00 == 0) {
      if (DAT_0061b4a0 == 0x20) {
        _DAT_01c4f02c = FUN_0057fb03;
      }
      else {
        _DAT_01c4f02c = FUN_0057fd39;
      }
    }
    else if (DAT_0061b4a0 == 0x20) {
      _DAT_01c4f02c = (code *)&LAB_0057de01;
    }
    else {
      _DAT_01c4f02c = (code *)&LAB_0057e5e3;
    }
    _DAT_01c51d18 = 1;
    _DAT_01c51d14 = 0x1e7;
    if (((DAT_00713af8 == 0) || (0x9c3 < DAT_00713afc)) || (4 < *(int *)(param_1 + 4))) {
      FUN_0043cbf0(*(uint *)(param_1 + 4),piVar7);
    }
    else {
      iVar3 = DAT_00713afc * 0x118;
      puVar5 = (uint *)(&DAT_00713b00 + iVar3);
      DAT_00713afc = DAT_00713afc + 1;
      *puVar5 = *(uint *)(param_1 + 4);
      iVar2 = 0x7fffffff;
      iVar6 = 0;
      if (0 < *(int *)(param_1 + 4)) {
        do {
          puVar8 = &DAT_00629014 + *piVar7 * 0xc;
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
      puVar5 = (uint *)FUN_00597d00();
      uVar1 = DAT_0061b4b8;
      puVar8 = (uint *)(&DAT_00713bc4 + iVar3);
      for (iVar6 = 0x12; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar8 = *puVar5;
        puVar5 = puVar5 + (uint)bVar10 * -2 + 1;
        puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      }
      *(uint *)(&DAT_00713c0c + iVar3) = uVar1;
      *(int *)(&DAT_00713c14 + iVar3) = iVar2;
      *(uint *)(&DAT_00713c10 + iVar3) = _DAT_01c51d0c;
    }
  }
  return param_1 + 0x18 + *(int *)(param_1 + 4) * 0xc;
}
