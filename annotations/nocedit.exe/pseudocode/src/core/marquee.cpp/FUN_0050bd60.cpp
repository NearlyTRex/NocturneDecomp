// Name: core_marquee.cpp_FUN_0050bd60
// Address: 0050bd60
// Address Range: [[0050bd60, 0050bd6a]]
// Convention: unknown
// Signature: undefined core_marquee.cpp_FUN_0050bd60()
// Function calls:
//   core_actor.cpp_CDemonActor_setup_FUN_00408bb0

#include "nocturne.h"

/* Signature: undefined1 actors_other_marquee.cpp_FUN_0050bd60(undefined4 param_1) */

void core_marquee_cpp_FUN_0050bd60(void)

{
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(in_stack_00000004);
  core_course_cpp_CCourse_load_FUN_00442580
            ((CCourse *)&in_stack_00000004[1].orient_matrix.m[1].y,in_stack_00000004[1].actor_name);
  core_marquee_cpp_FUN_0050bc30();
  in_stack_00000004[1].location.position.y = 0.0;
  return;
}


// Assembly code:
// 0050bd60: PUSH EBX
//   Label: core_marquee.cpp_FUN_0050bd60
// 0050bd61: MOV EBX,dword ptr [ESP + 0x8]
// 0050bd65: PUSH EBX
// 0050bd66: CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0
//   XREF to: 00408bb0 (UNCONDITIONAL_CALL)
