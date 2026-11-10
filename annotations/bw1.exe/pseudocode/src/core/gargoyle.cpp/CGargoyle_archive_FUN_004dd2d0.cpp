// Name: core_gargoyle.cpp_CGargoyle_archive_FUN_004dd2d0
// Address: 004dd2d0
// Address Range: [[004dd2d0, 004dd375]]
// Convention: __cdecl
// Signature: void __cdecl core_gargoyle_cpp_CGargoyle_archive_FUN_004dd2d0(CGargoyle *this_ptr)

#include "nocturne.h"

void __cdecl core_gargoyle_cpp_CGargoyle_archive_FUN_004dd2d0(CGargoyle *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_004a0520(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&(this_ptr->base).speed,"?speed" + 1);
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040b7f0(model_ptr,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040b870(&model_ptr->base,"motion state");
  if (g_CGargoyleClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->stone_red,"stoneRed");
  core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->stone_green,"stoneGreen");
  core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->stone_blue,"stoneBlue");
  core_actor_cpp_archiveActor_FUN_0040b6f0(&this_ptr->home_base,"homeBase");
  return;
}
