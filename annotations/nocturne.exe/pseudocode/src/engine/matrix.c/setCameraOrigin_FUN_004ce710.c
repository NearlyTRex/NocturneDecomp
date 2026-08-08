// Name: engine_matrix.c_setCameraOrigin_FUN_004ce710
// Address: 004ce710
// Address Range: [[004ce710, 004ce72b]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_setCameraOrigin_FUN_004ce710(int x,int y,int z)

#include "nocturne.h"

void __cdecl engine_matrix_c_setCameraOrigin_FUN_004ce710(int x,int y,int z)

{
  g_CameraOriginX = x;
  g_CameraOriginY = y;
  g_CameraOriginZ = z;
  return;
}
