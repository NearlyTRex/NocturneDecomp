// Name: engine_drender.cpp_CDemonRenderer_setCameraOrigin_FUN_0046af90
// Address: 0046af90
// Address Range: [[0046af90, 0046afa9]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setCameraOrigin_FUN_0046af90(CDemonRenderer *this_ptr,CVector3i *origin)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setCameraOrigin_FUN_0046af90(CDemonRenderer *this_ptr,CVector3i *origin)

{
  engine_matrix_c_setCameraOrigin_FUN_004ea360(origin->x,origin->y,origin->z);
  return;
}
