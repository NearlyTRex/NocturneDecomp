// Name: cockpit_drawsurf.cpp_computeCohenSutherlandOutcode_FUN_00487de0
// Address: 00487de0
// Address Range: [[00487de0, 00487e11]]
// Convention: __cdecl
// Signature: char __cdecl cockpit_drawsurf_cpp_computeCohenSutherlandOutcode_FUN_00487de0 (int point_x,int point_y,int clip_left,int clip_top,int clip_right,int clip_bottom)

#include "nocturne.h"

char __cdecl
cockpit_drawsurf_cpp_computeCohenSutherlandOutcode_FUN_00487de0
          (int point_x,int point_y,int clip_left,int clip_top,int clip_right,int clip_bottom)

{
  byte bVar1;
  
  bVar1 = clip_bottom < point_y;
  if (point_y < clip_top) {
    bVar1 = bVar1 | 2;
  }
  if (clip_right < point_x) {
    bVar1 = bVar1 | 4;
  }
  if (point_x < clip_left) {
    bVar1 = bVar1 | 8;
  }
  return bVar1;
}
