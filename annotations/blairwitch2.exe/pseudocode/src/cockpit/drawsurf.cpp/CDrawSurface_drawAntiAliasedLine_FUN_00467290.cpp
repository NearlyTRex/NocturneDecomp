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
  int iVar3;
  uint unaff_EBX;
  uint unaff_retaddr;
  uint uVar4;
  uint uVar5;
  
  uVar2 = _DAT_01c35e50;
  uVar1 = _DAT_01c35e48;
  _DAT_01c35e48 = this_ptr->clip_left;
  _DAT_01c35e50 = this_ptr->clip_right;
  uVar4 = _DAT_01c35e4c;
  _DAT_01c35e4c = this_ptr->clip_top;
  uVar5 = _DAT_01c35e54;
  _DAT_01c35e54 = this_ptr->clip_bottom;
  iVar3 = cockpit_ckptutil_c_FUN_0042f300();
  cockpit_ckptutil_c_FUN_0042f320(1,uVar4,uVar5);
  cockpit_ckptutil_c_drawLineAA_FUN_0042e930
            (x1 + this_ptr->x,y1 + this_ptr->y,x2 + this_ptr->x,y2 + this_ptr->y,_DAT_01ba5c2c);
  cockpit_ckptutil_c_FUN_0042f320(iVar3);
  _DAT_01c35e48 = uVar1;
  _DAT_01c35e4c = unaff_EBX;
  _DAT_01c35e50 = uVar2;
  _DAT_01c35e54 = unaff_retaddr;
  return;
}
