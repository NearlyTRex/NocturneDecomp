// Name: core_boxactor.cpp_CBoxActor_archive_FUN_0041ec60
// Address: 0041ec60
// Address Range: [[0041ec60, 0041ef2f]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CBoxActor_archive_FUN_0041ec60(int param_1)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CBoxActor_archive_FUN_0041ec60(int param_1)

{
  byte local_10c [256];
  int local_c;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(param_1 + 0x150,"modelName");
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x388,"weightInPounds");
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x304,"fps");
  core_actor_cpp_archiveVector_FUN_0040c450(param_1 + 0x2f8,"rpm");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x2cc,"loopWavName");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x2e0,"collisionWavName");
  if (g_INT_005ad09c < 7) {
    core_actor_cpp_archiveInteger_FUN_0040c900(&local_c,"canBeCarried");
    if (local_c == 0) {
      *(uint *)(param_1 + 0x30c) = 0;
    }
    else {
      *(uint *)(param_1 + 0x30c) = 3;
    }
  }
  else {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x30c,"pickupType");
  }
  core_actor_cpp_archiveActor_FUN_0040c980(param_1 + 0x310,"carriedByActor");
  if (1 < g_INT_005ad09c) {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x314,"canBePushed");
    core_actor_cpp_archiveActor_FUN_0040c980(param_1 + 0x318,"pushedByActor");
  }
  if (2 < g_INT_005ad09c) {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x5e8,"groundType");
  }
  if (g_INT_005ad09c < 4) {
    *(uint *)(param_1 + 0x5e0) = 0xffffffff;
  }
  else {
    core_actor_cpp_FUN_0040ce80(param_1 + 0x38c,"simBox");
  }
  if (g_INT_005ad09c < 5) {
    *(uint *)(param_1 + 0x5ec) = 1;
  }
  else {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x5ec,"plotInShadowFlag");
  }
  if (g_INT_005ad09c < 6) {
    *(uint *)(param_1 + 0x5f0) = 1;
  }
  else {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x5f0,"collisionFlag");
  }
  if (7 < g_INT_005ad09c) {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0xfc,"isTransparent");
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x5f4,"dontUseNormals");
  }
  if (g_INT_005ad09c == 9) {
    core_actor_cpp_archiveString_FUN_0040c6d0(local_10c,"descriptiveName");
  }
  if (10 < g_INT_005ad09c) {
    core_actor_cpp_archiveActor_FUN_0040c980(param_1 + 0x31c,"constrainExtentsActor");
  }
  if (0xb < g_INT_005ad09c) {
    core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x5f8,"useEvent");
  }
  if (0xc < g_INT_005ad09c) {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x65c,"allowedMeleeAttackTypes");
  }
  if (0xd < g_INT_005ad09c) {
    core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x324,"pushSound");
  }
  if (g_INT_005ad09c < 0xf) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x660,"blockVirtualDirectorFlag");
  return;
}
