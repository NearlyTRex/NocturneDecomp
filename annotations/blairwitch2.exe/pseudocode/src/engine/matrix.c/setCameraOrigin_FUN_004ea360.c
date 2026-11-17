// Name: engine_matrix.c_setCameraOrigin_FUN_004ea360
// Address: 004ea360
// Address Range: [[004ea360, 004ea37b]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_setCameraOrigin_FUN_004ea360(int x,int y,int z)

#include "nocturne.h"

void __cdecl engine_matrix_c_setCameraOrigin_FUN_004ea360(int x,int y,int z)

{
  g_CameraOriginX = x;
  g_CameraOriginY = y;
  g_CameraOriginZ = z;
  return;
}
