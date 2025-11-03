// Name: core_fire.cpp_CGunFlame_FUN_004c4db0
// Address: 004c4db0
// Address Range: [[004c4db0, 004c4de6]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CGunFlame_FUN_004c4db0(CGunFlame * this_ptr)
// Cross-references:
//   core_fire.cpp_CFireEffect_FUN_004c8ef0 (004c8ef0) at 004c8f20 [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10

#include "nocturne.h"

void __cdecl core_fire_cpp_CGunFlame_FUN_004c4db0(CGunFlame *this_ptr)

{
  float fVar1;
  CVector3f *pCVar2;
  BADSPACEBASE *in_ESP;
  undefined4 *in_stack_00000008;
  float *in_stack_0000000c;
  undefined4 in_stack_00000030;
  CVector3f local_20;
  CVector3f local_14;
  
  if (this_ptr->field0_0x0 + 4 != (char *)in_stack_00000008) {
    *(undefined4 *)(this_ptr->field0_0x0 + 4) = *in_stack_00000008;
    *(undefined4 *)(this_ptr->field0_0x0 + 8) = in_stack_00000008[1];
    *(undefined4 *)(this_ptr->field0_0x0 + 0xc) = in_stack_00000008[2];
  }
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.9,1.0);
  *(float *)this_ptr->field0_0x0 = FLOAT_0065dcc4 * fVar1;
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
  *(undefined4 *)(this_ptr->field0_0x0 + 0x20) = in_stack_00000030;
  return;
}


// Assembly code:
// 004c4db0: PUSH EBX
//   Label: core_fire.cpp_CGunFlame_FUN_004c4db0
// 004c4db1: PUSH ESI
// 004c4db2: SUB ESP,0x64
// 004c4db5: MOV EBX,dword ptr [ESP + 0x70]
// 004c4db9: MOV EDX,dword ptr [ESP + 0x74]
// 004c4dbd: MOV ESI,dword ptr [ESP + 0x78]
// 004c4dc1: LEA EAX,[EBX + 0x4]
// 004c4dc4: CMP EAX,EDX
// 004c4dc6: JZ 0x004c4dd8
//   XREF to: 004c4dd8 (CONDITIONAL_JUMP)
// 004c4dc8: MOV ECX,dword ptr [EDX]
// 004c4dca: MOV dword ptr [EAX],ECX
// 004c4dcc: MOV ECX,dword ptr [EDX + 0x4]
// 004c4dcf: MOV dword ptr [EAX + 0x4],ECX
// 004c4dd2: MOV ECX,dword ptr [EDX + 0x8]
// 004c4dd5: MOV dword ptr [EAX + 0x8],ECX
// 004c4dd8: PUSH 0x3f800000
//   Label: LAB_004c4dd8
// 004c4ddd: PUSH 0x3f666666
// 004c4de2: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
