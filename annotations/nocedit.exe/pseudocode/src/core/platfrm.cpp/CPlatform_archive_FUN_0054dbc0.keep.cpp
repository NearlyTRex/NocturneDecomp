// Name: core_platfrm.cpp_CPlatform_archive_FUN_0054dbc0
// Address: 0054dbc0
// MANUAL RECONSTRUCTION
// Address Range: [[0054dbc0, 0054df75]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_CPlatform_archive_FUN_0054dbc0(CPlatform *this_ptr)

#include "nocturne.h"

void __cdecl core_platfrm_cpp_CPlatform_archive_FUN_0054dbc0(CPlatform *this_ptr)

{
  int iVar2;
  int iVar3;
  int local_1c;
  CDemonActor *local_18;
  int local_14;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c1c0(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b8f0(&this_ptr->model,"modelName");
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->to_start_event,"toStartEvent");
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->to_end_event,"toEndEvent");
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->stop_event,"stopEvent");
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->start_sound,"startSound");
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->stop_sound,"stopSound");
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->active_sound,"activeSound");
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->course_filename,"courseFilename");
  if (this_ptr->course_filename[0] == '\0') {
    core_actor_cpp_archiveVector_FUN_0040b340(&this_ptr->start_pos,"startPos");
    core_actor_cpp_archiveQuaternion_FUN_0040b520(&this_ptr->orig_orient,"origOrient");
    core_actor_cpp_archiveVector_FUN_0040b340(&this_ptr->end_pos,"endPos");
    core_actor_cpp_archiveQuaternion_FUN_0040b520(&this_ptr->end_orient,"endOrient");
  }
  core_actor_cpp_archiveInteger_FUN_0040b7f0((int *)&this_ptr->state,"state");
  core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->param,"param");
  core_actor_cpp_archiveFloat_FUN_0040b770
            (&this_ptr->travel_time_to_start,"travelTimeToStart");
  if (g_CPlatformClassVersion < 7) {
    this_ptr->travel_time_to_end = this_ptr->travel_time_to_start;
  }
  else {
    core_actor_cpp_archiveFloat_FUN_0040b770
              (&this_ptr->travel_time_to_end,"travelTimeToEnd");
  }
  core_actor_cpp_archiveInteger_FUN_0040b7f0((int *)&this_ptr->ground_type,"groundType");
  if (1 < g_CPlatformClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->one_shot,"oneShot");
  }
  if (2 < g_CPlatformClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b7f0
              (&this_ptr->block_virtual_director_flag,"blockVirtualDirectorFlag");
  }
  if (3 < g_CPlatformClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b7f0
              (&this_ptr->render_in_background_when_not_moving_flag,
               "renderInBackgroundWhenNotMovingFlag");
  }
  if (4 < g_CPlatformClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b5c0
              (this_ptr->camera_while_moving,"cameraWhileMoving");
  }
  if (5 < g_CPlatformClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b7f0
              (&this_ptr->plot_as_box_in_shadow,"plotAsBoxInShadow");
  }
  if (7 < g_CPlatformClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->goal_param,"goalParam");
    core_actor_cpp_archiveFloat_FUN_0040b770
              (&this_ptr->current_movement_rate,"currentMovementRate");
    if (g_ActorReadingMode == 1) {
      core_actor_cpp_archiveInteger_FUN_0040b7f0(&local_1c,"attachCount");
      if (10 < local_1c) {
        g_CurrentFilename = "..\\core\\platfrm.cpp";
        g_CurrentLineNumber = 0x316;
        core_main_c_displayErrorAndQuit_FUN_00506f10("CPlatform::archive - too many attached actors.");
      }
      for (iVar3 = 0; iVar3 < local_1c; iVar3 = iVar3 + 1) {
        core_actor_cpp_archiveActor_FUN_0040b870(&local_18,"attach actor");
        this_ptr->attach_actors[iVar3].actor = local_18;
      }
    }
    else {
      local_14 = 0;
      for (iVar2 = 0; iVar2 < 10; iVar2 = iVar2 + 1) {
        if (this_ptr->attach_actors[iVar2].actor != (CDemonActor *)0x0) {
          local_14 = local_14 + 1;
        }
      }
      core_actor_cpp_archiveInteger_FUN_0040b7f0(&local_14,"attachCount");
      for (iVar2 = 0; iVar2 < 10; iVar2 = iVar2 + 1) {
        if (this_ptr->attach_actors[iVar2].actor != (CDemonActor *)0x0) {
          core_actor_cpp_archiveActor_FUN_0040b870
                    (&this_ptr->attach_actors[iVar2].actor,"attach actor");
        }
      }
    }
  }
  if (8 < g_CPlatformClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->push_flag,"pushFlag");
  }
  if (9 < g_CPlatformClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->recompute_fog,"recomputeFog");
  }
  if (10 < g_CPlatformClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b7f0
              (&this_ptr->plot_in_shadow_flag,"plotInShadowFlag");
    return;
  }
  return;
}
