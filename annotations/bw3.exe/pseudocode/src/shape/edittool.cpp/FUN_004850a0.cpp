// Name: shape_edittool.cpp_FUN_004850a0
// Address: 004850a0
// Address Range: [[004850a0, 004852e6]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_004850a0(int param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_004850a0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = _DAT_01c5bb68;
  if (param_5 != 0) {
    uVar2 = _DAT_01c5bb6c;
  }
  if (_DAT_01c5baec != 0) {
    iVar1 = (uVar2 & 0xff) * 3;
    engine_mini3d_cpp_setColor_FUN_004f3520
              ((uint)(byte)(&DAT_01c6af9a)[iVar1] |
               (uint)(byte)(&DAT_01c6af99)[iVar1] << 8 | (uint)(byte)(&DAT_01c6af98)[iVar1] << 0x10)
    ;
    uVar2 = _DAT_01c6b5c0;
  }
  _DAT_01c6b5c0 = uVar2;
  if (_DAT_01c5baec == 0) {
    engine_2d_c_drawHLine_FUN_00402f30(param_1,param_2,param_3 + -1);
  }
  else {
    engine_mini3d_cpp_drawHLine_FUN_004f3ab0(param_1,param_2,param_3 + -1);
  }
  if (_DAT_01c5baec == 0) {
    engine_2d_c_drawVLine_FUN_00403040(param_1,param_2,param_4 + -1);
  }
  else {
    engine_mini3d_cpp_drawVLine_FUN_004f3ad0(param_1,param_2,param_4 + -1);
  }
  uVar2 = _DAT_01c5bb6c;
  if (param_5 != 0) {
    uVar2 = _DAT_01c5bb68;
  }
  if (_DAT_01c5baec != 0) {
    iVar1 = (uVar2 & 0xff) * 3;
    engine_mini3d_cpp_setColor_FUN_004f3520
              ((uint)(byte)(&DAT_01c6af9a)[iVar1] |
               (uint)(byte)(&DAT_01c6af98)[iVar1] << 0x10 | (uint)(byte)(&DAT_01c6af99)[iVar1] << 8)
    ;
    uVar2 = _DAT_01c6b5c0;
  }
  _DAT_01c6b5c0 = uVar2;
  if (_DAT_01c5baec == 0) {
    engine_2d_c_drawHLine_FUN_00402f30(param_1,param_4 + -1,param_3 + -1);
  }
  else {
    engine_mini3d_cpp_drawHLine_FUN_004f3ab0(param_1,param_4 + -1,param_3 + -1);
  }
  if (_DAT_01c5baec == 0) {
    engine_2d_c_drawVLine_FUN_00403040(param_3 + -1,param_2,param_4 + -1);
  }
  else {
    engine_mini3d_cpp_drawVLine_FUN_004f3ad0(param_3 + -1,param_2,param_4 + -1);
  }
  if (_DAT_01c5baec == 0) {
    engine_2d_c_fillRectColor_FUN_004031c0
              (param_1 + 1,param_2 + 1,param_3 + -2,param_4 + -2,_DAT_01c5bb5c);
    return;
  }
  if (_DAT_01c5baec == 0) {
    _DAT_01c6b5c0 = _DAT_01c5bb5c;
  }
  else {
    iVar1 = (_DAT_01c5bb5c & 0xff) * 3;
    engine_mini3d_cpp_setColor_FUN_004f3520
              ((uint)(byte)(&DAT_01c6af9a)[iVar1] |
               (uint)(byte)(&DAT_01c6af98)[iVar1] << 0x10 | (uint)(byte)(&DAT_01c6af99)[iVar1] << 8)
    ;
  }
  engine_mini3d_cpp_fillRect_FUN_004f37e0(param_1 + 1,param_2 + 1,param_3 + -2,param_4 + -2);
  return;
}
