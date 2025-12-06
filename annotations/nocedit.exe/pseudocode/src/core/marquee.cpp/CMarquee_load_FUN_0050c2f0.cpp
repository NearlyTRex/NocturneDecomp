// Name: core_marquee.cpp_CMarquee_load_FUN_0050c2f0
// Address: 0050c2f0
// Address Range: [[0050c2f0, 0050c363]]
// Convention: unknown
// Signature: undefined core_marquee.cpp_CMarquee_load_FUN_0050c2f0()

#include "nocturne.h"

/* Signature: byte actors_other_marquee.cpp_CMarquee_load(CMarquee* pMarquee) */

void core_marquee_cpp_CMarquee_load_FUN_0050c2f0(void)

{
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(in_stack_00000004);
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004 + 1),"courseName");
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)&in_stack_00000004[1].location,"totalTime");
  core_actor_cpp_serializeFloat_FUN_0040b770
            (&in_stack_00000004[1].location.position.y,"param");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[1].location.position.z,"phase");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(in_stack_00000004[1].orient_matrix.m + 1),"type");
  return;
}
