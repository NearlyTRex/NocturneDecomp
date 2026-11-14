// Name: core_shotgun.cpp_CShadowsc_archive_FUN_00546d50
// Address: 00546d50
// Address Range: [[00546d50, 00546dab]]
// Convention: __cdecl
// Signature: void __cdecl core_shotgun_cpp_CShadowsc_archive_FUN_00546d50(CShadowsc *this_ptr)

#include "nocturne.h"

void __cdecl core_shotgun_cpp_CShadowsc_archive_FUN_00546d50(CShadowsc *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_00489120(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b830(&(this_ptr->base).speed,"@Aspeed" + 2);
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ba30(model_ptr,"modelName");
  core_actor_cpp_archiveFloat_FUN_0040b830
            (&(this_ptr->base).guard_distance,"guardDistance");
  core_actor_cpp_archiveMotionState_FUN_0040bab0(&model_ptr->base,"motion state");
  return;
}
