// Name: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopRight_FUN_00487850
// Address: 00487850
// Address Range: [[00487850, 00487870]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromTopRight_FUN_00487850 (CDrawSurface *this_ptr,int top_right_x,int top_right_y,int radius)

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromTopRight_FUN_00487850
          (CDrawSurface *this_ptr,int top_right_x,int top_right_y,int radius)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_00487730
            (this_ptr,top_right_x - radius,top_right_y + radius,radius);
  return;
}
