// Name: core_motion.cpp_CMotionList_save_FUN_00523db0
// Address: 00523db0
// Address Range: [[00523db0, 005240be]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionList_save_FUN_00523db0(CMotionList *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionList_save_FUN_00523db0(CMotionList *this_ptr,_FILE *file_handle)

{
  uint *puVar1;
  uint *puVar2;
  float *pfVar3;
  float *pfVar4;
  uint *puVar5;
  uint *puVar6;
  SMotionTransition *pSVar7;
  int iVar8;
  int iVar9;
  SMotion *pSVar10;
  char (*pacVar11) [30];
  int iStack_18;
  SMotion *pSStack_14;
  
  FUN_005c03c0(file_handle,"// motion list version\n");
  FUN_005c03c0(file_handle,0x5eaa97,3);
  FUN_005c03c0(file_handle,"// state list\n");
  FUN_005c03c0(file_handle,0x5eaaaa,this_ptr->state_count);
  iVar8 = 0;
  if (0 < this_ptr->state_count) {
    pacVar11 = this_ptr->state_names;
    do {
      FUN_005c03c0(file_handle,0x5eaaae,pacVar11);
      iVar8 = iVar8 + 1;
      pacVar11 = pacVar11 + 1;
    } while (iVar8 < this_ptr->state_count);
  }
  FUN_005c03c0(file_handle,"// motion count\n");
  FUN_005c03c0(file_handle,0x5eaac3,this_ptr->motion_count);
  iStack_18 = 0;
  if (0 < this_ptr->motion_count) {
    pSStack_14 = this_ptr->motions;
    do {
      FUN_005c03c0(file_handle,"// motion %d: \"name\",fps,state,frameStart,frameCount\n",iStack_18);
      FUN_005c03c0
                (file_handle,"\"%s\",%g,%d,%d,%d\n",pSStack_14,(double)pSStack_14->fps,
                 pSStack_14->state_index,pSStack_14->frame_start,pSStack_14->frame_count);
      FUN_005c03c0(file_handle,"// motion %d: exitForwardFromFrameNumber,exitForwardToMotionNumber,exitForwardToFrameNumber\n",iStack_18);
      FUN_005c03c0
                (file_handle,"%d,%d,%g\n",pSStack_14->exit_forward_from_frame,
                 pSStack_14->exit_forward_to_motion,(double)pSStack_14->exit_forward_to_frame);
      FUN_005c03c0(file_handle,"// motion %d: exitForwardCmd,exitForwardTweenTime,exitForwardsetNewStateAsDesired\n",iStack_18);
      FUN_005c03c0
                (file_handle,"%d,%g,%d\n",pSStack_14->exit_forward_cmd,
                 (double)pSStack_14->exit_forward_tween_time,pSStack_14->exit_forward_set_new_state)
      ;
      FUN_005c03c0(file_handle,"// motion %d: exitBackwardToMotionNumber,exitBackwardToFrameNumber\n",iStack_18);
      FUN_005c03c0
                (file_handle,"%d,%g\n",pSStack_14->exit_backward_to_motion,
                 (double)pSStack_14->exit_backward_to_frame);
      FUN_005c03c0(file_handle,"// motion %d: frameResolution, storedFrameCount\n",iStack_18);
      FUN_005c03c0();
      FUN_005c03c0(file_handle,"// motion %d transition count, list: desiredState, cmd, toMotionNumber, toFrameNumber, tweenTime, setNewStateAsDesired\n",iStack_18);
      iVar8 = 0;
      FUN_005c03c0(file_handle,"%d\n",pSStack_14->transition_count);
      if (0 < pSStack_14->transition_count) {
        iVar9 = 0;
        do {
          pSVar7 = pSStack_14->transitions;
          puVar2 = (uint *)((int)&pSVar7->set_new_state_as_desired + iVar9);
          pfVar3 = (float *)((int)&pSVar7->tween_time + iVar9);
          pfVar4 = (float *)((int)&pSVar7->to_frame_number + iVar9);
          puVar5 = (uint *)((int)&pSVar7->to_motion_number + iVar9);
          puVar6 = (uint *)((int)&pSVar7->cmd + iVar9);
          puVar1 = (uint *)((int)&pSVar7->desired_state + iVar9);
          iVar9 = iVar9 + 0x18;
          iVar8 = iVar8 + 1;
          FUN_005c03c0
                    (file_handle,"%d,%d,%d,%g,%g,%d\n",*puVar1,*puVar6,*puVar5,(double)*pfVar4,
                     (double)*pfVar3,*puVar2);
        } while (iVar8 < pSStack_14->transition_count);
      }
      FUN_005c03c0(file_handle,"// motion %d signal count, list: frameNumber, value\n",iStack_18);
      iVar8 = 0;
      FUN_005c03c0(file_handle,"%d\n",pSStack_14->signal_count);
      if (0 < pSStack_14->signal_count) {
        do {
          iVar8 = iVar8 + 1;
          FUN_005c03c0();
        } while (iVar8 < pSStack_14->signal_count);
      }
      FUN_005c03c0(file_handle,"// motion %d marker count, list\n",iStack_18);
      iVar8 = 0;
      FUN_005c03c0(file_handle,"%d",pSStack_14->marker_count);
      pSVar10 = pSStack_14;
      if (0 < pSStack_14->marker_count) {
        do {
          iVar8 = iVar8 + 1;
          FUN_005c03c0(file_handle," %d",pSVar10->markers[0]);
          pSVar10 = (SMotion *)(pSVar10->motion_name + 4);
        } while (iVar8 < pSStack_14->marker_count);
      }
      FUN_005c03c0(file_handle,"\n");
      pSStack_14 = pSStack_14 + 1;
      iStack_18 = iStack_18 + 1;
    } while (iStack_18 < this_ptr->motion_count);
  }
  return;
}
