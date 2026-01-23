// Name: engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
// Address: 0048c4a0
// Address Range: [[0048c4a0, 0048c4ec]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
          (CDemonRenderer *this_ptr,CVector3i *position,CVector3i *rotation)

{
  if (rotation == (CVector3i *)0x0) {
    engine_matrix_c_matrixPushAndTransform_FUN_0050cee0(position->x,position->y,position->z,0,0,0);
    return;
  }
  engine_matrix_c_matrixPushAndTransform_FUN_0050cee0
            (position->x,position->y,position->z,rotation->x,rotation->y,rotation->z);
  return;
}
