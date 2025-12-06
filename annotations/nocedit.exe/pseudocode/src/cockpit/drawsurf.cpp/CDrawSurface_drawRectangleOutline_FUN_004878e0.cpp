// Name: cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_004878e0
// Address: 004878e0
// Address Range: [[004878e0, 0048798e]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_004878e0(CDrawSurface * this_ptr, int x, int y, int width, int height)

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawRectangleOutline_FUN_004878e0
          (CDrawSurface *this_ptr,int x,int y,int width,int height)

{
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  
  cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(this_ptr,x + width,y + height);
  cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(this_ptr,y - height,y + height);
  cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0
            (this_ptr,x + width,height - in_stack_0000001c);
  cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0
            (this_ptr,y - height,height - in_stack_0000001c);
  cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0
            (this_ptr,in_stack_00000018 + in_stack_00000024,in_stack_0000001c + in_stack_00000020);
  cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0
            (this_ptr,in_stack_0000001c - in_stack_00000028,in_stack_0000001c + in_stack_00000020);
  cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0
            (this_ptr,in_stack_00000018 + in_stack_00000024,in_stack_00000024 - in_stack_00000028);
  cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0
            (this_ptr,in_stack_0000001c - in_stack_00000028,in_stack_00000024 - in_stack_00000028);
  return;
}
