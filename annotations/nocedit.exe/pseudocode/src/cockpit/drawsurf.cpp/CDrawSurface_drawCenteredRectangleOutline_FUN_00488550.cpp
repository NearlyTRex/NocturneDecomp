// Name: cockpit_drawsurf.cpp_CDrawSurface_drawCenteredRectangleOutline_FUN_00488550
// Address: 00488550
// Address Range: [[00488550, 004885c1]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCenteredRectangleOutline_FUN_00488550(CDrawSurface *this_ptr,int center_x,int center_y,int width,int height)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCenteredRectangleOutline_FUN_00488550(CDrawSurface *this_ptr,int center_x,int center_y,int width,int height)

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
  cockpit_drawsurf_cpp_CDrawSurface_drawRectangleOutline_FUN_004884d0
            (this_ptr,center_x - width / 2,center_y - height / 2,width_00,height_00);
  return;
}
