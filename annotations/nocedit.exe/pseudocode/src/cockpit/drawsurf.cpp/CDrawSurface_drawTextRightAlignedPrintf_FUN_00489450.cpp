// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedPrintf_FUN_00489450
// Address: 00489450
// Address Range: [[00489450, 004894bb]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedPrintf_FUN_00489450(CDrawSurface *this_ptr,int x,int y,char *format,...)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedPrintf_FUN_00489450(CDrawSurface *this_ptr,int x,int y,char *format,...)

{
  char local_1010 [4096];
  va_list_t local_10;
  
  local_10.value[0] = (char * [1])&stack0x00000014;
  _vsprintf(local_1010,format,(va_list_t)&local_10);
  local_10.value[0] = (char * [1])(char *)0x0;
  cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAligned_FUN_004893f0(this_ptr,local_1010,x,y);
  return;
}
