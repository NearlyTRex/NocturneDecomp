// Name: core_motion.cpp_CMotionList_save_FUN_00502c20
// Address: 00502c20
// Address Range: [[00502c20, 00502f03]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionList_save_FUN_00502c20(CMotionList *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionList_save_FUN_00502c20(CMotionList *this_ptr,_FILE *file_handle)

{
  uint *puVar1;
  uint *puVar2;
  float *pfVar3;
  float *pfVar4;
  uint *puVar5;
  uint *puVar6;
  SMotionTransition *pSVar7;
  int iVar8;
  char (*pacVar9) [30];
  int iVar10;
  SMotion *pSVar11;
  int iStack_18;
  SMotion *pSStack_14;
  
  FUN_005b8010(file_handle,"// motion list version\n");
  FUN_005b8010(file_handle,0x5df875,2);
  FUN_005b8010(file_handle,"// state list\n");
  FUN_005b8010(file_handle,0x5df888,this_ptr->state_count);
  iVar8 = 0;
  if (0 < this_ptr->state_count) {
    pacVar9 = this_ptr->state_names;
    do {
      FUN_005b8010(file_handle,0x5df88c,pacVar9);
      iVar8 = iVar8 + 1;
      pacVar9 = pacVar9 + 1;
    } while (iVar8 < this_ptr->state_count);
  }
  FUN_005b8010(file_handle,"// motion count\n");
  FUN_005b8010(file_handle,0x5df8a1,this_ptr->motion_count);
  iStack_18 = 0;
  if (0 < this_ptr->motion_count) {
    pSStack_14 = this_ptr->motions;
    do {
      FUN_005b8010(file_handle,"// motion %d: \"name\",fps,state,frameStart,frameCount\n",iStack_18);
      FUN_005b8010
                (file_handle,0x5df8db,pSStack_14,(double)pSStack_14->fps,pSStack_14->state_index,
                 pSStack_14->frame_start,pSStack_14->frame_count);
      FUN_005b8010(file_handle,"// motion %d: exitForwardFromFrameNumber,exitForwardToMotionNumber,exitForwardToFrameNumber\n",iStack_18);
      FUN_005b8010
                (file_handle,0x5df94a,pSStack_14->exit_forward_from_frame,
                 pSStack_14->exit_forward_to_motion,(double)pSStack_14->exit_forward_to_frame);
      FUN_005b8010(file_handle,"// motion %d: exitForwardCmd,exitForwardTweenTime,exitForwardsetNewStateAsDesired\n",iStack_18);
      FUN_005b8010
                (file_handle,0x5df9a7,pSStack_14->exit_forward_cmd,
                 (double)pSStack_14->exit_forward_tween_time,pSStack_14->exit_forward_set_new_state)
      ;
      FUN_005b8010(file_handle,"// motion %d: exitBackwardToMotionNumber,exitBackwardToFrameNumber\n",iStack_18);
      FUN_005b8010
                (file_handle,0x5df9f5,pSStack_14->exit_backward_to_motion,
                 (double)pSStack_14->exit_backward_to_frame);
      FUN_005b8010(file_handle,"// motion %d transition count, list: desiredState, cmd, toMotionNumber, toFrameNumber, tweenTime, setNewStateAsDesired\n",iStack_18);
      iVar8 = 0;
      FUN_005b8010(file_handle,0x5dfa74,pSStack_14->transition_count);
      if (0 < pSStack_14->transition_count) {
        iVar10 = 0;
        do {
          pSVar7 = pSStack_14->transitions;
          puVar2 = (uint *)((int)&pSVar7->set_new_state_as_desired + iVar10);
          pfVar3 = (float *)((int)&pSVar7->tween_time + iVar10);
          pfVar4 = (float *)((int)&pSVar7->to_frame_number + iVar10);
          puVar5 = (uint *)((int)&pSVar7->to_motion_number + iVar10);
          puVar6 = (uint *)((int)&pSVar7->cmd + iVar10);
          puVar1 = (uint *)((int)&pSVar7->desired_state + iVar10);
          iVar10 = iVar10 + 0x18;
          iVar8 = iVar8 + 1;
          FUN_005b8010
                    (file_handle,"%d,%d,%d,%g,%g,%d\n",*puVar1,*puVar6,*puVar5,(double)*pfVar4,
                     (double)*pfVar3,*puVar2);
        } while (iVar8 < pSStack_14->transition_count);
      }
      FUN_005b8010(file_handle,"// motion %d signal count, list: frameNumber, value\n",iStack_18);
      iVar8 = 0;
      FUN_005b8010(file_handle,0x5dfac0,pSStack_14->signal_count);
      if (0 < pSStack_14->signal_count) {
        do {
          iVar8 = iVar8 + 1;
          FUN_005b8010();
        } while (iVar8 < pSStack_14->signal_count);
      }
      FUN_005b8010(file_handle,"// motion %d marker count, list\n",iStack_18);
      iVar8 = 0;
      FUN_005b8010(file_handle,0x5dfaec,pSStack_14->marker_count);
      pSVar11 = pSStack_14;
      if (0 < pSStack_14->marker_count) {
        do {
          iVar8 = iVar8 + 1;
          FUN_005b8010(file_handle,0x5dfaef,pSVar11->markers[0]);
          pSVar11 = (SMotion *)(pSVar11->motion_name + 4);
        } while (iVar8 < pSStack_14->marker_count);
      }
      FUN_005b8010(file_handle,0x5dfaf3);
      pSStack_14 = pSStack_14 + 1;
      iStack_18 = iStack_18 + 1;
    } while (iStack_18 < this_ptr->motion_count);
  }
  return;
}
