// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_0045dea0
// Address: 0045dea0
// Address Range: [[0045dea0, 0045df15]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_0045dea0(CDrawSurface *this_ptr,int x,int y,int width,char *format,...)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_0045dea0(CDrawSurface *this_ptr,int x,int y,int width,char *format,...)

{
  char local_1014 [4096];
  byte *local_14;
  
  local_14 = &stack0x00000018;
  _vsprintf(local_1014,format,(va_list_t)&local_14);
  local_14 = (byte *)0x0;
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBounds_FUN_0045de40
            (this_ptr,local_1014,x,y,width);
  return;
}
