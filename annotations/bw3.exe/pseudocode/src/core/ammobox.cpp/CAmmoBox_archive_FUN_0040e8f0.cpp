// Name: core_ammobox.cpp_CAmmoBox_archive_FUN_0040e8f0
// Address: 0040e8f0
// Address Range: [[0040e8f0, 0040e9bd]]
// Convention: __cdecl
// Signature: void __cdecl core_ammobox_cpp_CAmmoBox_archive_FUN_0040e8f0(CAmmoBox *this_ptr)

#include "nocturne.h"

void __cdecl core_ammobox_cpp_CAmmoBox_archive_FUN_0040e8f0(CAmmoBox *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c280((CDemonActor *)this_ptr);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b9b0
            (&this_ptr->field_0x158,"modelName");
  core_actor_cpp_archiveString_FUN_0040b680(&this_ptr->field_0x2d4,"weaponClassName");
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0x314,"ammoCount");
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0x318,"ammoType");
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0x31c,0);
  if (1 < g_CAmmoBoxClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b930(&this_ptr->field_0x320,&DAT_005b61b5);
  }
  if (2 < g_CAmmoBoxClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&this_ptr->field_0x324,"hasCollision");
  }
  if (g_CAmmoBoxClassVersion < 4) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b680(&this_ptr->field_0x328,"openSound");
  return;
}
