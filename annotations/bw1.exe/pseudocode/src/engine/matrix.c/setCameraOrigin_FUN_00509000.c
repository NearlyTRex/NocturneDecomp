// Name: engine_matrix.c_setCameraOrigin_FUN_00509000
// Address: 00509000
// Address Range: [[00509000, 0050901b]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_setCameraOrigin_FUN_00509000(int x,int y,int z)

#include "nocturne.h"

void __cdecl engine_matrix_c_setCameraOrigin_FUN_00509000(int x,int y,int z)

{
  g_CameraOriginX = x;
  g_CameraOriginY = y;
  g_CameraOriginZ = z;
  return;
}
