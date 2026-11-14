// Name: shape_edittool.cpp_draw3DBorder_FUN_004850a0
// Address: 004850a0
// Address Range: [[004850a0, 004852e6]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_draw3DBorder_FUN_004850a0(int left,int top,int right,int bottom,int pressed)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_draw3DBorder_FUN_004850a0(int left,int top,int right,int bottom,int pressed)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = _DAT_01c5bb68;
  if (pressed != 0) {
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
    engine_2d_c_drawHLine_FUN_00402f30(left,top,right + -1);
  }
  else {
    engine_mini3d_cpp_drawHLine_FUN_004f3ab0(left,top,right + -1);
  }
  if (_DAT_01c5baec == 0) {
    engine_2d_c_drawVLine_FUN_00403040(left,top,bottom + -1);
  }
  else {
    engine_mini3d_cpp_drawVLine_FUN_004f3ad0(left,top,bottom + -1);
  }
  uVar2 = _DAT_01c5bb6c;
  if (pressed != 0) {
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
    engine_2d_c_drawHLine_FUN_00402f30(left,bottom + -1,right + -1);
  }
  else {
    engine_mini3d_cpp_drawHLine_FUN_004f3ab0(left,bottom + -1,right + -1);
  }
  if (_DAT_01c5baec == 0) {
    engine_2d_c_drawVLine_FUN_00403040(right + -1,top,bottom + -1);
  }
  else {
    engine_mini3d_cpp_drawVLine_FUN_004f3ad0(right + -1,top,bottom + -1);
  }
  if (_DAT_01c5baec == 0) {
    engine_2d_c_fillRectColor_FUN_004031c0(left + 1,top + 1,right + -2,bottom + -2,_DAT_01c5bb5c);
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
  engine_mini3d_cpp_fillRect_FUN_004f37e0(left + 1,top + 1,right + -2,bottom + -2);
  return;
}
