// Name: engine_2d.c_project3DPointToScreen_FUN_00401780
// Address: 00401780
// Address Range: [[00401780, 004017c6]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_project3DPointToScreen_FUN_00401780(int x_3d,int y_3d,int z_depth)

#include "nocturne.h"

void __cdecl engine_2d_c_project3DPointToScreen_FUN_00401780(int x_3d,int y_3d,int z_depth)

{
  engine_2d_c_plotPixel_FUN_00401130
            (g_INT_01c6b5a0 + (int)(((longlong)x_3d * (longlong)g_INT_01c6b598) / (longlong)z_depth)
             >> 0x10,(int)(((longlong)y_3d * (longlong)g_INT_01c6b59c) / (longlong)z_depth) +
                     g_INT_01c6b5a4 >> 0x10);
  return;
}
