// Name: core_ladder.cpp_CLadder_load_FUN_005029c0
// Address: 005029c0
// Address Range: [[005029c0, 00502a35]]
// Convention: unknown
// Signature: undefined core_ladder.cpp_CLadder_load_FUN_005029c0()

#include "nocturne.h"

/* Signature: byte actors_other_ladder.cpp_CLadder_load(CLadder* pLadder) */

void core_ladder_cpp_CLadder_load_FUN_005029c0(void)

{
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(in_stack_00000004);
  core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),"model");
  core_actor_cpp_serializeVector_FUN_0040b340
            ((CVector3f *)&in_stack_00000004[2].location.position.y,"ladderSize");
  core_actor_cpp_serializeActor_FUN_0040b870
            ((CDemonActor *)&in_stack_00000004[2].orient,"masterActor");
  core_ladder_cpp_FUN_00502b80();
  if (g_CLadderClassVersion < 2) {
    return;
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[2].orient_matrix.m[1].y,"groundType");
  return;
}
