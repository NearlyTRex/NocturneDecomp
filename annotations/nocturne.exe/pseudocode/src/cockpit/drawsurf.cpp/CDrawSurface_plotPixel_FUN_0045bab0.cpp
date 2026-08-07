// Name: cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0
// Address: 0045bab0
// Address Range: [[0045bab0, 0045bc1d]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0(CDrawSurface *this_ptr,int x,int y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0(CDrawSurface *this_ptr,int x,int y)

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
  if (_DAT_01b4d71c == 0) {
    if ((uint)g_BitsPerPixel < 0x10) {
      if (g_BitsPerPixel == 8) {
        *(byte *)(iVar3 + (int)g_ScreenBufferArray[iVar4]) = DAT_01b4d710;
        return;
      }
    }
    else {
      if ((uint)g_BitsPerPixel < 0x11) {
        *(ushort *)(iVar2 + (int)g_ScreenBufferArray[iVar4]) = _DAT_01b4d710;
        return;
      }
      if (g_BitsPerPixel == 0x20) {
        *(uint *)(iVar1 + (int)g_ScreenBufferArray[iVar4]) = _DAT_01b4d710;
        return;
      }
    }
    g_CurrentFilename = "..\\cockpit\\drawsurf.cpp";
    g_CurrentLineNumber = 397;
    core_main_c_displayErrorAndQuit_FUN_004c8440("Invalid bitsPerPixel!");
    return;
  }
  if ((uint)g_BitsPerPixel < 0x10) {
    if (g_BitsPerPixel == 8) {
      *(byte *)(iVar3 + (int)g_ScreenBufferArray[iVar4]) =
           g_LightTable[8][*(byte *)(iVar3 + (int)g_ScreenBufferArray[iVar4])];
      return;
    }
  }
  else {
    if ((uint)g_BitsPerPixel < 0x11) {
      *(ushort *)(iVar2 + (int)g_ScreenBufferArray[iVar4]) =
           *(ushort *)(iVar2 + (int)g_ScreenBufferArray[iVar4]) >> (DAT_01b4d720 & 0x1f) &
           (ushort)_DAT_01b4d730;
      return;
    }
    if (g_BitsPerPixel == 0x20) {
      *(uint *)((int)g_ScreenBufferArray[iVar4] + iVar1) =
           *(uint *)((int)g_ScreenBufferArray[iVar4] + iVar1) >> (DAT_01b4d720 & 0x1f) &
           _DAT_01b4d730;
      return;
    }
  }
  g_CurrentFilename = "..\\cockpit\\drawsurf.cpp";
  g_CurrentLineNumber = 414;
  core_main_c_displayErrorAndQuit_FUN_004c8440("Invalid bitsPerPixel!");
  return;
}
