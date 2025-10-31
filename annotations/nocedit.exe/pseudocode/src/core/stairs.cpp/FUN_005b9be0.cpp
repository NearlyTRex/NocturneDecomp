// Name: core_stairs.cpp_FUN_005b9be0
// Address: 005b9be0
// Address Range: [[005b9be0, 005b9be9]]
// Convention: unknown
// Signature: undefined core_stairs.cpp_FUN_005b9be0()
// Function calls:
//   core_actor.cpp_CDemonActor_setup_FUN_00408bb0

#include "nocturne.h"

/* Signature: undefined1 actors_other_stairs.cpp_FUN_005b9be0(undefined4 param_1) */

undefined4 core_stairs_cpp_FUN_005b9be0(void)

{
  undefined4 uVar1;
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(in_stack_00000004);
  uVar1 = core_stairs_cpp_FUN_005ba700();
  return uVar1;
}


// Assembly code:
// 005b9be0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_stairs.cpp_FUN_005b9be0
// 005b9be4: PUSH EDX
// 005b9be5: CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0
//   XREF to: 00408bb0 (UNCONDITIONAL_CALL)
