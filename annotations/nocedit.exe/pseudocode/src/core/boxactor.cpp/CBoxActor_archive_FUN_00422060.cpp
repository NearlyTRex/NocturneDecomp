// Name: core_boxactor.cpp_CBoxActor_archive_FUN_00422060
// Address: 00422060
// Address Range: [[00422060, 0042232f]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CBoxActor_archive_FUN_00422060(CBoxActor *this_ptr)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CBoxActor_archive_FUN_00422060(CBoxActor *this_ptr)

{
  char local_10c [256];
  int local_c;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c1c0(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b8f0(&this_ptr->model,"modelName");
  core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->weight_in_pounds,"weightInPounds");
  core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->fps,"fps");
  core_actor_cpp_archiveVector_FUN_0040b340(&this_ptr->rpm,"rpm");
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->loop_wav_name,"loopWavName");
  core_actor_cpp_archiveString_FUN_0040b5c0
            (this_ptr->collision_wav_name,"collisionWavName");
  if (g_CBoxActorClassVersion < 7) {
    core_actor_cpp_archiveInteger_FUN_0040b7f0(&local_c,"canBeCarried");
    if (local_c == 0) {
      this_ptr->pickup_type = 0;
    }
    else {
      this_ptr->pickup_type = 3;
    }
  }
  else {
    core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->pickup_type,"pickupType");
  }
  core_actor_cpp_archiveActor_FUN_0040b870
            ((CDemonActor *)&this_ptr->carrier_actor,"carriedByActor");
  if (1 < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->can_be_pushed,"canBePushed");
    core_actor_cpp_archiveActor_FUN_0040b870
              ((CDemonActor *)&this_ptr->pushed_by_actor,"pushedByActor");
  }
  if (2 < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->ground_type,"groundType");
  }
  if (g_CBoxActorClassVersion < 4) {
    this_ptr->unk4[0x250] = -1;
    this_ptr->unk4[0x251] = -1;
    this_ptr->unk4[0x252] = -1;
    this_ptr->unk4[0x253] = -1;
  }
  else {
    core_actor_cpp_archiveSimBox_FUN_0040bd70((CSimBox *)&this_ptr->sim_box,"simBox");
  }
  if (g_CBoxActorClassVersion < 5) {
    this_ptr->plot_in_shadow_flag = 1;
  }
  else {
    core_actor_cpp_archiveInteger_FUN_0040b7f0
              (&this_ptr->plot_in_shadow_flag,"plotInShadowFlag");
  }
  if (g_CBoxActorClassVersion < 6) {
    this_ptr->collision_flag = 1;
  }
  else {
    core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->collision_flag,"collisionFlag");
  }
  if (7 < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b7f0
              (&(this_ptr->base).is_transparent,"isTransparent");
    core_actor_cpp_archiveInteger_FUN_0040b7f0
              (&this_ptr->dont_use_normals,"dontUseNormals");
  }
  if (g_CBoxActorClassVersion == 9) {
    core_actor_cpp_archiveString_FUN_0040b5c0(local_10c,"descriptiveName");
  }
  if (10 < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b870
              ((CDemonActor *)&this_ptr->constrain_extents_actor,"constrainExtentsActor");
  }
  if (0xb < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->use_event,"useEvent");
  }
  if (0xc < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b7f0
              (&this_ptr->allowed_melee_attack_types,"allowedMeleeAttackTypes");
  }
  if (0xd < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->push_sound,"pushSound");
  }
  if (g_CBoxActorClassVersion < 0xf) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b7f0
            (&this_ptr->block_virtual_director_flag,"blockVirtualDirectorFlag");
  return;
}
