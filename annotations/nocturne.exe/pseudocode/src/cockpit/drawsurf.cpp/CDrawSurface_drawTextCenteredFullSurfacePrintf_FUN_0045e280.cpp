// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_0045e280
// Address: 0045e280
// Address Range: [[0045e280, 0045e2d5]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_0045e280(CDrawSurface *this_ptr,char *format,...)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_0045e280(CDrawSurface *this_ptr,char *format,...)

{
  char acStack_1008 [4096];
  byte *puStack_8;
  
  puStack_8 = &stack0x0000000c;
  _vsprintf(acStack_1008,format,(va_list_t)&puStack_8);
  puStack_8 = (byte *)0x0;
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_0045e260(this_ptr,acStack_1008);
  return;
}
