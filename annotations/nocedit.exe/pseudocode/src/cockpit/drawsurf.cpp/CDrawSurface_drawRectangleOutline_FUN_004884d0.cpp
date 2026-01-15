// Name: cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_004884d0
// Address: 004884d0
// Address Range: [[004884d0, 00488524]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_004884d0(CDrawSurface * this_ptr, int x, int y, int width, int height)

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawRectangleOutline_FUN_004884d0
          (CDrawSurface *this_ptr,int x,int y,int width,int height)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawHorizontalLine_FUN_00488110(this_ptr,x,y,width);
  cockpit_drawsurf_cpp_CDrawSurface_drawHorizontalLine_FUN_00488110(this_ptr,x,height,width);
  cockpit_drawsurf_cpp_CDrawSurface_drawVerticalLine_FUN_00488230(this_ptr,x,y,height);
  cockpit_drawsurf_cpp_CDrawSurface_drawVerticalLine_FUN_00488230(this_ptr,width,y,height);
  return;
}
