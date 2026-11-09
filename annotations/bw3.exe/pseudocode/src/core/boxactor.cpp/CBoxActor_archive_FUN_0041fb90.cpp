// Name: core_boxactor.cpp_CBoxActor_archive_FUN_0041fb90
// Address: 0041fb90
// Address Range: [[0041fb90, 0041feb6]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CBoxActor_archive_FUN_0041fb90(CBoxActor *this_ptr)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CBoxActor_archive_FUN_0041fb90(CBoxActor *this_ptr)

{
  char local_10c [256];
  int local_c;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c280((CDemonActor *)this_ptr);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b9b0
            (&this_ptr->field_0x158,"GmodelName" + 1);
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0x390,"weightInPounds");
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0x30c,&DAT_005b7522);
  core_actor_cpp_archiveVector_FUN_0040b400(&this_ptr->field_0x300,&DAT_005b7526);
  core_actor_cpp_archiveString_FUN_0040b680(&this_ptr->field_0x2d4,"loopWavName");
  core_actor_cpp_archiveString_FUN_0040b680(&this_ptr->field_0x2e8,"collisionWavName");
  if (g_CBoxActorClassVersion < 7) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0(&local_c,"canBeCarried");
    if (local_c == 0) {
      *(uint *)&this_ptr->field_0x314 = 0;
    }
    else {
      *(uint *)&this_ptr->field_0x314 = 2;
    }
  }
  else {
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0x314,"pickupType");
  }
  core_actor_cpp_archiveActor_FUN_0040b930(&this_ptr->field_0x318,"carriedByActor");
  if (1 < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0x31c,"canBePushed")
    ;
    core_actor_cpp_archiveActor_FUN_0040b930(&this_ptr->field_0x320,"pushedByActor");
  }
  if (2 < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0x5f0,"groundType");
  }
  if (g_CBoxActorClassVersion < 4) {
    *(uint *)&this_ptr->field_0x5e8 = 0xffffffff;
  }
  else {
    core_actor_cpp_FUN_0040be30((CBox *)&this_ptr->field_0x394,"simBox");
  }
  if (g_CBoxActorClassVersion < 5) {
    *(uint *)&this_ptr->field_0x5f4 = 1;
  }
  else {
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&this_ptr->field_0x5f4,"plotInShadowFlag");
  }
  if (g_CBoxActorClassVersion < 6) {
    *(uint *)&this_ptr->field_0x5f8 = 1;
  }
  else {
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&this_ptr->field_0x5f8,"collisionFlag");
  }
  if (7 < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&this_ptr->field_0xfc,"isTransparent");
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&this_ptr->field_0x5fc,"dontUseNormals");
  }
  if (g_CBoxActorClassVersion == 9) {
    core_actor_cpp_archiveString_FUN_0040b680(local_10c,"descriptiveName");
  }
  if (10 < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b930
              (&this_ptr->field_0x324,"constrainExtentsActor");
  }
  if (0xb < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b680(&this_ptr->field_0x600,"useEvent");
  }
  if (0xc < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&this_ptr->field_0x6c8,"allowedMeleeAttackTypes");
  }
  if (0xd < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b680(&this_ptr->field_0x32c,"pushSound");
  }
  if (0xe < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&this_ptr->field_0x6cc,"blockVirtualDirectorFlag");
  }
  if (0xf < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveOrientation_FUN_0040b4a0(&this_ptr->field_0x6d0,"camOrient");
  }
  if (0x10 < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0x6e0,"fadeTime");
  }
  if (g_CBoxActorClassVersion < 0x12) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b680(&this_ptr->field_0x664,"fadeEvent");
  return;
}
