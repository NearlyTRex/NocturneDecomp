// Name: cockpit_drawsurf.cpp_FUN_00480480
// Address: 00480480
// Address Range: [[00480480, 00480745]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_FUN_00480480(CDrawSurface *this_ptr,char *text,int x,int width,int y,int height,ETextAlignment alignment_mode)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_drawsurf_cpp_FUN_00480480(CDrawSurface *this_ptr,char *text,int x,int width,int y,int height,ETextAlignment alignment_mode)

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
  
  uVar4 = _DAT_01c4f014;
  uVar3 = _DAT_01c4f010;
  uVar2 = _DAT_01c4f00c;
  uVar1 = _DAT_01c4f008;
  right_x = width + *(int *)(this_ptr + 8);
  left_x = x + *(int *)(this_ptr + 8);
  y_00 = y + *(int *)(this_ptr + 0xc);
  iVar6 = height + *(int *)(this_ptr + 0xc);
  _DAT_01c4f008 = *(uint *)(this_ptr + 0x10);
  _DAT_01c4f010 = *(uint *)(this_ptr + 0x18);
  _DAT_01c4f00c = *(uint *)(this_ptr + 0x14);
  _DAT_01c4f014 = *(uint *)(this_ptr + 0x1c);
  if (_DAT_01bc11ec == (CBitFont *)0x0) {
    iVar5 = engine_2d_c_FUN_00402800();
    color = engine_2d_c_FUN_00402840();
    engine_2d_c_FUN_00402830();
    engine_2d_c_FUN_00402850(_DAT_01bc11e8);
    switch(alignment_mode) {
    case TEXT_ALIGN_RIGHT:
      engine_2d_c_FUN_00402540(text,left_x,y_00);
      break;
    case TEXT_ALIGN_CENTER:
      engine_2d_c_FUN_00402600(text,left_x,y_00);
      break;
    case TEXT_ALIGN_LEFT_VCENTER:
      y_00 = y_00 + -5;
    case TEXT_ALIGN_LEFT:
      goto LAB_00480697;
    case TEXT_ALIGN_CENTER_BOTH:
      engine_2d_c_FUN_00402600(text,left_x,y_00 + -5);
      break;
    case TEXT_ALIGN_CENTER_IN_BOUNDS:
      engine_2d_c_FUN_004026d0(text,left_x,right_x,y_00);
      break;
    case TEXT_ALIGN_LEFT_IN_AREA:
      y_00 = (y_00 + -10 + iVar6) / 2;
LAB_00480697:
      engine_2d_c_drawTextColor_FUN_00402440(text,left_x,y_00);
      break;
    case TEXT_ALIGN_CENTER_IN_AREA:
      engine_2d_c_FUN_004026d0(text,left_x,right_x,(y_00 + -10 + iVar6) / 2);
    }
    engine_2d_c_FUN_00402850(color);
    engine_2d_c_FUN_00402810(iVar5);
    _DAT_01c4f008 = uVar1;
    _DAT_01c4f00c = uVar2;
    _DAT_01c4f010 = uVar3;
    _DAT_01c4f014 = uVar4;
    return;
  }
  iVar5 = engine_font_cpp_FUN_004c2690();
  engine_font_cpp_FUN_004c26b0(_DAT_01bc11e4);
  switch(alignment_mode) {
  case TEXT_ALIGN_LEFT:
    goto LAB_0048054a;
  case TEXT_ALIGN_RIGHT:
    engine_font_cpp_CBitFont_drawTextRight_FUN_004c2150(_DAT_01bc11ec,left_x,y_00,-3,-1,text);
    break;
  case TEXT_ALIGN_CENTER:
    engine_font_cpp_CBitFont_drawTextCenter_FUN_004c2250(_DAT_01bc11ec,left_x,y_00,-3,-1,text);
    break;
  case TEXT_ALIGN_LEFT_VCENTER:
    y_00 = y_00 - *(int *)(_DAT_01bc11ec + 0x41f0) / 2;
    goto LAB_0048054a;
  case TEXT_ALIGN_CENTER_BOTH:
    engine_font_cpp_CBitFont_drawTextCenter_FUN_004c2250
              (_DAT_01bc11ec,left_x,y_00 - *(int *)(_DAT_01bc11ec + 0x41f0) / 2,-3,-1,text);
    break;
  case TEXT_ALIGN_CENTER_IN_BOUNDS:
    engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004c2350
              (_DAT_01bc11ec,left_x,right_x,y_00,-3,-1,text);
    break;
  case TEXT_ALIGN_LEFT_IN_AREA:
    y_00 = ((y_00 + iVar6 + 1) - *(int *)(_DAT_01bc11ec + 0x41f0)) / 2;
LAB_0048054a:
    engine_font_cpp_FUN_004c2060(_DAT_01bc11ec,left_x,y_00,-3,-1,text);
    break;
  case TEXT_ALIGN_CENTER_IN_AREA:
    engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004c2350
              (_DAT_01bc11ec,left_x,right_x,
               ((y_00 + iVar6 + 1) - *(int *)(_DAT_01bc11ec + 0x41f0)) / 2,-3,-1,text);
  }
  engine_font_cpp_FUN_004c26b0(iVar5);
  _DAT_01c4f008 = uVar1;
  _DAT_01c4f010 = uVar3;
  _DAT_01c4f00c = uVar2;
  _DAT_01c4f014 = uVar4;
  return;
}
