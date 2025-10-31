// Name: core_boxactor.cpp_FUN_00422570
// Address: 00422570
// Address Range: [[00422570, 00422582]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_FUN_00422570()
// Function calls:
//   core_actor.cpp_CDemonActor_onPickup_FUN_0040a010

#include "nocturne.h"

/* Signature: undefined1 actors_other_boxactor.cpp_FUN_00422570(undefined4 param_1, undefined4
   param_2) */

void core_boxactor_cpp_FUN_00422570(void)

{
  CDemonActor *in_stack_00000004;
  CDemonActor *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_onPickup_FUN_0040a010(in_stack_00000004,in_stack_00000008);
  return;
}


// Assembly code:
// 00422570: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_boxactor.cpp_FUN_00422570
//   XREF to: Stack[0x8] (READ)
// 00422574: PUSH EDX
// 00422575: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00422579: PUSH ECX
// 0042257a: CALL core_actor.cpp_CDemonActor_onPickup_FUN_0040a010
//   XREF to: 0040a010 (UNCONDITIONAL_CALL)
// 0042257f: ADD ESP,0x8
// 00422582: RET
