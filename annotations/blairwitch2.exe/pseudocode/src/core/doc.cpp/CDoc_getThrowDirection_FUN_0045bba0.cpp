// Name: core_doc.cpp_CDoc_getThrowDirection_FUN_0045bba0
// Address: 0045bba0
// Address Range: [[0045bba0, 0045bc0b]]
// Convention: __stack_esi
// Signature: CVector3f * __stack_esi core_doc_cpp_CDoc_getThrowDirection_FUN_0045bba0(CDoc *this_ptr,CVector3f *out_direction)

#include "nocturne.h"

CVector3f * __stack_esi core_doc_cpp_CDoc_getThrowDirection_FUN_0045bba0(CDoc *this_ptr,CVector3f *out_direction)

{
  uint *puVar1;
  byte bVar2;
  uint auStackY_1014 [1006];
  CMatrix3x3f local_54;
  CVector3f local_2c;
  CVector3f local_20;
  CVector3f local_14;
  
  bVar2 = 0;
  local_20.x = (this_ptr->right_arm_aim).target_pitch;
  local_20.z = 0.0;
  local_20.y = 0.0;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(&local_54,&local_20);
  local_14.z = this_ptr->aim_speed_factor;
  local_14.x = 0.0;
  local_14.y = 0.0;
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00449530(&local_54,&local_14,&local_2c);
  puVar1 = (uint *)((int)out_direction + (uint)bVar2 * -8 + 4);
  out_direction->x = local_2c.x;
  *puVar1 = *(uint *)((int)&local_2c + (uint)bVar2 * -8 + 4);
  puVar1[(uint)bVar2 * -2 + 1] =
       *(uint *)((int)&local_2c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  return out_direction;
}
