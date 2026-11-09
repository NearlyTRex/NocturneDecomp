// Name: cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_00467350
// Address: 00467350
// Address Range: [[00467350, 004673a4]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawRectangleOutline_FUN_00467350(CDrawSurface *this_ptr,int x,int y,int width,int height)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawRectangleOutline_FUN_00467350(CDrawSurface *this_ptr,int x,int y,int width,int height)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawHorizontalLine_FUN_00466f90(this_ptr,x,y,width);
  cockpit_drawsurf_cpp_CDrawSurface_drawHorizontalLine_FUN_00466f90(this_ptr,x,height,width);
  cockpit_drawsurf_cpp_CDrawSurface_drawVerticalLine_FUN_004670b0(this_ptr,x,y,height);
  cockpit_drawsurf_cpp_CDrawSurface_drawVerticalLine_FUN_004670b0(this_ptr,width,y,height);
  return;
}
