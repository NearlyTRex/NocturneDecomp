// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00480480
// Address: 00480480
// Address Range: [[00480480, 00480745]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextWithAlignment_FUN_00480480(CDrawSurface *this_ptr,char *text,int x,int width,int y,int height,ETextAlignment alignment_mode)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextWithAlignment_FUN_00480480(CDrawSurface *this_ptr,char *text,int x,int width,int y,int height,ETextAlignment alignment_mode)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int color;
  int right_x;
  int y_00;
  int iVar6;
  int left_x;
  
  iVar4 = g_INT_01c4f014;
  iVar3 = g_ClipRight;
  iVar2 = g_INT_01c4f00c;
  iVar1 = g_INT_01c4f008;
  right_x = width + this_ptr->x;
  left_x = x + this_ptr->x;
  y_00 = y + this_ptr->y;
  iVar6 = height + this_ptr->y;
  g_INT_01c4f008 = this_ptr->clip_left;
  g_ClipRight = this_ptr->clip_right;
  g_INT_01c4f00c = this_ptr->clip_top;
  g_INT_01c4f014 = this_ptr->clip_bottom;
  if (g_CurrentFont == (CBitFont *)0x0) {
    iVar5 = engine_2d_c_getTextWrapEnabled_FUN_00402800();
    color = engine_2d_c_getTextColor_FUN_00402840();
    engine_2d_c_disableTextWrap_FUN_00402830();
    engine_2d_c_setTextColor_FUN_00402850(g_PaletteColorIndex);
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
      goto LAB_00480697;
    case TEXT_ALIGN_CENTER_BOTH:
      engine_2d_c_drawTextCenteredAtColor_FUN_00402600(text,left_x,y_00 + -5);
      break;
    case TEXT_ALIGN_CENTER_IN_BOUNDS:
      engine_2d_c_drawTextCenteredColor_FUN_004026d0(text,left_x,right_x,y_00);
      break;
    case TEXT_ALIGN_LEFT_IN_AREA:
      y_00 = (y_00 + -10 + iVar6) / 2;
LAB_00480697:
      engine_2d_c_drawTextColor_FUN_00402440(text,left_x,y_00);
      break;
    case TEXT_ALIGN_CENTER_IN_AREA:
      engine_2d_c_drawTextCenteredColor_FUN_004026d0(text,left_x,right_x,(y_00 + -10 + iVar6) / 2);
    }
    engine_2d_c_setTextColor_FUN_00402850(color);
    engine_2d_c_setTextWrapEnabled_FUN_00402810(iVar5);
    g_INT_01c4f008 = iVar1;
    g_INT_01c4f00c = iVar2;
    g_ClipRight = iVar3;
    g_INT_01c4f014 = iVar4;
    return;
  }
  iVar5 = engine_font_cpp_getDefaultTextColor_FUN_004c2690();
  engine_font_cpp_setDefaultTextColor_FUN_004c26b0(g_CurrentDrawColor);
  switch(alignment_mode) {
  case TEXT_ALIGN_LEFT:
    goto LAB_0048054a;
  case TEXT_ALIGN_RIGHT:
    engine_font_cpp_CBitFont_drawTextRight_FUN_004c2150(g_CurrentFont,left_x,y_00,-3,-1,text);
    break;
  case TEXT_ALIGN_CENTER:
    engine_font_cpp_CBitFont_drawTextCenter_FUN_004c2250(g_CurrentFont,left_x,y_00,-3,-1,text);
    break;
  case TEXT_ALIGN_LEFT_VCENTER:
    y_00 = y_00 - g_CurrentFont->current_line_height / 2;
    goto LAB_0048054a;
  case TEXT_ALIGN_CENTER_BOTH:
    engine_font_cpp_CBitFont_drawTextCenter_FUN_004c2250
              (g_CurrentFont,left_x,y_00 - g_CurrentFont->current_line_height / 2,-3,-1,text);
    break;
  case TEXT_ALIGN_CENTER_IN_BOUNDS:
    engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004c2350
              (g_CurrentFont,left_x,right_x,y_00,-3,-1,text);
    break;
  case TEXT_ALIGN_LEFT_IN_AREA:
    y_00 = ((y_00 + iVar6 + 1) - g_CurrentFont->current_line_height) / 2;
LAB_0048054a:
    engine_font_cpp_CBitFont_drawTextWrapper_FUN_004c2060(g_CurrentFont,left_x,y_00,-3,-1,text);
    break;
  case TEXT_ALIGN_CENTER_IN_AREA:
    engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004c2350
              (g_CurrentFont,left_x,right_x,
               ((y_00 + iVar6 + 1) - g_CurrentFont->current_line_height) / 2,-3,-1,text);
  }
  engine_font_cpp_setDefaultTextColor_FUN_004c26b0(iVar5);
  g_INT_01c4f008 = iVar1;
  g_ClipRight = iVar3;
  g_INT_01c4f00c = iVar2;
  g_INT_01c4f014 = iVar4;
  return;
}
