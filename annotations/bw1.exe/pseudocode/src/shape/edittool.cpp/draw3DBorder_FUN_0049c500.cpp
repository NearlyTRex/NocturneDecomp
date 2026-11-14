// Name: shape_edittool.cpp_draw3DBorder_FUN_0049c500
// Address: 0049c500
// Address Range: [[0049c500, 0049c746]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_draw3DBorder_FUN_0049c500(int left,int top,int right,int bottom,int pressed)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_draw3DBorder_FUN_0049c500(int left,int top,int right,int bottom,int pressed)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = _DAT_01c3f5c0;
  if (pressed != 0) {
    uVar2 = _DAT_01c3f5c4;
  }
  if (_DAT_01c3f544 != 0) {
    iVar1 = (uVar2 & 0xff) * 3;
    engine_mini3d_cpp_setColor_FUN_00517d50
              ((uint)(byte)(&DAT_01c4e9fa)[iVar1] |
               (uint)(byte)(&DAT_01c4e9f9)[iVar1] << 8 | (uint)(byte)(&DAT_01c4e9f8)[iVar1] << 0x10)
    ;
    uVar2 = _DAT_01c4f020;
  }
  _DAT_01c4f020 = uVar2;
  if (_DAT_01c3f544 == 0) {
    engine_2d_c_drawHLine_FUN_00402f30(left,top,right + -1);
  }
  else {
    engine_mini3d_cpp_drawHLine_FUN_005182e0(left,top,right + -1);
  }
  if (_DAT_01c3f544 == 0) {
    engine_2d_c_drawVLine_FUN_00403040(left,top,bottom + -1);
  }
  else {
    engine_mini3d_cpp_drawVLine_FUN_00518300(left,top,bottom + -1);
  }
  uVar2 = _DAT_01c3f5c4;
  if (pressed != 0) {
    uVar2 = _DAT_01c3f5c0;
  }
  if (_DAT_01c3f544 != 0) {
    iVar1 = (uVar2 & 0xff) * 3;
    engine_mini3d_cpp_setColor_FUN_00517d50
              ((uint)(byte)(&DAT_01c4e9fa)[iVar1] |
               (uint)(byte)(&DAT_01c4e9f8)[iVar1] << 0x10 | (uint)(byte)(&DAT_01c4e9f9)[iVar1] << 8)
    ;
    uVar2 = _DAT_01c4f020;
  }
  _DAT_01c4f020 = uVar2;
  if (_DAT_01c3f544 == 0) {
    engine_2d_c_drawHLine_FUN_00402f30(left,bottom + -1,right + -1);
  }
  else {
    engine_mini3d_cpp_drawHLine_FUN_005182e0(left,bottom + -1,right + -1);
  }
  if (_DAT_01c3f544 == 0) {
    engine_2d_c_drawVLine_FUN_00403040(right + -1,top,bottom + -1);
  }
  else {
    engine_mini3d_cpp_drawVLine_FUN_00518300(right + -1,top,bottom + -1);
  }
  if (_DAT_01c3f544 == 0) {
    engine_2d_c_fillRectColor_FUN_004031c0(left + 1,top + 1,right + -2,bottom + -2,_DAT_01c3f5b4);
    return;
  }
  if (_DAT_01c3f544 == 0) {
    _DAT_01c4f020 = _DAT_01c3f5b4;
  }
  else {
    iVar1 = (_DAT_01c3f5b4 & 0xff) * 3;
    engine_mini3d_cpp_setColor_FUN_00517d50
              ((uint)(byte)(&DAT_01c4e9fa)[iVar1] |
               (uint)(byte)(&DAT_01c4e9f8)[iVar1] << 0x10 | (uint)(byte)(&DAT_01c4e9f9)[iVar1] << 8)
    ;
  }
  engine_mini3d_cpp_fillRect_FUN_00518010(left + 1,top + 1,right + -2,bottom + -2);
  return;
}
