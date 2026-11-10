// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00469b40
// Address: 00469b40
// Address Range: [[00469b40, 00469e05]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextWithAlignment_FUN_00469b40(CDrawSurface *this_ptr,char *text,int x,int width,int y,int height,ETextAlignment alignment_mode)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextWithAlignment_FUN_00469b40(CDrawSurface *this_ptr,char *text,int x,int width,int y,int height,ETextAlignment alignment_mode)

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
  
  uVar4 = _DAT_01c6b5b4;
  uVar3 = _DAT_01c6b5b0;
  uVar2 = _DAT_01c6b5ac;
  uVar1 = _DAT_01c6b5a8;
  right_x = width + this_ptr->x;
  left_x = x + this_ptr->x;
  y_00 = y + this_ptr->y;
  iVar6 = height + this_ptr->y;
  _DAT_01c6b5a8 = this_ptr->clip_left;
  _DAT_01c6b5b0 = this_ptr->clip_right;
  _DAT_01c6b5ac = this_ptr->clip_top;
  _DAT_01c6b5b4 = this_ptr->clip_bottom;
  if (_DAT_01bdd7c4 == (CBitFont *)0x0) {
    iVar5 = engine_2d_c_FUN_00402800();
    color = engine_2d_c_FUN_00402840();
    engine_2d_c_FUN_00402830();
    engine_2d_c_FUN_00402850(_DAT_01bdd7c0);
    switch(alignment_mode) {
    case TEXT_ALIGN_RIGHT:
      engine_2d_c_drawTextRightAlignedColor_FUN_00402540(text,left_x,y_00);
      break;
    case TEXT_ALIGN_CENTER:
      engine_2d_c_drawTextCenteredAtColor_FUN_00402600(text,left_x,y_00);
      break;
    case TEXT_ALIGN_LEFT_VCENTER:
      y_00 = y_00 + -5;
    case TEXT_ALIGN_LEFT:
      goto LAB_00469d57;
    case TEXT_ALIGN_CENTER_BOTH:
      engine_2d_c_drawTextCenteredAtColor_FUN_00402600(text,left_x,y_00 + -5);
      break;
    case TEXT_ALIGN_CENTER_IN_BOUNDS:
      engine_2d_c_drawTextCenteredColor_FUN_004026d0(text,left_x,right_x,y_00);
      break;
    case TEXT_ALIGN_LEFT_IN_AREA:
      y_00 = (y_00 + -10 + iVar6) / 2;
LAB_00469d57:
      engine_2d_c_drawTextColor_FUN_00402440(text,left_x,y_00);
      break;
    case TEXT_ALIGN_CENTER_IN_AREA:
      engine_2d_c_drawTextCenteredColor_FUN_004026d0(text,left_x,right_x,(y_00 + -10 + iVar6) / 2);
    }
    engine_2d_c_FUN_00402850(color);
    engine_2d_c_FUN_00402810(iVar5);
    _DAT_01c6b5a8 = uVar1;
    _DAT_01c6b5ac = uVar2;
    _DAT_01c6b5b0 = uVar3;
    _DAT_01c6b5b4 = uVar4;
    return;
  }
  iVar5 = engine_font_cpp_getDefaultTextColor_FUN_004b12e0();
  engine_font_cpp_setDefaultTextColor_FUN_004b1300(_DAT_01bdd7bc);
  switch(alignment_mode) {
  case TEXT_ALIGN_LEFT:
    goto LAB_00469c0a;
  case TEXT_ALIGN_RIGHT:
    engine_font_cpp_CBitFont_drawTextRight_FUN_004b0da0(_DAT_01bdd7c4,left_x,y_00,-3,-1,text);
    break;
  case TEXT_ALIGN_CENTER:
    engine_font_cpp_CBitFont_drawTextCenter_FUN_004b0ea0(_DAT_01bdd7c4,left_x,y_00,-3,-1,text);
    break;
  case TEXT_ALIGN_LEFT_VCENTER:
    y_00 = y_00 - *(int *)(_DAT_01bdd7c4 + 0x41f0) / 2;
    goto LAB_00469c0a;
  case TEXT_ALIGN_CENTER_BOTH:
    engine_font_cpp_CBitFont_drawTextCenter_FUN_004b0ea0
              (_DAT_01bdd7c4,left_x,y_00 - *(int *)(_DAT_01bdd7c4 + 0x41f0) / 2,-3,-1,text);
    break;
  case TEXT_ALIGN_CENTER_IN_BOUNDS:
    engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004b0fa0
              (_DAT_01bdd7c4,left_x,right_x,y_00,-3,-1,text);
    break;
  case TEXT_ALIGN_LEFT_IN_AREA:
    y_00 = ((y_00 + iVar6 + 1) - *(int *)(_DAT_01bdd7c4 + 0x41f0)) / 2;
LAB_00469c0a:
    engine_font_cpp_CBitFont_drawTextWrapper_FUN_004b0cb0(_DAT_01bdd7c4,left_x,y_00,-3,-1,text);
    break;
  case TEXT_ALIGN_CENTER_IN_AREA:
    engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004b0fa0
              (_DAT_01bdd7c4,left_x,right_x,
               ((y_00 + iVar6 + 1) - *(int *)(_DAT_01bdd7c4 + 0x41f0)) / 2,-3,-1,text);
  }
  engine_font_cpp_setDefaultTextColor_FUN_004b1300(iVar5);
  _DAT_01c6b5a8 = uVar1;
  _DAT_01c6b5b0 = uVar3;
  _DAT_01c6b5ac = uVar2;
  _DAT_01c6b5b4 = uVar4;
  return;
}
