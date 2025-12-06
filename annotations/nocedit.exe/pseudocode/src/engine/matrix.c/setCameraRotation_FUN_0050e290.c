// Name: engine_matrix.c_setCameraRotation_FUN_0050e290
// Address: 0050e290
// Address Range: [[0050e290, 0050e2b8]]
// Convention: __cdecl
// Signature: void engine_matrix.c_setCameraRotation_FUN_0050e290(ushort pitch, ushort yaw, ushort roll)

#include "nocturne.h"

void __cdecl engine_matrix_c_setCameraRotation_FUN_0050e290(ushort pitch,ushort yaw,ushort roll)

{
  ushort in_stack_00000006;
  ushort in_stack_0000000a;
  ushort in_stack_0000000e;
  
  g_CameraRotationPitch = _pitch;
  g_CameraRotationYaw = _yaw;
  g_CameraRotationRoll = _roll;
  engine_matrix_c_buildRotationMatrix_FUN_0050c920(pitch,yaw,roll);
  return;
}
