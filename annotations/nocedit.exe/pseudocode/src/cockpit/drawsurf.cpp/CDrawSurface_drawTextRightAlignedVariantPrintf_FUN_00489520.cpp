// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariantPrintf_FUN_00489520
// Address: 00489520
// Address Range: [[00489520, 0048958b]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVariantPrintf_FUN_00489520(CDrawSurface *this_ptr,int x,int y,char *format,...)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVariantPrintf_FUN_00489520(CDrawSurface *this_ptr,int x,int y,char *format,...)

{
  char *in_stack_00000010;
  char local_1010 [4096];
  va_list_t local_10;
  
  local_10.value[0] = (char * [1])&format;
  _vsprintf(local_1010,in_stack_00000010,(va_list_t)&local_10);
  local_10.value[0] = (char * [1])(char *)0x0;
  cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVariant_FUN_004894c0
            (this_ptr,local_1010,x,y);
  return;
}
