// Name: FUN_0047e2b0
// Address: 0047e2b0
// Address Range: [[0047e2b0, 0047e75b]]
// Convention: unknown
// Signature: void FUN_0047e2b0(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,byte param_7)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047e2b0(uint param_1,int param_2,int param_3,int param_4,int param_5,int param_6,byte param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  uint *puVar12;
  byte bVar13;
  int iVar14;
  uint *local_18;
  
  bVar13 = 0;
  if (_DAT_01c25590 == 0) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0xa0;
    FUN_004e4500("gEdFont must be set by the application.");
  }
  _DAT_01c25f78 = *(uint *)(_DAT_01c25590 + 0x41e8);
  _DAT_01c25f7c = FUN_004ab560(_DAT_01c25590,0x6a);
  if (4 < _DAT_01c2559c) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0x809;
    FUN_004e4500("Can't open another window!");
  }
  iVar1 = _DAT_01c2559c * 0x1f8;
  iVar2 = (int)((DAT_006141b8 + (DAT_006141b8 >> 0x1f) * -0x80) -
               (uint)((DAT_006141b8 >> 0x1f) << 6 < 0)) >> 7;
  iVar3 = DAT_006141bc / 0x60;
  _DAT_01c2559c = _DAT_01c2559c + 1;
  param_2 = param_2 - iVar2;
  param_3 = param_3 - iVar3;
  param_4 = param_4 + iVar2;
  param_5 = param_5 + iVar3;
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (DAT_006141b8 < param_4) {
    param_4 = DAT_006141b8;
  }
  *(byte *)(iVar1 + 0x1c255e8) = 0;
  iVar14 = 0;
  if (param_6 != 0) {
    iVar8 = iVar1 + 0x1c255e8;
    iVar4 = FUN_004ab2b0(_DAT_01c25590,param_6,0x1c245f0,0x14,200,(param_4 - param_2) + iVar2 * -2,
                         iVar3,0);
    iVar11 = 0;
    if (0 < iVar4) {
      iVar9 = 0x1c245f0;
      do {
        iVar11 = iVar11 + 1;
        iVar5 = FUN_005b7790(iVar8,&DAT_005d2388,iVar9);
        iVar8 = iVar8 + iVar5;
        iVar9 = iVar9 + 200;
      } while (iVar11 < iVar4);
    }
    iVar11 = _DAT_01c25590;
    if (0 < iVar4) {
      *(byte *)(iVar8 + -1) = 0;
      iVar14 = FUN_004aafb0(iVar11,iVar1 + 0x1c255e8);
      iVar14 = _DAT_01c25f7c + iVar14;
      iVar8 = FUN_004aafb0(_DAT_01c25590,&DAT_005d238c);
      if (iVar14 < iVar8 + _DAT_01c25f7c) {
        iVar14 = iVar8 + _DAT_01c25f7c;
      }
      param_5 = param_5 + iVar14 / 2;
      param_3 = param_3 - iVar14 / 2;
    }
  }
  if (param_3 < 0) {
    param_3 = 0;
  }
  if (DAT_006141bc < param_5) {
    param_5 = DAT_006141bc;
  }
  if (_DAT_01c25f84 != 0) {
    param_7 = param_7 | 1;
  }
  *(uint *)(iVar1 + 0x1c25778) = 0;
  if ((param_7 & 1) == 0) {
    if (_DAT_01c2559c == 1) {
      FUN_0047baf0(param_1);
    }
    if (_DAT_01c2a38c != 0) {
      *(int *)(iVar1 + 0x1c25784) = DAT_006141b8;
      iVar8 = *(int *)(iVar1 + 0x1c25784) * DAT_006141c0;
      *(int *)(iVar1 + 0x1c25788) = DAT_006141bc;
      iVar4 = iVar8 >> 0x1f;
      uVar6 = (int)((iVar8 + iVar4 * -8) - (uint)(iVar4 << 2 < 0)) >> 3;
      *(uint *)(iVar1 + 0x1c2577c) = 0;
      *(uint *)(iVar1 + 0x1c25780) = 0;
      local_18 = (uint *)FUN_005b8580(*(int *)(iVar1 + 0x1c25788) * uVar6);
      *(uint **)(iVar1 + 0x1c25778) = local_18;
      if ((local_18 != (uint *)0x0) && (iVar8 = 0, 0 < *(int *)(iVar1 + 0x1c25788))) {
        do {
          iVar4 = *(int *)(iVar1 + 0x1c2577c) * DAT_006141c0;
          iVar11 = iVar4 >> 0x1f;
          puVar10 = (uint *)
                    (*(int *)(&DAT_01c2a38c + (*(int *)(iVar1 + 0x1c25780) + iVar8) * 4) +
                    ((int)((iVar4 + iVar11 * -8) - (uint)(iVar11 << 2 < 0)) >> 3));
          puVar12 = local_18;
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar12 = *puVar10;
            puVar10 = puVar10 + (uint)bVar13 * -2 + 1;
            puVar12 = puVar12 + (uint)bVar13 * -2 + 1;
          }
          for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(byte *)puVar12 = *(byte *)puVar10;
            puVar10 = (uint *)((int)puVar10 + (uint)bVar13 * -2 + 1);
            puVar12 = (uint *)((int)puVar12 + (uint)bVar13 * -2 + 1);
          }
          local_18 = (uint *)((int)local_18 + uVar6);
          iVar8 = iVar8 + 1;
        } while (iVar8 < *(int *)(iVar1 + 0x1c25788));
      }
    }
  }
  *(uint *)(iVar1 + 0x1c255b0) = _DAT_01c35e48;
  *(uint *)(iVar1 + 0x1c255b4) = _DAT_01c35e4c;
  *(uint *)(iVar1 + 0x1c255b8) = _DAT_01c35e50;
  *(uint *)(iVar1 + 0x1c255bc) = _DAT_01c35e54;
  *(uint *)(iVar1 + 0x1c255d0) = _DAT_01c35e38;
  *(uint *)(iVar1 + 0x1c255d4) = _DAT_01c35e3c;
  *(uint *)(iVar1 + 0x1c255d8) = _DAT_01c35e40;
  *(uint *)(iVar1 + 0x1c255dc) = _DAT_01c35e44;
  *(uint *)(iVar1 + 0x1c255e0) = _DAT_01c35e58;
  *(uint *)(iVar1 + 0x1c255e4) = _DAT_01c35e5c;
  FUN_004f2ba0(iVar1 + 0x1c255c0,iVar1 + 0x1c255c4,iVar1 + 0x1c255c8,iVar1 + 0x1c255cc);
  FUN_004f2ac0((float)param_2,(float)param_3,(float)param_4,(float)param_5);
  *(int *)(iVar1 + 0x1c255a0) = param_2;
  *(int *)(iVar1 + 0x1c255a4) = param_3;
  *(int *)(iVar1 + 0x1c255a8) = param_4;
  *(int *)(iVar1 + 0x1c255ac) = param_5;
  FUN_00401810(param_2 + iVar2,param_3 + iVar3 + iVar14,(param_4 - iVar2) + -1,
               (param_5 - iVar3) + -1);
  return;
}
