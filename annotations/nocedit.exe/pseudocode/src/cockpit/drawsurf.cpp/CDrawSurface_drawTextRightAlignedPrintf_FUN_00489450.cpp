// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedPrintf_FUN_00489450
// Address: 00489450
// Address Range: [[00489450, 004894bb]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedPrintf_FUN_00489450(CDrawSurface * this_ptr, int x, int y, char * format, ...)

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedPrintf_FUN_00489450
          (CDrawSurface *this_ptr,int x,int y,char *format,...)

{
  BADSPACEBASE *in_ESP;
  byte auStack_100c [4092];
  va_list_t local_10;
  
  local_10 = &stack0x00000014;
  crt_stdio_c_vsprintf_FUN_005fdba8(&stack0xffffeff0,format,&local_10);
  cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAligned_FUN_004893f0
            ((CDrawSurface *)x,(int)auStack_100c,y,format);
  return;
}
