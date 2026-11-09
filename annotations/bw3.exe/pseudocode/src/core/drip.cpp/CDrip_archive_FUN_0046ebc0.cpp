// Name: core_drip.cpp_CDrip_archive_FUN_0046ebc0
// Address: 0046ebc0
// Address Range: [[0046ebc0, 0046ece5]]
// Convention: __cdecl
// Signature: void __cdecl core_drip_cpp_CDrip_archive_FUN_0046ebc0(CDrip *this_ptr)

#include "nocturne.h"

void __cdecl core_drip_cpp_CDrip_archive_FUN_0046ebc0(CDrip *this_ptr)

{
  if (1 < g_CDripClassVersion) {
    core_actor_cpp_CDemonActor_archive_FUN_0040c280((CDemonActor *)this_ptr);
  }
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b9b0
            (&this_ptr->field_0x158,"modelName");
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0x2d4,&DAT_005bc730);
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0x2d8,"autoDrop");
  core_actor_cpp_archiveVector_FUN_0040b400(&this_ptr->field_0x2f8,"homePos");
  core_actor_cpp_archiveVector_FUN_0040b400(&this_ptr->field_0x304,&DAT_005bc746);
  if (2 < g_CDripClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0x2e0,"minAutoDripTime");
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0x2e4,"maxAutoDripTime");
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0x2e8,"dripRadius");
  }
  if (3 < g_CDripClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0x310,"damage");
  }
  if (4 < g_CDripClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b680(&this_ptr->field_0x314,"hitSound");
  }
  if (g_CDripClassVersion < 6) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0x334,"noRockFlag");
  return;
}
