// Name: cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedCenteredRectangle_FUN_0045cff0
// Address: 0045cff0
// Address Range: [[0045cff0, 0045d061]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedCenteredRectangle_FUN_0045cff0(CDrawSurface *this_ptr,int center_x,int center_y,int width,int height)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedCenteredRectangle_FUN_0045cff0(CDrawSurface *this_ptr,int center_x,int center_y,int width,int height)

{
  int x2;
  int y2;
  
  x2 = width / 2 + center_x;
  if ((width & 1U) == 0) {
    x2 = x2 + -1;
  }
  y2 = height / 2 + center_y;
  if ((height & 1U) == 0) {
    y2 = y2 + -1;
  }
  cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedDashedLine_FUN_0045cde0
            (this_ptr,center_x - width / 2,center_y - height / 2,x2,y2);
  return;
}
