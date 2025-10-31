// Name: core_gasmask.cpp_CGasMask_FUN_004e5eb0
// Address: 004e5eb0
// Address Range: [[004e5eb0, 004e5ee2]]
// Convention: unknown
// Signature: undefined core_gasmask.cpp_CGasMask_FUN_004e5eb0()
// Globals:
//   TerminatedCString s_Model_file_kfm_0062dac5
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290

#include "nocturne.h"

/* Signature: undefined1 actors_other_gasmask.cpp_CGasMask_FUN_004e5eb0(undefined4 param_1,
   CActorPropertyList* param_2) */

void core_gasmask_cpp_CGasMask_FUN_004e5eb0(void)

{
  CDemonActor *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  CActorPropertyList *in_stack_0000000c;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(in_stack_00000004,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e3b0(in_stack_0000000c);
  return;
}


// Assembly code:
// 004e5eb0: PUSH EBX
//   Label: core_gasmask.cpp_CGasMask_FUN_004e5eb0
// 004e5eb1: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004e5eb5: PUSH EDX
// 004e5eb6: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004e5eba: PUSH ECX
// 004e5ebb: CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
//   XREF to: 0040d290 (UNCONDITIONAL_CALL)
// 004e5ec0: ADD ESP,0x8
// 004e5ec3: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004e5ec7: PUSH 0x0
// 004e5ec9: ADD EAX,0x158
// 004e5ece: PUSH EAX
// 004e5ecf: PUSH 0x62dac5
//   XREF to: 0062dac5 (DATA)
// 004e5ed4: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004e5ed8: PUSH EBX
// 004e5ed9: CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)
// 004e5ede: ADD ESP,0x10
// 004e5ee1: POP EBX
// 004e5ee2: RET
