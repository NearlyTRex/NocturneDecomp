// Name: cockpit_drawsurf.cpp_CDrawSurface_drawRectangleCornerPoints_FUN_0045bf00
// Address: 0045bf00
// Address Range: [[0045bf00, 0045bfae]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawRectangleCornerPoints_FUN_0045bf00(CDrawSurface *this_ptr,int x,int y,int width,int height)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawRectangleCornerPoints_FUN_0045bf00(CDrawSurface *this_ptr,int x,int y,int width,int height)

{
  int in_stack_0000001c;
  int in_stack_00000024;
  int in_stack_0000002c;
  int in_stack_00000038;
  int in_stack_0000003c;
  int in_stack_00000040;
  int in_stack_00000044;
  int in_stack_00000050;
  int in_stack_00000054;
  int in_stack_00000058;
  
  cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0(this_ptr,x + width,y + height);
  cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0
            (this_ptr,height - in_stack_0000001c,y + height);
  cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0
            (this_ptr,x + width,in_stack_00000024 - in_stack_0000002c);
  cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0
            (this_ptr,height - in_stack_0000001c,in_stack_00000024 - in_stack_0000002c);
  cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0
            (this_ptr,in_stack_00000038 + in_stack_00000044,in_stack_0000003c + in_stack_00000040);
  cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0
            (this_ptr,in_stack_00000044 - in_stack_00000050,in_stack_0000003c + in_stack_00000040);
  cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0
            (this_ptr,in_stack_00000038 + in_stack_00000044,in_stack_00000054 - in_stack_00000058);
  cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0
            (this_ptr,in_stack_00000044 - in_stack_00000050,in_stack_00000054 - in_stack_00000058);
  return;
}
