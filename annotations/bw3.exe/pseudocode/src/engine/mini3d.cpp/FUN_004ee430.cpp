// Name: engine_mini3d.cpp_FUN_004ee430
// Address: 004ee430
// Address Range: [[004ee430, 004ee51d] [004ee54c, 004ee587]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004ee430(int param_1,int param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004ee430(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  _DAT_01ed3198 = _DAT_01ed3198 + param_4;
  _DAT_01d76c34 = _DAT_01d76c34 + param_2;
  if (_DAT_01d7a694 == 0) {
    if ((_DAT_02cf60bc != (code *)0x0) && (_DAT_01c6cee8 != 0)) {
      (*_DAT_02cf60bc)(param_1,param_2,param_3,param_4,_DAT_01c6e2b4);
      return;
    }
    engine_mini3d_cpp_FUN_004edcc0();
    engine_mini3d_cpp_FUN_004f2430();
    engine_mini3d_cpp_FUN_004ede40();
    if (10000 < param_2) {
      _DAT_01d71de0 = "..\\engine\\mini3d.cpp";
      _DAT_01d71de4 = 0x7e6;
      core_main_c_FUN_004e4330("CMini3D::polyList - Too many verticies : %d",param_2);
    }
    iVar3 = 0;
    uVar2 = 0;
    iVar1 = _DAT_01d76f60;
    if (0 < param_2) {
      do {
        engine_mini3d_cpp_FUN_004eea30(param_1,iVar1);
        iVar3 = iVar3 + 1;
        engine_mini3d_cpp_FUN_004ef890(iVar1);
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
    if (_DAT_01d7a698 == 0) {
      engine_mini3d_cpp_FUN_004f12b0(_DAT_01d76f60,param_2,param_3,param_4,uVar2);
      return;
    }
    engine_mini3d_cpp_FUN_004f2e30(_DAT_01d76f60,param_2,param_3,param_4);
  }
  else {
    engine_mini3d_cpp_FUN_004f2490(param_1,param_2,param_3,param_4);
  }
  return;
}
