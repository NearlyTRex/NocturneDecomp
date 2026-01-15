// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120
// Address: 00489120
// Address Range: [[00489120, 004893e5]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120(CDrawSurface * this_ptr, int x, int y, int width, int height, char * text, int alignment_mode)

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120
          (CDrawSurface *this_ptr,int x,int y,int width,int height,char *text,int alignment_mode)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int color;
  int right_x;
  int y_pos;
  char *text_string;
  
  iVar5 = g_ClipBottom;
  iVar4 = g_ClipRight;
  iVar3 = g_ClipTop;
  iVar2 = g_ClipLeft;
  right_x = width + this_ptr->x;
  text_string = (char *)(y + this_ptr->x);
  iVar1 = this_ptr->y;
  y_pos = height + iVar1;
  g_ClipLeft = this_ptr->clip_left;
  g_ClipRight = this_ptr->clip_right;
  g_ClipTop = this_ptr->clip_top;
  g_ClipBottom = this_ptr->clip_bottom;
  if (g_CurrentFont == (CBitFont *)0x0) {
    iVar6 = engine_2d_c_getTextWrapEnabled_FUN_004027f0();
    color = engine_2d_c_getTextColor_FUN_00402830();
    engine_2d_c_disableTextWrap_FUN_00402820();
    engine_2d_c_setTextColor_FUN_00402840(g_PaletteColorIndex);
    switch(alignment_mode) {
    case 1:
      engine_2d_c_drawTextRightAlignedColor_FUN_00402530((char *)x,(int)text_string,y_pos);
      break;
    case 2:
      engine_2d_c_drawTextCenteredAtColor_FUN_004025f0((char *)x,(int)text_string,y_pos);
      break;
    case 3:
      y_pos = y_pos + -5;
    case 0:
      goto LAB_00489337;
    case 4:
      engine_2d_c_drawTextCenteredAtColor_FUN_004025f0((char *)x,(int)text_string,y_pos + -5);
      break;
    case 5:
      engine_2d_c_drawTextCenteredColor_FUN_004026c0((char *)x,(int)text_string,right_x,y_pos);
      break;
    case 6:
      y_pos = (int)(text + y_pos + -10 + iVar1) / 2;
LAB_00489337:
      engine_2d_c_drawTextColor_FUN_00402430((char *)x,(int)text_string,y_pos);
      break;
    case 7:
      engine_2d_c_drawTextCenteredColor_FUN_004026c0
                ((char *)x,(int)text_string,right_x,(int)(text + y_pos + -10 + iVar1) / 2);
    }
    engine_2d_c_setTextColor_FUN_00402840(color);
    engine_2d_c_setTextWrapEnabled_FUN_00402800(iVar6);
    g_ClipLeft = iVar2;
    g_ClipTop = iVar3;
    g_ClipRight = iVar4;
    g_ClipBottom = iVar5;
    return;
  }
  iVar6 = engine_font_cpp_getDefaultTextColor_FUN_004ce220();
  engine_font_cpp_setDefaultTextColor_FUN_004ce230(g_CurrentDrawColor);
  switch(alignment_mode) {
  case 0:
    goto LAB_004891ea;
  case 1:
    engine_font_cpp_CBitFont_drawTextRight_FUN_004cdce0
              (g_CurrentFont,(int)text_string,y_pos,-3,-1,(char *)x);
    break;
  case 2:
    engine_font_cpp_CBitFont_drawTextCenter_FUN_004cdde0
              (g_CurrentFont,(int)text_string,y_pos,-3,-1,(char *)x);
    break;
  case 3:
    y_pos = y_pos - g_CurrentFont->current_max_width / 2;
    goto LAB_004891ea;
  case 4:
    engine_font_cpp_CBitFont_drawTextCenter_FUN_004cdde0
              (g_CurrentFont,(int)text_string,y_pos - g_CurrentFont->current_max_width / 2,-3,-1,
               (char *)x);
    break;
  case 5:
    engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
              (g_CurrentFont,(int)text_string,right_x,y_pos,-3,-1,(char *)x);
    break;
  case 6:
    y_pos = (int)(text + ((y_pos + iVar1 + 1) - g_CurrentFont->current_max_width)) / 2;
LAB_004891ea:
    engine_font_cpp_CBitFont_drawTextRight_FUN_004cdbf0(g_CurrentFont,text_string,y_pos,-3,-1,x);
    break;
  case 7:
    engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
              (g_CurrentFont,(int)text_string,right_x,
               (int)(text + ((y_pos + iVar1 + 1) - g_CurrentFont->current_max_width)) / 2,-3,-1,
               (char *)x);
  }
  engine_font_cpp_setDefaultTextColor_FUN_004ce230(iVar6);
  g_ClipLeft = iVar2;
  g_ClipRight = iVar4;
  g_ClipTop = iVar3;
  g_ClipBottom = iVar5;
  return;
}
