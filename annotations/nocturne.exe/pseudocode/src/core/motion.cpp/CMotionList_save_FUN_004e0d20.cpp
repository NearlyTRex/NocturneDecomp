// Name: core_motion.cpp_CMotionList_save_FUN_004e0d20
// Address: 004e0d20
// Address Range: [[004e0d20, 004e1001]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionList_save_FUN_004e0d20(CMotionList *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionList_save_FUN_004e0d20(CMotionList *this_ptr,_FILE *file_handle)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  int *piVar4;
  EMotionTransitionCmd *pEVar5;
  int *piVar6;
  int iVar7;
  SMotionTransition *pSVar8;
  SMotion *pSVar9;
  char (*pacVar10) [30];
  int local_18;
  SMotion *local_14;
  
  _fprintf(file_handle,"// motion list version\n");
  _fprintf(file_handle,"%d\n",2);
  _fprintf(file_handle,"// state list\n");
  _fprintf(file_handle,"%d\n",this_ptr->state_count);
  iVar7 = 0;
  if (0 < this_ptr->state_count) {
    pacVar10 = this_ptr->state_names;
    do {
      iVar7 = iVar7 + 1;
      _fprintf(file_handle,"%s\n",pacVar10);
      pacVar10 = pacVar10 + 1;
    } while (iVar7 < this_ptr->state_count);
  }
  _fprintf(file_handle,"// motion count\n");
  _fprintf(file_handle,"%d\n",this_ptr->motion_count);
  local_18 = 0;
  if (0 < this_ptr->motion_count) {
    local_14 = this_ptr->motions;
    do {
      _fprintf(file_handle,"// motion %d: \"name\",fps,state,frameStart,frameCount\n",local_18);
      _fprintf(file_handle,"\"%s\",%g,%d,%d,%d\n",local_14,(double)local_14->fps,
                 local_14->state_index,local_14->frame_start,local_14->frame_count);
      _fprintf(file_handle,"// motion %d: exitForwardFromFrameNumber,exitForwardToMotionNumber,exitForwardToFrameNumber\n",local_18);
      _fprintf(file_handle,"%d,%d,%g\n",local_14->exit_forward_from_frame,
                 local_14->exit_forward_to_motion,(double)local_14->exit_forward_to_frame);
      _fprintf(file_handle,"// motion %d: exitForwardCmd,exitForwardTweenTime,exitForwardsetNewStateAsDesired\n",local_18);
      _fprintf(file_handle,"%d,%g,%d\n",local_14->exit_forward_cmd,
                 (double)local_14->exit_forward_tween_time,local_14->exit_forward_set_new_state);
      _fprintf(file_handle,"// motion %d: exitBackwardToMotionNumber,exitBackwardToFrameNumber\n",local_18);
      _fprintf(file_handle,"%d,%g\n",local_14->exit_backward_to_motion,
                 (double)local_14->exit_backward_to_frame);
      _fprintf(file_handle,"// motion %d transition count, list: desiredState, cmd, toMotionNumber, toFrameNumber, tweenTime, setNewStateAsDesired\n",local_18);
      iVar7 = 0;
      _fprintf(file_handle,"%d\n",local_14->transition_count);
      if (0 < local_14->transition_count) {
        pSVar8 = local_14->transitions;
        do {
          piVar1 = &pSVar8->set_new_state_as_desired;
          pfVar2 = &pSVar8->tween_time;
          pfVar3 = &pSVar8->to_frame_number;
          piVar4 = &pSVar8->to_motion_number;
          pEVar5 = &pSVar8->cmd;
          piVar6 = &pSVar8->desired_state;
          pSVar8 = pSVar8 + 1;
          iVar7 = iVar7 + 1;
          _fprintf(file_handle,"%d,%d,%d,%g,%g,%d\n",*piVar6,*pEVar5,*piVar4,(double)*pfVar3,
                     (double)*pfVar2,*piVar1);
        } while (iVar7 < local_14->transition_count);
      }
      _fprintf(file_handle,"// motion %d signal count, list: frameNumber, value\n",local_18);
      iVar7 = 0;
      _fprintf(file_handle,"%d\n",local_14->signal_count);
      if (0 < local_14->signal_count) {
        do {
          iVar7 = iVar7 + 1;
          _fprintf();
        } while (iVar7 < local_14->signal_count);
      }
      _fprintf(file_handle,"// motion %d marker count, list\n",local_18);
      iVar7 = 0;
      _fprintf(file_handle,"%d",local_14->marker_count);
      pSVar9 = local_14;
      if (0 < local_14->marker_count) {
        do {
          iVar7 = iVar7 + 1;
          _fprintf(file_handle," %d",pSVar9->markers[0]);
          pSVar9 = (SMotion *)(pSVar9->motion_name + 4);
        } while (iVar7 < local_14->marker_count);
      }
      _fprintf(file_handle,"\n");
      local_14 = local_14 + 1;
      local_18 = local_18 + 1;
    } while (local_18 < this_ptr->motion_count);
  }
  return;
}
