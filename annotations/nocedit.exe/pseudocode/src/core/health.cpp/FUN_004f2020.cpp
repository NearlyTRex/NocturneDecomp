// Name: core_health.cpp_FUN_004f2020
// Address: 004f2020
// Address Range: [[004f2020, 004f2032]]
// Convention: unknown
// Signature: undefined core_health.cpp_FUN_004f2020()
// Function calls:
//   core_actor.cpp_CDemonActor_onPickup_FUN_0040a010

#include "nocturne.h"

/* Signature: undefined1 actors_other_health.cpp_FUN_004f2020(undefined4 param_1, undefined4
   param_2) */

void core_health_cpp_FUN_004f2020(void)

{
  CDemonActor *in_stack_00000004;
  CDemonActor *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_onPickup_FUN_0040a010(in_stack_00000004,in_stack_00000008);
  return;
}


// Assembly code:
// 004f2020: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_health.cpp_FUN_004f2020
//   XREF to: Stack[0x8] (READ)
// 004f2024: PUSH EDX
// 004f2025: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004f2029: PUSH ECX
// 004f202a: CALL core_actor.cpp_CDemonActor_onPickup_FUN_0040a010
//   XREF to: 0040a010 (UNCONDITIONAL_CALL)
// 004f202f: ADD ESP,0x8
// 004f2032: RET
