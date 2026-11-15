// Name: cockpit_drawsurf.cpp_CDrawSurface_drawAntiAliasedLine_FUN_00467290
// Address: 00467290
// Address Range: [[00467290, 00467349]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawAntiAliasedLine_FUN_00467290(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawAntiAliasedLine_FUN_00467290(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

{
  uint uVar1;
  uint uVar2;
  int disabled;
  int in_stack_00000018;
  
  uVar2 = _DAT_01c35e50;
  uVar1 = _DAT_01c35e48;
  _DAT_01c35e48 = this_ptr->clip_left;
  _DAT_01c35e50 = this_ptr->clip_right;
  _DAT_01c35e4c = (CDrawSurface *)this_ptr->clip_top;
  _DAT_01c35e54 = this_ptr->clip_bottom;
  disabled = cockpit_ckptutil_c_isLineClippingDisabled_FUN_0042f300();
  cockpit_ckptutil_c_setLineClippingDisabled_FUN_0042f320(1);
  cockpit_ckptutil_c_drawLineAA_FUN_0042e930
            (y1 + this_ptr->x,x2 + this_ptr->y,y2 + this_ptr->x,in_stack_00000018 + this_ptr->y,
             _DAT_01ba5c2c);
  cockpit_ckptutil_c_setLineClippingDisabled_FUN_0042f320(disabled);
  _DAT_01c35e48 = uVar1;
  _DAT_01c35e4c = this_ptr;
  _DAT_01c35e50 = uVar2;
  _DAT_01c35e54 = x1;
  return;
}
