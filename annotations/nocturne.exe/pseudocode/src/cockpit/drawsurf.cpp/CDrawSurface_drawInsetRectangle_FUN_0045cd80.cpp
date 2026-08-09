// Name: cockpit_drawsurf.cpp_CDrawSurface_drawInsetRectangle_FUN_0045cd80
// Address: 0045cd80
// Address Range: [[0045cd80, 0045cdd6]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawInsetRectangle_FUN_0045cd80(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2,int inset_x,int inset_y)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawInsetRectangle_FUN_0045cd80(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2,int inset_x,int inset_y)

{
  int x1_00;
  int y1_00;
  
  x1_00 = ((y1 + x1 + 1) - inset_x) / 2;
  y1_00 = ((y2 + x2 + 1) - inset_y) / 2;
  cockpit_drawsurf_cpp_CDrawSurface_drawSolidRectangle_FUN_0045cc70
            (this_ptr,x1_00,y1_00,inset_x + x1_00 + -1,inset_y + -1 + y1_00);
  return;
}
