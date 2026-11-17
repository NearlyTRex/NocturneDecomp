// Name: engine_matrix.c_setCameraOrigin_FUN_004e6a40
// Address: 004e6a40
// Address Range: [[004e6a40, 004e6a5b]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_setCameraOrigin_FUN_004e6a40(int x,int y,int z)

#include "nocturne.h"

void __cdecl engine_matrix_c_setCameraOrigin_FUN_004e6a40(int x,int y,int z)

{
  g_CameraOriginX = x;
  g_CameraOriginY = y;
  g_CameraOriginZ = z;
  return;
}
