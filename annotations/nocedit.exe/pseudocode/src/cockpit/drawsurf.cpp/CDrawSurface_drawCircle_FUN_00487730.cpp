// Name: cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00487730
// Address: 00487730
// Address Range: [[00487730, 00487818]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00487730(CDrawSurface * this_ptr, int center_x, int center_y, int radius)

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_00487730
          (CDrawSurface *this_ptr,int center_x,int center_y,int radius)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int width;
  int iVar5;
  
  if (0 < radius) {
    iVar3 = center_x + this_ptr->x;
    iVar2 = center_y + this_ptr->y;
    if (((this_ptr->clip_left <= iVar3 + radius) || (this_ptr->clip_top <= iVar2 + radius)) &&
       ((iVar3 - radius <= this_ptr->clip_right || (iVar2 - radius <= this_ptr->clip_bottom)))) {
      iVar3 = iVar3 - this_ptr->x;
      iVar2 = iVar2 - this_ptr->y;
      width = 0;
      iVar5 = 1 - radius;
      cockpit_drawsurf_cpp_CDrawSurface_drawRectangleOutline_FUN_004878e0
                (this_ptr,iVar3,iVar2,0,radius);
      if (0 < radius) {
        iVar4 = 1;
        do {
          width = width + 1;
          iVar4 = iVar4 + 2;
          iVar1 = iVar4;
          if (-1 < iVar5) {
            radius = radius + -1;
            iVar1 = (width - radius) * 2 + 1;
          }
          iVar5 = iVar5 + iVar1;
          cockpit_drawsurf_cpp_CDrawSurface_drawRectangleOutline_FUN_004878e0
                    (this_ptr,iVar3,iVar2,width,radius);
        } while (width < radius);
      }
    }
  }
  return;
}
