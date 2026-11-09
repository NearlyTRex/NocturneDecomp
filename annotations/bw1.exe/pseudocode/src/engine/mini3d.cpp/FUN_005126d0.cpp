// Name: engine_mini3d.cpp_FUN_005126d0
// Address: 005126d0
// Address Range: [[005126d0, 00512930]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_005126d0(int param_1,int param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_005126d0(int param_1,int param_2,uint param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  _DAT_01d224b4 = _DAT_01d224b4 + param_2;
  _DAT_01e7dac8 = _DAT_01e7dac8 + param_4;
  if (_DAT_01d25f14 != 0) {
    engine_mini3d_cpp_FUN_00516cc0(param_1,param_2,param_3,param_4);
    return;
  }
  engine_mini3d_cpp_FUN_005124f0();
  engine_mini3d_cpp_FUN_00516c60();
  if ((_DAT_02c83458 != (code *)0x0) && (_DAT_01c50948 != 0)) {
    (*_DAT_02c83458)(param_1,param_2,param_3,param_4,_DAT_01c51d14);
    return;
  }
  engine_mini3d_cpp_FUN_00512670();
  if (10000 < param_2) {
    _DAT_01d1d400 = "..\\engine\\mini3d.cpp";
    _DAT_01d1d404 = 0x6c0;
    core_main_c_FUN_005030e0("CMini3D::polyList - Too many verticies : %d",param_2);
  }
  engine_mini3d_cpp_FUN_00514650();
  if ((_DAT_02c83460 != (code *)0x0) && (_DAT_01c50948 != 0)) {
    iVar4 = 0;
    iVar3 = _DAT_01d227e0;
    if (0 < param_2) {
      do {
        iVar4 = iVar4 + 1;
        engine_mini3d_cpp_FUN_00514aa0(iVar3,param_1);
        param_1 = param_1 + 0x20;
        iVar3 = iVar3 + 0x24;
      } while (iVar4 < param_2);
    }
    (*_DAT_02c83460)(_DAT_01d227e0,param_2,param_3,param_4,_DAT_01c51d14);
    return;
  }
  if ((_DAT_02c83464 != (code *)0x0) && (_DAT_01c50948 != 0)) {
    iVar4 = 0;
    iVar3 = _DAT_01d227e0;
    if (0 < param_2) {
      do {
        iVar4 = iVar4 + 1;
        engine_mini3d_cpp_FUN_005149a0(iVar3,param_1);
        param_1 = param_1 + 0x20;
        iVar3 = iVar3 + 0x20;
      } while (iVar4 < param_2);
    }
    (*_DAT_02c83464)(_DAT_01d227e0,param_2,param_3,param_4,_DAT_01c51d14);
    return;
  }
  iVar3 = 0;
  uVar5 = 0;
  if (0 < param_2) {
    iVar4 = _DAT_01d227e0 + 0x24;
    iVar2 = _DAT_01d227e0;
    do {
      engine_mini3d_cpp_FUN_00513260(param_1,iVar2,uVar5,iVar4);
      *(uint *)(iVar2 + 0x1c) = *(uint *)(param_1 + 0x18);
      *(uint *)(iVar2 + 0x20) = *(uint *)(param_1 + 0x1c);
      engine_mini3d_cpp_FUN_00513ca0(param_1,iVar4);
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 0x20;
      engine_mini3d_cpp_FUN_005140c0(iVar2);
      puVar1 = (uint *)(iVar2 + 0x10);
      iVar2 = iVar2 + 0x40;
      uVar5 = uVar5 | *puVar1;
      iVar4 = iVar4 + 0x40;
    } while (iVar3 < param_2);
  }
  if (_DAT_01d25f18 == 0) {
    engine_mini3d_cpp_FUN_00515ae0(_DAT_01d227e0,param_2,param_3,param_4,uVar5);
    return;
  }
  engine_mini3d_cpp_FUN_00517660(_DAT_01d227e0,param_2,param_3,param_4);
  return;
}
