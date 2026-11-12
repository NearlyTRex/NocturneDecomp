// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_0046a360
// Address: 0046a360
// Address Range: [[0046a360, 0046a3d5]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_0046a360(CDrawSurface *this_ptr,int x,int y,int height,char *format)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_0046a360(CDrawSurface *this_ptr,int x,int y,int height,char *format)

{
  char acStack_1014 [4096];
  byte *puStack_14;
  
  puStack_14 = &stack0x00000018;
  _vsprintf(acStack_1014,format,(va_list_t)&puStack_14);
  puStack_14 = (byte *)0x0;
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInArea_FUN_0046a300
            (this_ptr,acStack_1014,x,y,height);
  return;
}
