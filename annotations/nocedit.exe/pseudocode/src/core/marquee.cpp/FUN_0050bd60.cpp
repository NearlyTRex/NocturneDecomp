// Name: core_marquee.cpp_FUN_0050bd60
// Address: 0050bd60
// Address Range: [[0050bd60, 0050bd6a]]
// Convention: unknown
// Signature: void core_marquee_cpp_FUN_0050bd60(void)

#include "nocturne.h"

/* Signature: byte actors_other_marquee.cpp_FUN_0050bd60(uint param_1) */

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
