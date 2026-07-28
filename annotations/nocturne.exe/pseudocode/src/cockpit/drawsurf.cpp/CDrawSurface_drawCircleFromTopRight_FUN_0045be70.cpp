// Name: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopRight_FUN_0045be70
// Address: 0045be70
// Address Range: [[0045be70, 0045be90]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromTopRight_FUN_0045be70(CDrawSurface *this_ptr,int top_right_x,int top_right_y,int radius)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromTopRight_FUN_0045be70(CDrawSurface *this_ptr,int top_right_x,int top_right_y,int radius)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_0045bd50
            (this_ptr,top_right_x - radius,top_right_y + radius,radius);
  return;
}
