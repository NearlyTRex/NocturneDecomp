// Name: core_fire.cpp_CGunFlame_FUN_004c4db0
// Address: 004c4db0
// Address Range: [[004c4db0, 004c4de6]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CGunFlame_FUN_004c4db0(CGunFlame * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CGunFlame_FUN_004c4db0(CGunFlame *this_ptr)

{
  float fVar1;
  CVector3f *pCVar2;
  BADSPACEBASE *in_ESP;
  uint *in_stack_00000008;
  float *in_stack_0000000c;
  uint in_stack_00000030;
  CVector3f local_20;
  CVector3f local_14;
  
  if (this_ptr->field0_0x0 + 4 != (char *)in_stack_00000008) {
    *(uint *)(this_ptr->field0_0x0 + 4) = *in_stack_00000008;
    *(uint *)(this_ptr->field0_0x0 + 8) = in_stack_00000008[1];
    *(uint *)(this_ptr->field0_0x0 + 0xc) = in_stack_00000008[2];
  }
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.9,1.0);
  *(float *)this_ptr->field0_0x0 = 2f * fVar1;
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,19.0);
  *(float *)(this_ptr->field0_0x0 + 0x1c) = fVar1;
  local_20.z = *in_stack_0000000c;
  local_14.x = in_stack_0000000c[1];
  local_14.y = in_stack_0000000c[2];
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.05235988,0.05235988);
  local_14.y = fVar1 + local_14.y;
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.05235988,0.05235988);
  local_14.y = fVar1 + local_14.y;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)&stack0xffffffa4,(CVector3f *)&local_14.y);
  local_20.z = core_actor_cpp_getRandomFloat_FUN_0040cc10(5.1,6.4);
  local_20.x = 0.0;
  local_20.y = 0.0;
  pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                     ((CMatrix3x3f *)&stack0xffffffac,&local_14,&local_20);
  if ((CVector3f *)(this_ptr->field0_0x0 + 0x10) != pCVar2) {
    ((CVector3f *)(this_ptr->field0_0x0 + 0x10))->x = pCVar2->x;
    *(float *)(this_ptr->field0_0x0 + 0x14) = pCVar2->y;
    *(float *)(this_ptr->field0_0x0 + 0x18) = pCVar2->z;
  }
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,0.1);
  *(float *)(this_ptr->field0_0x0 + 4) =
       *(float *)(this_ptr->field0_0x0 + 4) + *(float *)(this_ptr->field0_0x0 + 0x10) * fVar1;
  *(float *)(this_ptr->field0_0x0 + 8) =
       *(float *)(this_ptr->field0_0x0 + 8) + *(float *)(this_ptr->field0_0x0 + 0x14) * fVar1;
  *(float *)(this_ptr->field0_0x0 + 0xc) =
       *(float *)(this_ptr->field0_0x0 + 0xc) + *(float *)(this_ptr->field0_0x0 + 0x18) * fVar1;
  *(uint *)(this_ptr->field0_0x0 + 0x20) = in_stack_00000030;
  return;
}
