// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeightPrintf_FUN_0045e1f0
// Address: 0045e1f0
// Address Range: [[0045e1f0, 0045e251]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullHeightPrintf_FUN_0045e1f0(CDrawSurface *this_ptr,int x,char *format,...)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullHeightPrintf_FUN_0045e1f0(CDrawSurface *this_ptr,int x,char *format,...)

{
  char local_100c [4096];
  byte *local_c;
  
  local_c = &stack0x00000010;
  _vsprintf(local_100c,format,(va_list_t)&local_c);
  local_c = (byte *)0x0;
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullHeight_FUN_0045e1a0(this_ptr,local_100c,x);
  return;
}
