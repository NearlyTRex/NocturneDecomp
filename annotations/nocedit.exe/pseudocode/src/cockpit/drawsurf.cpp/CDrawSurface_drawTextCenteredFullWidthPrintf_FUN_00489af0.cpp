// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidthPrintf_FUN_00489af0
// Address: 00489af0
// Address Range: [[00489af0, 00489b51]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullWidthPrintf_FUN_00489af0 (CDrawSurface *this_ptr,int y,int height,char *format,...)

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullWidthPrintf_FUN_00489af0
          (CDrawSurface *this_ptr,int y,int height,char *format,...)

{
  char *in_stack_ffffeff4;
  char **local_c;
  
  local_c = &format;
  vsprintf(&stack0xffffeff4,(char *)height,(va_list_t *)&local_c);
  local_c = (char **)0x0;
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00489ab0
            (this_ptr,(int)&stack0xffffeff4,y,in_stack_ffffeff4);
  return;
}
