// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeightPrintf_FUN_00489bb0
// Address: 00489bb0
// Address Range: [[00489bb0, 00489c11]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeightPrintf_FUN_00489bb0(CDrawSurface * this_ptr, int x, int y, char * format, ...)

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullHeightPrintf_FUN_00489bb0
          (CDrawSurface *this_ptr,int x,int y,char *format,...)

{
  BADSPACEBASE *in_ESP;
  char *in_stack_ffffeff8;
  char **local_c;
  
  local_c = &format;
  crt_stdio_c_vsprintf_FUN_005fdba8(&stack0xffffeff4,(char *)y,(va_list_t *)&local_c);
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullHeight_FUN_00489b60
            ((CDrawSurface *)x,(int)&stack0xffffeff8,y,in_stack_ffffeff8);
  return;
}
