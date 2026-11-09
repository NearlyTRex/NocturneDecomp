// Name: cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_004665c0
// Address: 004665c0
// Address Range: [[004665c0, 004666a8]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_004665c0(CDrawSurface *this_ptr,int center_x,int center_y,int radius)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_004665c0(CDrawSurface *this_ptr,int center_x,int center_y,int radius)

{
  int iVar1;
  int iVar2;
  int width;
  int iVar3;
  CDrawSurface *in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  
  if (0 < radius) {
    iVar2 = center_x + *(int *)(this_ptr + 8);
    iVar1 = center_y + *(int *)(this_ptr + 0xc);
    if (((*(int *)(this_ptr + 0x10) <= iVar2 + radius) ||
        (*(int *)(this_ptr + 0x14) <= iVar1 + radius)) &&
       ((iVar2 - radius <= *(int *)(this_ptr + 0x18) ||
        (iVar1 - radius <= *(int *)(this_ptr + 0x1c))))) {
      width = 0;
      iVar3 = 1 - radius;
      cockpit_drawsurf_cpp_CDrawSurface_drawRectangleCornerPoints_FUN_00466770
                (this_ptr,iVar2 - *(int *)(this_ptr + 8),iVar1 - *(int *)(this_ptr + 0xc),0,radius);
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
          cockpit_drawsurf_cpp_CDrawSurface_drawRectangleCornerPoints_FUN_00466770
                    (in_stack_00000018,in_stack_0000001c,in_stack_00000020,width,radius);
        } while (width < radius);
      }
    }
  }
  return;
}
