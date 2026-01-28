// Name: core_chain.cpp_CChain_load_FUN_00430fe0
// Address: 00430fe0
// Address Range: [[00430fe0, 00431100]]
// Convention: unknown
// Signature: void core_chain_cpp_CChain_load_FUN_00430fe0(void)

#include "nocturne.h"

/* Signature: void actors_other_chain.cpp_CChain_load(CChain* pChain, uint param_2, char*
   param_3, char* param_4) */

void core_chain_cpp_CChain_load_FUN_00430fe0(void)

{
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(in_stack_00000004);
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(in_stack_00000004 + 1),"vertexCount");
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)(in_stack_00000004[1].actor_name + 4),"chainLength");
  core_actor_cpp_serializeActor_FUN_0040b870
            ((CDemonActor *)(in_stack_00000004[1].actor_name + 0xc),"target");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(in_stack_00000004[1].actor_name + 0x10),"targetBone");
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)&in_stack_00000004[3].vtable,"weight");
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)(in_stack_00000004[4].actor_name + 8),"dampen");
  core_actor_cpp_serializeFloat_FUN_0040b770((float *)(in_stack_00000004 + 4),"friction");
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)(in_stack_00000004[4].actor_name + 4),"gravity");
  if (1 < g_CChainClassVersion) {
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)(in_stack_00000004[1].actor_name + 0x1c),"textureName");
  }
  if (2 < g_CChainClassVersion) {
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)&in_stack_00000004[1].orient_matrix.m[2].z,"pullWavName");
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)(in_stack_00000004[1].create_event + 0x4c),"moveWavName");
  }
  if (g_CChainClassVersion < 4) {
    return;
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[1].previous_transform_state.position.z,
             "groundCollideFlag");
  return;
}
