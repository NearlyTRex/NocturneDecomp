// Name: engine_mini3d.cpp_FUN_004f3ef0
// Address: 004f3ef0
// Address Range: [[004f3ef0, 004f3fef] [004f401c, 004f4072]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004f3ef0(int param_1,int param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004f3ef0(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  _DAT_01e61b58 = _DAT_01e61b58 + param_4;
  _DAT_01d09854 = _DAT_01d09854 + param_2;
  if (_DAT_01d0d2b4 == 0) {
    if (_DAT_01d09914 != 0) {
      param_3 = engine_mini3d_cpp_FUN_004f34d0(param_3,param_4);
    }
    if ((_DAT_0264bc90 != (code *)0x0) && (_DAT_01c37788 != 0)) {
      (*_DAT_0264bc90)(param_1,param_2,param_3,param_4,_DAT_01c38b54);
      return;
    }
    engine_mini3d_cpp_FUN_004f3740();
    engine_mini3d_cpp_FUN_004f7da0();
    engine_mini3d_cpp_FUN_004f38c0();
    if (10000 < param_2) {
      _DAT_01d046a0 = "..\\engine\\mini3d.cpp";
      _DAT_01d046a4 = 0x80d;
      core_main_c_FUN_004e4500("CMini3D::polyList - Too many verticies : %d",param_2);
    }
    iVar3 = 0;
    uVar2 = 0;
    iVar1 = _DAT_01d09b7c;
    if (0 < param_2) {
      do {
        engine_mini3d_cpp_FUN_004f4510(param_1,iVar1);
        iVar3 = iVar3 + 1;
        engine_mini3d_cpp_FUN_004f5370(iVar1);
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
    if (_DAT_01d0d2b8 == 0) {
      engine_mini3d_cpp_FUN_004f6d00(_DAT_01d09b7c,param_2,param_3,param_4,uVar2);
      return;
    }
    engine_mini3d_cpp_FUN_004f8750(_DAT_01d09b7c,param_2,param_3,param_4);
  }
  else {
    engine_mini3d_cpp_FUN_004f7e00(param_1,param_2,param_3,param_4);
  }
  return;
}
