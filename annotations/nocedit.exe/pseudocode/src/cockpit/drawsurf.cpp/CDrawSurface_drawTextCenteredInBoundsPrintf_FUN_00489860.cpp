// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_00489860
// Address: 00489860
// Address Range: [[00489860, 004898d5]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_00489860(CDrawSurface * this_ptr, int x, int y, int width, int height, char * format, ...)

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_00489860
          (CDrawSurface *this_ptr,int x,int y,int width,int height,char *format,...)

{
  BADSPACEBASE *in_ESP;
  char *in_stack_ffffeff0;
  char **local_14;
  
  local_14 = &format;
  crt_stdio_c_vsprintf_FUN_005fdba8(&stack0xffffefec,(char *)height,(va_list_t *)&local_14);
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00489800
            ((CDrawSurface *)x,(int)&stack0xffffeff0,y,width,height,in_stack_ffffeff0);
  return;
}
