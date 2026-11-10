// Name: engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300
// Address: 0046b300
// Address Range: [[0046b300, 0046b34c]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300(CDemonRenderer *this_ptr,CVector3i *position,CVector3i *rotation)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300(CDemonRenderer *this_ptr,CVector3i *position,CVector3i *rotation)

{
  if (rotation == (CVector3i *)0x0) {
    engine_matrix_c_matrixPushAndTransform_FUN_004e8fd0(position->x,position->y,position->z,0,0,0);
    return;
  }
  engine_matrix_c_matrixPushAndTransform_FUN_004e8fd0
            (position->x,position->y,position->z,rotation->x,rotation->y,rotation->z);
  return;
}
