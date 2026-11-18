// Name: cockpit_drawsurf.cpp_CDrawSurface_drawAntiAliasedLine_FUN_00468e60
// Address: 00468e60
// Address Range: [[00468e60, 00468f19]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawAntiAliasedLine_FUN_00468e60(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawAntiAliasedLine_FUN_00468e60(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

{
  int iVar1;
  int iVar2;
  int disabled;
  int in_stack_00000018;
  
  iVar2 = g_INT_01c6b5b0;
  iVar1 = g_INT_01c6b5a8;
  g_INT_01c6b5a8 = this_ptr->clip_left;
  g_INT_01c6b5b0 = this_ptr->clip_right;
  g_INT_01c6b5ac = this_ptr->clip_top;
  g_INT_01c6b5b4 = this_ptr->clip_bottom;
  disabled = cockpit_ckptutil_c_isLineClippingDisabled_FUN_00437c20();
  cockpit_ckptutil_c_setLineClippingDisabled_FUN_00437c40(1);
  cockpit_ckptutil_c_drawLineAA_FUN_00437250
            (y1 + this_ptr->x,x2 + this_ptr->y,y2 + this_ptr->x,in_stack_00000018 + this_ptr->y,
             g_PaletteColorIndex);
  cockpit_ckptutil_c_setLineClippingDisabled_FUN_00437c40(disabled);
  g_INT_01c6b5a8 = iVar1;
  g_INT_01c6b5ac = (int)this_ptr;
  g_INT_01c6b5b0 = iVar2;
  g_INT_01c6b5b4 = x1;
  return;
}
