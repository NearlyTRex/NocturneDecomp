// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_00480ca0
// Address: 00480ca0
// Address Range: [[00480ca0, 00480d15]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_00480ca0(CDrawSurface *this_ptr,int x,int y,int height,char *format)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_00480ca0(CDrawSurface *this_ptr,int x,int y,int height,char *format)

{
  char acStack_1014 [4096];
  byte *puStack_14;
  
  puStack_14 = &stack0x00000018;
  _vsprintf(acStack_1014,format,(va_list_t)&puStack_14);
  puStack_14 = (byte *)0x0;
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInArea_FUN_00480c40
            (this_ptr,acStack_1014,x,y,height);
  return;
}
