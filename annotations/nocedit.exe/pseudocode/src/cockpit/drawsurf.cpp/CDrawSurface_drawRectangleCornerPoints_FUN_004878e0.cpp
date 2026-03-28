// Name: cockpit_drawsurf.cpp_CDrawSurface_drawRectangleCornerPoints_FUN_004878e0
// Address: 004878e0
// Address Range: [[004878e0, 0048798e]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawRectangleCornerPoints_FUN_004878e0(CDrawSurface *this_ptr,int x,int y,int width,int height)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawRectangleCornerPoints_FUN_004878e0(CDrawSurface *this_ptr,int x,int y,int width,int height)

{
  cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(this_ptr,x + width,y + height);
  cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(this_ptr,x - width,y + height);
  cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(this_ptr,x + width,y - height);
  cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(this_ptr,x - width,y - height);
  cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(this_ptr,x + height,y + width);
  cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(this_ptr,x - height,y + width);
  cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(this_ptr,x + height,y - width);
  cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(this_ptr,x - height,y - width);
  return;
}
