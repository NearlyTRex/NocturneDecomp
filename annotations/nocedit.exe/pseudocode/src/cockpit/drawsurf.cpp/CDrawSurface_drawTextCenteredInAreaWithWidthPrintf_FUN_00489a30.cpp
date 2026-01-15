// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00489a30
// Address: 00489a30
// Address Range: [[00489a30, 00489aad]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00489a30(CDrawSurface * this_ptr, int x, int y, int width, int height, char * format, ...)

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00489a30
          (CDrawSurface *this_ptr,int x,int y,int width,int height,char *format,...)

{
  char local_1014 [4096];
  va_list_t local_14;
  
  local_14 = &stack0x0000001c;
  crt_stdio_c_vsprintf_FUN_005fdba8(local_1014,format,&local_14);
  local_14 = (va_list_t)0x0;
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_004899c0
            (this_ptr,(int)local_1014,x,y,width,(char *)height);
  return;
}
