// Name: cockpit_drawsurf.cpp_CDrawSurface_drawAntiAliasedLine_FUN_0047f7a0
// Address: 0047f7a0
// Address Range: [[0047f7a0, 0047f859]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawAntiAliasedLine_FUN_0047f7a0(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawAntiAliasedLine_FUN_0047f7a0(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

{
  uint uVar1;
  uint uVar2;
  int disabled;
  int in_stack_00000018;
  
  uVar2 = _DAT_01c4f010;
  uVar1 = _DAT_01c4f008;
  _DAT_01c4f008 = this_ptr->clip_left;
  _DAT_01c4f010 = this_ptr->clip_right;
  _DAT_01c4f00c = (CDrawSurface *)this_ptr->clip_top;
  _DAT_01c4f014 = this_ptr->clip_bottom;
  disabled = cockpit_ckptutil_c_isLineClippingDisabled_FUN_0043a010();
  cockpit_ckptutil_c_setLineClippingDisabled_FUN_0043a030(1);
  cockpit_ckptutil_c_drawLineAA_FUN_00439640
            (y1 + this_ptr->x,x2 + this_ptr->y,y2 + this_ptr->x,in_stack_00000018 + this_ptr->y,
             _DAT_01bc11e8);
  cockpit_ckptutil_c_setLineClippingDisabled_FUN_0043a030(disabled);
  _DAT_01c4f008 = uVar1;
  _DAT_01c4f00c = this_ptr;
  _DAT_01c4f010 = uVar2;
  _DAT_01c4f014 = x1;
  return;
}
