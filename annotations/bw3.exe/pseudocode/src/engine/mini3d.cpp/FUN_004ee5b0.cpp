// Name: FUN_004ee5b0
// Address: 004ee5b0
// Address Range: [[004ee5b0, 004ee92d]]
// Convention: unknown
// Signature: void FUN_004ee5b0(float *param_1,int param_2,ushort *param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ee5b0(float *param_1,int param_2,ushort *param_3,int param_4)

{
  float fVar1;
  char cVar2;
  ushort uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  uint uVar10;
  float *pfVar11;
  byte bVar12;
  float local_124 [48];
  float local_64 [16];
  uint local_24;
  uint uStack_20;
  uint local_1c;
  uint uStack_18;
  uint local_14;
  
  bVar12 = 0;
  _DAT_01ed3198 = _DAT_01ed3198 + param_4;
  _DAT_01d76c34 = _DAT_01d76c34 + param_2;
  if (_DAT_01d7a694 == 0) {
    FUN_004edcc0();
    FUN_004f2430();
    if ((_DAT_02cf60c8 == (code *)0x0) || (_DAT_01c6cee8 == 0)) {
      FUN_004ede40();
      if (10000 < param_2) {
        _DAT_01d71de0 = "..\\engine\\mini3d.cpp";
        _DAT_01d71de4 = 0x844;
        FUN_004e4330("CMini3D::polyList - Too many verticies : %d",param_2);
      }
      uVar10 = 0;
      iVar9 = 0;
      pfVar8 = _DAT_01d76f60;
      if (0 < param_2) {
        do {
          fVar1 = _DAT_01d76cc4;
          *pfVar8 = ((*param_1 * _DAT_01d76cc4 - _DAT_01d76c64) * param_1[2]) / _DAT_01d76c5c;
          pfVar8[1] = ((fVar1 * param_1[1] - _DAT_01d76c68) * param_1[2]) / _DAT_01d76c60;
          pfVar8[2] = param_1[2];
          fVar1 = param_1[3];
          pfVar8[4] = 0.0;
          pfVar8[3] = fVar1;
          if (pfVar8[2] < *pfVar8) {
            *(byte *)(pfVar8 + 4) = *(byte *)(pfVar8 + 4) | 1;
          }
          if (*pfVar8 < -pfVar8[2]) {
            *(byte *)(pfVar8 + 4) = *(byte *)(pfVar8 + 4) | 2;
          }
          if (pfVar8[2] < pfVar8[1]) {
            *(byte *)(pfVar8 + 4) = *(byte *)(pfVar8 + 4) | 4;
          }
          if (pfVar8[1] < -pfVar8[2]) {
            *(byte *)(pfVar8 + 4) = *(byte *)(pfVar8 + 4) | 8;
          }
          if (pfVar8[2] <= 0.0) {
            *(byte *)(pfVar8 + 4) = *(byte *)(pfVar8 + 4) | 0x10;
          }
          fVar1 = _DAT_01d76cc4;
          pfVar8[5] = *param_1 * _DAT_01d76cc4;
          uVar10 = uVar10 | (uint)pfVar8[4];
          pfVar8[6] = fVar1 * param_1[1];
          pfVar8[7] = param_1[6];
          pfVar8[8] = param_1[7];
          fVar1 = param_1[4];
          fVar6 = (float)((uint)fVar1 & 0xff) * _DAT_005c817d;
          fVar4 = (float)((uint)fVar1 >> 8 & 0xff) * _DAT_005c817d;
          uStack_20 = 0;
          uStack_18 = 0;
          local_1c = (uint)fVar1 >> 0x18;
          local_24 = (uint)fVar1 >> 0x10 & 0xff;
          fVar1 = (float)local_24 * _DAT_005c817d;
          fVar5 = (float)local_1c * _DAT_005c817d;
          iVar9 = iVar9 + 1;
          param_1 = param_1 + 8;
          pfVar8[0xd] = 0.0;
          pfVar8[9] = fVar6;
          pfVar8[10] = fVar4;
          pfVar8[0xb] = fVar1;
          pfVar8[0xc] = fVar5;
          pfVar8 = pfVar8 + 0x10;
        } while (iVar9 < param_2);
      }
      if (((_DAT_01c6cee8 != 0) || (param_2 != 4)) || (param_4 != 2)) {
        FUN_004f12b0(_DAT_01d76f60,param_2,param_3,param_4,uVar10);
        return;
      }
      local_14 = _DAT_01d7f57c;
      iVar9 = 0;
      do {
        uVar3 = *param_3;
        pfVar8 = _DAT_01d76f60 + (uint)uVar3 * 0x10;
        pfVar11 = (float *)((int)local_124 + iVar9);
        for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
          *pfVar11 = *pfVar8;
          pfVar8 = pfVar8 + (uint)bVar12 * -2 + 1;
          pfVar11 = pfVar11 + (uint)bVar12 * -2 + 1;
        }
        iVar9 = iVar9 + 0x40;
        param_3 = param_3 + 1;
        *(byte *)((int)&local_14 + (uint)uVar3) = 1;
      } while (iVar9 != 0xc0);
      iVar9 = 0;
      cVar2 = (char)local_14;
      while (cVar2 != '\0') {
        if (3 < iVar9 + 1) goto LAB_004ee87c;
        cVar2 = *(char *)((int)&local_14 + iVar9 + 1);
        iVar9 = iVar9 + 1;
      }
      pfVar8 = _DAT_01d76f60 + iVar9 * 0x10;
      pfVar11 = local_64;
      for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
        *pfVar11 = *pfVar8;
        pfVar8 = pfVar8 + (uint)bVar12 * -2 + 1;
        pfVar11 = pfVar11 + (uint)bVar12 * -2 + 1;
      }
LAB_004ee87c:
      if (uVar10 != 0) {
        FUN_004f1190(local_124,4);
        return;
      }
      FUN_004f2090(local_124,4);
    }
    else {
      (*_DAT_02cf60c8)(param_1,param_2,param_3,param_4,_DAT_01c6e2b4);
    }
  }
  else {
    FUN_004f2490(param_1,param_2,param_3,param_4);
  }
  return;
}
