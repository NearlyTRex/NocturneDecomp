// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidthPrintf_FUN_00489af0
// Address: 00489af0
// Address Range: [[00489af0, 00489b51]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidthPrintf_FUN_00489af0(CDrawSurface * this_ptr, int y, int height, char * format, ...)

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullWidthPrintf_FUN_00489af0
          (CDrawSurface *this_ptr,int y,int height,char *format,...)

{
  BADSPACEBASE *in_ESP;
  char *in_stack_ffffeff8;
  char **local_c;
  
  local_c = &format;
  crt_stdio_c_vsprintf_FUN_005fdba8(&stack0xffffeff4,(char *)height,(va_list_t *)&local_c);
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00489ab0
            ((CDrawSurface *)y,(int)&stack0xffffeff8,height,in_stack_ffffeff8);
  return;
}
