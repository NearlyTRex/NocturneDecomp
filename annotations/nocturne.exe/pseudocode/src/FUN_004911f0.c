// Name: FUN_004911f0
// Address: 004911f0
// Address Range: [[004911f0, 004916bb]]
// Convention: unknown
// Signature: void FUN_004911f0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004911f0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  uint *puVar7;
  int iVar8;
  char *pcVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
  uint uVar14;
  byte local_54 [4];
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  int local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar13 = 0;
  pcVar9 = &DAT_005b9258;
  pcVar6 = (char *)(param_1 + 4 + *(int *)(param_2 * 4 + param_1 + 0x2168) * 0x50);
  do {
    cVar1 = *pcVar6;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  FUN_00545920(&DAT_005b9250);
  local_18 = 0x4e1c;
  local_14 = 0x4e1d;
  local_1c = 19999;
  uVar4 = _DAT_01c70f6c;
  uVar2 = _DAT_01c70f64;
  uVar3 = _DAT_01c70f68;
  if (param_7 != -2) {
    if (param_7 < 0) {
      _DAT_006af578 = 0xffff;
      _DAT_006af57c = 0xffff;
      _DAT_006af574 = 0xffff;
      goto LAB_004912b7;
    }
    param_7 = param_7 * 3;
    uVar4 = (uint)*(byte *)(param_7 + 0x1c0064a);
    uVar2 = (uint)(byte)(&DAT_01c00648)[param_7];
    uVar3 = (uint)*(byte *)(param_7 + 0x1c00649);
  }
  _DAT_006af578 = uVar3 << 8;
  _DAT_006af574 = uVar2 << 8;
  _DAT_006af57c = uVar4 << 8;
LAB_004912b7:
  DAT_006af55c = 0x10000;
  DAT_006af560 = 0x10000;
  puVar7 = &DAT_006af554;
  puVar10 = &DAT_006af584;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar10 = *puVar7;
    puVar7 = puVar7 + (uint)bVar13 * -2 + 1;
    puVar10 = puVar10 + (uint)bVar13 * -2 + 1;
  }
  puVar7 = &DAT_006af554;
  puVar10 = &DAT_006af5b4;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar10 = *puVar7;
    puVar7 = puVar7 + (uint)bVar13 * -2 + 1;
    puVar10 = puVar10 + (uint)bVar13 * -2 + 1;
  }
  puVar7 = &DAT_006af554;
  puVar10 = &DAT_006af5e4;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar10 = *puVar7;
    puVar7 = puVar7 + (uint)bVar13 * -2 + 1;
    puVar10 = puVar10 + (uint)bVar13 * -2 + 1;
  }
  local_20 = param_3 * 0x10000 + -0x1000;
  iVar5 = (param_5 + 1) * 0x10000;
  iVar8 = iVar5 + 0x1000;
  iVar11 = (param_6 + 1) * 0x10000;
  local_24 = param_4 * 0x10000 + -0x1000;
  iVar12 = iVar11 + 0x1000;
  if (_DAT_01c02594 == 0) {
    iVar12 = iVar11 + 0x9000;
    iVar8 = iVar5 + 0x9000;
  }
  DAT_006af554 = (uint)
                 ((longlong)
                  ((((longlong)(local_20 - _DAT_01c00c50) & 0xffffffffffffU) >> 0x10) << 0x20 |
                  (longlong)(local_20 - _DAT_01c00c50) * 0x10000 & 0xffffffffU) /
                 (longlong)_DAT_01c00c48);
  DAT_006af558 = (uint)
                 ((longlong)
                  ((((longlong)(local_24 - _DAT_01c00c54) & 0xffffffffffffU) >> 0x10) << 0x20 |
                  (longlong)(local_24 - _DAT_01c00c54) * 0x10000 & 0xffffffffU) /
                 (longlong)_DAT_01c00c4c);
  DAT_006af584 = (uint)
                 ((longlong)
                  ((((longlong)(iVar8 - _DAT_01c00c50) & 0xffffffffffffU) >> 0x10) << 0x20 |
                  (longlong)(iVar8 - _DAT_01c00c50) * 0x10000 & 0xffffffffU) /
                 (longlong)_DAT_01c00c48);
  DAT_006af588 = (uint)
                 ((longlong)
                  ((((longlong)(local_24 - _DAT_01c00c54) & 0xffffffffffffU) >> 0x10) << 0x20 |
                  (longlong)(local_24 - _DAT_01c00c54) * 0x10000 & 0xffffffffU) /
                 (longlong)_DAT_01c00c4c);
  DAT_006af5b4 = (uint)
                 ((longlong)
                  ((((longlong)(iVar8 - _DAT_01c00c50) & 0xffffffffffffU) >> 0x10) << 0x20 |
                  (longlong)(iVar8 - _DAT_01c00c50) * 0x10000 & 0xffffffffU) /
                 (longlong)_DAT_01c00c48);
  DAT_006af5b8 = (uint)
                 ((longlong)
                  ((((longlong)(iVar12 - _DAT_01c00c54) & 0xffffffffffffU) >> 0x10) << 0x20 |
                  (longlong)(iVar12 - _DAT_01c00c54) * 0x10000 & 0xffffffffU) /
                 (longlong)_DAT_01c00c4c);
  DAT_006af5e4 = (uint)
                 ((longlong)
                  ((((longlong)(local_20 - _DAT_01c00c50) & 0xffffffffffffU) >> 0x10) << 0x20 |
                  (longlong)(local_20 - _DAT_01c00c50) * 0x10000 & 0xffffffffU) /
                 (longlong)_DAT_01c00c48);
  DAT_006af5e8 = (uint)
                 ((longlong)
                  ((((longlong)(iVar12 - _DAT_01c00c54) & 0xffffffffffffU) >> 0x10) << 0x20 |
                  (longlong)(iVar12 - _DAT_01c00c54) * 0x10000 & 0xffffffffU) /
                 (longlong)_DAT_01c00c4c);
  FUN_004cd240(0x4e1c);
  FUN_004cd240(local_14);
  FUN_004cd240(0x4e1e);
  FUN_004cd240(local_1c);
  iVar5 = param_2 * 4 + param_1;
  param_1 = *(int *)(iVar5 + 0x2168) * 4 + param_1;
  local_2c = *(int *)(param_1 + 0x154);
  iVar11 = *(int *)(iVar5 + 0x1d68) - *(int *)(param_1 + 0x144);
  iVar5 = (iVar11 % local_2c) * 0x10000 + -0x1000;
  iVar11 = (iVar11 / local_2c) * 0x10000 + -0x1000;
  DAT_006af5cc = (iVar5 + iVar8) - local_20;
  iVar8 = (iVar11 + iVar12) - local_24;
  if (_DAT_01c02594 == 0) {
    iVar8 = iVar8 + 0x8000;
    DAT_006af5cc = DAT_006af5cc + 0x8000;
  }
  (&DAT_005c502c)[local_18 * 0xc] = iVar5;
  *(int *)(&DAT_005c5030 + local_18 * 0x30) = iVar11;
  local_28 = local_14;
  (&DAT_005c502c)[local_14 * 0xc] = DAT_006af5cc;
  *(int *)(&DAT_005c5030 + local_14 * 0x30) = iVar11;
  local_34 = 0x4e1e;
  local_40 = 0;
  DAT_006af5d0 = iVar8;
  (&DAT_005c502c)[local_1c * 0xc] = iVar5;
  local_50 = 4;
  *(int *)(&DAT_005c5030 + local_1c * 0x30) = iVar8;
  local_44 = 0;
  local_3c = local_18;
  local_48 = 0;
  local_38 = local_14;
  local_4c = 0;
  local_30 = local_1c;
  FUN_00408370(0xffff);
  if (_DAT_01c02584 == 0) {
    uVar14 = 0x207;
  }
  else {
    uVar14 = 0x227;
  }
  FUN_00408c10(local_54,uVar14,0);
  return;
}
