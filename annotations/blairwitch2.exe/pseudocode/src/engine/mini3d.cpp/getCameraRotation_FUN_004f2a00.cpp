// Name: engine_mini3d.cpp_getCameraRotation_FUN_004f2a00
// Address: 004f2a00
// Address Range: [[004f2a00, 004f2a2e]]
// Convention: __esi
// Signature: void __esi engine_mini3d_cpp_getCameraRotation_FUN_004f2a00(CVector3f *output)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __esi engine_mini3d_cpp_getCameraRotation_FUN_004f2a00(CVector3f *output)

{
  float fVar1;
  float fVar2;
  
  fVar2 = _DAT_01d098c4;
  fVar1 = _DAT_01d098c0;
  output->x = _DAT_01d098bc;
  output->y = fVar2;
  output->z = fVar1;
  return;
}
