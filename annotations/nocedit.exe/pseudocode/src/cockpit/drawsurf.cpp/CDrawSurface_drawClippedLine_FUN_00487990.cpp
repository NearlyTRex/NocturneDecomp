// Name: cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_00487990
// Address: 00487990
// Address Range: [[00487990, 00487a23]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_00487990(CDrawSurface * this_ptr, int x1, int y1, int x2, int y2)

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawClippedLine_FUN_00487990
          (CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

{
  int iVar1;
  
  x1 = x1 + this_ptr->x;
  y1 = y1 + this_ptr->y;
  x2 = x2 + this_ptr->x;
  y2 = y2 + this_ptr->y;
  iVar1 = cockpit_drawsurf_cpp_CDrawSurface_clipLine_FUN_00487e20
                    (this_ptr,&x1,&y1,&x2,&y2,this_ptr->clip_left,this_ptr->clip_top,
                     this_ptr->clip_right,this_ptr->clip_bottom);
  if (iVar1 == 0) {
    return;
  }
  cockpit_drawsurf_cpp_CDrawSurface_drawLineBresenham_FUN_00487ad0(this_ptr,x1,y1,x2,y2);
  return;
}
