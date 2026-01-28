// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBothPrintf_FUN_00489790
// Address: 00489790
// Address Range: [[00489790, 004897fb]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredBothPrintf_FUN_00489790 (CDrawSurface *this_ptr,int x,int y,int height,char *format,...)

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredBothPrintf_FUN_00489790
          (CDrawSurface *this_ptr,int x,int y,int height,char *format,...)

{
  char *in_stack_ffffeff0;
  char **local_10;
  
  local_10 = &format;
  crt_stdio_c_vsprintf_FUN_005fdba8(&stack0xffffeff0,(char *)height,(va_list_t *)&local_10);
  local_10 = (char **)0x0;
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredBoth_FUN_00489730
            (this_ptr,(int)&stack0xffffeff0,x,y,in_stack_ffffeff0);
  return;
}
