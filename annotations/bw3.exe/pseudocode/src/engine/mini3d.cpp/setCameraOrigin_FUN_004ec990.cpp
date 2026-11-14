// Name: engine_mini3d.cpp_setCameraOrigin_FUN_004ec990
// Address: 004ec990
// Address Range: [[004ec990, 004ec9ae]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setCameraOrigin_FUN_004ec990(CVector3f *origin)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_setCameraOrigin_FUN_004ec990(CVector3f *origin)

{
  _DAT_01d76c94 = origin->y;
  _DAT_01d76c98 = origin->z;
  _DAT_01d76c90 = origin->x;
  return;
}
