// Name: core_zombie.cpp_CZombie_FUN_005fcb70
// Address: 005fcb70
// Address Range: [[005fcb70, 005fcc14]]
// Convention: unknown
// Signature: void core_zombie_cpp_CZombie_FUN_005fcb70(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_zombie.cpp_CZombie_FUN_005fcb70(CZombie* param_1) */

void core_zombie_cpp_CZombie_FUN_005fcb70(void)

{
  CDeformableModelInstance *this_ptr;
  int iVar1;
  CEnemy *in_stack_00000004;
  
  core_enemy_cpp_CEnemy_FUN_004aa250(in_stack_00000004);
  this_ptr = &(in_stack_00000004->base).model;
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0
                    ((in_stack_00000004->base).model.model_name,"jeff.dfm");
  if (iVar1 != 0) {
    iVar1 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,4);
    switch(iVar1) {
    case 0:
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(this_ptr,"zombie1.dfm");
      return;
    case 1:
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(this_ptr,"zombie2.dfm");
      return;
    case 2:
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(this_ptr,"zombie3.dfm");
      return;
    case 3:
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(this_ptr,"fletch.dfm");
      return;
    case 4:
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(this_ptr,"skinned.dfm");
      return;
    }
  }
  return;
}
