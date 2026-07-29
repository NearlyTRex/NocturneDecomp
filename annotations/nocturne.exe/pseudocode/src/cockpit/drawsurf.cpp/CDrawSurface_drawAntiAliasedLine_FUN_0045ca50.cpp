// Name: cockpit_drawsurf.cpp_CDrawSurface_drawAntiAliasedLine_FUN_0045ca50
// Address: 0045ca50
// Address Range: [[0045ca50, 0045cb09]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawAntiAliasedLine_FUN_0045ca50(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawAntiAliasedLine_FUN_0045ca50(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

{
  uint uVar1;
  uint uVar2;
  int disabled;
  int in_stack_00000018;
  
  uVar2 = _DAT_01c00c60;
  uVar1 = _DAT_01c00c58;
  _DAT_01c00c58 = this_ptr->clip_left;
  _DAT_01c00c60 = this_ptr->clip_right;
  _DAT_01c00c5c = (CDrawSurface *)this_ptr->clip_top;
  _DAT_01c00c64 = this_ptr->clip_bottom;
  disabled = cockpit_ckptutil_c_isLineClippingDisabled_FUN_004301e0();
  cockpit_ckptutil_c_setLineClippingDisabled_FUN_00430200(1);
  cockpit_ckptutil_c_drawLineAA_FUN_0042f600
            (y1 + this_ptr->x,x2 + this_ptr->y,y2 + this_ptr->x,in_stack_00000018 + this_ptr->y,
             _DAT_01b4d714);
  cockpit_ckptutil_c_setLineClippingDisabled_FUN_00430200(disabled);
  _DAT_01c00c58 = uVar1;
  _DAT_01c00c5c = this_ptr;
  _DAT_01c00c60 = uVar2;
  _DAT_01c00c64 = x1;
  return;
}
