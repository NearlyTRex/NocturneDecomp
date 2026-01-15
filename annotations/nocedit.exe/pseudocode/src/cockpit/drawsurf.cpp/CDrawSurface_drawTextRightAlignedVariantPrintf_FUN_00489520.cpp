// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariantPrintf_FUN_00489520
// Address: 00489520
// Address Range: [[00489520, 0048958b]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariantPrintf_FUN_00489520(CDrawSurface * this_ptr, int x, int y, int height, char * format, ...)

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVariantPrintf_FUN_00489520
          (CDrawSurface *this_ptr,int x,int y,int height,char *format,...)

{
  char *in_stack_ffffeff0;
  char **local_10;
  
  local_10 = &format;
  crt_stdio_c_vsprintf_FUN_005fdba8(&stack0xffffeff0,(char *)height,(va_list_t *)&local_10);
  local_10 = (char **)0x0;
  cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVariant_FUN_004894c0
            (this_ptr,(int)&stack0xffffeff0,x,y,in_stack_ffffeff0);
  return;
}
