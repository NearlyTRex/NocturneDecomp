// Name: engine_mini3d.cpp_FUN_004ee1a0
// Address: 004ee1a0
// Address Range: [[004ee1a0, 004ee39a]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004ee1a0(int param_1,int param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004ee1a0(int param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  _DAT_01ed3198 = _DAT_01ed3198 + param_4;
  _DAT_01d76c34 = _DAT_01d76c34 + param_2;
  if (_DAT_01d7a694 == 0) {
    engine_mini3d_cpp_FUN_004edcc0();
    engine_mini3d_cpp_FUN_004f2430();
    if ((_DAT_02cf60c0 == (code *)0x0) || (_DAT_01c6cee8 == 0)) {
      engine_mini3d_cpp_FUN_004ede40();
      if (10000 < param_2) {
        _DAT_01d71de0 = "..\\engine\\mini3d.cpp";
        _DAT_01d71de4 = 0x75f;
        core_main_c_FUN_004e4330("CMini3D::polyList - Too many verticies : %d",param_2);
      }
      uVar6 = 0;
      if (0 < param_2) {
        iVar5 = _DAT_01d76f60;
        iVar7 = 0;
        do {
          engine_mini3d_cpp_FUN_004eea30(param_1,iVar5);
          uVar1 = *(uint *)(param_1 + 0x10);
          fVar2 = (float)(uVar1 >> 8 & 0xff) * _DAT_005c80a5;
          fVar3 = (float)(uVar1 >> 0x10 & 0xff) * _DAT_005c80a5;
          fVar4 = (float)(uVar1 >> 0x18) * _DAT_005c80a5;
          iVar8 = iVar7 + 0x40;
          *(float *)(iVar5 + 0x24) = (float)(uVar1 & 0xff) * _DAT_005c80a5;
          *(float *)(iVar5 + 0x28) = fVar2;
          *(float *)(iVar5 + 0x2c) = fVar3;
          *(float *)(iVar5 + 0x30) = fVar4;
          *(uint *)(iVar5 + 0x1c) = *(uint *)(param_1 + 0x18);
          *(uint *)(iVar5 + 0x20) = *(uint *)(param_1 + 0x1c);
          engine_mini3d_cpp_FUN_004ef890(iVar5);
          iVar5 = iVar5 + 0x40;
          uVar6 = uVar6 | *(uint *)(iVar7 + 0x10 + _DAT_01d76f60);
          param_1 = param_1 + 0x20;
          iVar7 = iVar8;
        } while (iVar8 < param_2 << 6);
      }
      if (_DAT_01d7a698 == 0) {
        engine_mini3d_cpp_FUN_004f12b0(_DAT_01d76f60,param_2,param_3,param_4,uVar6);
        return;
      }
      engine_mini3d_cpp_FUN_004f2e30(_DAT_01d76f60,param_2,param_3,param_4);
    }
    else {
      (*_DAT_02cf60c0)(param_1,param_2,param_3,param_4,_DAT_01c6e2b4);
    }
  }
  else {
    engine_mini3d_cpp_FUN_004f2490(param_1,param_2,param_3,param_4);
  }
  return;
}
