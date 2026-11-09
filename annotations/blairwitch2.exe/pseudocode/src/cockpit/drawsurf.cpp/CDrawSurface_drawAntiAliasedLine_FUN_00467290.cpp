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
  uint uVar3;
  uint uVar4;
  uint unaff_EBX;
  uint unaff_retaddr;
  
  uVar3 = _DAT_01c35e54;
  uVar2 = _DAT_01c35e50;
  uVar4 = _DAT_01c35e4c;
  uVar1 = _DAT_01c35e48;
  _DAT_01c35e48 = *(uint *)(this_ptr + 0x10);
  _DAT_01c35e50 = *(uint *)(this_ptr + 0x18);
  _DAT_01c35e4c = *(uint *)(this_ptr + 0x14);
  _DAT_01c35e54 = *(uint *)(this_ptr + 0x1c);
  uVar4 = cockpit_ckptutil_c_FUN_0042f300(uVar4,uVar3);
  cockpit_ckptutil_c_FUN_0042f320(1);
  cockpit_ckptutil_c_drawLineAA_FUN_0042e930
            (x1 + *(int *)(this_ptr + 8),y1 + *(int *)(this_ptr + 0xc),x2 + *(int *)(this_ptr + 8),
             y2 + *(int *)(this_ptr + 0xc),_DAT_01ba5c2c);
  cockpit_ckptutil_c_FUN_0042f320(uVar4);
  _DAT_01c35e48 = uVar1;
  _DAT_01c35e4c = unaff_EBX;
  _DAT_01c35e50 = uVar2;
  _DAT_01c35e54 = unaff_retaddr;
  return;
}
