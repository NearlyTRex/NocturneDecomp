// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeightPrintf_FUN_00489bb0
// Address: 00489bb0
// Address Range: [[00489bb0, 00489c11]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullHeightPrintf_FUN_00489bb0(CDrawSurface *this_ptr,int x,char *format,...)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullHeightPrintf_FUN_00489bb0(CDrawSurface *this_ptr,int x,char *format,...)

{
  char local_100c [4096];
  va_list_t local_c;
  
  VA_START_T(local_c, format);
  _vsprintf(local_100c,format,local_c);
  VA_END_T(local_c);
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullHeight_FUN_00489b60(this_ptr,local_100c,x);
  return;
}
