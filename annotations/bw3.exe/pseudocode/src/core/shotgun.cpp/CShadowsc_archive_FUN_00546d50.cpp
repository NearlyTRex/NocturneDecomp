// Name: core_shotgun.cpp_CShadowsc_archive_FUN_00546d50
// Address: 00546d50
// Address Range: [[00546d50, 00546dab]]
// Convention: __cdecl
// Signature: void __cdecl core_shotgun_cpp_CShadowsc_archive_FUN_00546d50(CShadowsc *this_ptr)

#include "nocturne.h"

void __cdecl core_shotgun_cpp_CShadowsc_archive_FUN_00546d50(CShadowsc *this_ptr)

{
  core_enemy_cpp_CEnemy_archive_FUN_00489120((CEnemy *)this_ptr);
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0xcdcc,"@Aspeed" + 2);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ba30
            ((CDeformableModelInstance *)&this_ptr->field_0x158,"modelName");
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0xcddc,"guardDistance");
  core_actor_cpp_archiveMotionState_FUN_0040bab0
            ((CMotionController *)&this_ptr->field_0x158,"motion state");
  return;
}
