// Name: engine_mini3d.cpp_setCameraOrigin_FUN_005111c0
// Address: 005111c0
// Address Range: [[005111c0, 005111de]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setCameraOrigin_FUN_005111c0(CVector3f *origin)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_setCameraOrigin_FUN_005111c0(CVector3f *origin)

{
  g_FLOAT_01d22514 = origin->y;
  g_FLOAT_01d22518 = origin->z;
  g_FLOAT_01d22510 = origin->x;
  return;
}
