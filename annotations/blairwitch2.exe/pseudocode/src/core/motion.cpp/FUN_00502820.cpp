// Name: core_motion.cpp_FUN_00502820
// Address: 00502820
// Address Range: [[00502820, 00502c14]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_FUN_00502820(CMotionList *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_motion_cpp_FUN_00502820(CMotionList *this_ptr,_FILE *file_handle)

{
  SMotion *pSVar1;
  int iVar2;
  SMotionTransition *pSVar3;
  SMotionSignal *pSVar4;
  char (*pacVar5) [30];
  int iVar6;
  int *piVar7;
  int local_28;
  int local_24;
  SMotion *local_20;
  int local_1c;
  SMotionSignal *local_18;
  int local_14;
  
  core_moon_cpp_FUN_005027b0(this_ptr);
  local_24 = -1;
  do {
    iVar2 = _fgetc(file_handle);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  _fscanf(file_handle,&DAT_005df720,&local_24);
  if (local_24 < 0) {
    _DAT_01d046a0 = "..\\core\\motion.cpp";
    _DAT_01d046a4 = 0x80;
    core_main_c_FUN_004e4500("Error reading motion list.");
  }
  if (2 < local_24) {
    _DAT_01d046a0 = "..\\core\\motion.cpp";
    _DAT_01d046a4 = 0x82;
    core_main_c_FUN_004e4500("Can't read motion list - it's version %d, and I can only handle up to version %d.  (Probably you have an old .exe)",local_24,2);
  }
  do {
    iVar2 = _fgetc(file_handle);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  _fscanf(file_handle,&DAT_005df7d8,this_ptr);
  iVar2 = 0;
  if (0 < this_ptr->state_count) {
    pacVar5 = this_ptr->state_names;
    do {
      _fscanf(file_handle,&DAT_005df7dc,pacVar5);
      iVar2 = iVar2 + 1;
      pacVar5 = pacVar5 + 1;
    } while (iVar2 < this_ptr->state_count);
  }
  do {
    iVar2 = _fgetc(file_handle);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  _fscanf(file_handle,&DAT_005df7e0,&this_ptr->motion_count);
  local_1c = 0;
  if (0 < this_ptr->motion_count) {
    local_20 = this_ptr->motions;
    pSVar1 = local_20;
LAB_00502933:
    do {
      iVar2 = _fgetc(file_handle);
      if (-1 < iVar2) {
        if (iVar2 != 10) goto LAB_00502933;
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
      do {
        iVar2 = _fgetc(file_handle);
        if (iVar2 < 0) break;
      } while (iVar2 != 10);
      _fscanf(file_handle,&DAT_005df814,&pSVar1->transition_count);
      if (0 < pSVar1->transition_count) {
        pSVar3 = (SMotionTransition *)malloc(pSVar1->transition_count * 0x18);
        pSVar1->transitions = pSVar3;
        if (pSVar3 == (SMotionTransition *)0x0) {
          _DAT_01d046a0 = "..\\core\\motion.cpp";
          _DAT_01d046a4 = 0xb1;
          core_main_c_FUN_004e4500("Out of memory");
        }
        iVar2 = 0;
        if (0 < pSVar1->transition_count) {
          local_14 = 0;
          do {
            iVar6 = (int)&pSVar1->transitions->desired_state + local_14;
            _fscanf(file_handle,"%d,%d,%d,%f,%f,%d\n",iVar6,&local_28,iVar6 + 8,iVar6 + 0xc,
                       iVar6 + 0x10,iVar6 + 0x14);
            iVar2 = iVar2 + 1;
            *(int *)(iVar6 + 4) = local_28;
            local_14 = local_14 + 0x18;
          } while (iVar2 < pSVar1->transition_count);
        }
      }
      do {
        iVar2 = _fgetc(file_handle);
        if (iVar2 < 0) break;
      } while (iVar2 != 10);
      iVar2 = 0;
      _fscanf(file_handle,&DAT_005df84c,&pSVar1->signal_count);
      if (0 < pSVar1->signal_count) {
        local_18 = pSVar1->signals;
        piVar7 = &pSVar1->signals[0].value;
        do {
          pSVar4 = local_18 + iVar2;
          iVar2 = iVar2 + 1;
          _fscanf(file_handle,"%d,%d\n",pSVar4,piVar7);
          piVar7 = piVar7 + 2;
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
        _fscanf(file_handle,&DAT_005df857,&pSVar1->marker_count);
        if (0 < pSVar1->marker_count) {
          piVar7 = pSVar1->markers;
          do {
            iVar2 = iVar2 + 1;
            _fscanf(file_handle,&DAT_005df85a,piVar7);
            piVar7 = piVar7 + 1;
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
