// Name: engine_matrix.c_setCameraRotation_FUN_0050e290
// Address: 0050e290
// Address Range: [[0050e290, 0050e2b8]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_setCameraRotation_FUN_0050e290(int pitch,int yaw,int roll)

#include "nocturne.h"

void __cdecl engine_matrix_c_setCameraRotation_FUN_0050e290(int pitch,int yaw,int roll)

{
  g_CameraRotationPitch = pitch;
  g_CameraRotationYaw = yaw;
  g_CameraRotationRoll = roll;
  engine_matrix_c_buildRotationMatrix_FUN_0050c920(pitch,yaw,roll);
  return;
}
