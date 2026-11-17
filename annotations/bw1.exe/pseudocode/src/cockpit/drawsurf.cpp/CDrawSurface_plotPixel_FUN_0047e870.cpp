// Name: cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870
// Address: 0047e870
// Address Range: [[0047e870, 0047e9c4]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0047e870(CDrawSurface *this_ptr,int x,int y)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0047e870(CDrawSurface *this_ptr,int x,int y)

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
  iVar1 = iVar3 * 4;
  if (g_INT_01bc11f0 == 0) {
    if ((uint)g_INT_0061b4a0 < 0x10) {
      if (g_INT_0061b4a0 == 8) {
        g_ARRAY_PTR_01c4354c[iVar4][iVar3] = (byte)g_INT_01bc11e4;
        return;
      }
    }
    else {
      if ((uint)g_INT_0061b4a0 < 0x11) {
        *(ushort *)(g_ARRAY_PTR_01c4354c[iVar4] + iVar2) = (ushort)g_INT_01bc11e4;
        return;
      }
      if (g_INT_0061b4a0 == 0x20) {
        *(int *)(g_ARRAY_PTR_01c4354c[iVar4] + iVar1) = g_INT_01bc11e4;
        return;
      }
    }
    g_CHAR_PTR_01d1d400 = "..\\cockpit\\drawsurf.cpp";
    g_INT_01d1d404 = 0x18e;
    core_main_c_displayErrorAndQuit_FUN_005030e0("Invalid bitsPerPixel!");
    return;
  }
  if ((uint)g_INT_0061b4a0 < 0x10) {
    if (g_INT_0061b4a0 == 8) {
      return;
    }
  }
  else {
    if ((uint)g_INT_0061b4a0 < 0x11) {
      *(ushort *)(g_ARRAY_PTR_01c4354c[iVar4] + iVar2) =
           *(ushort *)(g_ARRAY_PTR_01c4354c[iVar4] + iVar2) >> ((byte)g_INT_01bc11f4 & 0x1f) &
           (ushort)g_INT_01bc1204;
      return;
    }
    if (g_INT_0061b4a0 == 0x20) {
      *(uint *)(g_ARRAY_PTR_01c4354c[iVar4] + iVar1) =
           *(uint *)(g_ARRAY_PTR_01c4354c[iVar4] + iVar1) >> ((byte)g_INT_01bc11f4 & 0x1f) &
           g_INT_01bc1204;
      return;
    }
  }
  g_CHAR_PTR_01d1d400 = "..\\cockpit\\drawsurf.cpp";
  g_INT_01d1d404 = 0x19f;
  core_main_c_displayErrorAndQuit_FUN_005030e0("Invalid bitsPerPixel!");
  return;
}
