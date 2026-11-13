// Name: engine_mini3d.cpp_setCameraOrigin_FUN_004f2430
// Address: 004f2430
// Address Range: [[004f2430, 004f244e]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setCameraOrigin_FUN_004f2430(CVector3f *origin)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_setCameraOrigin_FUN_004f2430(CVector3f *origin)

{
  _DAT_01d098b4 = origin->y;
  _DAT_01d098b8 = origin->z;
  _DAT_01d098b0 = origin->x;
  return;
}
