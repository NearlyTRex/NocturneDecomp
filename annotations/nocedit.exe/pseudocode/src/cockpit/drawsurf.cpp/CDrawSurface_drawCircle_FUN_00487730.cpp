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
  CDrawSurface *this_ptr_00;
  int height;
  int iVar4;
  int iVar5;
  
  if (0 < radius) {
    iVar3 = center_x + this_ptr->x;
    iVar2 = center_y + this_ptr->y;
    if (((this_ptr->clip_left <= iVar3 + radius) || (this_ptr->clip_top <= iVar2 + radius)) &&
       ((iVar3 - radius <= this_ptr->clip_right || (iVar2 - radius <= this_ptr->clip_bottom)))) {
      this_ptr_00 = (CDrawSurface *)(iVar3 - this_ptr->x);
      iVar2 = iVar2 - this_ptr->y;
      iVar3 = 0;
      iVar5 = 1 - radius;
      cockpit_drawsurf_cpp_CDrawSurface_drawRectangleOutline_FUN_004878e0
                (this_ptr,(int)this_ptr_00,iVar2,0,radius);
      if (0 < radius) {
        iVar4 = 1;
        height = radius;
        do {
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 2;
          iVar1 = iVar4;
          if (-1 < iVar5) {
            height = height + -1;
            iVar1 = (iVar3 - height) * 2 + 1;
          }
          iVar5 = iVar5 + iVar1;
          cockpit_drawsurf_cpp_CDrawSurface_drawRectangleOutline_FUN_004878e0
                    (this_ptr_00,iVar2,radius,iVar3,height);
        } while (iVar3 < height);
      }
    }
  }
  return;
}
