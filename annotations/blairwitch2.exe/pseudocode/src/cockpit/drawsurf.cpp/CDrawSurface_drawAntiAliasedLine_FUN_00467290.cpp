// Name: cockpit_drawsurf.cpp_CDrawSurface_drawAntiAliasedLine_FUN_00467290
// Address: 00467290
// Address Range: [[00467290, 00467349]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawAntiAliasedLine_FUN_00467290(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawAntiAliasedLine_FUN_00467290(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

{
  int iVar1;
  int iVar2;
  int disabled;
  int in_stack_00000018;
  
  iVar2 = g_ClipRight;
  iVar1 = g_INT_01c35e48;
  g_INT_01c35e48 = this_ptr->clip_left;
  g_ClipRight = this_ptr->clip_right;
  g_INT_01c35e4c = this_ptr->clip_top;
  g_INT_01c35e54 = this_ptr->clip_bottom;
  disabled = cockpit_ckptutil_c_isLineClippingDisabled_FUN_0042f300();
  cockpit_ckptutil_c_setLineClippingDisabled_FUN_0042f320(1);
  cockpit_ckptutil_c_drawLineAA_FUN_0042e930
            (y1 + this_ptr->x,x2 + this_ptr->y,y2 + this_ptr->x,in_stack_00000018 + this_ptr->y,
             g_PaletteColorIndex);
  cockpit_ckptutil_c_setLineClippingDisabled_FUN_0042f320(disabled);
  g_INT_01c35e48 = iVar1;
  g_INT_01c35e4c = (int)this_ptr;
  g_ClipRight = iVar2;
  g_INT_01c35e54 = x1;
  return;
}
