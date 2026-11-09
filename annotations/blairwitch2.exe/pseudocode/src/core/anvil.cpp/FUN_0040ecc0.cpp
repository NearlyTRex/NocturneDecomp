// Name: core_anvil.cpp_FUN_0040ecc0
// Address: 0040ecc0
// Address Range: [[0040ecc0, 0040ed33]]
// Convention: unknown
// Signature: void core_anvil_cpp_FUN_0040ecc0(CDemonActor *param_1)

#include "nocturne.h"

void core_anvil_cpp_FUN_0040ecc0(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ba60(param_1 + 1,"@modelName" + 1);
  core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0x17c,"dropCondition");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x1e0,"dropHeight");
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x1e4,"triggered");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x1e8,&DAT_005cb351);
  return;
}
