// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_0046a0e0
// Address: 0046a0e0
// Address Range: [[0046a0e0, 0046a14b]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_0046a0e0(CDrawSurface *this_ptr,int x,int y,char *format)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_0046a0e0(CDrawSurface *this_ptr,int x,int y,char *format)

{
  char acStack_1010 [4096];
  byte *puStack_10;
  
  puStack_10 = &stack0x00000014;
  _vsprintf(acStack_1010,format,(va_list_t)&puStack_10);
  puStack_10 = (byte *)0x0;
  cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_0046a080
            (this_ptr,acStack_1010,x,y);
  return;
}
