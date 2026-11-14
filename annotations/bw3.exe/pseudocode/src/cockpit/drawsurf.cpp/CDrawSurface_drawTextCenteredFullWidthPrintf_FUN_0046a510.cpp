// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidthPrintf_FUN_0046a510
// Address: 0046a510
// Address Range: [[0046a510, 0046a571]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullWidthPrintf_FUN_0046a510(CDrawSurface *this_ptr,int y,char *format)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullWidthPrintf_FUN_0046a510(CDrawSurface *this_ptr,int y,char *format)

{
  char acStack_100c [4096];
  byte *puStack_c;
  
  puStack_c = &stack0x00000010;
  _vsprintf(acStack_100c,format,(va_list_t)&puStack_c);
  puStack_c = (byte *)0x0;
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_0046a4d0(this_ptr,acStack_100c,y);
  return;
}
