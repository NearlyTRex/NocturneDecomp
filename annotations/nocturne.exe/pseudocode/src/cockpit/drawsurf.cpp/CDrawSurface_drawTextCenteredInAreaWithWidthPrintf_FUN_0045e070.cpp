// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_0045e070
// Address: 0045e070
// Address Range: [[0045e070, 0045e0ed]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_0045e070(CDrawSurface *this_ptr,int x,int width,int y,int height,char *format)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_0045e070(CDrawSurface *this_ptr,int x,int width,int y,int height,char *format)

{
  char acStack_1014 [4096];
  byte *puStack_14;
  
  puStack_14 = &stack0x0000001c;
  _vsprintf(acStack_1014,format,(va_list_t)&puStack_14);
  puStack_14 = (byte *)0x0;
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_0045e000
            (this_ptr,acStack_1014,x,width,y,height);
  return;
}
