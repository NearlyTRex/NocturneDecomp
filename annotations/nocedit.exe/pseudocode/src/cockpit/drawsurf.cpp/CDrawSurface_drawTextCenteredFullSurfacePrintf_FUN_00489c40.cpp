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
  
  VA_START_T(local_8, format);
  _vsprintf(local_1008,format,local_8);
  VA_END_T(local_8);
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00489c20(this_ptr,local_1008);
  return;
}
