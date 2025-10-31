// Name: core_boxactor.cpp_CLightActor_FUN_004234e0
// Address: 004234e0
// Address Range: [[004234e0, 0042358b]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_CLightActor_FUN_004234e0()
// Globals:
//   TerminatedCString s_light_type_00616a00
//   TerminatedCString s_light_pos_00616a0b
//   TerminatedCString s_light_orient_00616a15
//   TerminatedCString s_light_FOV_00616a22
//   TerminatedCString s_light_falloff_00616a2c
//   TerminatedCString s_light_status_00616a3a
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e160
//   core_actor.cpp_CActorPropertyList_FUN_0040e260
//   core_actor.cpp_CActorPropertyList_FUN_0040e330
//   core_actor.cpp_CActorPropertyList_FUN_0040e670
//   core_boxactor.cpp_FUN_004226e0

#include "nocturne.h"

void core_boxactor_cpp_CLightActor_FUN_004234e0(void)

{
  int in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_boxactor_cpp_FUN_004226e0();
  core_actor_cpp_CActorPropertyList_FUN_0040e670(in_stack_00000008);
  if (*(int *)(in_stack_00000004 + 0x66c) == 0) {
    core_actor_cpp_CActorPropertyList_FUN_0040e260(in_stack_00000008);
    core_actor_cpp_CActorPropertyList_FUN_0040e260(in_stack_00000008);
    core_actor_cpp_CActorPropertyList_FUN_0040e670(in_stack_00000008);
    core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  return;
}


// Assembly code:
// 004234e0: PUSH EBX
//   Label: core_boxactor.cpp_CLightActor_FUN_004234e0
// 004234e1: PUSH ESI
// 004234e2: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004234e6: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004234ea: PUSH EBX
// 004234eb: PUSH ESI
// 004234ec: CALL core_boxactor.cpp_FUN_004226e0
//   XREF to: 004226e0 (UNCONDITIONAL_CALL)
// 004234f1: ADD ESP,0x8
// 004234f4: PUSH 0x423380
//   XREF to: 00423380 (DATA)
// 004234f9: PUSH 0x423310
//   XREF to: 00423310 (DATA)
// 004234fe: PUSH 0x616a00
//   XREF to: 00616a00 (DATA)
// 00423503: PUSH EBX
// 00423504: CALL core_actor.cpp_CActorPropertyList_FUN_0040e670
//   XREF to: 0040e670 (UNCONDITIONAL_CALL)
// 00423509: MOV EDX,dword ptr [ESI + 0x66c]
// 0042350f: ADD ESP,0x10
// 00423512: TEST EDX,EDX
// 00423514: JZ 0x0042352e
//   XREF to: 0042352e (CONDITIONAL_JUMP)
// 00423516: ADD ESI,0x2324
//   Label: LAB_00423516
// 0042351c: PUSH ESI
// 0042351d: PUSH 0x616a3a
//   XREF to: 00616a3a (DATA)
// 00423522: PUSH EBX
// 00423523: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 00423528: ADD ESP,0xc
// 0042352b: POP ESI
// 0042352c: POP EBX
// 0042352d: RET
// 0042352e: PUSH EDX
//   Label: LAB_0042352e
// 0042352f: LEA EAX,[ESI + 0x361c]
// 00423535: PUSH EAX
// 00423536: PUSH 0x616a0b
//   XREF to: 00616a0b (DATA)
// 0042353b: PUSH EBX
// 0042353c: CALL core_actor.cpp_CActorPropertyList_FUN_0040e260
//   XREF to: 0040e260 (UNCONDITIONAL_CALL)
// 00423541: ADD ESP,0x10
// 00423544: PUSH 0x0
// 00423546: LEA EAX,[ESI + 0x3628]
// 0042354c: PUSH EAX
// 0042354d: PUSH 0x616a15
//   XREF to: 00616a15 (DATA)
// 00423552: PUSH EBX
// 00423553: CALL core_actor.cpp_CActorPropertyList_FUN_0040e260
//   XREF to: 0040e260 (UNCONDITIONAL_CALL)
// 00423558: ADD ESP,0x10
// 0042355b: PUSH 0x423440
//   XREF to: 00423440 (DATA)
// 00423560: PUSH 0x423400
//   XREF to: 00423400 (DATA)
// 00423565: PUSH 0x616a22
//   XREF to: 00616a22 (DATA)
// 0042356a: PUSH EBX
// 0042356b: CALL core_actor.cpp_CActorPropertyList_FUN_0040e670
//   XREF to: 0040e670 (UNCONDITIONAL_CALL)
// 00423570: ADD ESP,0x10
// 00423573: PUSH 0x0
// 00423575: LEA EAX,[ESI + 0x7b0]
// 0042357b: PUSH EAX
// 0042357c: PUSH 0x616a2c
//   XREF to: 00616a2c (DATA)
// 00423581: PUSH EBX
// 00423582: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 00423587: ADD ESP,0x10
// 0042358a: JMP 0x00423516
//   XREF to: 00423516 (UNCONDITIONAL_JUMP)
