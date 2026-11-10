// Name: core_tentacle.cpp_CTentacle_archive_FUN_00572f90
// Address: 00572f90
// Address Range: [[00572f90, 0057300c]]
// Convention: __cdecl
// Signature: void __cdecl core_tentacle_cpp_CTentacle_archive_FUN_00572f90(CTentacle *this_ptr)

#include "nocturne.h"

void __cdecl core_tentacle_cpp_CTentacle_archive_FUN_00572f90(CTentacle *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(&this_ptr->base);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0
            (&(this_ptr->base).base.model,"0@modelName" + 2);
  if (g_CTentacleClassVersion < 2) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0
              (&(this_ptr->base).guard_distance,"guardDistance");
  }
  pCVar1 = &(this_ptr->base).base.model;
  core_actor_cpp_archiveMotionState_FUN_0040bb60(pCVar1,"motion state");
  core_actor_cpp_archivePartStatus_FUN_0040bc50(pCVar1,"partStatus");
  core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->grave_actor,"graveActor");
  return;
}
