// Name: core_keyactor.cpp_FUN_00501940
// Address: 00501940
// Address Range: [[00501940, 00501984]]
// Convention: unknown
// Signature: undefined core_keyactor.cpp_FUN_00501940()
// Globals:
//   TerminatedCString s_Model_file_kfm_00630c7d
//   TerminatedCString s_Key_mask_00630c8f
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e1e0
//   core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290

#include "nocturne.h"

/* Signature: undefined1 actors_other_keyactor.cpp_FUN_00501940(undefined4 param_1, undefined4
   param_2) */

void core_keyactor_cpp_FUN_00501940(void)

{
  CDemonActor *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(in_stack_00000004,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e3b0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e1e0(in_stack_00000008);
  return;
}


// Assembly code:
// 00501940: PUSH EBX
//   Label: core_keyactor.cpp_FUN_00501940
// 00501941: PUSH ESI
// 00501942: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00501946: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0050194a: PUSH ESI
// 0050194b: PUSH EBX
// 0050194c: CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
//   XREF to: 0040d290 (UNCONDITIONAL_CALL)
// 00501951: ADD ESP,0x8
// 00501954: PUSH 0x0
// 00501956: LEA EAX,[EBX + 0x158]
// 0050195c: PUSH EAX
// 0050195d: PUSH 0x630c7d
//   XREF to: 00630c7d (DATA)
// 00501962: PUSH ESI
// 00501963: CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)
// 00501968: ADD ESP,0x10
// 0050196b: PUSH 0x0
// 0050196d: LEA EAX,[EBX + 0x2d4]
// 00501973: PUSH EAX
// 00501974: PUSH 0x630c8f
//   XREF to: 00630c8f (DATA)
// 00501979: PUSH ESI
// 0050197a: CALL core_actor.cpp_CActorPropertyList_FUN_0040e1e0
//   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)
// 0050197f: ADD ESP,0x10
// 00501982: POP ESI
// 00501983: POP EBX
// 00501984: RET
