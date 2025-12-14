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
  int color;
  
  iVar4 = g_ClipBottom;
  iVar3 = g_ClipRight;
  iVar2 = g_ClipTop;
  iVar1 = g_ClipLeft;
  g_ClipLeft = this_ptr->clip_left;
  g_ClipRight = this_ptr->clip_right;
  g_ClipTop = this_ptr->clip_top;
  g_ClipBottom = this_ptr->clip_bottom;
  if (g_CurrentFont == (CBitFont *)0x0) {
    iVar5 = engine_2d_c_getTextWrapEnabled_FUN_004027f0();
    color = engine_2d_c_getTextColor_FUN_00402830();
    engine_2d_c_disableTextWrap_FUN_00402820();
    engine_2d_c_setTextColor_FUN_00402840(g_PaletteColorIndex);
    if ((uint)alignment_mode < 8) {
                    /* WARNING: Could not recover jumptable at 0x004893e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(&switchD_004893e0::switchdataD_004890f4)[alignment_mode])();
      return;
    }
    engine_2d_c_setTextColor_FUN_00402840(color);
    engine_2d_c_setTextWrapEnabled_FUN_00402800(iVar5);
  }
  else {
    iVar5 = engine_font_cpp_getDefaultTextColor_FUN_004ce220();
    engine_font_cpp_setDefaultTextColor_FUN_004ce230(g_CurrentDrawColor);
    if ((uint)alignment_mode < 8) {
                    /* WARNING: Could not recover jumptable at 0x004891d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(&switchD_004891d7::switchdataD_004890d4)[alignment_mode])();
      return;
    }
    engine_font_cpp_setDefaultTextColor_FUN_004ce230(iVar5);
  }
  g_ClipLeft = iVar1;
  g_ClipRight = iVar3;
  g_ClipTop = iVar2;
  g_ClipBottom = iVar4;
  return;
}
