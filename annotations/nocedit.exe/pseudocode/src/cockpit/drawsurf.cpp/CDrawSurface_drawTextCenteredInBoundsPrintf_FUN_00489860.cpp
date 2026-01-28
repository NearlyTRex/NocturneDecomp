// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_00489860
// Address: 00489860
// Address Range: [[00489860, 004898d5]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_00489860 (CDrawSurface *this_ptr,int x,int y,int width,int height,char *format,...)

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_00489860
          (CDrawSurface *this_ptr,int x,int y,int width,int height,char *format,...)

{
  char *in_stack_ffffefec;
  char **local_14;
  
  local_14 = &format;
  crt_stdio_c_vsprintf_FUN_005fdba8(&stack0xffffefec,(char *)height,(va_list_t *)&local_14);
  local_14 = (char **)0x0;
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00489800
            (this_ptr,(int)&stack0xffffefec,x,y,width,in_stack_ffffefec);
  return;
}
