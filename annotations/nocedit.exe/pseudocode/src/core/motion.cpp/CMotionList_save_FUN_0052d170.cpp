// Name: core_motion.cpp_CMotionList_save_FUN_0052d170
// Address: 0052d170
// Address Range: [[0052d170, 0052d451]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionList_save_FUN_0052d170(CMotionList *this_ptr,FILE *file_handle)

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionList_save_FUN_0052d170(CMotionList *this_ptr,FILE *file_handle)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  SMotionTransition *pSVar8;
  SMotion *pSVar9;
  char (*pacVar10) [30];
  int local_18;
  SMotion *local_14;
  
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"// motion list version\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n",2);
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"// state list\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n",this_ptr->state_count);
  iVar7 = 0;
  if (0 < this_ptr->state_count) {
    pacVar10 = this_ptr->state_names;
    do {
      iVar7 = iVar7 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s\n",pacVar10);
      pacVar10 = pacVar10 + 1;
    } while (iVar7 < this_ptr->state_count);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"// motion count\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n",this_ptr->motion_count);
  local_18 = 0;
  if (0 < this_ptr->motion_count) {
    local_14 = this_ptr->motions;
    do {
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"// motion %d: \"name\",fps,state,frameStart,frameCount\n",local_18);
      crt_stdio_c_fprintf_FUN_005fe6d0
                (file_handle,"\"%s\",%g,%d,%d,%d\n",local_14,(double)local_14->fps,
                 local_14->state_index,local_14->frame_start,local_14->frame_count);
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"// motion %d: exitForwardFromFrameNumber,exitForwardToMotionNumber,exitForwardToFrameNumber\n",local_18);
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d,%d,%g\n");
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"// motion %d: exitForwardCmd,exitForwardTweenTime,exitForwardsetNewStateAsDesired\n",local_18);
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d,%g,%d\n");
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"// motion %d: exitBackwardToMotionNumber,exitBackwardToFrameNumber\n",local_18);
      crt_stdio_c_fprintf_FUN_005fe6d0
                (file_handle,"%d,%g\n",local_14->exit_backward_to_motion,
                 SUB84((double)local_14->exit_backward_to_frame,0),
                 (int)((ulonglong)(double)local_14->exit_backward_to_frame >> 0x20));
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"// motion %d transition count, list: desiredState, cmd, toMotionNumber, toFrameNumber, tweenTime, setNewStateAsDesired\n",local_18);
      iVar7 = 0;
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n",local_14->transition_count);
      if (0 < local_14->transition_count) {
        pSVar8 = local_14->transitions;
        do {
          piVar1 = &pSVar8->set_new_state_as_desired;
          pfVar2 = &pSVar8->tween_time;
          pfVar3 = &pSVar8->to_frame_number;
          piVar4 = &pSVar8->to_motion_number;
          piVar5 = &pSVar8->cmd;
          piVar6 = &pSVar8->desired_state;
          pSVar8 = pSVar8 + 1;
          iVar7 = iVar7 + 1;
          crt_stdio_c_fprintf_FUN_005fe6d0
                    (file_handle,"%d,%d,%d,%g,%g,%d\n",*piVar6,*piVar5,*piVar4,(double)*pfVar3,
                     SUB84((double)*pfVar2,0),(int)((ulonglong)(double)*pfVar2 >> 0x20),*piVar1);
        } while (iVar7 < local_14->transition_count);
      }
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"// motion %d signal count, list: frameNumber, value\n",local_18);
      iVar7 = 0;
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n",local_14->signal_count);
      pSVar9 = local_14;
      if (0 < local_14->signal_count) {
        do {
          iVar7 = iVar7 + 1;
          crt_stdio_c_fprintf_FUN_005fe6d0
                    (file_handle,"%d,%d\n",pSVar9->signals[0].frame_number,
                     pSVar9->signals[0].value);
          pSVar9 = (SMotion *)(pSVar9->motion_name + 8);
        } while (iVar7 < local_14->signal_count);
      }
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"// motion %d marker count, list\n",local_18);
      iVar7 = 0;
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d",local_14->marker_count);
      pSVar9 = local_14;
      if (0 < local_14->marker_count) {
        do {
          iVar7 = iVar7 + 1;
          crt_stdio_c_fprintf_FUN_005fe6d0(file_handle," %d",pSVar9->markers[0]);
          pSVar9 = (SMotion *)(pSVar9->motion_name + 4);
        } while (iVar7 < local_14->marker_count);
      }
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"\n");
      local_14 = local_14 + 1;
      local_18 = local_18 + 1;
    } while (local_18 < this_ptr->motion_count);
  }
  return;
}
