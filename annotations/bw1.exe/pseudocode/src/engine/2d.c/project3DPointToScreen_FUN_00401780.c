// Name: engine_2d.c_project3DPointToScreen_FUN_00401780
// Address: 00401780
// Address Range: [[00401780, 004017c6]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_project3DPointToScreen_FUN_00401780(int x_3d,int y_3d,int z_depth)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_2d_c_project3DPointToScreen_FUN_00401780(int x_3d,int y_3d,int z_depth)

{
  engine_2d_c_plotPixel_FUN_00401130
            (_DAT_01c4f000 + (int)(((longlong)x_3d * (longlong)_DAT_01c4eff8) / (longlong)z_depth)
             >> 0x10,(int)(((longlong)y_3d * (longlong)_DAT_01c4effc) / (longlong)z_depth) +
                     _DAT_01c4f004 >> 0x10);
  return;
}
