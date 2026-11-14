// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedPrintf_FUN_004682a0
// Address: 004682a0
// Address Range: [[004682a0, 0046830b]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedPrintf_FUN_004682a0(CDrawSurface *this_ptr,int x,int y,char *format)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedPrintf_FUN_004682a0(CDrawSurface *this_ptr,int x,int y,char *format)

{
  char acStack_1010 [4096];
  byte *puStack_10;
  
  puStack_10 = &stack0x00000014;
  _vsprintf(acStack_1010,format,(va_list_t)&puStack_10);
  puStack_10 = (byte *)0x0;
  cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAligned_FUN_00468240(this_ptr,acStack_1010,x,y);
  return;
}
