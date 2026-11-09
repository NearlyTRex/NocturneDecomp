// Name: engine_mini3d.cpp_FUN_005129d0
// Address: 005129d0
// Address Range: [[005129d0, 00512bca]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_005129d0(int param_1,int param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_005129d0(int param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  _DAT_01e7dac8 = _DAT_01e7dac8 + param_4;
  _DAT_01d224b4 = _DAT_01d224b4 + param_2;
  if (_DAT_01d25f14 == 0) {
    engine_mini3d_cpp_FUN_005124f0();
    engine_mini3d_cpp_FUN_00516c60();
    if ((_DAT_02c83464 == (code *)0x0) || (_DAT_01c50948 == 0)) {
      engine_mini3d_cpp_FUN_00512670();
      if (10000 < param_2) {
        _DAT_01d1d400 = "..\\engine\\mini3d.cpp";
        _DAT_01d1d404 = 0x75f;
        core_main_c_FUN_005030e0("CMini3D::polyList - Too many verticies : %d",param_2);
      }
      uVar6 = 0;
      if (0 < param_2) {
        iVar5 = _DAT_01d227e0;
        iVar7 = 0;
        do {
          engine_mini3d_cpp_FUN_00513260(param_1,iVar5);
          uVar1 = *(uint *)(param_1 + 0x10);
          fVar2 = (float)(uVar1 >> 8 & 0xff) * _DAT_005e8da3;
          fVar3 = (float)(uVar1 >> 0x10 & 0xff) * _DAT_005e8da3;
          fVar4 = (float)(uVar1 >> 0x18) * _DAT_005e8da3;
          iVar8 = iVar7 + 0x40;
          *(float *)(iVar5 + 0x24) = (float)(uVar1 & 0xff) * _DAT_005e8da3;
          *(float *)(iVar5 + 0x28) = fVar2;
          *(float *)(iVar5 + 0x2c) = fVar3;
          *(float *)(iVar5 + 0x30) = fVar4;
          *(uint *)(iVar5 + 0x1c) = *(uint *)(param_1 + 0x18);
          *(uint *)(iVar5 + 0x20) = *(uint *)(param_1 + 0x1c);
          engine_mini3d_cpp_FUN_005140c0(iVar5);
          iVar5 = iVar5 + 0x40;
          uVar6 = uVar6 | *(uint *)(iVar7 + 0x10 + _DAT_01d227e0);
          param_1 = param_1 + 0x20;
          iVar7 = iVar8;
        } while (iVar8 < param_2 << 6);
      }
      if (_DAT_01d25f18 == 0) {
        engine_mini3d_cpp_FUN_00515ae0(_DAT_01d227e0,param_2,param_3,param_4,uVar6);
        return;
      }
      engine_mini3d_cpp_FUN_00517660(_DAT_01d227e0,param_2,param_3,param_4);
    }
    else {
      (*_DAT_02c83464)(param_1,param_2,param_3,param_4,_DAT_01c51d14);
    }
  }
  else {
    engine_mini3d_cpp_FUN_00516cc0(param_1,param_2,param_3,param_4);
  }
  return;
}
