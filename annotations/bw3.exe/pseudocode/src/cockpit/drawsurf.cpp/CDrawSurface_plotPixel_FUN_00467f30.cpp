// Name: cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30
// Address: 00467f30
// Address Range: [[00467f30, 00468084]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00467f30(CDrawSurface *this_ptr,int x,int y)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00467f30(CDrawSurface *this_ptr,int x,int y)

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
  if (g_UseRGBConversion == 0) {
    if ((uint)g_INT_005fba20 < 0x10) {
      if (g_INT_005fba20 == 8) {
        g_ScreenBufferArray[iVar4][iVar3] = (byte)g_CurrentDrawColor;
        return;
      }
    }
    else {
      if ((uint)g_INT_005fba20 < 0x11) {
        *(ushort *)(g_ScreenBufferArray[iVar4] + iVar2) = (ushort)g_CurrentDrawColor;
        return;
      }
      if (g_INT_005fba20 == 0x20) {
        *(int *)(g_ScreenBufferArray[iVar4] + iVar1) = g_CurrentDrawColor;
        return;
      }
    }
    g_CurrentFilename = "..\\cockpit\\drawsurf.cpp";
    g_CurrentLineNumber = 398;
    core_main_c_displayErrorAndQuit_FUN_004e4330("Invalid bitsPerPixel!");
    return;
  }
  if ((uint)g_INT_005fba20 < 0x10) {
    if (g_INT_005fba20 == 8) {
      return;
    }
  }
  else {
    if ((uint)g_INT_005fba20 < 0x11) {
      *(ushort *)(g_ScreenBufferArray[iVar4] + iVar2) =
           *(ushort *)(g_ScreenBufferArray[iVar4] + iVar2) >> ((byte)g_OriginalColorValue & 0x1f) &
           (ushort)g_PackedPixelColor;
      return;
    }
    if (g_INT_005fba20 == 0x20) {
      *(uint *)(g_ScreenBufferArray[iVar4] + iVar1) =
           *(uint *)(g_ScreenBufferArray[iVar4] + iVar1) >> ((byte)g_OriginalColorValue & 0x1f) &
           g_PackedPixelColor;
      return;
    }
  }
  g_CurrentFilename = "..\\cockpit\\drawsurf.cpp";
  g_CurrentLineNumber = 415;
  core_main_c_displayErrorAndQuit_FUN_004e4330("Invalid bitsPerPixel!");
  return;
}
