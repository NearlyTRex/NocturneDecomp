// Name: core_kedward.cpp_CKedward_archive_FUN_005919f0
// Address: 005919f0
// Address Range: [[005919f0, 00591aa9]]
// Convention: __cdecl
// Signature: void __cdecl core_kedward_cpp_CKedward_archive_FUN_005919f0(CKedward *this_ptr)

#include "nocturne.h"

void __cdecl core_kedward_cpp_CKedward_archive_FUN_005919f0(CKedward *this_ptr)

{
  core_enemy_cpp_CEnemy_archive_FUN_00489120((CEnemy *)this_ptr);
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0xcdcc,"@speed" + 1);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ba30
            ((CDeformableModelInstance *)&this_ptr->field_0x158,"modelName");
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0xcddc,"guardDistance");
  core_actor_cpp_archiveMotionState_FUN_0040bab0
            ((CMotionController *)&this_ptr->field_0x158,"motion state");
  if (1 < g_CKedwardClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0xd06c,"maxFadeTime");
  }
  if (2 < g_CKedwardClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&this_ptr->field_0xd070,"fadeOutOpacity");
  }
  if (g_CKedwardClassVersion < 4) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0xd094,"ciniFlag");
  return;
}
