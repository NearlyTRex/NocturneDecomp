// Name: engine_drender.cpp_CDemonRenderer_setCameraOrigin_FUN_004606e0
// Address: 004606e0
// Address Range: [[004606e0, 004606f9]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setCameraOrigin_FUN_004606e0(CDemonRenderer *this_ptr,CVector3i *origin)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setCameraOrigin_FUN_004606e0(CDemonRenderer *this_ptr,CVector3i *origin)

{
  engine_matrix_c_setCameraOrigin_FUN_004ce710(origin->x,origin->y,origin->z);
  return;
}
