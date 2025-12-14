// Name: engine_2d.c_project3DPointClipped_FUN_004017c0
// Address: 004017c0
// Address Range: [[004017c0, 004017f3]]
// Convention: __cdecl
// Signature: void engine_2d.c_project3DPointClipped_FUN_004017c0(int x_3d, int y_3d, int z_depth)

#include "nocturne.h"

void __cdecl engine_2d_c_project3DPointClipped_FUN_004017c0(int x_3d,int y_3d,int z_depth)

{
  if ((((0 < z_depth) && (x_3d <= z_depth)) && (-z_depth <= x_3d)) &&
     ((y_3d <= z_depth && (-z_depth <= y_3d)))) {
    engine_2d_c_project3DPointToScreen_FUN_00401770(x_3d,y_3d,z_depth);
    return;
  }
  return;
}
