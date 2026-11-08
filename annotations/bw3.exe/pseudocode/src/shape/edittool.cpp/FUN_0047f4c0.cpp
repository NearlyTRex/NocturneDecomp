// Name: FUN_0047f4c0
// Address: 0047f4c0
// Address Range: [[0047f4c0, 0047f96b]]
// Convention: unknown
// Signature: void FUN_0047f4c0(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,byte param_7)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047f4c0(uint param_1,int param_2,int param_3,int param_4,int param_5,int param_6,byte param_7)

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
  if (_DAT_01c5b0e0 == 0) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0xa7;
    FUN_004e4330("gEdFont must be set by the application.");
  }
  _DAT_01c5bae0 = *(uint *)(_DAT_01c5b0e0 + 0x41e8);
  _DAT_01c5bae4 = FUN_004b30f0(_DAT_01c5b0e0,0x6a);
  if (4 < _DAT_01c5b104) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0x867;
    FUN_004e4330("Can't open another window!");
  }
  iVar1 = _DAT_01c5b104 * 0x1f8;
  iVar2 = (int)((DAT_005fba18 + (DAT_005fba18 >> 0x1f) * -0x80) -
               (uint)((DAT_005fba18 >> 0x1f) << 6 < 0)) >> 7;
  iVar3 = DAT_005fba1c / 0x60;
  _DAT_01c5b104 = _DAT_01c5b104 + 1;
  param_2 = param_2 - iVar2;
  param_3 = param_3 - iVar3;
  param_4 = param_4 + iVar2;
  param_5 = param_5 + iVar3;
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (DAT_005fba18 < param_4) {
    param_4 = DAT_005fba18;
  }
  *(byte *)(iVar1 + 0x1c5b150) = 0;
  iVar14 = 0;
  if (param_6 != 0) {
    iVar8 = iVar1 + 0x1c5b150;
    iVar4 = FUN_004b2e40(_DAT_01c5b0e0,param_6,0x1c5a140,0x14,200,(param_4 - param_2) + iVar2 * -2,
                         iVar3,0);
    iVar11 = 0;
    if (0 < iVar4) {
      iVar9 = 0x1c5a140;
      do {
        iVar11 = iVar11 + 1;
        iVar5 = FUN_005a28c0(iVar8,&DAT_005bd1de,iVar9);
        iVar8 = iVar8 + iVar5;
        iVar9 = iVar9 + 200;
      } while (iVar11 < iVar4);
    }
    iVar11 = _DAT_01c5b0e0;
    if (0 < iVar4) {
      *(byte *)(iVar8 + -1) = 0;
      iVar14 = FUN_004b2b30(iVar11,iVar1 + 0x1c5b150);
      iVar14 = _DAT_01c5bae4 + iVar14;
      iVar8 = FUN_004b2b30(_DAT_01c5b0e0,&DAT_005bd1e2);
      if (iVar14 < iVar8 + _DAT_01c5bae4) {
        iVar14 = iVar8 + _DAT_01c5bae4;
      }
      param_5 = param_5 + iVar14 / 2;
      param_3 = param_3 - iVar14 / 2;
    }
  }
  if (param_3 < 0) {
    param_3 = 0;
  }
  if (DAT_005fba1c < param_5) {
    param_5 = DAT_005fba1c;
  }
  if (_DAT_01c5baec != 0) {
    param_7 = param_7 | 1;
  }
  *(uint *)(iVar1 + 0x1c5b2e0) = 0;
  if ((param_7 & 1) == 0) {
    if (_DAT_01c5b104 == 1) {
      FUN_0047cbd0(param_1);
    }
    if (_DAT_01c5faec != 0) {
      *(int *)(iVar1 + 0x1c5b2ec) = DAT_005fba18;
      iVar8 = *(int *)(iVar1 + 0x1c5b2ec) * DAT_005fba20;
      *(int *)(iVar1 + 0x1c5b2f0) = DAT_005fba1c;
      iVar4 = iVar8 >> 0x1f;
      uVar6 = (int)((iVar8 + iVar4 * -8) - (uint)(iVar4 << 2 < 0)) >> 3;
      *(uint *)(iVar1 + 0x1c5b2e4) = 0;
      *(uint *)(iVar1 + 0x1c5b2e8) = 0;
      local_18 = (uint *)FUN_005a3650(*(int *)(iVar1 + 0x1c5b2f0) * uVar6);
      *(uint **)(iVar1 + 0x1c5b2e0) = local_18;
      if ((local_18 != (uint *)0x0) && (iVar8 = 0, 0 < *(int *)(iVar1 + 0x1c5b2f0))) {
        do {
          iVar4 = *(int *)(iVar1 + 0x1c5b2e4) * DAT_005fba20;
          iVar11 = iVar4 >> 0x1f;
          puVar10 = (uint *)
                    (*(int *)(&DAT_01c5faec + (*(int *)(iVar1 + 0x1c5b2e8) + iVar8) * 4) +
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
        } while (iVar8 < *(int *)(iVar1 + 0x1c5b2f0));
      }
    }
  }
  *(uint *)(iVar1 + 0x1c5b118) = _DAT_01c6b5a8;
  *(uint *)(iVar1 + 0x1c5b11c) = _DAT_01c6b5ac;
  *(uint *)(iVar1 + 0x1c5b120) = _DAT_01c6b5b0;
  *(uint *)(iVar1 + 0x1c5b124) = _DAT_01c6b5b4;
  *(uint *)(iVar1 + 0x1c5b138) = _DAT_01c6b598;
  *(uint *)(iVar1 + 0x1c5b13c) = _DAT_01c6b59c;
  *(uint *)(iVar1 + 0x1c5b140) = _DAT_01c6b5a0;
  *(uint *)(iVar1 + 0x1c5b144) = _DAT_01c6b5a4;
  *(uint *)(iVar1 + 0x1c5b148) = _DAT_01c6b5b8;
  *(uint *)(iVar1 + 0x1c5b14c) = _DAT_01c6b5bc;
  FUN_004ed150(iVar1 + 0x1c5b128,iVar1 + 0x1c5b12c,iVar1 + 0x1c5b130,iVar1 + 0x1c5b134);
  FUN_004ed020((float)param_2,(float)param_3,(float)param_4,(float)param_5);
  *(int *)(iVar1 + 0x1c5b108) = param_2;
  *(int *)(iVar1 + 0x1c5b10c) = param_3;
  *(int *)(iVar1 + 0x1c5b110) = param_4;
  *(int *)(iVar1 + 0x1c5b114) = param_5;
  FUN_00401810(param_2 + iVar2,param_3 + iVar3 + iVar14,(param_4 - iVar2) + -1,
               (param_5 - iVar3) + -1);
  return;
}
