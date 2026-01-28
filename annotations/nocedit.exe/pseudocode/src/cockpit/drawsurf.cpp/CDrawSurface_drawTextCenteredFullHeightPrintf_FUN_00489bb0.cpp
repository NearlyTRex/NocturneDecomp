// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeightPrintf_FUN_00489bb0
// Address: 00489bb0
// Address Range: [[00489bb0, 00489c11]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullHeightPrintf_FUN_00489bb0 (CDrawSurface *this_ptr,int x,int y,char *format,...)

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullHeightPrintf_FUN_00489bb0
          (CDrawSurface *this_ptr,int x,int y,char *format,...)

{
  char *in_stack_ffffeff4;
  char **local_c;
  
  local_c = &format;
  crt_stdio_c_vsprintf_FUN_005fdba8(&stack0xffffeff4,(char *)y,(va_list_t *)&local_c);
  local_c = (char **)0x0;
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullHeight_FUN_00489b60
            (this_ptr,(int)&stack0xffffeff4,x,in_stack_ffffeff4);
  return;
}
