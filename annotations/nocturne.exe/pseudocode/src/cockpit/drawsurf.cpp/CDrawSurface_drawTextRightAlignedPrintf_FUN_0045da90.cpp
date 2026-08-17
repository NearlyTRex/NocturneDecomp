// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedPrintf_FUN_0045da90
// Address: 0045da90
// Address Range: [[0045da90, 0045dafb]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedPrintf_FUN_0045da90(CDrawSurface *this_ptr,int x,int y,char *format,...)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedPrintf_FUN_0045da90(CDrawSurface *this_ptr,int x,int y,char *format,...)

{
  char local_1010 [4096];
  byte *local_10;
  
  local_10 = &stack0x00000014;
  _vsprintf(local_1010,format,(va_list_t)&local_10);
  local_10 = (byte *)0x0;
  cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAligned_FUN_0045da30(this_ptr,local_1010,x,y);
  return;
}
