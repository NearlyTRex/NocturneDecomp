// Name: cockpit_drawsurf.cpp_FUN_0047e870
// Address: 0047e870
// Address Range: [[0047e870, 0047e9c4]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_FUN_0047e870(CDrawSurface *this_ptr,int x,int y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_drawsurf_cpp_FUN_0047e870(CDrawSurface *this_ptr,int x,int y)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = x + *(int *)(this_ptr + 8);
  iVar4 = y + *(int *)(this_ptr + 0xc);
  if ((((iVar3 < *(int *)(this_ptr + 0x10)) || (*(int *)(this_ptr + 0x18) < iVar3)) ||
      (iVar4 < *(int *)(this_ptr + 0x14))) || (*(int *)(this_ptr + 0x1c) < iVar4)) {
    return;
  }
  iVar2 = iVar3 * 2;
  iVar4 = iVar4 * 4;
  iVar1 = iVar3 * 4;
  if (_DAT_01bc11f0 == 0) {
    if (DAT_0061b4a0 < 0x10) {
      if (DAT_0061b4a0 == 8) {
        *(byte *)(iVar3 + *(int *)(&DAT_01c4354c + iVar4)) = DAT_01bc11e4;
        return;
      }
    }
    else {
      if (DAT_0061b4a0 < 0x11) {
        *(ushort *)(iVar2 + *(int *)(&DAT_01c4354c + iVar4)) = _DAT_01bc11e4;
        return;
      }
      if (DAT_0061b4a0 == 0x20) {
        *(uint *)(iVar1 + *(int *)(&DAT_01c4354c + iVar4)) = _DAT_01bc11e4;
        return;
      }
    }
    _DAT_01d1d400 = "..\\cockpit\\drawsurf.cpp";
    _DAT_01d1d404 = 0x18e;
    core_main_c_FUN_005030e0("Invalid bitsPerPixel!");
    return;
  }
  if (DAT_0061b4a0 < 0x10) {
    if (DAT_0061b4a0 == 8) {
      return;
    }
  }
  else {
    if (DAT_0061b4a0 < 0x11) {
      *(ushort *)(iVar2 + *(int *)(&DAT_01c4354c + iVar4)) =
           *(ushort *)(iVar2 + *(int *)(&DAT_01c4354c + iVar4)) >> (DAT_01bc11f4 & 0x1f) &
           (ushort)_DAT_01bc1204;
      return;
    }
    if (DAT_0061b4a0 == 0x20) {
      *(uint *)(*(int *)(&DAT_01c4354c + iVar4) + iVar1) =
           *(uint *)(*(int *)(&DAT_01c4354c + iVar4) + iVar1) >> (DAT_01bc11f4 & 0x1f) &
           _DAT_01bc1204;
      return;
    }
  }
  _DAT_01d1d400 = "..\\cockpit\\drawsurf.cpp";
  _DAT_01d1d404 = 0x19f;
  core_main_c_FUN_005030e0("Invalid bitsPerPixel!");
  return;
}
