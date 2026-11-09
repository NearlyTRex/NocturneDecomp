// Name: engine_mini3d.cpp_FUN_00512de0
// Address: 00512de0
// Address Range: [[00512de0, 0051315d]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_00512de0(float *param_1,int param_2,ushort *param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_00512de0(float *param_1,int param_2,ushort *param_3,int param_4)

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
  _DAT_01e7dac8 = _DAT_01e7dac8 + param_4;
  _DAT_01d224b4 = _DAT_01d224b4 + param_2;
  if (_DAT_01d25f14 == 0) {
    engine_mini3d_cpp_FUN_005124f0();
    engine_mini3d_cpp_FUN_00516c60();
    if ((_DAT_02c8346c == (code *)0x0) || (_DAT_01c50948 == 0)) {
      engine_mini3d_cpp_FUN_00512670();
      if (10000 < param_2) {
        _DAT_01d1d400 = "..\\engine\\mini3d.cpp";
        _DAT_01d1d404 = 0x844;
        core_main_c_FUN_005030e0("CMini3D::polyList - Too many verticies : %d",param_2);
      }
      uVar10 = 0;
      iVar9 = 0;
      pfVar8 = _DAT_01d227e0;
      if (0 < param_2) {
        do {
          fVar1 = _DAT_01d22544;
          *pfVar8 = ((*param_1 * _DAT_01d22544 - _DAT_01d224e4) * param_1[2]) / _DAT_01d224dc;
          pfVar8[1] = ((fVar1 * param_1[1] - _DAT_01d224e8) * param_1[2]) / _DAT_01d224e0;
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
          fVar1 = _DAT_01d22544;
          pfVar8[5] = *param_1 * _DAT_01d22544;
          uVar10 = uVar10 | (uint)pfVar8[4];
          pfVar8[6] = fVar1 * param_1[1];
          pfVar8[7] = param_1[6];
          pfVar8[8] = param_1[7];
          fVar1 = param_1[4];
          fVar6 = (float)((uint)fVar1 & 0xff) * _DAT_005e8e7b;
          fVar4 = (float)((uint)fVar1 >> 8 & 0xff) * _DAT_005e8e7b;
          uStack_20 = 0;
          uStack_18 = 0;
          local_1c = (uint)fVar1 >> 0x18;
          local_24 = (uint)fVar1 >> 0x10 & 0xff;
          fVar1 = (float)local_24 * _DAT_005e8e7b;
          fVar5 = (float)local_1c * _DAT_005e8e7b;
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
      if (((_DAT_01c50948 != 0) || (param_2 != 4)) || (param_4 != 2)) {
        engine_mini3d_cpp_FUN_00515ae0(_DAT_01d227e0,param_2,param_3,param_4,uVar10);
        return;
      }
      local_14 = _DAT_01d2adfc;
      iVar9 = 0;
      do {
        uVar3 = *param_3;
        pfVar8 = _DAT_01d227e0 + (uint)uVar3 * 0x10;
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
        if (3 < iVar9 + 1) goto LAB_005130ac;
        cVar2 = *(char *)((int)&local_14 + iVar9 + 1);
        iVar9 = iVar9 + 1;
      }
      pfVar8 = _DAT_01d227e0 + iVar9 * 0x10;
      pfVar11 = local_64;
      for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
        *pfVar11 = *pfVar8;
        pfVar8 = pfVar8 + (uint)bVar12 * -2 + 1;
        pfVar11 = pfVar11 + (uint)bVar12 * -2 + 1;
      }
LAB_005130ac:
      if (uVar10 != 0) {
        engine_mini3d_cpp_FUN_005159c0(local_124,4);
        return;
      }
      engine_mini3d_cpp_FUN_005168c0(local_124,4);
    }
    else {
      (*_DAT_02c8346c)(param_1,param_2,param_3,param_4,_DAT_01c51d14);
    }
  }
  else {
    engine_mini3d_cpp_FUN_00516cc0(param_1,param_2,param_3,param_4);
  }
  return;
}
