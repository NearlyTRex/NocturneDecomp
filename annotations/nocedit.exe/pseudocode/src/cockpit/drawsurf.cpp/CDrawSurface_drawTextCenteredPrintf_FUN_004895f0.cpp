// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredPrintf_FUN_004895f0
// Address: 004895f0
// Address Range: [[004895f0, 0048965b]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredPrintf_FUN_004895f0 (CDrawSurface *this_ptr,int x,int y,char *format,...)

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredPrintf_FUN_004895f0
          (CDrawSurface *this_ptr,int x,int y,char *format,...)

{
  char *in_stack_00000010;
  char local_1010 [4096];
  va_list_t local_10;
  
  local_10.value[0] = (char * [1])&format;
  vsprintf(local_1010,in_stack_00000010,(va_list_t)&local_10);
  local_10.value[0] = (char * [1])(char *)0x0;
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCentered_FUN_00489590(this_ptr,local_1010,x,y);
  return;
}
