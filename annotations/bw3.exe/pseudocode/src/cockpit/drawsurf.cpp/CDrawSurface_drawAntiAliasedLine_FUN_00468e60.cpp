// Name: cockpit_drawsurf.cpp_CDrawSurface_drawAntiAliasedLine_FUN_00468e60
// Address: 00468e60
// Address Range: [[00468e60, 00468f19]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawAntiAliasedLine_FUN_00468e60(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawAntiAliasedLine_FUN_00468e60(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint unaff_EBX;
  uint unaff_retaddr;
  
  uVar3 = _DAT_01c6b5b4;
  uVar2 = _DAT_01c6b5b0;
  uVar4 = _DAT_01c6b5ac;
  uVar1 = _DAT_01c6b5a8;
  _DAT_01c6b5a8 = *(uint *)(this_ptr + 0x10);
  _DAT_01c6b5b0 = *(uint *)(this_ptr + 0x18);
  _DAT_01c6b5ac = *(uint *)(this_ptr + 0x14);
  _DAT_01c6b5b4 = *(uint *)(this_ptr + 0x1c);
  uVar4 = cockpit_ckptutil_c_FUN_00437c20(uVar4,uVar3);
  cockpit_ckptutil_c_FUN_00437c40(1);
  cockpit_ckptutil_c_drawLineAA_FUN_00437250
            (x1 + *(int *)(this_ptr + 8),y1 + *(int *)(this_ptr + 0xc),x2 + *(int *)(this_ptr + 8),
             y2 + *(int *)(this_ptr + 0xc),_DAT_01bdd7c0);
  cockpit_ckptutil_c_FUN_00437c40(uVar4);
  _DAT_01c6b5a8 = uVar1;
  _DAT_01c6b5ac = unaff_EBX;
  _DAT_01c6b5b0 = uVar2;
  _DAT_01c6b5b4 = unaff_retaddr;
  return;
}
