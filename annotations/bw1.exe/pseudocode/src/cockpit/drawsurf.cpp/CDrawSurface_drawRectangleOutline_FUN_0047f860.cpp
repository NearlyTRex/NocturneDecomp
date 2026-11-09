// Name: cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_0047f860
// Address: 0047f860
// Address Range: [[0047f860, 0047f8b4]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawRectangleOutline_FUN_0047f860(CDrawSurface *this_ptr,int x,int y,int width,int height)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawRectangleOutline_FUN_0047f860(CDrawSurface *this_ptr,int x,int y,int width,int height)

{
  cockpit_drawsurf_cpp_FUN_0047f4a0(this_ptr,x,y,width);
  cockpit_drawsurf_cpp_FUN_0047f4a0(this_ptr,x,height,width);
  cockpit_drawsurf_cpp_FUN_0047f5c0(this_ptr,x,y,height);
  cockpit_drawsurf_cpp_FUN_0047f5c0(this_ptr,width,y,height);
  return;
}
