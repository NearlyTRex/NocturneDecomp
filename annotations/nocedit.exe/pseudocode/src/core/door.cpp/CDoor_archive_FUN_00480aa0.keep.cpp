// Name: core_door.cpp_CDoor_archive_FUN_00480aa0
// Address: 00480aa0
// MANUAL RECONSTRUCTION
// Address Range: [[00480aa0, 00480d8e]]
// Convention: __cdecl
// Signature: void __cdecl core_door_cpp_CDoor_archive_FUN_00480aa0(CDoor *this_ptr)

#include "nocturne.h"

void __cdecl core_door_cpp_CDoor_archive_FUN_00480aa0(CDoor *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c1c0(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b8f0(&this_ptr->model,"modelName");
  core_actor_cpp_archiveInteger_FUN_0040b7f0((int *)&this_ptr->door_type,"doorType");
  core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->door_side,"doorSide");
  core_actor_cpp_archiveInteger_FUN_0040b7f0((int *)&this_ptr->door_state,"doorState");
  core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->door_swing,"doorSwing");
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->open_condition,"openEvent");
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->close_condition,"closeEvent");
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->open_sound,"openSound");
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->close_sound,"closeSound");
  core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->key_mask,"keyMask");
  core_actor_cpp_archiveVector_FUN_0040b340(&this_ptr->orig_pos,"origPos");
  core_actor_cpp_archiveVector_FUN_0040b340(&this_ptr->orig_orient,"origOrient");
  core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->param,"param");
  core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->max_param,"maxParam");
  core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->open_speed,"openSpeed");
  core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->close_speed,"closeSpeed");
  if (1 < g_CDoorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b7f0((int *)&this_ptr->ground_type,"groundType");
  }
  if (2 < g_CDoorClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b5c0
              (this_ptr->on_open_trigger_event,"eventToTriggerWhenOpen");
    core_actor_cpp_archiveString_FUN_0040b5c0
              (this_ptr->on_close_trigger_event,"eventToTriggerWhenClosed");
  }
  if (3 < g_CDoorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->one_shot,"oneShot");
  }
  if (g_CDoorClassVersion < 7) {
    if (4 < g_CDoorClassVersion) {
      core_actor_cpp_archiveString_FUN_0040b5c0
                ((this_ptr->open_rule).events[0],"scriptOpenEvent");
      if ((this_ptr->open_rule).events[0][0] == '\0') {
        (this_ptr->open_rule).list_size = 0;
      }
      else {
        strcpy((this_ptr->open_rule).conditions[0],"true");
        (this_ptr->open_rule).list_size = 1;
      }
    }
  }
  else {
    core_actor_cpp_archiveRules_FUN_0040c000(&this_ptr->open_rule,"openRules");
  }
  if (5 < g_CDoorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b7f0
              (&this_ptr->block_virtual_director_flag,"blockVirtualDirectorFlag");
  }
  if (7 < g_CDoorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b7f0
              (&this_ptr->plot_as_box_in_shadow,"plotAsBoxInShadow");
  }
  if (8 < g_CDoorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->allowed_sides,"allowedSides");
  }
  if (9 < g_CDoorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b7f0
              (&this_ptr->allow_bullet_holes,"allowBulletHoles");
  }
  if (g_CDoorClassVersion < 0xb) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->locked_sound,"lockedSound");
  return;
}
