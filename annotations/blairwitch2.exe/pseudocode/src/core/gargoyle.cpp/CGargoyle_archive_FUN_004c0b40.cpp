// Name: core_gargoyle.cpp_CGargoyle_archive_FUN_004c0b40
// Address: 004c0b40
// Address Range: [[004c0b40, 004c0be5]]
// Convention: __cdecl
// Signature: void __cdecl core_gargoyle_cpp_CGargoyle_archive_FUN_004c0b40(CGargoyle *this_ptr)

#include "nocturne.h"

void __cdecl core_gargoyle_cpp_CGargoyle_archive_FUN_004c0b40(CGargoyle *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&(this_ptr->base).speed,"?speed" + 1);
  pCVar1 = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0(pCVar1,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040bb60(pCVar1,"motion state");
  if (g_CGargoyleClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->stone_red,"stoneRed");
  core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->stone_green,"stoneGreen");
  core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->stone_blue,"stoneBlue");
  core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->home_base,"homeBase");
  return;
}
