// Name: core_dmodel.cpp_FUN_0044ea80
// Address: 0044ea80
// Address Range: [[0044ea80, 0044eca4]]
// Convention: unknown
// Signature: void core_dmodel_cpp_FUN_0044ea80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dmodel_cpp_FUN_0044ea80(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  uint uVar1;
  int iVar2;
  
  core_dmodel_cpp_FUN_0044e590(param_1);
  *(uint *)(param_1 + 0x104) = param_2;
  *(uint *)(param_1 + 0x110) = param_3;
  *(uint *)(param_1 + 0x120) = param_4;
  *(uint *)(param_1 + 0x244) = param_5;
  *(uint *)(param_1 + 0x100) = param_6;
  if (4 < *(int *)(param_1 + 0x120)) {
    _DAT_01d046a0 = "..\\core\\dmodel.cpp";
    _DAT_01d046a4 = 0x2c0;
    core_main_c_FUN_004e4500("Too many materials!");
  }
  if (0x1e < *(int *)(param_1 + 0x244)) {
    _DAT_01d046a0 = "..\\core\\dmodel.cpp";
    _DAT_01d046a4 = 0x2c1;
    core_main_c_FUN_004e4500("Too many parts!");
  }
  uVar1 = FUN_005b8df8(*(int *)(param_1 + 0x100) * *(int *)(param_1 + 0x104) * 0xc);
  *(uint *)(param_1 + 0x10c) = uVar1;
  uVar1 = FUN_005b8df8(*(int *)(param_1 + 0x110) * 0x48);
  *(uint *)(param_1 + 0x114) = uVar1;
  uVar1 = FUN_005b8df8(*(int *)(param_1 + 0x110) << 2);
  *(uint *)(param_1 + 0x118) = uVar1;
  uVar1 = FUN_005b8df8(*(int *)(param_1 + 0x100) * 0x18);
  *(uint *)(param_1 + 0x350) = uVar1;
  if ((((*(int *)(param_1 + 0x10c) == 0) ||
       ((0 < *(int *)(param_1 + 0x110) && (*(int *)(param_1 + 0x114) == 0)))) ||
      ((0 < *(int *)(param_1 + 0x110) && (*(int *)(param_1 + 0x118) == 0)))) ||
     (*(int *)(param_1 + 0x350) == 0)) {
    core_dmodel_cpp_FUN_0044e590(param_1);
    _DAT_01d046a4 = 0x2d3;
    _DAT_01d046a0 = "..\\core\\dmodel.cpp";
    core_main_c_FUN_004e4500
              ("Out of memory in CKeyFramedModel::allocate.  frameCount=%d, vertexCount=%d, polyCount=%d",*(uint *)(param_1 + 0x100),
               *(uint *)(param_1 + 0x104),*(uint *)(param_1 + 0x110));
    if (*(int *)(param_1 + 0x100) != 1) {
      return;
    }
  }
  else if (*(int *)(param_1 + 0x100) != 1) {
    return;
  }
  iVar2 = FUN_005b8df8(*(int *)(param_1 + 0x104) * 0xc);
  *(int *)(param_1 + 0x108) = iVar2;
  if (iVar2 != 0) {
    return;
  }
  _DAT_01d046a0 = "..\\core\\dmodel.cpp";
  _DAT_01d046a4 = 0x2db;
  core_main_c_FUN_004e4500("Out of memory for vertex normals in CKeyFramedModel::allocate.  vertexCount=%d",*(uint *)(param_1 + 0x104));
  return;
}
