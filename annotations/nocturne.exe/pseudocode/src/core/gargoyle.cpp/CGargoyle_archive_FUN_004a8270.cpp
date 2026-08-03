// Name: core_gargoyle.cpp_CGargoyle_archive_FUN_004a8270
// Address: 004a8270
// Address Range: [[004a8270, 004a8315]]
// Convention: __cdecl
// Signature: void __cdecl core_gargoyle_cpp_CGargoyle_archive_FUN_004a8270(CGargoyle *this_ptr)

#include "nocturne.h"

void __cdecl core_gargoyle_cpp_CGargoyle_archive_FUN_004a8270(CGargoyle *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040c880(&(this_ptr->base).speed,"speed");
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80(model_ptr,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040cb00
            (&model_ptr->motion_controller,"motion state");
  if (INT_005b9624 < 2) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->stone_red,"stoneRed");
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->stone_green,"stoneGreen");
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->stone_blue,"stoneBlue");
  core_actor_cpp_archiveActor_FUN_0040c980(&this_ptr->home_base,"homeBase");
  return;
}
