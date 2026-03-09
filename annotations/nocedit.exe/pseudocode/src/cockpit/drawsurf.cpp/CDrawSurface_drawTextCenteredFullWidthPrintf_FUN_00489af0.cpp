// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidthPrintf_FUN_00489af0
// Address: 00489af0
// Address Range: [[00489af0, 00489b51]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullWidthPrintf_FUN_00489af0(CDrawSurface *this_ptr,int y,char *format,...)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullWidthPrintf_FUN_00489af0(CDrawSurface *this_ptr,int y,char *format,...)

{
  char local_100c [4096];
  va_list_t local_c;
  
  VA_START_T(local_c, format);
  _vsprintf(local_100c,format,local_c);
  VA_END_T(local_c);
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00489ab0(this_ptr,local_100c,y);
  return;
}
