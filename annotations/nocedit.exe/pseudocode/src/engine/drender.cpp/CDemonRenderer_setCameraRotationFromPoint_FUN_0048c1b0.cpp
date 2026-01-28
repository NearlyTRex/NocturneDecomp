// Name: engine_drender.cpp_CDemonRenderer_setCameraRotationFromPoint_FUN_0048c1b0
// Address: 0048c1b0
// Address Range: [[0048c1b0, 0048c1c9]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setCameraRotationFromPoint_FUN_0048c1b0 (CDemonRenderer *this_ptr,CVector3i *rotation)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_setCameraRotationFromPoint_FUN_0048c1b0
          (CDemonRenderer *this_ptr,CVector3i *rotation)

{
  engine_matrix_c_setCameraRotation_FUN_0050e290(rotation->x,rotation->y,rotation->z);
  return;
}
