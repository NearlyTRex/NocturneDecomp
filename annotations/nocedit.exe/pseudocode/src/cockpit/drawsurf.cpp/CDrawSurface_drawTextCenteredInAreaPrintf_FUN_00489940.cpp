// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_00489940
// Address: 00489940
// Address Range: [[00489940, 004899b5]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_00489940(CDrawSurface * this_ptr, int x, int y, int height, char * format, ...)

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_00489940
          (CDrawSurface *this_ptr,int x,int y,int height,char *format,...)

{
  BADSPACEBASE *in_ESP;
  byte auStack_1010 [4092];
  va_list_t local_14;
  
  local_14 = &stack0x00000018;
  crt_stdio_c_vsprintf_FUN_005fdba8(&stack0xffffefec,format,&local_14);
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInArea_FUN_004898e0
            ((CDrawSurface *)x,(int)auStack_1010,y,height,format);
  return;
}
