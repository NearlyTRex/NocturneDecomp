// Name: core_moloch.cpp_FUN_004de680
// Address: 004de680
// Address Range: [[004de680, 004de6f3]]
// Convention: unknown
// Signature: void core_moloch_cpp_FUN_004de680(CHero *param_1)

#include "nocturne.h"

void core_moloch_cpp_FUN_004de680(CHero *param_1)

{
  core_hero_cpp_FUN_004b49a0(param_1);
  core_actor_cpp_archiveString_FUN_0040c6d0
            ((char *)(param_1[1].base.model.part_data.visibility_flags + 0xc),
             "humanToDemonCond");
  core_actor_cpp_archiveString_FUN_0040c6d0
            ((char *)(param_1[1].base.model.part_data.texture_set_indices + 7),
             "demonToHumanCond");
  core_actor_cpp_archiveInteger_FUN_0040c900
            (param_1[1].base.model.part_data.visibility_flags + 9,"inHumanForm");
  core_actor_cpp_archiveInteger_FUN_0040c900
            (param_1[1].base.model.part_data.visibility_flags + 10,"morphing");
  core_actor_cpp_archiveFloat_FUN_0040c880
            ((float *)(param_1[1].base.model.part_data.visibility_flags + 0xb),"morphTimer"
            );
  return;
}
