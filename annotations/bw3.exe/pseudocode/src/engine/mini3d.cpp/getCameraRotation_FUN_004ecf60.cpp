// Name: engine_mini3d.cpp_getCameraRotation_FUN_004ecf60
// Address: 004ecf60
// Address Range: [[004ecf60, 004ecf8e]]
// Convention: __esi
// Signature: void __esi engine_mini3d_cpp_getCameraRotation_FUN_004ecf60(CVector3f *output)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __esi engine_mini3d_cpp_getCameraRotation_FUN_004ecf60(CVector3f *output)

{
  float fVar1;
  float fVar2;
  
  fVar2 = _DAT_01d76ca4;
  fVar1 = _DAT_01d76ca0;
  output->x = _DAT_01d76c9c;
  output->y = fVar2;
  output->z = fVar1;
  return;
}
