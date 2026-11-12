// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_004686b0
// Address: 004686b0
// Address Range: [[004686b0, 00468725]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_004686b0(CDrawSurface *this_ptr,int x,int y,int width,char *format)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_004686b0(CDrawSurface *this_ptr,int x,int y,int width,char *format)

{
  char acStack_1014 [4096];
  byte *puStack_14;
  
  puStack_14 = &stack0x00000018;
  _vsprintf(acStack_1014,format,(va_list_t)&puStack_14);
  puStack_14 = (byte *)0x0;
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00468650
            (this_ptr,acStack_1014,x,y,width);
  return;
}
