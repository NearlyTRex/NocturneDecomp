// Name: core_pendulum.cpp_FUN_0054a790
// Address: 0054a790
// Address Range: [[0054a790, 0054a7ac]]
// Convention: unknown
// Signature: undefined core_pendulum.cpp_FUN_0054a790()
// Function calls:
//   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
//   core_pendulum.cpp_FUN_00549b90

#include "nocturne.h"

/* Signature: undefined1 actors_other_pendulum.cpp_FUN_0054a790(undefined4 param_1) */

void core_pendulum_cpp_FUN_0054a790(void)

{
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(in_stack_00000004);
  core_pendulum_cpp_FUN_00549b90();
  return;
}


// Assembly code:
// 0054a790: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_pendulum.cpp_FUN_0054a790
//   XREF to: Stack[0x4] (READ)
// 0054a794: PUSH EDX
// 0054a795: CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
//   XREF to: 0040d040 (UNCONDITIONAL_CALL)
// 0054a79a: ADD ESP,0x4
// 0054a79d: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 0054a7a1: PUSH 0x0
// 0054a7a3: PUSH ECX
// 0054a7a4: CALL core_pendulum.cpp_FUN_00549b90
//   XREF to: 00549b90 (UNCONDITIONAL_CALL)
// 0054a7a9: ADD ESP,0x8
// 0054a7ac: RET
