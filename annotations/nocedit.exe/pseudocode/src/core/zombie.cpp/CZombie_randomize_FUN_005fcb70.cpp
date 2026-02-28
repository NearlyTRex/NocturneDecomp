// Name: core_zombie.cpp_CZombie_randomize_FUN_005fcb70
// Address: 005fcb70
// Address Range: [[005fcb70, 005fcc14]]
// Convention: __cdecl
// Signature: void __cdecl core_zombie_cpp_CZombie_randomize_FUN_005fcb70(CZombie *this_ptr)

#include "nocturne.h"

void __cdecl core_zombie_cpp_CZombie_randomize_FUN_005fcb70(CZombie *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  int iVar1;
  
  core_enemy_cpp_CEnemy_randomize_FUN_004aa250(&this_ptr->base);
  this_ptr_00 = &(this_ptr->base).base.model;
  iVar1 = _stricmp
                    ((this_ptr->base).base.model.model_name,"jeff.dfm");
  if (iVar1 != 0) {
    iVar1 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,4);
    switch(iVar1) {
    case 0:
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
                (this_ptr_00,"zombie1.dfm");
      return;
    case 1:
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
                (this_ptr_00,"zombie2.dfm");
      return;
    case 2:
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
                (this_ptr_00,"zombie3.dfm");
      return;
    case 3:
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
                (this_ptr_00,"fletch.dfm");
      return;
    case 4:
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
                (this_ptr_00,"skinned.dfm");
      return;
    }
  }
  return;
}
