// Name: engine_matrix.c_getCameraRotation_FUN_004ea3e0
// Address: 004ea3e0
// Address Range: [[004ea3e0, 004ea40e]]
// Convention: __esi
// Signature: void __esi engine_matrix_c_getCameraRotation_FUN_004ea3e0(CVector3i *output)

#include "nocturne.h"

void __esi engine_matrix_c_getCameraRotation_FUN_004ea3e0(CVector3i *output)

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
