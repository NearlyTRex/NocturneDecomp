// Name: cockpit_drawsurf.cpp_CDrawSurface_drawClippedDashedLine_FUN_0045c050
// Address: 0045c050
// Address Range: [[0045c050, 0045c0e3]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawClippedDashedLine_FUN_0045c050(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawClippedDashedLine_FUN_0045c050(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

{
  int iVar1;
  int in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000034;
  int in_stack_00000038;
  
  x1 = x1 + this_ptr->x;
  y1 = y1 + this_ptr->y;
  x2 = x2 + this_ptr->x;
  y2 = y2 + this_ptr->y;
  iVar1 = cockpit_drawsurf_cpp_CDrawSurface_clipLine_FUN_0045c440
                    (this_ptr,&x1,&y1,&x2,&y2,this_ptr->clip_left,this_ptr->clip_top,
                     this_ptr->clip_right,this_ptr->clip_bottom);
  if (iVar1 == 0) {
    return;
  }
  x2 = in_stack_00000038;
  y1 = in_stack_00000034;
  x1 = in_stack_00000030;
  cockpit_drawsurf_cpp_CDrawSurface_drawDashedLine_FUN_0045c1e0
            (this_ptr,in_stack_0000002c,in_stack_00000030,in_stack_00000034,in_stack_00000038);
  return;
}
