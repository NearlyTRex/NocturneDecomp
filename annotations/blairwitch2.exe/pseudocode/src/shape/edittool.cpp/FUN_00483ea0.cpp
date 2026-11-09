// Name: shape_edittool.cpp_FUN_00483ea0
// Address: 00483ea0
// Address Range: [[00483ea0, 004840e6]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_00483ea0(int param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_00483ea0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = _DAT_01c26400;
  if (param_5 != 0) {
    uVar2 = _DAT_01c26404;
  }
  if (_DAT_01c25f84 != 0) {
    iVar1 = (uVar2 & 0xff) * 3;
    engine_mini3d_cpp_FUN_004f8e20
              ((uint)(byte)(&DAT_01c3583a)[iVar1] |
               (uint)(byte)(&DAT_01c35839)[iVar1] << 8 | (uint)(byte)(&DAT_01c35838)[iVar1] << 0x10)
    ;
    uVar2 = _DAT_01c35e60;
  }
  _DAT_01c35e60 = uVar2;
  if (_DAT_01c25f84 == 0) {
    engine_2d_c_drawHLine_FUN_00402f30(param_1,param_2,param_3 + -1);
  }
  else {
    engine_mini3d_cpp_FUN_004f9390(param_1,param_2,param_3 + -1);
  }
  if (_DAT_01c25f84 == 0) {
    engine_2d_c_drawVLine_FUN_00403040(param_1,param_2,param_4 + -1);
  }
  else {
    engine_mini3d_cpp_FUN_004f93b0(param_1,param_2,param_4 + -1);
  }
  uVar2 = _DAT_01c26404;
  if (param_5 != 0) {
    uVar2 = _DAT_01c26400;
  }
  if (_DAT_01c25f84 != 0) {
    iVar1 = (uVar2 & 0xff) * 3;
    engine_mini3d_cpp_FUN_004f8e20
              ((uint)(byte)(&DAT_01c3583a)[iVar1] |
               (uint)(byte)(&DAT_01c35838)[iVar1] << 0x10 | (uint)(byte)(&DAT_01c35839)[iVar1] << 8)
    ;
    uVar2 = _DAT_01c35e60;
  }
  _DAT_01c35e60 = uVar2;
  if (_DAT_01c25f84 == 0) {
    engine_2d_c_drawHLine_FUN_00402f30(param_1,param_4 + -1,param_3 + -1);
  }
  else {
    engine_mini3d_cpp_FUN_004f9390(param_1,param_4 + -1,param_3 + -1);
  }
  if (_DAT_01c25f84 == 0) {
    engine_2d_c_drawVLine_FUN_00403040(param_3 + -1,param_2,param_4 + -1);
  }
  else {
    engine_mini3d_cpp_FUN_004f93b0(param_3 + -1,param_2,param_4 + -1);
  }
  if (_DAT_01c25f84 == 0) {
    engine_2d_c_fillRectColor_FUN_004031c0
              (param_1 + 1,param_2 + 1,param_3 + -2,param_4 + -2,_DAT_01c263f4);
    return;
  }
  if (_DAT_01c25f84 == 0) {
    _DAT_01c35e60 = _DAT_01c263f4;
  }
  else {
    iVar1 = (_DAT_01c263f4 & 0xff) * 3;
    engine_mini3d_cpp_FUN_004f8e20
              ((uint)(byte)(&DAT_01c3583a)[iVar1] |
               (uint)(byte)(&DAT_01c35838)[iVar1] << 0x10 | (uint)(byte)(&DAT_01c35839)[iVar1] << 8)
    ;
  }
  engine_mini3d_cpp_FUN_004f90d0(param_1 + 1,param_2 + 1,param_3 + -2,param_4 + -2);
  return;
}
