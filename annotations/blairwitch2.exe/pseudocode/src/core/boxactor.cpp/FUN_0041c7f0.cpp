// Name: core_boxactor.cpp_FUN_0041c7f0
// Address: 0041c7f0
// Address Range: [[0041c7f0, 0041cadc]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_FUN_0041c7f0(CBoxActor *this_ptr)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_FUN_0041c7f0(CBoxActor *this_ptr)

{
  char local_10c [256];
  int local_c;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c330((CDemonActor *)this_ptr);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ba60
            (&this_ptr->field_0x2b4,"L>modelName" + 2);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x4ec,"weightInPounds");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x468,&DAT_005cc546);
  core_actor_cpp_archiveVector_FUN_0040b4b0(&this_ptr->field_0x45c,&DAT_005cc54a);
  core_actor_cpp_archiveString_FUN_0040b730(&this_ptr->field_0x430,"loopWavName");
  core_actor_cpp_archiveString_FUN_0040b730(&this_ptr->field_0x444,"collisionWavName");
  if (g_CBoxActorClassVersion < 7) {
    core_actor_cpp_archiveInteger_FUN_0040b960(&local_c,"canBeCarried");
    if (local_c == 0) {
      *(uint *)&this_ptr->field_0x470 = 0;
    }
    else {
      *(uint *)&this_ptr->field_0x470 = 3;
    }
  }
  else {
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->field_0x470,"pickupType");
  }
  core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->field_0x474,"carriedByActor");
  if (1 < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->field_0x478,"canBePushed")
    ;
    core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->field_0x47c,"pushedByActor");
  }
  if (2 < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->field_0x74c,"groundType");
  }
  if (g_CBoxActorClassVersion < 4) {
    *(uint *)&this_ptr->field_0x744 = 0xffffffff;
  }
  else {
    core_actor_cpp_archiveBox_FUN_0040bee0(&this_ptr->field_0x4f0,"simBox");
  }
  if (g_CBoxActorClassVersion < 5) {
    *(uint *)&this_ptr->field_0x750 = 1;
  }
  else {
    core_actor_cpp_archiveInteger_FUN_0040b960
              ((int *)&this_ptr->field_0x750,"plotInShadowFlag");
  }
  if (g_CBoxActorClassVersion < 6) {
    *(uint *)&this_ptr->field_0x754 = 1;
  }
  else {
    core_actor_cpp_archiveInteger_FUN_0040b960
              ((int *)&this_ptr->field_0x754,"collisionFlag");
  }
  if (7 < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960
              ((int *)&this_ptr->field_0xfc,"isTransparent");
    core_actor_cpp_archiveInteger_FUN_0040b960
              ((int *)&this_ptr->field_0x758,"dontUseNormals");
  }
  if (g_CBoxActorClassVersion == 9) {
    core_actor_cpp_archiveString_FUN_0040b730(local_10c,"descriptiveName");
  }
  if (10 < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b9e0
              (&this_ptr->field_0x480,"constrainExtentsActor");
  }
  if (0xb < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b730(&this_ptr->field_0x75c,"useEvent");
  }
  if (0xc < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960
              ((int *)&this_ptr->field_0x7c0,"allowedMeleeAttackTypes");
  }
  if (0xd < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b730(&this_ptr->field_0x488,"pushSound");
  }
  if (0xe < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960
              ((int *)&this_ptr->field_0x7c4,"blockVirtualDirectorFlag");
  }
  if (g_CBoxActorClassVersion < 0x10) {
    return;
  }
  core_actor_cpp_archiveOrientation_FUN_0040b550(&this_ptr->field_0x7c8,"camOrient");
  return;
}
