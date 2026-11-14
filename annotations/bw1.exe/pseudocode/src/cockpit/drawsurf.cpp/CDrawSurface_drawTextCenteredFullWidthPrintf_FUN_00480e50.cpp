// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidthPrintf_FUN_00480e50
// Address: 00480e50
// Address Range: [[00480e50, 00480eb1]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullWidthPrintf_FUN_00480e50(CDrawSurface *this_ptr,int y,char *format)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullWidthPrintf_FUN_00480e50(CDrawSurface *this_ptr,int y,char *format)

{
  char acStack_100c [4096];
  byte *puStack_c;
  
  puStack_c = &stack0x00000010;
  _vsprintf(acStack_100c,format,(va_list_t)&puStack_c);
  puStack_c = (byte *)0x0;
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00480e10(this_ptr,acStack_100c,y);
  return;
}
