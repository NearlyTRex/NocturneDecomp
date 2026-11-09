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
  uint uVar3;
  uint uVar4;
  uint unaff_EBX;
  uint unaff_retaddr;
  
  uVar3 = _DAT_01c4f014;
  uVar2 = _DAT_01c4f010;
  uVar4 = _DAT_01c4f00c;
  uVar1 = _DAT_01c4f008;
  _DAT_01c4f008 = *(uint *)(this_ptr + 0x10);
  _DAT_01c4f010 = *(uint *)(this_ptr + 0x18);
  _DAT_01c4f00c = *(uint *)(this_ptr + 0x14);
  _DAT_01c4f014 = *(uint *)(this_ptr + 0x1c);
  uVar4 = cockpit_ckptutil_c_FUN_0043a010(uVar4,uVar3);
  cockpit_ckptutil_c_FUN_0043a030(1);
  cockpit_ckptutil_c_drawLineAA_FUN_00439640
            (x1 + *(int *)(this_ptr + 8),y1 + *(int *)(this_ptr + 0xc),x2 + *(int *)(this_ptr + 8),
             y2 + *(int *)(this_ptr + 0xc),_DAT_01bc11e8);
  cockpit_ckptutil_c_FUN_0043a030(uVar4);
  _DAT_01c4f008 = uVar1;
  _DAT_01c4f00c = unaff_EBX;
  _DAT_01c4f010 = uVar2;
  _DAT_01c4f014 = unaff_retaddr;
  return;
}
