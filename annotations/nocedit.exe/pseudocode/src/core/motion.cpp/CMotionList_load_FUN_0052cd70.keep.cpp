// Name: core_motion.cpp_CMotionList_load_FUN_0052cd70
// Address: 0052cd70
// MANUAL RECONSTRUCTION
// Address Range: [[0052cd70, 0052d169]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionList_load_FUN_0052cd70(CMotionList *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionList_load_FUN_0052cd70(CMotionList *this_ptr,_FILE *file_handle)

{
  int iVar2;
  int iVar1;
  SMotionSignal *pSVar3;
  char (*pacVar4) [30];
  int *piVar5;
  EMotionTransitionCmd local_38;
  int local_34;
  SMotionTransition *local_30;
  SMotion *local_2c;
  int local_28;
  SMotionTransition *local_24;
  SMotionSignal *local_20;
  SMotion *pSVar1;
  
  local_34 = -1;
  do {
    iVar2 = _fgetc(file_handle);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  _fscanf(file_handle,"%d\n",&local_34);
  if (local_34 < 0) {
    g_CurrentFilename = "..\\core\\motion.cpp";
    g_CurrentLineNumber = 91;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Error reading motion list.");
  }
  if (2 < local_34) {
    g_CurrentFilename = "..\\core\\motion.cpp";
    g_CurrentLineNumber = 93;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't read motion list - it's version %d, and I can only handle up to version %d.  (Probably you have an old .exe)",local_34,2);
  }
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = 0;
  _fscanf(file_handle,"%d\n",&this_ptr->state_count);
  if (0 < this_ptr->state_count) {
    pacVar4 = this_ptr->state_names;
    do {
      _fscanf(file_handle,"%s\n",(char *)pacVar4);
      iVar1 = iVar1 + 1;
      pacVar4 = pacVar4 + 1;
    } while (iVar1 < this_ptr->state_count);
  }
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(file_handle,"%d\n",&this_ptr->motion_count);
  local_28 = 0;
  if (0 < this_ptr->motion_count) {
    local_2c = this_ptr->motions;
    pSVar1 = local_2c;
LAB_0052ce73:
    do {
      iVar1 = _fgetc(file_handle);
      if (-1 < iVar1) {
        if (iVar1 != 10) goto LAB_0052ce73;
      }
      _fscanf(file_handle,"\"%[^\"]\",%f,%d,%d,%d\n",pSVar1->motion_name,&pSVar1->fps,&pSVar1->state_index,
                 &pSVar1->frame_start,&pSVar1->frame_count);
      do {
        iVar1 = _fgetc(file_handle);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      _fscanf(file_handle,"%d,%d,%f\n",&pSVar1->exit_forward_from_frame,
                 &pSVar1->exit_forward_to_motion,&pSVar1->exit_forward_to_frame);
      do {
        iVar1 = _fgetc(file_handle);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      _fscanf(file_handle,"%d,%f,%d\n",&local_38,&pSVar1->exit_forward_tween_time,
                 &pSVar1->exit_forward_set_new_state);
      pSVar1->exit_forward_cmd = local_38;
      do {
        iVar1 = _fgetc(file_handle);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      _fscanf(file_handle,"%d,%f\n",&pSVar1->exit_backward_to_motion,
                 &pSVar1->exit_backward_to_frame);
      do {
        iVar1 = _fgetc(file_handle);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      iVar1 = 0;
      _fscanf(file_handle,"%d\n",&pSVar1->transition_count);
      if (0 < pSVar1->transition_count) {
        local_24 = pSVar1->transitions;
        do {
          local_30 = local_24 + iVar1;
          _fscanf(file_handle,"%d,%d,%d,%f,%f,%d\n",&local_30->desired_state,&local_38,
                     &local_30->to_motion_number,&local_30->to_frame_number,
                     &local_30->tween_time,&local_30->set_new_state_as_desired);
          iVar1 = iVar1 + 1;
          local_30->cmd = local_38;
        } while (iVar1 < pSVar1->transition_count);
      }
      do {
        iVar1 = _fgetc(file_handle);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      iVar1 = 0;
      _fscanf(file_handle,"%d\n",&pSVar1->signal_count);
      if (0 < pSVar1->signal_count) {
        local_20 = pSVar1->signals;
        do {
          pSVar3 = local_20 + iVar1;
          iVar1 = iVar1 + 1;
          _fscanf(file_handle,"%d,%d\n",&pSVar3->frame_number,&pSVar3->value);
        } while (iVar1 < pSVar1->signal_count);
      }
      if (local_34 < 2) {
        pSVar1->marker_count = 0;
      }
      else {
        do {
          iVar1 = _fgetc(file_handle);
          if (iVar1 < 0) break;
        } while (iVar1 != 10);
        iVar1 = 0;
        _fscanf(file_handle,"%d",&pSVar1->marker_count);
        if (0 < pSVar1->marker_count) {
          piVar5 = pSVar1->markers;
          do {
            iVar1 = iVar1 + 1;
            _fscanf(file_handle,"%d",piVar5);
            piVar5 = piVar5 + 1;
          } while (iVar1 < pSVar1->marker_count);
        }
        do {
          iVar1 = _fgetc(file_handle);
          if (iVar1 < 0) break;
        } while (iVar1 != 10);
      }
      local_2c = local_2c + 1;
      local_28 = local_28 + 1;
      pSVar1 = local_2c;
    } while (local_28 < this_ptr->motion_count);
  }
  return;
}
