// Name: cockpit_drawsurf.cpp_CDrawSurface_drawAntiAliasedLine_FUN_0045ca50
// Address: 0045ca50
// Address Range: [[0045ca50, 0045cb09]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawAntiAliasedLine_FUN_0045ca50(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawAntiAliasedLine_FUN_0045ca50(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

{
  int iVar1;
  int iVar2;
  int disabled;
  int in_stack_00000018;
  
  iVar2 = g_ClipRight;
  iVar1 = g_ClipLeft;
  g_ClipLeft = this_ptr->clip_left;
  g_ClipRight = this_ptr->clip_right;
  g_ClipTop = this_ptr->clip_top;
  g_ClipBottom = this_ptr->clip_bottom;
  disabled = cockpit_ckptutil_c_isLineClippingDisabled_FUN_004301e0();
  cockpit_ckptutil_c_setLineClippingDisabled_FUN_00430200(1);
  cockpit_ckptutil_c_drawLineAA_FUN_0042f600
            (y1 + this_ptr->x,x2 + this_ptr->y,y2 + this_ptr->x,in_stack_00000018 + this_ptr->y,
             _DAT_01b4d714);
  cockpit_ckptutil_c_setLineClippingDisabled_FUN_00430200(disabled);
  g_ClipLeft = iVar1;
  g_ClipTop = (int)this_ptr;
  g_ClipRight = iVar2;
  g_ClipBottom = x1;
  return;
}
