// Name: core_fire.cpp_CGunFlame_FUN_004c4db0
// Address: 004c4db0
// Address Range: [[004c4db0, 004c4de6]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CGunFlame_FUN_004c4db0(CGunFlame * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CGunFlame_FUN_004c4db0(CGunFlame *this_ptr)

{
  CVector3f *pCVar1;
  float fVar2;
  uint *in_stack_00000008;
  float *in_stack_0000000c;
  uint in_stack_00000010;
  CMatrix3x3f local_6c;
  CVector3f local_38;
  CVector3f local_2c;
  CVector3f local_20;
  float local_10;
  float local_c;
  
  if (this_ptr->field0_0x0 + 4 != (char *)in_stack_00000008) {
    *(uint *)(this_ptr->field0_0x0 + 4) = *in_stack_00000008;
    *(uint *)(this_ptr->field0_0x0 + 8) = in_stack_00000008[1];
    *(uint *)(this_ptr->field0_0x0 + 0xc) = in_stack_00000008[2];
  }
  local_c = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.9,1.0);
  *(float *)this_ptr->field0_0x0 = 2f * local_c;
  local_c = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,19.0);
  *(float *)(this_ptr->field0_0x0 + 0x1c) = local_c;
  local_20.x = *in_stack_0000000c;
  local_20.y = in_stack_0000000c[1];
  local_20.z = in_stack_0000000c[2];
  local_c = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.05235988,0.05235988);
  local_20.y = local_c + local_20.y;
  local_c = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.05235988,0.05235988);
  local_20.x = local_c + local_20.x;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_6c,&local_20);
  local_38.z = core_actor_cpp_getRandomFloat_FUN_0040cc10(5.1,6.4);
  local_38.x = 0.0;
  local_38.y = 0.0;
  local_10 = local_38.z;
  local_c = local_38.z;
  pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(&local_6c,&local_2c,&local_38);
  if ((CVector3f *)(this_ptr->field0_0x0 + 0x10) != pCVar1) {
    ((CVector3f *)(this_ptr->field0_0x0 + 0x10))->x = pCVar1->x;
    *(float *)(this_ptr->field0_0x0 + 0x14) = pCVar1->y;
    *(float *)(this_ptr->field0_0x0 + 0x18) = pCVar1->z;
  }
  fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,0.1);
  *(float *)(this_ptr->field0_0x0 + 4) =
       *(float *)(this_ptr->field0_0x0 + 4) + *(float *)(this_ptr->field0_0x0 + 0x10) * fVar2;
  *(float *)(this_ptr->field0_0x0 + 8) =
       *(float *)(this_ptr->field0_0x0 + 8) + *(float *)(this_ptr->field0_0x0 + 0x14) * fVar2;
  *(float *)(this_ptr->field0_0x0 + 0xc) =
       *(float *)(this_ptr->field0_0x0 + 0xc) + *(float *)(this_ptr->field0_0x0 + 0x18) * fVar2;
  *(uint *)(this_ptr->field0_0x0 + 0x20) = in_stack_00000010;
  return;
}
