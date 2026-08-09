// Name: cockpit_drawsurf.cpp_CDrawSurface_drawCenteredRectangleOutline_FUN_0045cb90
// Address: 0045cb90
// Address Range: [[0045cb90, 0045cc01]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCenteredRectangleOutline_FUN_0045cb90(CDrawSurface *this_ptr,int center_x,int center_y,int width,int height)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCenteredRectangleOutline_FUN_0045cb90(CDrawSurface *this_ptr,int center_x,int center_y,int width,int height)

{
  int width_00;
  int height_00;
  
  width_00 = width / 2 + center_x;
  if ((width & 1U) == 0) {
    width_00 = width_00 + -1;
  }
  height_00 = height / 2 + center_y;
  if ((height & 1U) == 0) {
    height_00 = height_00 + -1;
  }
  cockpit_drawsurf_cpp_CDrawSurface_drawRectangleOutline_FUN_0045cb10
            (this_ptr,center_x - width / 2,center_y - height / 2,width_00,height_00);
  return;
}
