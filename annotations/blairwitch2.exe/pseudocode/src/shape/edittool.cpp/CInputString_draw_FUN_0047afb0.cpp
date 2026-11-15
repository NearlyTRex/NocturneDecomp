// Name: shape_edittool.cpp_CInputString_draw_FUN_0047afb0
// Address: 0047afb0
// Address Range: [[0047afb0, 0047b1eb]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CInputString_draw_FUN_0047afb0(CInputString *this_ptr,int x_pos,int y_pos)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0047b117) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CInputString_draw_FUN_0047afb0(CInputString *this_ptr,int x_pos,int y_pos)

{
  int y2;
  uint uVar1;
  int iVar2;
  int iVar3;
  int x2;
  uint uVar4;
  CInputString *pCVar5;
  uint uVar6;
  
  y2 = _DAT_01c25f7c + y_pos;
  if (this_ptr->selection_start != this_ptr->cursor_position) {
    iVar2 = shape_edittool_cpp_CInputString_calcX_FUN_0047aef0(this_ptr,this_ptr->selection_start);
    iVar2 = iVar2 + x_pos;
    iVar3 = shape_edittool_cpp_CInputString_calcX_FUN_0047aef0(this_ptr,this_ptr->cursor_position);
    iVar3 = iVar3 + x_pos;
    x2 = iVar3;
    if (iVar3 < iVar2) {
      x2 = iVar2;
      iVar2 = iVar3;
    }
    if (_DAT_01c25f84 == 0) {
      engine_2d_c_fillRectColor_FUN_004031c0(iVar2,y_pos,x2,y2,_DAT_01c263a8);
    }
    else {
      iVar3 = (_DAT_01c263a8 & 0xff) * 3;
      engine_mini3d_cpp_setColor_FUN_004f8e20
                ((uint)(byte)(&DAT_01c3583a)[iVar3] |
                 (uint)(byte)(&DAT_01c35838)[iVar3] << 0x10 |
                 (uint)(byte)(&DAT_01c35839)[iVar3] << 8);
      engine_mini3d_cpp_fillRect_FUN_004f90d0(iVar2,y_pos,x2,y2);
    }
  }
  engine_3d_c_setRenderAlpha_FUN_00406da0(0xffff);
  engine_mini3d_cpp_setAlpha_FUN_004f3570(1.0);
  uVar4 = _DAT_01c25590;
  pCVar5 = this_ptr;
  uVar6 = _DAT_01c263ac;
  if (this_ptr->mask_mode != 0) {
    if (0x3ff < (uint)this_ptr->current_length) {
      _DAT_01d046a0 = "..\\shape\\edittool.cpp";
      _DAT_01d046a4 = 0x223;
      core_main_c_displayErrorAndQuit_FUN_004e4500("CInputString::draw - string too big for hidden text!");
    }
    memset((void *)0x1c25f88,0x2a,this_ptr->current_length);
    uVar6 = _DAT_01c263ac;
    uVar4 = _DAT_01c25590;
    *(byte *)(this_ptr->current_length + 0x1c25f88) = 0;
    pCVar5 = (CInputString *)0x1c25f88;
  }
  engine_font_cpp_FUN_004a8df0(uVar4,pCVar5,x_pos,y_pos,uVar6,0xffffffff);
  uVar1 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
  if ((uVar1 & 0x40000) != 0) {
    if (_DAT_01c25f84 == 0) {
      _DAT_01c35e60 = _DAT_01c263b0;
    }
    else {
      iVar2 = (_DAT_01c263b0 & 0xff) * 3;
      engine_mini3d_cpp_setColor_FUN_004f8e20
                ((uint)(byte)(&DAT_01c3583a)[iVar2] |
                 (uint)(byte)(&DAT_01c35838)[iVar2] << 0x10 |
                 (uint)(byte)(&DAT_01c35839)[iVar2] << 8);
    }
    iVar2 = shape_edittool_cpp_CInputString_calcX_FUN_0047aef0(this_ptr,this_ptr->cursor_position);
    engine_2d_c_drawLine_FUN_004011a0(x_pos + iVar2,y_pos,x_pos + iVar2,y2);
  }
  return;
}
