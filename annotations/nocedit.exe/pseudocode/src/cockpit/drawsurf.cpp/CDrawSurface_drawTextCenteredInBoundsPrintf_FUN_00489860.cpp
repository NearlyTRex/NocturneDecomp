// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_00489860
// Address: 00489860
// Address Range: [[00489860, 004898d5]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_00489860(CDrawSurface *this_ptr,int x,int y,int width,char *format,...)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_00489860(CDrawSurface *this_ptr,int x,int y,int width,char *format,...)

{
  char local_1014 [4096];
  va_list_t local_14;
  
  VA_START_T(local_14, format);
  _vsprintf(local_1014,format,local_14);
  VA_END_T(local_14);
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00489800
            (this_ptr,local_1014,x,y,width);
  return;
}
