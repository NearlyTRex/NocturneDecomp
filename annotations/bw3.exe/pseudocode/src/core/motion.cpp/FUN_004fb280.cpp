// Name: core_motion.cpp_FUN_004fb280
// Address: 004fb280
// Address Range: [[004fb280, 004fb6ad]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_FUN_004fb280(CMotionList *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_motion_cpp_FUN_004fb280(CMotionList *this_ptr,_FILE *file_handle)

{
  SMotion *pSVar1;
  int iVar2;
  SMotionTransition *pSVar3;
  SMotionSignal *pSVar4;
  int iVar5;
  int *piVar6;
  char (*pacVar7) [30];
  int local_28;
  int local_24;
  SMotion *local_20;
  int local_1c;
  SMotionSignal *local_18;
  int local_14;
  
  core_morph_cpp_FUN_004fb210(this_ptr);
  local_24 = -1;
  do {
    iVar2 = _fgetc(file_handle);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  _fscanf(file_handle,&DAT_005c974c,&local_24);
  if (local_24 < 0) {
    _DAT_01d71de0 = "..\\core\\motion.cpp";
    _DAT_01d71de4 = 0x81;
    core_main_c_FUN_004e4330("Error reading motion list.");
  }
  if (3 < local_24) {
    _DAT_01d71de0 = "..\\core\\motion.cpp";
    _DAT_01d71de4 = 0x83;
    core_main_c_FUN_004e4330("Can't read motion list - it's version %d, and I can only handle up to version %d.  (Probably you have an old .exe)",local_24,3);
  }
  do {
    iVar2 = _fgetc(file_handle);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  iVar2 = 0;
  _fscanf(file_handle,&DAT_005c9804,this_ptr);
  if (0 < this_ptr->state_count) {
    pacVar7 = this_ptr->state_names;
    do {
      _fscanf(file_handle,&DAT_005c9808,pacVar7);
      iVar2 = iVar2 + 1;
      pacVar7 = pacVar7 + 1;
    } while (iVar2 < this_ptr->state_count);
  }
  do {
    iVar2 = _fgetc(file_handle);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  _fscanf(file_handle,&DAT_005c980c,&this_ptr->motion_count);
  local_1c = 0;
  if (0 < this_ptr->motion_count) {
    local_20 = this_ptr->motions;
    pSVar1 = local_20;
LAB_004fb383:
    do {
      iVar2 = _fgetc(file_handle);
      if (-1 < iVar2) {
        if (iVar2 != 10) goto LAB_004fb383;
      }
      _fscanf(file_handle,"\"%[^\"]\",%f,%d,%d,%d\n",pSVar1,&pSVar1->fps,&pSVar1->state_index,
                 &pSVar1->frame_start,&pSVar1->frame_count);
      do {
        iVar2 = _fgetc(file_handle);
        if (iVar2 < 0) break;
      } while (iVar2 != 10);
      _fscanf(file_handle,"%d,%d,%f\n",&pSVar1->exit_forward_from_frame,
                 &pSVar1->exit_forward_to_motion,&pSVar1->exit_forward_to_frame);
      do {
        iVar2 = _fgetc(file_handle);
        if (iVar2 < 0) break;
      } while (iVar2 != 10);
      _fscanf(file_handle,"%d,%f,%d\n",&local_28,&pSVar1->exit_forward_tween_time,
                 &pSVar1->exit_forward_set_new_state);
      pSVar1->exit_forward_cmd = local_28;
      do {
        iVar2 = _fgetc(file_handle);
        if (iVar2 < 0) break;
      } while (iVar2 != 10);
      _fscanf(file_handle,"%d,%f\n",&pSVar1->exit_backward_to_motion,
                 &pSVar1->exit_backward_to_frame);
      if (local_24 < 3) {
        pSVar1->frame_step = 1;
        pSVar1->stored_frame_count = pSVar1->frame_count;
      }
      else {
        do {
          iVar2 = _fgetc(file_handle);
          if (iVar2 < 0) break;
        } while (iVar2 != 10);
        _fscanf(file_handle,"%d,%d\n",&pSVar1->frame_step,&pSVar1->stored_frame_count);
      }
      do {
        iVar2 = _fgetc(file_handle);
        if (iVar2 < 0) break;
      } while (iVar2 != 10);
      _fscanf(file_handle,&DAT_005c9847,&pSVar1->transition_count);
      if (0 < pSVar1->transition_count) {
        pSVar3 = (SMotionTransition *)malloc(pSVar1->transition_count * 0x18);
        pSVar1->transitions = pSVar3;
        if (pSVar3 == (SMotionTransition *)0x0) {
          _DAT_01d71de0 = "..\\core\\motion.cpp";
          _DAT_01d71de4 = 0xc0;
          core_main_c_FUN_004e4330("Out of memory");
        }
        local_14 = 0;
        if (0 < pSVar1->transition_count) {
          iVar2 = 0;
          do {
            iVar5 = (int)&pSVar1->transitions->desired_state + iVar2;
            _fscanf(file_handle,"%d,%d,%d,%f,%f,%d\n",iVar5,&local_28,iVar5 + 8,iVar5 + 0xc,
                       iVar5 + 0x10,iVar5 + 0x14);
            *(int *)(iVar5 + 4) = local_28;
            iVar2 = iVar2 + 0x18;
            local_14 = local_14 + 1;
          } while (local_14 < pSVar1->transition_count);
        }
      }
      do {
        iVar2 = _fgetc(file_handle);
        if (iVar2 < 0) break;
      } while (iVar2 != 10);
      iVar2 = 0;
      _fscanf(file_handle,&DAT_005c987f,&pSVar1->signal_count);
      if (0 < pSVar1->signal_count) {
        local_18 = pSVar1->signals;
        piVar6 = &pSVar1->signals[0].value;
        do {
          pSVar4 = local_18 + iVar2;
          iVar2 = iVar2 + 1;
          _fscanf(file_handle,"%d,%d\n",pSVar4,piVar6);
          piVar6 = piVar6 + 2;
        } while (iVar2 < pSVar1->signal_count);
      }
      if (local_24 < 2) {
        pSVar1->marker_count = 0;
      }
      else {
        do {
          iVar2 = _fgetc(file_handle);
          if (iVar2 < 0) break;
        } while (iVar2 != 10);
        iVar2 = 0;
        _fscanf(file_handle,&DAT_005c988a,&pSVar1->marker_count);
        if (0 < pSVar1->marker_count) {
          piVar6 = pSVar1->markers;
          do {
            iVar2 = iVar2 + 1;
            _fscanf(file_handle,&DAT_005c988d,piVar6);
            piVar6 = piVar6 + 1;
          } while (iVar2 < pSVar1->marker_count);
        }
        do {
          iVar2 = _fgetc(file_handle);
          if (iVar2 < 0) break;
        } while (iVar2 != 10);
      }
      local_20 = local_20 + 1;
      local_1c = local_1c + 1;
      pSVar1 = local_20;
    } while (local_1c < this_ptr->motion_count);
  }
  return;
}
