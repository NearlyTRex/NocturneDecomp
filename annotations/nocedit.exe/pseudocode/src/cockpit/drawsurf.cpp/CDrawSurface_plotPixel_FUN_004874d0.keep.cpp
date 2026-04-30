// Name: cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0
// Address: 004874d0
// MANUAL RECONSTRUCTION
// Address Range: [[004874d0, 00487624]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(CDrawSurface *this_ptr,int x,int y)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(CDrawSurface *this_ptr,int x,int y)

{
  int iVar3;
  int iVar4;
  
  iVar3 = x + this_ptr->x;
  iVar4 = y + this_ptr->y;
  if ((((iVar3 < this_ptr->clip_left) || (this_ptr->clip_right < iVar3)) ||
      (iVar4 < this_ptr->clip_top)) || (this_ptr->clip_bottom < iVar4)) {
    return;
  }
  if (g_UseRGBConversion == 0) {
    if ((uint)g_BitsPerPixel < 0x10) {
      if (g_BitsPerPixel == 8) {
        ((byte *)g_ScreenBufferArray[iVar4])[iVar3] = (byte)g_CurrentDrawColor;
        return;
      }
    }
    else {
      if ((uint)g_BitsPerPixel < 0x11) {
        ((ushort *)g_ScreenBufferArray[iVar4])[iVar3] = (ushort)g_CurrentDrawColor;
        return;
      }
      if (g_BitsPerPixel == 0x20) {
        ((int *)g_ScreenBufferArray[iVar4])[iVar3] = g_CurrentDrawColor;
        return;
      }
    }
    g_CurrentFilename = "..\\cockpit\\drawsurf.cpp";
    g_CurrentLineNumber = 0x18d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid bitsPerPixel!");
    return;
  }
  if ((uint)g_BitsPerPixel < 0x10) {
    if (g_BitsPerPixel == 8) {
      return;
    }
  }
  else {
    if ((uint)g_BitsPerPixel < 0x11) {
      ((ushort *)g_ScreenBufferArray[iVar4])[iVar3] =
           ((ushort *)g_ScreenBufferArray[iVar4])[iVar3] >>
           ((byte)g_OriginalColorValue & 0x1f) & (ushort)g_PackedPixelColor;
      return;
    }
    if (g_BitsPerPixel == 0x20) {
      ((uint *)g_ScreenBufferArray[iVar4])[iVar3] =
           ((uint *)g_ScreenBufferArray[iVar4])[iVar3] >> ((byte)g_OriginalColorValue & 0x1f)
           & g_PackedPixelColor;
      return;
    }
  }
  g_CurrentFilename = "..\\cockpit\\drawsurf.cpp";
  g_CurrentLineNumber = 0x19e;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid bitsPerPixel!");
  return;
}
