// Name: core_emitter.cpp_FUN_004a7e00
// Address: 004a7e00
// Address Range: [[004a7e00, 004a7e0a]]
// Convention: unknown
// Signature: undefined core_emitter.cpp_FUN_004a7e00()

#include "nocturne.h"

/* Signature: byte actors_other_emitter.cpp_FUN_004a7e00(uint param_1) */

void core_emitter_cpp_FUN_004a7e00(void)

{
  int iVar1;
  uint uVar2;
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(in_stack_00000004);
  iVar1 = *(int *)in_stack_00000004[1].actor_name;
  in_stack_00000004[3].orient_matrix.m[0].y = (float)in_stack_00000004[1].field11_0xdc;
  if (iVar1 == 4) {
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
              ((CKeyFramedModelInstance *)&in_stack_00000004[1].field13_0xec.y);
  }
  if (in_stack_00000004[2].field22_0x120 == 0) {
    in_stack_00000004[2].field22_0x120 = (int)g_HeroActors[g_LocalHeroIndex];
  }
  in_stack_00000004[3].orient.pitch = 0.0;
  uVar2 = *(uint *)(in_stack_00000004[1].actor_name + 0x10);
  in_stack_00000004[3].create_event[0xc] = '\0';
  in_stack_00000004[3].create_event[0xd] = '\0';
  in_stack_00000004[3].create_event[0xe] = '\0';
  in_stack_00000004[3].create_event[0xf] = '\0';
  *(uint *)(in_stack_00000004[3].create_event + 0x10) = uVar2;
  return;
}
