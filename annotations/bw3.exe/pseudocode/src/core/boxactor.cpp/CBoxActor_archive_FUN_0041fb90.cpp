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
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c280(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b9b0
            (&this_ptr->model,"GmodelName" + 1);
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->weight_in_pounds,"weightInPounds");
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->fps,&DAT_005b7522);
  core_actor_cpp_archiveVector_FUN_0040b400(&this_ptr->rpm,&DAT_005b7526);
  core_actor_cpp_archiveString_FUN_0040b680(this_ptr->loop_wav_name,"loopWavName");
  core_actor_cpp_archiveString_FUN_0040b680
            (this_ptr->collision_wav_name,"collisionWavName");
  if (g_CBoxActorClassVersion < 7) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0(&local_c,"canBeCarried");
    if (local_c == 0) {
      this_ptr->pickup_type = BOX_PICKUP_CANT;
    }
    else {
      this_ptr->pickup_type = BOX_PICKUP_INVENTORY;
    }
  }
  else {
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->pickup_type,"pickupType");
  }
  core_actor_cpp_archiveActor_FUN_0040b930(&this_ptr->carrier_actor,"carriedByActor");
  if (1 < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->can_be_pushed,"canBePushed");
    core_actor_cpp_archiveActor_FUN_0040b930(&this_ptr->pushed_by_actor,"pushedByActor");
  }
  if (2 < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->ground_type,"groundType");
  }
  if (g_CBoxActorClassVersion < 4) {
    (this_ptr->physics_box).is_valid = -1;
  }
  else {
    core_actor_cpp_archiveBox_FUN_0040be30(&this_ptr->physics_box,"simBox");
  }
  if (g_CBoxActorClassVersion < 5) {
    this_ptr->plot_in_shadow_flag = 1;
  }
  else {
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              (&this_ptr->plot_in_shadow_flag,"plotInShadowFlag");
  }
  if (g_CBoxActorClassVersion < 6) {
    this_ptr->collision_flag = 1;
  }
  else {
    core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->collision_flag,"collisionFlag");
  }
  if (7 < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              (&(this_ptr->base).is_transparent,"isTransparent");
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              (&this_ptr->dont_use_normals,"dontUseNormals");
  }
  if (g_CBoxActorClassVersion == 9) {
    core_actor_cpp_archiveString_FUN_0040b680(local_10c,"descriptiveName");
  }
  if (10 < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b930
              (&this_ptr->constrain_extents_actor,"constrainExtentsActor");
  }
  if (0xb < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b680(this_ptr->use_event,"useEvent");
  }
  if (0xc < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              (&this_ptr->allowed_melee_attack_types,"allowedMeleeAttackTypes");
  }
  if (0xd < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b680(this_ptr->push_sound,"pushSound");
  }
  if (0xe < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              (&this_ptr->block_virtual_director_flag,"blockVirtualDirectorFlag");
  }
  if (0xf < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveOrientation_FUN_0040b4a0(&this_ptr->cam_orientation,"camOrient");
  }
  if (0x10 < g_CBoxActorClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->fade_time,"fadeTime");
  }
  if (g_CBoxActorClassVersion < 0x12) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b680(this_ptr->fade_event,"fadeEvent");
  return;
}
