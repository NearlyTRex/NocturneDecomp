// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_00489940
// Address: 00489940
// Address Range: [[00489940, 004899b5]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_00489940 (CDrawSurface *this_ptr,int x,int y,int height,char *format,...)

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_00489940
          (CDrawSurface *this_ptr,int x,int y,int height,char *format,...)

{
  char local_1014 [4096];
  va_list_t local_14;
  
  local_14 = &stack0x00000018;
  vsprintf(local_1014,format,&local_14);
  local_14 = (va_list_t)0x0;
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInArea_FUN_004898e0
            (this_ptr,(int)local_1014,x,y,(char *)height);
  return;
}
