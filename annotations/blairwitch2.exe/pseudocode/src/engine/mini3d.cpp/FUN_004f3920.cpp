// Name: engine_mini3d.cpp_FUN_004f3920
// Address: 004f3920
// Address Range: [[004f3920, 004f3ba0]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004f3920(int param_1,int param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004f3920(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  _DAT_01d09854 = _DAT_01d09854 + param_2;
  _DAT_01e61b58 = _DAT_01e61b58 + param_4;
  if (_DAT_01d0d2b4 != 0) {
    engine_mini3d_cpp_FUN_004f7e00(param_1,param_2,param_3,param_4);
    return;
  }
  if (_DAT_01d09914 != 0) {
    param_3 = engine_mini3d_cpp_FUN_004f34d0(param_3,param_4);
  }
  engine_mini3d_cpp_FUN_004f3740();
  engine_mini3d_cpp_FUN_004f7da0();
  if ((_DAT_0264bc88 != (code *)0x0) && (_DAT_01c37788 != 0)) {
    (*_DAT_0264bc88)(param_1,param_2,param_3,param_4,_DAT_01c38b54);
    return;
  }
  engine_mini3d_cpp_FUN_004f38c0();
  if (10000 < param_2) {
    _DAT_01d046a0 = "..\\engine\\mini3d.cpp";
    _DAT_01d046a4 = 0x6db;
    core_main_c_FUN_004e4500("CMini3D::polyList - Too many verticies : %d",param_2);
  }
  engine_mini3d_cpp_FUN_004f5900();
  if ((_DAT_0264bc90 != (code *)0x0) && (_DAT_01c37788 != 0)) {
    iVar3 = 0;
    iVar2 = _DAT_01d09b7c;
    if (0 < param_2) {
      do {
        iVar3 = iVar3 + 1;
        engine_mini3d_cpp_FUN_004f5d50(iVar2,param_1);
        param_1 = param_1 + 0x20;
        iVar2 = iVar2 + 0x24;
      } while (iVar3 < param_2);
    }
    (*_DAT_0264bc90)(_DAT_01d09b7c,param_2,param_3,param_4,_DAT_01c38b54);
    return;
  }
  if ((_DAT_0264bc94 != (code *)0x0) && (_DAT_01c37788 != 0)) {
    iVar3 = 0;
    iVar2 = _DAT_01d09b7c;
    if (0 < param_2) {
      do {
        iVar3 = iVar3 + 1;
        engine_mini3d_cpp_FUN_004f5c50(iVar2,param_1);
        param_1 = param_1 + 0x20;
        iVar2 = iVar2 + 0x20;
      } while (iVar3 < param_2);
    }
    (*_DAT_0264bc94)(_DAT_01d09b7c,param_2,param_3,param_4,_DAT_01c38b54);
    return;
  }
  iVar2 = 0;
  uVar4 = 0;
  if (0 < param_2) {
    iVar3 = _DAT_01d09b7c + 0x24;
    iVar1 = _DAT_01d09b7c;
    do {
      engine_mini3d_cpp_FUN_004f4510(param_1,iVar1,uVar4,iVar3);
      *(uint *)(iVar1 + 0x1c) = *(uint *)(param_1 + 0x18);
      *(uint *)(iVar1 + 0x20) = *(uint *)(param_1 + 0x1c);
      engine_mini3d_cpp_FUN_004f4f50(param_1,iVar3);
      iVar2 = iVar2 + 1;
      engine_mini3d_cpp_FUN_004f5370(iVar1);
      param_1 = param_1 + 0x20;
      uVar4 = uVar4 | *(uint *)(iVar1 + 0x10);
      iVar1 = iVar1 + 0x40;
      iVar3 = iVar3 + 0x40;
    } while (iVar2 < param_2);
  }
  if (_DAT_01d0d2b8 == 0) {
    engine_mini3d_cpp_FUN_004f6d00(_DAT_01d09b7c,param_2,param_3,param_4,uVar4);
    return;
  }
  engine_mini3d_cpp_FUN_004f8750(_DAT_01d09b7c,param_2,param_3,param_4);
  return;
}
