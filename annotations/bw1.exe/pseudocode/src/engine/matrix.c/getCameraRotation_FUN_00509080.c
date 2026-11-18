// Name: engine_matrix.c_getCameraRotation_FUN_00509080
// Address: 00509080
// Address Range: [[00509080, 005090ae]]
// Convention: __esi
// Signature: void __esi engine_matrix_c_getCameraRotation_FUN_00509080(CVector3i *output)

#include "nocturne.h"

void __esi engine_matrix_c_getCameraRotation_FUN_00509080(CVector3i *output)

{
  int iVar1;
  int iVar2;
  
  iVar2 = g_CameraRotationRoll;
  iVar1 = g_CameraRotationYaw;
  output->x = g_CameraRotationPitch;
  output->y = iVar1;
  output->z = iVar2;
  return;
}
