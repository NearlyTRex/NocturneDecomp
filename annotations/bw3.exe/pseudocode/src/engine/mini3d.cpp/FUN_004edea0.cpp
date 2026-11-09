// Name: engine_mini3d.cpp_FUN_004edea0
// Address: 004edea0
// Address Range: [[004edea0, 004ee100]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004edea0(int param_1,int param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004edea0(int param_1,int param_2,uint param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  _DAT_01d76c34 = _DAT_01d76c34 + param_2;
  _DAT_01ed3198 = _DAT_01ed3198 + param_4;
  if (_DAT_01d7a694 != 0) {
    engine_mini3d_cpp_FUN_004f2490(param_1,param_2,param_3,param_4);
    return;
  }
  engine_mini3d_cpp_FUN_004edcc0();
  engine_mini3d_cpp_FUN_004f2430();
  if ((_DAT_02cf60b4 != (code *)0x0) && (_DAT_01c6cee8 != 0)) {
    (*_DAT_02cf60b4)(param_1,param_2,param_3,param_4,_DAT_01c6e2b4);
    return;
  }
  engine_mini3d_cpp_FUN_004ede40();
  if (10000 < param_2) {
    _DAT_01d71de0 = "..\\engine\\mini3d.cpp";
    _DAT_01d71de4 = 0x6c0;
    core_main_c_FUN_004e4330("CMini3D::polyList - Too many verticies : %d",param_2);
  }
  engine_mini3d_cpp_FUN_004efe20();
  if ((_DAT_02cf60bc != (code *)0x0) && (_DAT_01c6cee8 != 0)) {
    iVar4 = 0;
    iVar3 = _DAT_01d76f60;
    if (0 < param_2) {
      do {
        iVar4 = iVar4 + 1;
        engine_mini3d_cpp_FUN_004f0270(iVar3,param_1);
        param_1 = param_1 + 0x20;
        iVar3 = iVar3 + 0x24;
      } while (iVar4 < param_2);
    }
    (*_DAT_02cf60bc)(_DAT_01d76f60,param_2,param_3,param_4,_DAT_01c6e2b4);
    return;
  }
  if ((_DAT_02cf60c0 != (code *)0x0) && (_DAT_01c6cee8 != 0)) {
    iVar4 = 0;
    iVar3 = _DAT_01d76f60;
    if (0 < param_2) {
      do {
        iVar4 = iVar4 + 1;
        engine_mini3d_cpp_FUN_004f0170(iVar3,param_1);
        param_1 = param_1 + 0x20;
        iVar3 = iVar3 + 0x20;
      } while (iVar4 < param_2);
    }
    (*_DAT_02cf60c0)(_DAT_01d76f60,param_2,param_3,param_4,_DAT_01c6e2b4);
    return;
  }
  iVar3 = 0;
  uVar5 = 0;
  if (0 < param_2) {
    iVar4 = _DAT_01d76f60 + 0x24;
    iVar2 = _DAT_01d76f60;
    do {
      engine_mini3d_cpp_FUN_004eea30(param_1,iVar2,uVar5,iVar4);
      *(uint *)(iVar2 + 0x1c) = *(uint *)(param_1 + 0x18);
      *(uint *)(iVar2 + 0x20) = *(uint *)(param_1 + 0x1c);
      engine_mini3d_cpp_FUN_004ef470(param_1,iVar4);
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 0x20;
      engine_mini3d_cpp_FUN_004ef890(iVar2);
      puVar1 = (uint *)(iVar2 + 0x10);
      iVar2 = iVar2 + 0x40;
      uVar5 = uVar5 | *puVar1;
      iVar4 = iVar4 + 0x40;
    } while (iVar3 < param_2);
  }
  if (_DAT_01d7a698 == 0) {
    engine_mini3d_cpp_FUN_004f12b0(_DAT_01d76f60,param_2,param_3,param_4,uVar5);
    return;
  }
  engine_mini3d_cpp_FUN_004f2e30(_DAT_01d76f60,param_2,param_3,param_4);
  return;
}
