// Name: cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_0045cb10
// Address: 0045cb10
// Address Range: [[0045cb10, 0045cb64]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawRectangleOutline_FUN_0045cb10(CDrawSurface *this_ptr,int x,int y,int width,int height)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawRectangleOutline_FUN_0045cb10(CDrawSurface *this_ptr,int x,int y,int width,int height)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawHorizontalLine_FUN_0045c730(this_ptr,x,y,width);
  cockpit_drawsurf_cpp_CDrawSurface_drawHorizontalLine_FUN_0045c730(this_ptr,x,height,width);
  cockpit_drawsurf_cpp_CDrawSurface_drawVerticalLine_FUN_0045c850(this_ptr,x,y,height);
  cockpit_drawsurf_cpp_CDrawSurface_drawVerticalLine_FUN_0045c850(this_ptr,width,y,height);
  return;
}
