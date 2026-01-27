// Name: core_ghoul.cpp_FUN_004e8e40
// Address: 004e8e40
// Address Range: [[004e8e40, 004e8ed3]]
// Convention: unknown
// Signature: undefined core_ghoul.cpp_FUN_004e8e40()

#include "nocturne.h"

/* Signature: byte actors_enemy_ghoul.cpp_FUN_004e8e40(uint param_1) */

void core_ghoul_cpp_FUN_004e8e40(void)

{
  int iVar1;
  CEnemy *in_stack_00000004;
  
  core_enemy_cpp_CEnemy_FUN_004aa250(in_stack_00000004);
  iVar1 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,4);
  switch(iVar1) {
  case 0:
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
              (&(in_stack_00000004->base).model,"guul.dfm");
    break;
  case 1:
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
              (&(in_stack_00000004->base).model,"chubgul2.dfm");
    return;
  case 2:
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
              (&(in_stack_00000004->base).model,"guullmap.dfm");
    return;
  case 3:
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
              (&(in_stack_00000004->base).model,"longguul.dfm");
    return;
  case 4:
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
              (&(in_stack_00000004->base).model,"chubguul.dfm");
    return;
  }
  return;
}
