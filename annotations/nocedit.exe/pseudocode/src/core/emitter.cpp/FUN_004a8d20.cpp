// Name: core_emitter.cpp_FUN_004a8d20
// Address: 004a8d20
// Address Range: [[004a8d20, 004a8d49]]
// Convention: unknown
// Signature: undefined core_emitter.cpp_FUN_004a8d20()
// Cross-references:
//   core_emitter.cpp_FUN_004a8070 (004a8070) at 004a8482 [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10

#include "nocturne.h"

/* Signature: undefined1 actors_other_emitter.cpp_FUN_004a8d20(undefined4 param_1, undefined4
   param_2) */

undefined4 core_emitter_cpp_FUN_004a8d20(void)

{
  float max_value;
  BADSPACEBASE *in_ESP;
  float unaff_ESI;
  CDemonActor *in_stack_00000004;
  undefined4 in_stack_00000008;
  float fStack_28;
  float in_stack_ffffffe4;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  (*((in_stack_00000004->metadata).vtable)->getBoundingBox)
            (in_stack_00000004,(CBoundingBox3D *)&stack0xffffffd0);
  fStack_28 = 6.846512e-39;
  max_value = core_actor_cpp_getRandomFloat_FUN_0040cc10(in_stack_ffffffe4,fStack_10);
  core_actor_cpp_getRandomFloat_FUN_0040cc10(fStack_14,unaff_ESI);
  core_actor_cpp_getRandomFloat_FUN_0040cc10(fStack_c,max_value);
  core_actor_cpp_CDemonActor_FUN_00408ec0(in_stack_00000004);
  return in_stack_00000008;
}


// Assembly code:
// 004a8d20: PUSH EBX
//   Label: core_emitter.cpp_FUN_004a8d20
// 004a8d21: PUSH ESI
// 004a8d22: SUB ESP,0x28
// 004a8d25: MOV ESI,dword ptr [ESP + 0x34]
// 004a8d29: MOV EBX,dword ptr [ESP + 0x38]
// 004a8d2d: MOV EAX,ESP
// 004a8d2f: PUSH EAX
// 004a8d30: MOV EDX,dword ptr [ESI + 0x154]
// 004a8d36: PUSH ESI
// 004a8d37: CALL dword ptr [EDX + 0x14]
// 004a8d3a: ADD ESP,0x8
// 004a8d3d: PUSH dword ptr [ESP + 0xc]
// 004a8d41: PUSH dword ptr [ESP + 0x4]
// 004a8d45: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
