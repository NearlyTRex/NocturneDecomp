// Name: core_armour.cpp_FUN_0040fb60
// Address: 0040fb60
// Address Range: [[0040fb60, 0040fbbb]]
// Convention: unknown
// Signature: void core_armour_cpp_FUN_0040fb60(int param_1)

#include "nocturne.h"

void core_armour_cpp_FUN_0040fb60(int param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(param_1);
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbc8c,"speed");
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80(param_1 + 0x150,"modelName");
  core_actor_cpp_FUN_0040cb00(param_1 + 0x150,"motion state");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0xbd24,"fallApartEvent");
  return;
}
