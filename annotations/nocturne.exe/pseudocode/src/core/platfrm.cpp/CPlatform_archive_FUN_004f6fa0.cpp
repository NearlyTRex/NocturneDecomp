// Name: core_platfrm.cpp_CPlatform_archive_FUN_004f6fa0
// Address: 004f6fa0
// Address Range: [[004f6fa0, 004f7355]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_CPlatform_archive_FUN_004f6fa0(CPlatform *this_ptr)

#include "nocturne.h"

void __cdecl core_platfrm_cpp_CPlatform_archive_FUN_004f6fa0(CPlatform *this_ptr)

{
  CPlatform *pCVar1;
  int iVar2;
  int local_1c;
  CDemonActor *local_18;
  int local_14;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(&this_ptr->model,"modelName");
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->to_start_event,"toStartEvent");
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->to_end_event,"toEndEvent");
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->stop_event,"stopEvent");
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->start_sound,"startSound");
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->stop_sound,"stopSound");
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->active_sound,"activeSound");
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->course_filename,"courseFilename");
  if (this_ptr->course_filename[0] == '\0') {
    core_actor_cpp_archiveVector_FUN_0040c450(&this_ptr->start_pos,"startPos");
    core_actor_cpp_archiveQuaternion_FUN_0040c630(&this_ptr->orig_orient,"origOrient");
    core_actor_cpp_archiveVector_FUN_0040c450(&this_ptr->end_pos,"endPos");
    core_actor_cpp_archiveQuaternion_FUN_0040c630(&this_ptr->end_orient,"endOrient");
  }
  core_actor_cpp_archiveInteger_FUN_0040c900((int *)&this_ptr->state,"state");
  core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->param,"param");
  core_actor_cpp_archiveFloat_FUN_0040c880
            (&this_ptr->travel_time_to_start,"travelTimeToStart");
  if (INT_005be19c < 7) {
    this_ptr->travel_time_to_end = this_ptr->travel_time_to_start;
  }
  else {
    core_actor_cpp_archiveFloat_FUN_0040c880
              (&this_ptr->travel_time_to_end,"travelTimeToEnd");
  }
  core_actor_cpp_archiveInteger_FUN_0040c900((int *)&this_ptr->ground_type,"groundType");
  if (1 < INT_005be19c) {
    core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->one_shot,"oneShot");
  }
  if (2 < INT_005be19c) {
    core_actor_cpp_archiveInteger_FUN_0040c900
              (&this_ptr->block_virtual_director_flag,"blockVirtualDirectorFlag");
  }
  if (3 < INT_005be19c) {
    core_actor_cpp_archiveInteger_FUN_0040c900
              (&this_ptr->render_in_background_when_not_moving_flag,
               "renderInBackgroundWhenNotMovingFlag");
  }
  if (4 < INT_005be19c) {
    core_actor_cpp_archiveString_FUN_0040c6d0
              (this_ptr->camera_while_moving,"cameraWhileMoving");
  }
  if (5 < INT_005be19c) {
    core_actor_cpp_archiveInteger_FUN_0040c900
              (&this_ptr->plot_as_box_in_shadow,"plotAsBoxInShadow");
  }
  if (7 < INT_005be19c) {
    core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->goal_param,"goalParam");
    core_actor_cpp_archiveFloat_FUN_0040c880
              (&this_ptr->current_movement_rate,"currentMovementRate");
    if (DAT_00763e88 == 1) {
      core_actor_cpp_archiveInteger_FUN_0040c900(&local_1c,"attachCount");
      if (10 < local_1c) {
        g_CurrentFilename = "..\\core\\platfrm.cpp";
        g_CurrentLineNumber = 790;
        core_main_c_displayErrorAndQuit_FUN_004c8440("CPlatform::archive - too many attached actors.");
      }
      iVar2 = 0;
      pCVar1 = this_ptr;
      if (0 < local_1c) {
        do {
          core_actor_cpp_archiveActor_FUN_0040c980(&local_18,"attach actor");
          pCVar1->attach_actors[0].actor = local_18;
          iVar2 = iVar2 + 1;
          pCVar1 = (CPlatform *)((int)&(pCVar1->base).orient + 4);
        } while (iVar2 < local_1c);
      }
    }
    else {
      local_14 = 0;
      pCVar1 = this_ptr;
      do {
        if (pCVar1->attach_actors[0].actor != (CDemonActor *)0x0) {
          local_14 = local_14 + 1;
        }
        pCVar1 = (CPlatform *)((int)&(pCVar1->base).orient + 4);
      } while (pCVar1 != (CPlatform *)((this_ptr->model).model_name + 0x40));
      iVar2 = 0;
      core_actor_cpp_archiveInteger_FUN_0040c900(&local_14,"attachCount");
      pCVar1 = this_ptr;
      do {
        if (pCVar1->attach_actors[0].actor != (CDemonActor *)0x0) {
          core_actor_cpp_archiveActor_FUN_0040c980
                    (&this_ptr->attach_actors[iVar2].actor,"attach actor");
        }
        iVar2 = iVar2 + 1;
        pCVar1 = (CPlatform *)((int)&(pCVar1->base).orient + 4);
      } while (iVar2 < 10);
    }
  }
  if (8 < INT_005be19c) {
    core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->push_flag,"pushFlag");
  }
  if (9 < INT_005be19c) {
    core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->recompute_fog,"recomputeFog");
  }
  if (10 < INT_005be19c) {
    core_actor_cpp_archiveInteger_FUN_0040c900
              (&this_ptr->plot_in_shadow_flag,"plotInShadowFlag");
    return;
  }
  return;
}
