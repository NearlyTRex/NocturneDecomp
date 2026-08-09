// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidthPrintf_FUN_0045e130
// Address: 0045e130
// Address Range: [[0045e130, 0045e191]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullWidthPrintf_FUN_0045e130(CDrawSurface *this_ptr,int y,char *format,...)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullWidthPrintf_FUN_0045e130(CDrawSurface *this_ptr,int y,char *format,...)

{
  char local_100c [4096];
  byte *local_c;
  
  local_c = &stack0x00000010;
  _vsprintf(local_100c,format,(va_list_t)&local_c);
  local_c = (byte *)0x0;
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_0045e0f0(this_ptr,local_100c,y);
  return;
}
