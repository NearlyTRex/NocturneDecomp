// Name: core_moloch.cpp_CMoloch_load_FUN_00529880
// Address: 00529880
// Address Range: [[00529880, 005298f3]]
// Convention: unknown
// Signature: void core_moloch_cpp_CMoloch_load_FUN_00529880(void)

#include "nocturne.h"

/* Signature: byte actors_hero_moloch.cpp_CMoloch_load(CMoloch* param_1) */

void core_moloch_cpp_CMoloch_load_FUN_00529880(void)

{
  CHero *in_stack_00000004;
  
  core_hero_cpp_CHero_serialize_FUN_004f2610(in_stack_00000004);
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004[1].base.model.part_visibility_flags + 10),
             "humanToDemonCond");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004[1].base.model.texture_set_indices + 5),
             "demonToHumanCond");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            (in_stack_00000004[1].base.model.part_visibility_flags + 7,"inHumanForm");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            (in_stack_00000004[1].base.model.part_visibility_flags + 8,"morphing");
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)(in_stack_00000004[1].base.model.part_visibility_flags + 9),
             "morphTimer");
  return;
}
