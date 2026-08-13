// Name: engine_drender.cpp_CDemonRenderer_setCameraRotationFromPoint_FUN_00460760
// Address: 00460760
// Address Range: [[00460760, 00460779]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setCameraRotationFromPoint_FUN_00460760(CDemonRenderer *this_ptr,CVector3i *rotation)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setCameraRotationFromPoint_FUN_00460760(CDemonRenderer *this_ptr,CVector3i *rotation)

{
  engine_matrix_c_setCameraRotation_FUN_004ce730(rotation->x,rotation->y,rotation->z);
  return;
}
