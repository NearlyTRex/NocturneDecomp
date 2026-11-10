// Name: core_door.cpp_CDoor_archive_FUN_0045ff80
// Address: 0045ff80
// Address Range: [[0045ff80, 004602bc]]
// Convention: __cdecl
// Signature: void __cdecl core_door_cpp_CDoor_archive_FUN_0045ff80(CDoor *this_ptr)

#include "nocturne.h"

void __cdecl core_door_cpp_CDoor_archive_FUN_0045ff80(CDoor *this_ptr)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ba60
            (&this_ptr->model,"?modelName" + 1);
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->door_type,"doorType");
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->door_side,"doorSide");
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->door_state,"doorState");
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->door_swing,"doorSwing");
  core_actor_cpp_archiveString_FUN_0040b730(this_ptr->open_condition,"openEvent");
  core_actor_cpp_archiveString_FUN_0040b730(this_ptr->close_condition,"closeEvent");
  core_actor_cpp_archiveString_FUN_0040b730(this_ptr->open_sound,"openSound");
  core_actor_cpp_archiveString_FUN_0040b730(this_ptr->close_sound,"closeSound");
  core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->key_mask,"keyMask");
  core_actor_cpp_archiveVector_FUN_0040b4b0(&this_ptr->orig_pos,"origPos");
  core_actor_cpp_archiveVector_FUN_0040b4b0(&this_ptr->orig_orient,"origOrient");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->param,"param");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->max_param,"maxParam");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->open_speed,"openSpeed");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->close_speed,"closeSpeed");
  if (1 < g_CDoorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->ground_type,"groundType");
  }
  if (2 < g_CDoorClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b730
              (this_ptr->on_open_trigger_event,"eventToTriggerWhenOpen");
    core_actor_cpp_archiveString_FUN_0040b730
              (this_ptr->on_close_trigger_event,"eventToTriggerWhenClosed");
  }
  if (3 < g_CDoorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->one_shot,"oneShot");
  }
  if (g_CDoorClassVersion < 7) {
    if (4 < g_CDoorClassVersion) {
      core_actor_cpp_archiveString_FUN_0040b730(&this_ptr->field_0x7cc,"scriptOpenEvent");
      if (this_ptr->field_0x7cc == '\0') {
        *(uint *)&this_ptr->field_0x5d4 = 0;
      }
      else {
        pcVar2 = &DAT_005d0b16;
        pcVar3 = &this_ptr->field_0x5d8;
        do {
          cVar1 = *pcVar2;
          *pcVar3 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar2[1];
          pcVar2 = pcVar2 + 2;
          pcVar3[1] = cVar1;
          pcVar3 = pcVar3 + 2;
        } while (cVar1 != '\0');
        *(uint *)&this_ptr->field_0x5d4 = 1;
      }
    }
  }
  else {
    core_actor_cpp_archiveRules_FUN_0040c170(&this_ptr->field_0x5d4,"openRules");
  }
  if (5 < g_CDoorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960
              (&this_ptr->block_virtual_director_flag,"blockVirtualDirectorFlag");
  }
  if (7 < g_CDoorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960
              (&this_ptr->plot_as_box_in_shadow,"plotAsBoxInShadow");
  }
  if (8 < g_CDoorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960
              ((int *)&this_ptr->allowed_sides,"allowedSides");
  }
  if (9 < g_CDoorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960
              (&this_ptr->allow_bullet_holes,"allowBulletHoles");
  }
  if (10 < g_CDoorClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b730(this_ptr->locked_sound,"lockedSound");
  }
  if (0xb < g_CDoorClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b730(&this_ptr->field_0xb40,"shakeMeEvent");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0xb3c,"shakeMeStrength");
  }
  if (g_CDoorClassVersion < 0xd) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b960
            ((int *)&this_ptr->field_0xba4,"handleVertexIndex");
  return;
}
