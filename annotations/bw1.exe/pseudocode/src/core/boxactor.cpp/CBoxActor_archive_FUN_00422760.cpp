// Name: core_boxactor.cpp_CBoxActor_archive_FUN_00422760
// Address: 00422760
// Address Range: [[00422760, 00422a4c]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CBoxActor_archive_FUN_00422760(CBoxActor *this_ptr)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CBoxActor_archive_FUN_00422760(CBoxActor *this_ptr)

{
  char local_10c [256];
  int local_c;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c040((CDemonActor *)this_ptr);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b770
            (&this_ptr->field_0x158,"L>modelName" + 2);
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x390,"weightInPounds");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x30c,&DAT_005d4c35);
  core_actor_cpp_archiveVector_FUN_0040b1c0(&this_ptr->field_0x300,&DAT_005d4c39);
  core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x2d4,"loopWavName");
  core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x2e8,"collisionWavName");
  if (g_CBoxActorClassVersion < 7) {
    core_actor_cpp_archiveInteger_FUN_0040b670(&local_c,"canBeCarried");
    if (local_c == 0) {
      *(uint *)&this_ptr->field_0x314 = 0;
    }
    else {
      *(uint *)&this_ptr->field_0x314 = 3;
    }
  }
  else {
    core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x314,"pickupType");
  }
  core_actor_cpp_archiveActor_FUN_0040b6f0(&this_ptr->field_0x318,"carriedByActor");
  if (1 < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x31c,"canBePushed")
    ;
    core_actor_cpp_archiveActor_FUN_0040b6f0(&this_ptr->field_0x320,"pushedByActor");
  }
  if (2 < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x5f0,"groundType");
  }
  if (g_CBoxActorClassVersion < 4) {
    *(uint *)&this_ptr->field_0x5e8 = 0xffffffff;
  }
  else {
    core_actor_cpp_FUN_0040bbf0((CBox *)&this_ptr->field_0x394,"simBox");
  }
  if (g_CBoxActorClassVersion < 5) {
    *(uint *)&this_ptr->field_0x5f4 = 1;
  }
  else {
    core_actor_cpp_archiveInteger_FUN_0040b670
              ((int *)&this_ptr->field_0x5f4,"plotInShadowFlag");
  }
  if (g_CBoxActorClassVersion < 6) {
    *(uint *)&this_ptr->field_0x5f8 = 1;
  }
  else {
    core_actor_cpp_archiveInteger_FUN_0040b670
              ((int *)&this_ptr->field_0x5f8,"collisionFlag");
  }
  if (7 < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670
              ((int *)&this_ptr->field_0xfc,"isTransparent");
    core_actor_cpp_archiveInteger_FUN_0040b670
              ((int *)&this_ptr->field_0x5fc,"dontUseNormals");
  }
  if (g_CBoxActorClassVersion == 9) {
    core_actor_cpp_archiveString_FUN_0040b440(local_10c,"descriptiveName");
  }
  if (10 < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b6f0
              (&this_ptr->field_0x324,"constrainExtentsActor");
  }
  if (0xb < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x600,"useEvent");
  }
  if (0xc < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670
              ((int *)&this_ptr->field_0x664,"allowedMeleeAttackTypes");
  }
  if (0xd < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x32c,"pushSound");
  }
  if (0xe < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670
              ((int *)&this_ptr->field_0x668,"blockVirtualDirectorFlag");
  }
  if (g_CBoxActorClassVersion < 0x10) {
    return;
  }
  core_actor_cpp_archiveOrientation_FUN_0040b260(&this_ptr->field_0x66c,"camOrient");
  return;
}
