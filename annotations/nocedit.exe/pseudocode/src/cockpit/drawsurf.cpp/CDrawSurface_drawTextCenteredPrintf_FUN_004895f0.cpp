// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredPrintf_FUN_004895f0
// Address: 004895f0
// Address Range: [[004895f0, 0048965b]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredPrintf_FUN_004895f0(CDrawSurface *this_ptr,int x,int y,char *format,...)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredPrintf_FUN_004895f0(CDrawSurface *this_ptr,int x,int y,char *format,...)

{
  char local_1010 [4096];
  va_list_t local_10;
  
  VA_START_T(local_10, format);
  _vsprintf(local_1010,format,local_10);
  VA_END_T(local_10);
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCentered_FUN_00489590(this_ptr,local_1010,x,y);
  return;
}
