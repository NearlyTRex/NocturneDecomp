// Name: cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_00468f20
// Address: 00468f20
// Address Range: [[00468f20, 00468f74]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawRectangleOutline_FUN_00468f20(CDrawSurface *this_ptr,int x,int y,int width,int height)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawRectangleOutline_FUN_00468f20(CDrawSurface *this_ptr,int x,int y,int width,int height)

{
  cockpit_drawsurf_cpp_FUN_00468b60(this_ptr,x,y,width);
  cockpit_drawsurf_cpp_FUN_00468b60(this_ptr,x,height,width);
  cockpit_drawsurf_cpp_FUN_00468c80(this_ptr,x,y,height);
  cockpit_drawsurf_cpp_FUN_00468c80(this_ptr,width,y,height);
  return;
}
