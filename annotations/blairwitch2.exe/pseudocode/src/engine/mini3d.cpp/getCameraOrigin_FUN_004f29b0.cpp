// Name: engine_mini3d.cpp_getCameraOrigin_FUN_004f29b0
// Address: 004f29b0
// Address Range: [[004f29b0, 004f29f6]]
// Convention: __esi
// Signature: void __esi engine_mini3d_cpp_getCameraOrigin_FUN_004f29b0(CVector3f *output)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __esi engine_mini3d_cpp_getCameraOrigin_FUN_004f29b0(CVector3f *output)

{
  float fVar1;
  float fVar2;
  
  fVar2 = _DAT_01d098b8;
  fVar1 = _DAT_01d098b4;
  output->x = _DAT_01d098b0;
  output->y = fVar1;
  output->z = fVar2;
  return;
}
