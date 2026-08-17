// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_0045dd00
// Address: 0045dd00
// Address Range: [[0045dd00, 0045dd6b]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_0045dd00(CDrawSurface *this_ptr,int x,int y,char *format,...)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_0045dd00(CDrawSurface *this_ptr,int x,int y,char *format,...)

{
  char local_1010 [4096];
  byte *local_10;
  
  local_10 = &stack0x00000014;
  _vsprintf(local_1010,format,(va_list_t)&local_10);
  local_10 = (byte *)0x0;
  cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_0045dca0
            (this_ptr,local_1010,x,y);
  return;
}
