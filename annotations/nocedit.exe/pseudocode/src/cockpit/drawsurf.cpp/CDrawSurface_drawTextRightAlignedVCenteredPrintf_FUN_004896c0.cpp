// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_004896c0
// Address: 004896c0
// Address Range: [[004896c0, 0048972b]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_004896c0 (CDrawSurface *this_ptr,int x,int y,char *format,...)

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_004896c0
          (CDrawSurface *this_ptr,int x,int y,char *format,...)

{
  char *in_stack_00000010;
  char local_1010 [4096];
  va_list_t local_10;
  
  local_10.value[0] = (char * [1])&format;
  vsprintf(local_1010,in_stack_00000010,(va_list_t)&local_10);
  local_10.value[0] = (char * [1])(char *)0x0;
  cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_00489660
            (this_ptr,local_1010,x,y);
  return;
}
