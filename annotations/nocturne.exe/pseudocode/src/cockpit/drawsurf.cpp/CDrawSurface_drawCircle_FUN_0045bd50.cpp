// Name: cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0045bd50
// Address: 0045bd50
// Address Range: [[0045bd50, 0045be38]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_0045bd50(CDrawSurface *this_ptr,int center_x,int center_y,int radius)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_0045bd50(CDrawSurface *this_ptr,int center_x,int center_y,int radius)

{
  int iVar1;
  int iVar2;
  int width;
  int iVar3;
  CDrawSurface *in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  
  if (0 < radius) {
    iVar2 = center_x + this_ptr->x;
    iVar1 = center_y + this_ptr->y;
    if (((this_ptr->clip_left <= iVar2 + radius) || (this_ptr->clip_top <= iVar1 + radius)) &&
       ((iVar2 - radius <= this_ptr->clip_right || (iVar1 - radius <= this_ptr->clip_bottom)))) {
      width = 0;
      iVar3 = 1 - radius;
      cockpit_drawsurf_cpp_CDrawSurface_drawRectangleCornerPoints_FUN_0045bf00
                (this_ptr,iVar2 - this_ptr->x,iVar1 - this_ptr->y,0,radius);
      if (0 < radius) {
        iVar1 = 1;
        do {
          width = width + 1;
          iVar1 = iVar1 + 2;
          iVar2 = iVar1;
          if (-1 < iVar3) {
            radius = radius + -1;
            iVar2 = (width - radius) * 2 + 1;
          }
          iVar3 = iVar3 + iVar2;
          cockpit_drawsurf_cpp_CDrawSurface_drawRectangleCornerPoints_FUN_0045bf00
                    (in_stack_00000018,in_stack_0000001c,in_stack_00000020,width,radius);
        } while (width < radius);
      }
    }
  }
  return;
}
