// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariantPrintf_FUN_00489520
// Address: 00489520
// Address Range: [[00489520, 0048958b]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVariantPrintf_FUN_00489520(CDrawSurface *this_ptr,int x,int y,char *format,...)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVariantPrintf_FUN_00489520(CDrawSurface *this_ptr,int x,int y,char *format,...)

{
  char local_1010 [4096];
  va_list_t local_10;
  
  VA_START_T(local_10, format);
  _vsprintf(local_1010,format,local_10);
  VA_END_T(local_10);
  cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVariant_FUN_004894c0
            (this_ptr,local_1010,x,y);
  return;
}
