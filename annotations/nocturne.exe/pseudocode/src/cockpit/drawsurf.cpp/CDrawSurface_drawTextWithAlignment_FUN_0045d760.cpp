// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760
// Address: 0045d760
// Address Range: [[0045d760, 0045da25]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760(CDrawSurface *this_ptr,char *text,int x,int width,int y,int height,ETextAlignment alignment_mode)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760(CDrawSurface *this_ptr,char *text,int x,int width,int y,int height,ETextAlignment alignment_mode)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int color;
  int right_x;
  int y_00;
  int iVar6;
  int left_x;
  
  uVar4 = _DAT_01c00c64;
  uVar3 = _DAT_01c00c60;
  uVar2 = _DAT_01c00c5c;
  uVar1 = _DAT_01c00c58;
  right_x = width + this_ptr->x;
  left_x = x + this_ptr->x;
  y_00 = y + this_ptr->y;
  iVar6 = height + this_ptr->y;
  _DAT_01c00c58 = this_ptr->clip_left;
  _DAT_01c00c60 = this_ptr->clip_right;
  _DAT_01c00c5c = this_ptr->clip_top;
  _DAT_01c00c64 = this_ptr->clip_bottom;
  if (_DAT_01b4d718 == (CBitFont *)0x0) {
    iVar5 = engine_2d_c_getTextWrapEnabled_FUN_00402e20();
    color = engine_2d_c_getTextColor_FUN_00402e60();
    engine_2d_c_disableTextWrap_FUN_00402e50();
    engine_2d_c_setTextColor_FUN_00402e70(_DAT_01b4d714);
    switch(alignment_mode) {
    case TEXT_ALIGN_RIGHT:
      engine_2d_c_drawTextRightAlignedColor_FUN_00402b60(text,left_x,y_00);
      break;
    case TEXT_ALIGN_CENTER:
      engine_2d_c_drawTextCenteredAtColor_FUN_00402c20(text,left_x,y_00);
      break;
    case TEXT_ALIGN_LEFT_VCENTER:
      y_00 = y_00 + -5;
    case TEXT_ALIGN_LEFT:
      goto LAB_0045d977;
    case TEXT_ALIGN_CENTER_BOTH:
      engine_2d_c_drawTextCenteredAtColor_FUN_00402c20(text,left_x,y_00 + -5);
      break;
    case TEXT_ALIGN_CENTER_IN_BOUNDS:
      engine_2d_c_drawTextCenteredColor_FUN_00402cf0(text,left_x,right_x,y_00);
      break;
    case TEXT_ALIGN_LEFT_IN_AREA:
      y_00 = (y_00 + -10 + iVar6) / 2;
LAB_0045d977:
      engine_2d_c_drawTextColor_FUN_00402a60(text,left_x,y_00);
      break;
    case TEXT_ALIGN_CENTER_IN_AREA:
      engine_2d_c_drawTextCenteredColor_FUN_00402cf0(text,left_x,right_x,(y_00 + -10 + iVar6) / 2);
    }
    engine_2d_c_setTextColor_FUN_00402e70(color);
    engine_2d_c_setTextWrapEnabled_FUN_00402e30(iVar5);
    _DAT_01c00c58 = uVar1;
    _DAT_01c00c5c = uVar2;
    _DAT_01c00c60 = uVar3;
    _DAT_01c00c64 = uVar4;
    return;
  }
  iVar5 = engine_font_cpp_getDefaultTextColor_FUN_00491140();
  engine_font_cpp_setDefaultTextColor_FUN_00491150(_DAT_01b4d710);
  switch(alignment_mode) {
  case TEXT_ALIGN_LEFT:
    goto LAB_0045d82a;
  case TEXT_ALIGN_RIGHT:
    engine_font_cpp_CBitFont_drawTextRight_FUN_00490be0(_DAT_01b4d718,left_x,y_00,-3,-1,text);
    break;
  case TEXT_ALIGN_CENTER:
    engine_font_cpp_CBitFont_drawTextCenter_FUN_00490ce0
              (_DAT_01b4d718,left_x,y_00,0xfffffffd,0xffffffff,text);
    break;
  case TEXT_ALIGN_LEFT_VCENTER:
    y_00 = y_00 - _DAT_01b4d718->current_line_height / 2;
    goto LAB_0045d82a;
  case TEXT_ALIGN_CENTER_BOTH:
    engine_font_cpp_CBitFont_drawTextCenter_FUN_00490ce0
              (_DAT_01b4d718,left_x,y_00 - _DAT_01b4d718->current_line_height / 2,0xfffffffd,
               0xffffffff,text);
    break;
  case TEXT_ALIGN_CENTER_IN_BOUNDS:
    engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_00490de0
              (_DAT_01b4d718,left_x,right_x,y_00,-3,-1,text);
    break;
  case TEXT_ALIGN_LEFT_IN_AREA:
    y_00 = ((y_00 + iVar6 + 1) - _DAT_01b4d718->current_line_height) / 2;
LAB_0045d82a:
    engine_font_cpp_CBitFont_drawTextWrapper_FUN_00490af0(_DAT_01b4d718,left_x,y_00,-3,-1,text);
    break;
  case TEXT_ALIGN_CENTER_IN_AREA:
    engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_00490de0
              (_DAT_01b4d718,left_x,right_x,
               ((y_00 + iVar6 + 1) - _DAT_01b4d718->current_line_height) / 2,-3,-1,text);
  }
  engine_font_cpp_setDefaultTextColor_FUN_00491150(iVar5);
  _DAT_01c00c58 = uVar1;
  _DAT_01c00c60 = uVar3;
  _DAT_01c00c5c = uVar2;
  _DAT_01c00c64 = uVar4;
  return;
}
