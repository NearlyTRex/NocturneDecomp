// Name: core_dracbrid.cpp_CDraculaBride_archive_FUN_00464cc0
// Address: 00464cc0
// Address Range: [[00464cc0, 00464f09]]
// Convention: __cdecl
// Signature: void __cdecl core_dracbrid_cpp_CDraculaBride_archive_FUN_00464cc0(CDraculaBride *this_ptr)

#include "nocturne.h"

void __cdecl core_dracbrid_cpp_CDraculaBride_archive_FUN_00464cc0(CDraculaBride *this_ptr)

{
  int iVar1;
  char (*string_buffer) [40];
  CBodyPart **actor_ptr;
  char *motion_name;
  int iStack_14;
  
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(&this_ptr->base);
  if (g_CDraculaBrideClassVersion < 2) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&(this_ptr->base).speed,"?speed" + 1);
  }
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0
            (&(this_ptr->base).base.model,"modelName");
  if ((1 < g_CDraculaBrideClassVersion) && (g_CDraculaBrideClassVersion < 6)) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0
              (&(this_ptr->base).guard_distance,"guardDistance");
  }
  if (((2 < g_CDraculaBrideClassVersion) &&
      (core_actor_cpp_archiveString_FUN_0040b730(this_ptr->rise_event,"riseEvent"),
      g_CDraculaBrideClassVersion < 4)) &&
     (core_actor_cpp_archiveInteger_FUN_0040b960(&iStack_14,"initialState"),
     DAT_007bc038 == 1)) {
    if (iStack_14 == 1) {
      motion_name = "vincoffin";
    }
    else {
      motion_name = "incoffin";
    }
    core_motion_cpp_CMotionController_jumpToMotionByName_FUN_00503950
              (&(this_ptr->base).base.model.base,motion_name,0.0);
  }
  if (3 < g_CDraculaBrideClassVersion) {
    core_actor_cpp_archiveMotionState_FUN_0040bb60
              (&(this_ptr->base).base.model.base,"motionState");
  }
  if (g_CDraculaBrideClassVersion == 4) {
    iVar1 = 0;
    core_actor_cpp_archiveInteger_FUN_0040b960
              (&(this_ptr->base).base.cloth_list.count,"clothCount");
    if (0 < (this_ptr->base).base.cloth_list.count) {
      string_buffer = (this_ptr->base).base.cloth_list.filenames;
      do {
        iVar1 = iVar1 + 1;
        core_actor_cpp_archiveString_FUN_0040b730(*string_buffer,(char *)0x0);
        string_buffer = string_buffer + 1;
      } while (iVar1 < (this_ptr->base).base.cloth_list.count);
    }
  }
  if (6 < g_CDraculaBrideClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960
              (&this_ptr->freaky_voice_number,"freakyVoiceNumber");
  }
  if (7 < g_CDraculaBrideClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->exploded,"exploded");
    core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->part_count,"partCount");
    iVar1 = 0;
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->fade_timer,"fadeTimer");
    if (0 < this_ptr->part_count) {
      actor_ptr = this_ptr->part_list;
      do {
        iVar1 = iVar1 + 1;
        core_actor_cpp_archiveActor_FUN_0040b9e0((CDemonActor **)actor_ptr,"partList");
        actor_ptr = actor_ptr + 1;
      } while (iVar1 < this_ptr->part_count);
    }
  }
  if (8 < g_CDraculaBrideClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->mist_state,"mistState");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->vanish_timer,"vanishTimer");
    core_actor_cpp_archiveVector_FUN_0040b4b0(&this_ptr->new_pos,"newPos");
    return;
  }
  return;
}
