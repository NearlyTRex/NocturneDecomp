// Name: engine_matrix.c_getCameraOrigin_FUN_004ea3b0
// Address: 004ea3b0
// Address Range: [[004ea3b0, 004ea3de]]
// Convention: __esi
// Signature: void __esi engine_matrix_c_getCameraOrigin_FUN_004ea3b0(CVector3i *output)

#include "nocturne.h"

void __esi engine_matrix_c_getCameraOrigin_FUN_004ea3b0(CVector3i *output)

{
  int iVar1;
  int iVar2;
  
  iVar2 = g_CameraOriginZ;
  iVar1 = g_CameraOriginY;
  output->x = g_CameraOriginX;
  output->y = iVar1;
  output->z = iVar2;
  return;
}
