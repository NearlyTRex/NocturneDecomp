// Name: core_gargoyle.cpp_CGargoyle_archive_FUN_004c5e50
// Address: 004c5e50
// Address Range: [[004c5e50, 004c5ef5]]
// Convention: __cdecl
// Signature: void __cdecl core_gargoyle_cpp_CGargoyle_archive_FUN_004c5e50(CGargoyle *this_ptr)

#include "nocturne.h"

void __cdecl core_gargoyle_cpp_CGargoyle_archive_FUN_004c5e50(CGargoyle *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_00489120(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b830(&(this_ptr->base).speed,"?speed" + 1);
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ba30(model_ptr,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040bab0(&model_ptr->base,"motion state");
  if (g_CGargoyleClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->stone_red,"stoneRed");
  core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->stone_green,"stoneGreen");
  core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->stone_blue,"stoneBlue");
  core_actor_cpp_archiveActor_FUN_0040b930(&this_ptr->home_base,"homeBase");
  return;
}
