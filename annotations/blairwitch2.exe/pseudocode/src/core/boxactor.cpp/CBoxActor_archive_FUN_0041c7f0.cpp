// Name: core_boxactor.cpp_CBoxActor_archive_FUN_0041c7f0
// Address: 0041c7f0
// Address Range: [[0041c7f0, 0041cadc]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CBoxActor_archive_FUN_0041c7f0(CBoxActor *this_ptr)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CBoxActor_archive_FUN_0041c7f0(CBoxActor *this_ptr)

{
  char local_10c [256];
  int local_c;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ba60
            (&this_ptr->model,"L>modelName" + 2);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->weight_in_pounds,"weightInPounds");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->fps,&DAT_005cc546);
  core_actor_cpp_archiveVector_FUN_0040b4b0(&this_ptr->rpm,&DAT_005cc54a);
  core_actor_cpp_archiveString_FUN_0040b730(this_ptr->loop_wav_name,"loopWavName");
  core_actor_cpp_archiveString_FUN_0040b730
            (this_ptr->collision_wav_name,"collisionWavName");
  if (g_CBoxActorClassVersion < 7) {
    core_actor_cpp_archiveInteger_FUN_0040b960(&local_c,"canBeCarried");
    if (local_c == 0) {
      this_ptr->pickup_type = BOX_PICKUP_CANT;
    }
    else {
      this_ptr->pickup_type = BOX_PICKUP_CARRY;
    }
  }
  else {
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->pickup_type,"pickupType");
  }
  core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->carrier_actor,"carriedByActor");
  if (1 < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->can_be_pushed,"canBePushed");
    core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->pushed_by_actor,"pushedByActor");
  }
  if (2 < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->ground_type,"groundType");
  }
  if (g_CBoxActorClassVersion < 4) {
    (this_ptr->physics_box).is_valid = -1;
  }
  else {
    core_actor_cpp_archiveBox_FUN_0040bee0(&this_ptr->physics_box,"simBox");
  }
  if (g_CBoxActorClassVersion < 5) {
    this_ptr->plot_in_shadow_flag = 1;
  }
  else {
    core_actor_cpp_archiveInteger_FUN_0040b960
              (&this_ptr->plot_in_shadow_flag,"plotInShadowFlag");
  }
  if (g_CBoxActorClassVersion < 6) {
    this_ptr->collision_flag = 1;
  }
  else {
    core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->collision_flag,"collisionFlag");
  }
  if (7 < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960
              ((int *)&(this_ptr->base).field_0xfc,"isTransparent");
    core_actor_cpp_archiveInteger_FUN_0040b960
              (&this_ptr->dont_use_normals,"dontUseNormals");
  }
  if (g_CBoxActorClassVersion == 9) {
    core_actor_cpp_archiveString_FUN_0040b730(local_10c,"descriptiveName");
  }
  if (10 < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b9e0
              (&this_ptr->constrain_extents_actor,"constrainExtentsActor");
  }
  if (0xb < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b730(this_ptr->use_event,"useEvent");
  }
  if (0xc < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960
              (&this_ptr->allowed_melee_attack_types,"allowedMeleeAttackTypes");
  }
  if (0xd < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b730(this_ptr->push_sound,"pushSound");
  }
  if (0xe < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960
              (&this_ptr->block_virtual_director_flag,"blockVirtualDirectorFlag");
  }
  if (g_CBoxActorClassVersion < 0x10) {
    return;
  }
  core_actor_cpp_archiveOrientation_FUN_0040b550(&this_ptr->field_0x7c8,"camOrient");
  return;
}
