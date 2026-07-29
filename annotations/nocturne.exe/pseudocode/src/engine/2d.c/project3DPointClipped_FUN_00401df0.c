// Name: engine_2d.c_project3DPointClipped_FUN_00401df0
// Address: 00401df0
// Address Range: [[00401df0, 00401e23]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_project3DPointClipped_FUN_00401df0(int x_3d,int y_3d,int z_depth)

#include "nocturne.h"

void __cdecl engine_2d_c_project3DPointClipped_FUN_00401df0(int x_3d,int y_3d,int z_depth)

{
  if ((((0 < z_depth) && (x_3d <= z_depth)) && (-z_depth <= x_3d)) &&
     ((y_3d <= z_depth && (-z_depth <= y_3d)))) {
    engine_2d_c_project3DPointToScreen_FUN_00401da0(x_3d,y_3d,z_depth);
    return;
  }
  return;
}
