// Name: core_dcamera.cpp_FUN_0043f97e
// Address: 0043f97e
// Address Range: [[0043f97e, 0043fb1c]]
// Convention: unknown
// Signature: void core_dcamera_cpp_FUN_0043f97e(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dcamera_cpp_FUN_0043f97e(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  
  iVar9 = param_3;
  uVar8 = param_1 - _DAT_01c35e4c;
  if (((_DAT_01308800 != 1) || ((uVar8 & 1) == 0)) && ((_DAT_01308800 != 2 || ((uVar8 & 3) == 0))))
  {
    iVar16 = (int)uVar8 >> (DAT_01308800 & 0x1f);
    iVar14 = (*(int *)(param_2 + 8) >> 0x10) - _DAT_01c35e48 >> (DAT_01308800 & 0x1f);
    iVar17 = (*(int *)(param_3 + 8) >> 0x10) - _DAT_01c35e48 >> (DAT_01308800 & 0x1f);
    iVar15 = iVar14;
    if (iVar17 < iVar14) {
      param_3 = param_2;
      iVar15 = iVar17;
      iVar17 = iVar14;
      param_2 = iVar9;
    }
    iVar9 = *(int *)(param_2 + 0x28) >> 0x1f;
    iVar5 = (int)((*(int *)(param_2 + 0x28) + iVar9 * -0x100) - (uint)(iVar9 << 7 < 0)) >> 8;
    iVar9 = *(int *)(param_3 + 0x28);
    iVar10 = *(int *)(param_3 + 0x28) >> 0x1f;
    iVar14 = *(int *)(param_2 + 0x28);
    iVar11 = iVar14 >> 0x1f;
    iVar7 = (iVar17 - iVar15) + 1;
    iVar13 = *(int *)(param_2 + 0x10);
    iVar12 = *(int *)(param_3 + 0x10) - iVar13;
    bVar4 = DAT_01308800 & 0x1f;
    iVar2 = *(int *)(&DAT_01c2b64c + (iVar16 << (DAT_01308800 & 0x1f)) * 4);
    pbVar6 = &DAT_01326d20 + iVar15 + iVar16 * 0x140;
    iVar17 = (iVar17 - iVar15) * 4;
    do {
      if (*(int *)(iVar17 + iVar2 + (iVar15 << bVar4) * 4) < iVar5) {
        piVar1 = (int *)(_DAT_013083d0 + 0x13083d4);
        _DAT_013083d0 = _DAT_013083d0 + 4 & 0x3fc;
        uVar8 = (uint)*pbVar6 * 0x100 + iVar13 + *piVar1 >> 8;
        if (0xfe < uVar8) {
          uVar8 = 0xff;
        }
        *pbVar6 = (byte)uVar8;
      }
      iVar13 = iVar13 + iVar12 / iVar7;
      iVar5 = iVar5 + (((int)((iVar9 + iVar10 * -0x100) - (uint)(iVar10 << 7 < 0)) >> 8) -
                      ((int)((iVar14 + iVar11 * -0x100) - (uint)(iVar11 << 7 < 0)) >> 8)) / iVar7;
      pbVar6 = pbVar6 + 1;
      iVar16 = iVar17 + -4;
      bVar3 = 3 < iVar17;
      iVar17 = iVar16;
    } while (iVar16 != 0 && bVar3);
    _DAT_013083cc = 1;
  }
  return;
}
