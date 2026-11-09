// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00480fa0
// Address: 00480fa0
// Address Range: [[00480fa0, 00480ff5]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00480fa0(CDrawSurface *this_ptr,char *format)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00480fa0(CDrawSurface *this_ptr,char *format)

{
  char acStack_1008 [4096];
  byte *puStack_8;
  
  puStack_8 = &stack0x0000000c;
  _vsprintf(acStack_1008,format,&puStack_8);
  puStack_8 = (byte *)0x0;
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00480f80(this_ptr,acStack_1008);
  return;
}
