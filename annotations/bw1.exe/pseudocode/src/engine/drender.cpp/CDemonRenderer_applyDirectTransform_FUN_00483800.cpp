// Name: engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00483800
// Address: 00483800
// Address Range: [[00483800, 0048384c]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00483800(CDemonRenderer *this_ptr,CVector3i *position,CVector3i *rotation)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00483800(CDemonRenderer *this_ptr,CVector3i *position,CVector3i *rotation)

{
  if (rotation == (CVector3i *)0x0) {
    engine_matrix_c_matrixPushAndTransform_FUN_00507c70(position->x,position->y,position->z,0,0,0);
    return;
  }
  engine_matrix_c_matrixPushAndTransform_FUN_00507c70
            (position->x,position->y,position->z,rotation->x,rotation->y,rotation->z);
  return;
}
