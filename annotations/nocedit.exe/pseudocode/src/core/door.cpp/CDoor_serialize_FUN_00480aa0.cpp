// Name: core_door.cpp_CDoor_serialize_FUN_00480aa0
// Address: 00480aa0
// Address Range: [[00480aa0, 00480d8e]]
// Convention: __cdecl
// Signature: void core_door.cpp_CDoor_serialize_FUN_00480aa0(CDoor * this_ptr)

#include "nocturne.h"

void __cdecl core_door_cpp_CDoor_serialize_FUN_00480aa0(CDoor *this_ptr)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(&this_ptr->base);
  core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0(&this_ptr->model,"modelName")
  ;
  core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->door_type,"doorType");
  core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->door_side,"doorSide");
  core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->door_state,"doorState");
  core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->door_swing,"doorSwing");
  core_actor_cpp_serializeString_FUN_0040b5c0((char **)this_ptr->unk1,"openEvent");
  core_actor_cpp_serializeString_FUN_0040b5c0((char **)(this_ptr->unk1 + 100),"closeEvent")
  ;
  core_actor_cpp_serializeString_FUN_0040b5c0((char **)(this_ptr->unk2 + 1000),"openSound")
  ;
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(this_ptr->unk2 + 0x44c),"closeSound");
  core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->key_mask,"keyMask");
  core_actor_cpp_serializeVector_FUN_0040b340(&this_ptr->orig_pos,"origPos");
  core_actor_cpp_serializeVector_FUN_0040b340(&this_ptr->orig_orient,"origOrient");
  core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->param,"param");
  core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->max_param,"maxParam");
  core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->open_speed,"openSpeed");
  core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->close_speed,"closeSpeed");
  if (1 < g_CDoorClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->ground_type,"groundType");
  }
  if (2 < g_CDoorClassVersion) {
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)(this_ptr->unk1 + 200),"eventToTriggerWhenOpen");
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)(this_ptr->unk1 + 300),"eventToTriggerWhenClosed");
  }
  if (3 < g_CDoorClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->one_shot,"oneShot");
  }
  if (g_CDoorClassVersion < 7) {
    if (4 < g_CDoorClassVersion) {
      core_actor_cpp_serializeString_FUN_0040b5c0
                ((char **)(this_ptr->unk2 + 500),"scriptOpenEvent");
      if (this_ptr->unk2[500] == '\0') {
        this_ptr->open_rules = 0;
      }
      else {
        pcVar2 = "true";
        pcVar3 = this_ptr->unk2;
        do {
          cVar1 = *pcVar2;
          *pcVar3 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar2[1];
          pcVar2 = pcVar2 + 2;
          pcVar3[1] = cVar1;
          pcVar3 = pcVar3 + 2;
        } while (cVar1 != '\0');
        this_ptr->open_rules = 1;
      }
    }
  }
  else {
    core_actor_cpp_serializeRules_FUN_0040c000(&this_ptr->open_rules,"openRules");
  }
  if (5 < g_CDoorClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              (&this_ptr->block_virtual_director_flag,"blockVirtualDirectorFlag");
  }
  if (7 < g_CDoorClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              (&this_ptr->plot_as_box_in_shadow,"plotAsBoxInShadow");
  }
  if (8 < g_CDoorClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->allowed_sides,"allowedSides");
  }
  if (9 < g_CDoorClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              (&this_ptr->allow_bullet_holes,"allowBulletHoles");
  }
  if (g_CDoorClassVersion < 0xb) {
    return;
  }
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(this_ptr->unk2 + 0x4b0),"lockedSound");
  return;
}
