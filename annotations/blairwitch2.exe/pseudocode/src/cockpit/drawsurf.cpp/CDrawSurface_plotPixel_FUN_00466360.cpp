// Name: cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360
// Address: 00466360
// Address Range: [[00466360, 004664b4]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00466360(CDrawSurface *this_ptr,int x,int y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00466360(CDrawSurface *this_ptr,int x,int y)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = x + this_ptr->x;
  iVar4 = y + this_ptr->y;
  if ((((iVar3 < this_ptr->clip_left) || (this_ptr->clip_right < iVar3)) ||
      (iVar4 < this_ptr->clip_top)) || (this_ptr->clip_bottom < iVar4)) {
    return;
  }
  iVar2 = iVar3 * 2;
  iVar4 = iVar4 * 4;
  iVar1 = iVar3 * 4;
  if (_DAT_01ba5c34 == 0) {
    if (DAT_006141c0 < 0x10) {
      if (DAT_006141c0 == 8) {
        *(byte *)(iVar3 + *(int *)(&DAT_01c2a38c + iVar4)) = DAT_01ba5c28;
        return;
      }
    }
    else {
      if (DAT_006141c0 < 0x11) {
        *(ushort *)(iVar2 + *(int *)(&DAT_01c2a38c + iVar4)) = _DAT_01ba5c28;
        return;
      }
      if (DAT_006141c0 == 0x20) {
        *(uint *)(iVar1 + *(int *)(&DAT_01c2a38c + iVar4)) = _DAT_01ba5c28;
        return;
      }
    }
    _DAT_01d046a0 = "..\\cockpit\\drawsurf.cpp";
    _DAT_01d046a4 = 0x18d;
    core_main_c_FUN_004e4500("Invalid bitsPerPixel!");
    return;
  }
  if (DAT_006141c0 < 0x10) {
    if (DAT_006141c0 == 8) {
      return;
    }
  }
  else {
    if (DAT_006141c0 < 0x11) {
      *(ushort *)(iVar2 + *(int *)(&DAT_01c2a38c + iVar4)) =
           *(ushort *)(iVar2 + *(int *)(&DAT_01c2a38c + iVar4)) >> (DAT_01ba5c38 & 0x1f) &
           (ushort)_DAT_01ba5c48;
      return;
    }
    if (DAT_006141c0 == 0x20) {
      *(uint *)(*(int *)(&DAT_01c2a38c + iVar4) + iVar1) =
           *(uint *)(*(int *)(&DAT_01c2a38c + iVar4) + iVar1) >> (DAT_01ba5c38 & 0x1f) &
           _DAT_01ba5c48;
      return;
    }
  }
  _DAT_01d046a0 = "..\\cockpit\\drawsurf.cpp";
  _DAT_01d046a4 = 0x19e;
  core_main_c_FUN_004e4500("Invalid bitsPerPixel!");
  return;
}
