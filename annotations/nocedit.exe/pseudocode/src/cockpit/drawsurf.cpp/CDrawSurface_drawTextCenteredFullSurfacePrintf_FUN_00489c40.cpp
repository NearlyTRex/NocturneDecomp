// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00489c40
// Address: 00489c40
// Address Range: [[00489c40, 00489c95]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00489c40(CDrawSurface *this_ptr,char *format,...)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00489c40(CDrawSurface *this_ptr,char *format,...)

{
  char local_1008 [4096];
  va_list_t local_8;
  
  local_8.value[0] = (char * [1])&stack0x0000000c;
  _vsprintf(local_1008,format,(va_list_t)&local_8);
  local_8.value[0] = (char * [1])(char *)0x0;
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00489c20(this_ptr,local_1008);
  return;
}
