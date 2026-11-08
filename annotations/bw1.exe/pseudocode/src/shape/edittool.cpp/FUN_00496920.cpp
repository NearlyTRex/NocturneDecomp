// Name: FUN_00496920
// Address: 00496920
// Address Range: [[00496920, 00496dcb]]
// Convention: unknown
// Signature: void FUN_00496920(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,byte param_7)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00496920(uint param_1,int param_2,int param_3,int param_4,int param_5,int param_6,byte param_7)

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
  if (_DAT_01c3eb50 == 0) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0xa4;
    FUN_005030e0("gEdFont must be set by the application.");
  }
  _DAT_01c3f538 = *(uint *)(_DAT_01c3eb50 + 0x41e8);
  _DAT_01c3f53c = FUN_004c4510(_DAT_01c3eb50,0x6a);
  if (4 < _DAT_01c3eb5c) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0x864;
    FUN_005030e0("Can't open another window!");
  }
  iVar1 = _DAT_01c3eb5c * 0x1f8;
  iVar2 = (int)((DAT_0061b498 + (DAT_0061b498 >> 0x1f) * -0x80) -
               (uint)((DAT_0061b498 >> 0x1f) << 6 < 0)) >> 7;
  iVar3 = DAT_0061b49c / 0x60;
  _DAT_01c3eb5c = _DAT_01c3eb5c + 1;
  param_2 = param_2 - iVar2;
  param_3 = param_3 - iVar3;
  param_4 = param_4 + iVar2;
  param_5 = param_5 + iVar3;
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (DAT_0061b498 < param_4) {
    param_4 = DAT_0061b498;
  }
  *(byte *)(iVar1 + 0x1c3eba8) = 0;
  iVar14 = 0;
  if (param_6 != 0) {
    iVar8 = iVar1 + 0x1c3eba8;
    iVar4 = FUN_004c4260(_DAT_01c3eb50,param_6,0x1c3dbb0,0x14,200,(param_4 - param_2) + iVar2 * -2,
                         iVar3,0);
    iVar11 = 0;
    if (0 < iVar4) {
      iVar9 = 0x1c3dbb0;
      do {
        iVar11 = iVar11 + 1;
        iVar5 = FUN_005bfb40(iVar8,&DAT_005dc121,iVar9);
        iVar8 = iVar8 + iVar5;
        iVar9 = iVar9 + 200;
      } while (iVar11 < iVar4);
    }
    iVar11 = _DAT_01c3eb50;
    if (0 < iVar4) {
      *(byte *)(iVar8 + -1) = 0;
      iVar14 = FUN_004c3f50(iVar11,iVar1 + 0x1c3eba8);
      iVar14 = _DAT_01c3f53c + iVar14;
      iVar8 = FUN_004c3f50(_DAT_01c3eb50,&DAT_005dc125);
      if (iVar14 < iVar8 + _DAT_01c3f53c) {
        iVar14 = iVar8 + _DAT_01c3f53c;
      }
      param_5 = param_5 + iVar14 / 2;
      param_3 = param_3 - iVar14 / 2;
    }
  }
  if (param_3 < 0) {
    param_3 = 0;
  }
  if (DAT_0061b49c < param_5) {
    param_5 = DAT_0061b49c;
  }
  if (_DAT_01c3f544 != 0) {
    param_7 = param_7 | 1;
  }
  *(uint *)(iVar1 + 0x1c3ed38) = 0;
  if ((param_7 & 1) == 0) {
    if (_DAT_01c3eb5c == 1) {
      FUN_00494030(param_1);
    }
    if (_DAT_01c4354c != 0) {
      *(int *)(iVar1 + 0x1c3ed44) = DAT_0061b498;
      iVar8 = *(int *)(iVar1 + 0x1c3ed44) * DAT_0061b4a0;
      *(int *)(iVar1 + 0x1c3ed48) = DAT_0061b49c;
      iVar4 = iVar8 >> 0x1f;
      uVar6 = (int)((iVar8 + iVar4 * -8) - (uint)(iVar4 << 2 < 0)) >> 3;
      *(uint *)(iVar1 + 0x1c3ed3c) = 0;
      *(uint *)(iVar1 + 0x1c3ed40) = 0;
      local_18 = (uint *)FUN_005c08d0(*(int *)(iVar1 + 0x1c3ed48) * uVar6);
      *(uint **)(iVar1 + 0x1c3ed38) = local_18;
      if ((local_18 != (uint *)0x0) && (iVar8 = 0, 0 < *(int *)(iVar1 + 0x1c3ed48))) {
        do {
          iVar4 = *(int *)(iVar1 + 0x1c3ed3c) * DAT_0061b4a0;
          iVar11 = iVar4 >> 0x1f;
          puVar10 = (uint *)
                    (*(int *)(&DAT_01c4354c + (*(int *)(iVar1 + 0x1c3ed40) + iVar8) * 4) +
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
        } while (iVar8 < *(int *)(iVar1 + 0x1c3ed48));
      }
    }
  }
  *(uint *)(iVar1 + 0x1c3eb70) = _DAT_01c4f008;
  *(uint *)(iVar1 + 0x1c3eb74) = _DAT_01c4f00c;
  *(uint *)(iVar1 + 0x1c3eb78) = _DAT_01c4f010;
  *(uint *)(iVar1 + 0x1c3eb7c) = _DAT_01c4f014;
  *(uint *)(iVar1 + 0x1c3eb90) = _DAT_01c4eff8;
  *(uint *)(iVar1 + 0x1c3eb94) = _DAT_01c4effc;
  *(uint *)(iVar1 + 0x1c3eb98) = _DAT_01c4f000;
  *(uint *)(iVar1 + 0x1c3eb9c) = _DAT_01c4f004;
  *(uint *)(iVar1 + 0x1c3eba0) = _DAT_01c4f018;
  *(uint *)(iVar1 + 0x1c3eba4) = _DAT_01c4f01c;
  FUN_00511980(iVar1 + 0x1c3eb80,iVar1 + 0x1c3eb84,iVar1 + 0x1c3eb88,iVar1 + 0x1c3eb8c);
  FUN_00511850((float)param_2,(float)param_3,(float)param_4,(float)param_5);
  *(int *)(iVar1 + 0x1c3eb60) = param_2;
  *(int *)(iVar1 + 0x1c3eb64) = param_3;
  *(int *)(iVar1 + 0x1c3eb68) = param_4;
  *(int *)(iVar1 + 0x1c3eb6c) = param_5;
  FUN_00401810(param_2 + iVar2,param_3 + iVar3 + iVar14,(param_4 - iVar2) + -1,
               (param_5 - iVar3) + -1);
  return;
}
