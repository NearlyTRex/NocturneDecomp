// Name: engine_mini3d.cpp_getCameraOrigin_FUN_00511740
// Address: 00511740
// Address Range: [[00511740, 00511786]]
// Convention: __esi
// Signature: void __esi engine_mini3d_cpp_getCameraOrigin_FUN_00511740(CVector3f *output)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __esi engine_mini3d_cpp_getCameraOrigin_FUN_00511740(CVector3f *output)

{
  float fVar1;
  float fVar2;
  
  fVar2 = _DAT_01d22518;
  fVar1 = _DAT_01d22514;
  output->x = _DAT_01d22510;
  output->y = fVar1;
  output->z = fVar2;
  return;
}
