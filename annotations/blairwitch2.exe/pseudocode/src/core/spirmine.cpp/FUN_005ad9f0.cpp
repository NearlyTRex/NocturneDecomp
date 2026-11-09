// Name: core_spirmine.cpp_FUN_005ad9f0
// Address: 005ad9f0
// Address Range: [[005ad9f0, 005ada4f]]
// Convention: unknown
// Signature: void core_spirmine_cpp_FUN_005ad9f0(CBoxActor *param_1)

#include "nocturne.h"

void core_spirmine_cpp_FUN_005ad9f0(CBoxActor *param_1)

{
  core_boxactor_cpp_FUN_0041c7f0(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x8,"@sleepTime" + 1);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0xc,"effectTime");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x10,"effectDamage");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(param_1 + 1,"triggerRadius");
  return;
}
