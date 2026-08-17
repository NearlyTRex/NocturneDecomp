// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_0045df80
// Address: 0045df80
// Address Range: [[0045df80, 0045dff5]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_0045df80(CDrawSurface *this_ptr,int x,int y,int height,char *format,...)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_0045df80(CDrawSurface *this_ptr,int x,int y,int height,char *format,...)

{
  char local_1014 [4096];
  byte *local_14;
  
  local_14 = &stack0x00000018;
  _vsprintf(local_1014,format,(va_list_t)&local_14);
  local_14 = (byte *)0x0;
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInArea_FUN_0045df20
            (this_ptr,local_1014,x,y,height);
  return;
}
