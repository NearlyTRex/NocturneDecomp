// Name: cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360
// Address: 00466360
// Address Range: [[00466360, 004664b4]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00466360(CDrawSurface *this_ptr,int x,int y)

#include "nocturne.h"

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
  iVar1 = iVar3 * 4;
  if (g_INT_01ba5c34 == 0) {
    if ((uint)g_INT_006141c0 < 0x10) {
      if (g_INT_006141c0 == 8) {
        g_ARRAY_PTR_01c2a38c[iVar4][iVar3] = (byte)g_INT_01ba5c28;
        return;
      }
    }
    else {
      if ((uint)g_INT_006141c0 < 0x11) {
        *(ushort *)(g_ARRAY_PTR_01c2a38c[iVar4] + iVar2) = (ushort)g_INT_01ba5c28;
        return;
      }
      if (g_INT_006141c0 == 0x20) {
        *(int *)(g_ARRAY_PTR_01c2a38c[iVar4] + iVar1) = g_INT_01ba5c28;
        return;
      }
    }
    g_CHAR_PTR_01d046a0 = "..\\cockpit\\drawsurf.cpp";
    g_INT_01d046a4 = 0x18d;
    core_main_c_displayErrorAndQuit_FUN_004e4500("Invalid bitsPerPixel!");
    return;
  }
  if ((uint)g_INT_006141c0 < 0x10) {
    if (g_INT_006141c0 == 8) {
      return;
    }
  }
  else {
    if ((uint)g_INT_006141c0 < 0x11) {
      *(ushort *)(g_ARRAY_PTR_01c2a38c[iVar4] + iVar2) =
           *(ushort *)(g_ARRAY_PTR_01c2a38c[iVar4] + iVar2) >> ((byte)g_INT_01ba5c38 & 0x1f) &
           (ushort)g_INT_01ba5c48;
      return;
    }
    if (g_INT_006141c0 == 0x20) {
      *(uint *)(g_ARRAY_PTR_01c2a38c[iVar4] + iVar1) =
           *(uint *)(g_ARRAY_PTR_01c2a38c[iVar4] + iVar1) >> ((byte)g_INT_01ba5c38 & 0x1f) &
           g_INT_01ba5c48;
      return;
    }
  }
  g_CHAR_PTR_01d046a0 = "..\\cockpit\\drawsurf.cpp";
  g_INT_01d046a4 = 0x19e;
  core_main_c_displayErrorAndQuit_FUN_004e4500("Invalid bitsPerPixel!");
  return;
}
