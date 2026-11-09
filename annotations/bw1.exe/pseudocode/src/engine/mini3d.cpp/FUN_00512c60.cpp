// Name: engine_mini3d.cpp_FUN_00512c60
// Address: 00512c60
// Address Range: [[00512c60, 00512d4d] [00512d7c, 00512db7]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_00512c60(int param_1,int param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_00512c60(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  _DAT_01e7dac8 = _DAT_01e7dac8 + param_4;
  _DAT_01d224b4 = _DAT_01d224b4 + param_2;
  if (_DAT_01d25f14 == 0) {
    if ((_DAT_02c83460 != (code *)0x0) && (_DAT_01c50948 != 0)) {
      (*_DAT_02c83460)(param_1,param_2,param_3,param_4,_DAT_01c51d14);
      return;
    }
    engine_mini3d_cpp_FUN_005124f0();
    engine_mini3d_cpp_FUN_00516c60();
    engine_mini3d_cpp_FUN_00512670();
    if (10000 < param_2) {
      _DAT_01d1d400 = "..\\engine\\mini3d.cpp";
      _DAT_01d1d404 = 0x7e6;
      core_main_c_FUN_005030e0("CMini3D::polyList - Too many verticies : %d",param_2);
    }
    iVar3 = 0;
    uVar2 = 0;
    iVar1 = _DAT_01d227e0;
    if (0 < param_2) {
      do {
        engine_mini3d_cpp_FUN_00513260(param_1,iVar1);
        iVar3 = iVar3 + 1;
        engine_mini3d_cpp_FUN_005140c0(iVar1);
        *(uint *)(iVar1 + 0x1c) = *(uint *)(param_1 + 0x1c);
        uVar2 = uVar2 | *(uint *)(iVar1 + 0x10);
        *(uint *)(iVar1 + 0x20) = *(uint *)(param_1 + 0x20);
        *(uint *)(iVar1 + 0x24) = *(uint *)(param_1 + 0xc);
        *(uint *)(iVar1 + 0x28) = *(uint *)(param_1 + 0x10);
        *(uint *)(iVar1 + 0x2c) = *(uint *)(param_1 + 0x14);
        *(uint *)(iVar1 + 0x30) = *(uint *)(param_1 + 0x18);
        iVar1 = iVar1 + 0x40;
        param_1 = param_1 + 0x24;
      } while (iVar3 < param_2);
    }
    if (_DAT_01d25f18 == 0) {
      engine_mini3d_cpp_FUN_00515ae0(_DAT_01d227e0,param_2,param_3,param_4,uVar2);
      return;
    }
    engine_mini3d_cpp_FUN_00517660(_DAT_01d227e0,param_2,param_3,param_4);
  }
  else {
    engine_mini3d_cpp_FUN_00516cc0(param_1,param_2,param_3,param_4);
  }
  return;
}
