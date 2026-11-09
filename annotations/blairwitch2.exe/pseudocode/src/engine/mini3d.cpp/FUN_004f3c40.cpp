// Name: engine_mini3d.cpp_FUN_004f3c40
// Address: 004f3c40
// Address Range: [[004f3c40, 004f3e5e]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004f3c40(int param_1,int param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004f3c40(int param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  _DAT_01e61b58 = _DAT_01e61b58 + param_4;
  _DAT_01d09854 = _DAT_01d09854 + param_2;
  if (_DAT_01d0d2b4 == 0) {
    if (_DAT_01d09914 != 0) {
      param_3 = engine_mini3d_cpp_FUN_004f34d0(param_3,param_4);
    }
    engine_mini3d_cpp_FUN_004f3740();
    engine_mini3d_cpp_FUN_004f7da0();
    if ((_DAT_0264bc94 == (code *)0x0) || (_DAT_01c37788 == 0)) {
      engine_mini3d_cpp_FUN_004f38c0();
      if (10000 < param_2) {
        _DAT_01d046a0 = "..\\engine\\mini3d.cpp";
        _DAT_01d046a4 = 0x780;
        core_main_c_FUN_004e4500("CMini3D::polyList - Too many verticies : %d",param_2);
      }
      uVar6 = 0;
      if (0 < param_2) {
        iVar5 = _DAT_01d09b7c;
        iVar7 = 0;
        do {
          engine_mini3d_cpp_FUN_004f4510(param_1,iVar5);
          uVar1 = *(uint *)(param_1 + 0x10);
          fVar2 = (float)(uVar1 >> 8 & 0xff) * _DAT_005ddd5c;
          fVar3 = (float)(uVar1 >> 0x10 & 0xff) * _DAT_005ddd5c;
          fVar4 = (float)(uVar1 >> 0x18) * _DAT_005ddd5c;
          iVar8 = iVar7 + 0x40;
          *(float *)(iVar5 + 0x24) = (float)(uVar1 & 0xff) * _DAT_005ddd5c;
          *(float *)(iVar5 + 0x28) = fVar2;
          *(float *)(iVar5 + 0x2c) = fVar3;
          *(float *)(iVar5 + 0x30) = fVar4;
          *(uint *)(iVar5 + 0x1c) = *(uint *)(param_1 + 0x18);
          *(uint *)(iVar5 + 0x20) = *(uint *)(param_1 + 0x1c);
          engine_mini3d_cpp_FUN_004f5370(iVar5);
          iVar5 = iVar5 + 0x40;
          uVar6 = uVar6 | *(uint *)(iVar7 + 0x10 + _DAT_01d09b7c);
          param_1 = param_1 + 0x20;
          iVar7 = iVar8;
        } while (iVar8 < param_2 << 6);
      }
      if (_DAT_01d0d2b8 == 0) {
        engine_mini3d_cpp_FUN_004f6d00(_DAT_01d09b7c,param_2,param_3,param_4,uVar6);
        return;
      }
      engine_mini3d_cpp_FUN_004f8750(_DAT_01d09b7c,param_2,param_3,param_4);
    }
    else {
      (*_DAT_0264bc94)(param_1,param_2,param_3,param_4,_DAT_01c38b54);
    }
  }
  else {
    engine_mini3d_cpp_FUN_004f7e00(param_1,param_2,param_3,param_4);
  }
  return;
}
