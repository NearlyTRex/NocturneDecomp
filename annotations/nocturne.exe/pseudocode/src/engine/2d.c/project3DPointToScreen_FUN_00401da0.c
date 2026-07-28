// Name: engine_2d.c_project3DPointToScreen_FUN_00401da0
// Address: 00401da0
// Address Range: [[00401da0, 00401de6]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_project3DPointToScreen_FUN_00401da0(int x_3d,int y_3d,int z_depth)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_2d_c_project3DPointToScreen_FUN_00401da0(int x_3d,int y_3d,int z_depth)

{
  engine_2d_c_plotPixel_FUN_00401530
            (_DAT_01c00c50 + (int)(((longlong)x_3d * (longlong)_DAT_01c00c48) / (longlong)z_depth)
             >> 0x10,(int)(((longlong)y_3d * (longlong)_DAT_01c00c4c) / (longlong)z_depth) +
                     _DAT_01c00c54 >> 0x10);
  return;
}
