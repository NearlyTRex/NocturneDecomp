// Name: cockpit_drawsurf.cpp_CDrawSurface_drawAntiAliasedLine_FUN_00488410
// Address: 00488410
// Address Range: [[00488410, 004884c9]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawAntiAliasedLine_FUN_00488410(CDrawSurface * this_ptr, int x1, int y1, int x2, int y2)

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawAntiAliasedLine_FUN_00488410
          (CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

{
  int iVar1;
  int iVar2;
  int disabled;
  int unaff_EBX;
  int unaff_ESI;
  int in_stack_00000018;
  int in_stack_0000001c;
  
  iVar2 = g_ClipRight;
  iVar1 = g_ClipLeft;
  g_ClipLeft = this_ptr->clip_left;
  g_ClipRight = this_ptr->clip_right;
  g_ClipTop = this_ptr->clip_top;
  g_ClipBottom = this_ptr->clip_bottom;
  disabled = cockpit_ckptutil_c_isLineClippingDisabled_FUN_00434660();
  cockpit_ckptutil_c_setLineClippingDisabled_FUN_00434680(1);
  cockpit_ckptutil_c_drawLineAA_FUN_00433c90
            (x2 + this_ptr->x,y2 + this_ptr->y,in_stack_00000018 + this_ptr->x,
             in_stack_0000001c + this_ptr->y,g_PaletteColorIndex);
  cockpit_ckptutil_c_setLineClippingDisabled_FUN_00434680(disabled);
  g_ClipLeft = iVar1;
  g_ClipTop = unaff_ESI;
  g_ClipRight = iVar2;
  g_ClipBottom = unaff_EBX;
  return;
}
