// Name: core_motion.cpp_CMotionList_load_FUN_004fb280
// Address: 004fb280
// Address Range: [[004fb280, 004fb6ad]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionList_load_FUN_004fb280(CMotionList *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004fb44c) */
/* WARNING: Removing unreachable block (ram,0x004fb44e) */
/* WARNING: Removing unreachable block (ram,0x004fb45b) */
/* WARNING: Removing unreachable block (ram,0x004fb460) */
/* WARNING: Removing unreachable block (ram,0x004fb662) */
/* WARNING: Removing unreachable block (ram,0x004fb59d) */
/* WARNING: Removing unreachable block (ram,0x004fb59f) */
/* WARNING: Removing unreachable block (ram,0x004fb5ac) */
/* WARNING: Removing unreachable block (ram,0x004fb5b1) */
/* WARNING: Removing unreachable block (ram,0x004fb5d2) */
/* WARNING: Removing unreachable block (ram,0x004fb5d8) */
/* WARNING: Removing unreachable block (ram,0x004fb5f5) */
/* WARNING: Removing unreachable block (ram,0x004fb5f7) */
/* WARNING: Removing unreachable block (ram,0x004fb604) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_motion_cpp_CMotionList_load_FUN_004fb280(CMotionList *this_ptr,_FILE *file_handle)

{
  int iVar1;
  SMotionTransition *pSVar2;
  int local_28;
  SMotion *local_20;
  int local_1c;
  int local_14;
  
  core_morph_cpp_FUN_004fb210(this_ptr);
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(file_handle,&DAT_005c974c);
  _DAT_01d71de0 = "..\\core\\motion.cpp";
  _DAT_01d71de4 = 0x81;
  core_main_c_FUN_004e4330("Error reading motion list.");
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = 0;
  _fscanf(file_handle,&DAT_005c9804);
  if (0 < this_ptr->state_count) {
    do {
      _fscanf(file_handle,&DAT_005c9808);
      iVar1 = iVar1 + 1;
    } while (iVar1 < this_ptr->state_count);
  }
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(file_handle,&DAT_005c980c);
  local_1c = 0;
  if (0 < this_ptr->motion_count) {
    local_20 = this_ptr->motions;
LAB_004fb383:
    do {
      iVar1 = _fgetc(file_handle);
      if (-1 < iVar1) {
        if (iVar1 != 10) goto LAB_004fb383;
      }
      _fscanf(file_handle,"\"%[^\"]\",%f,%d,%d,%d\n");
      do {
        iVar1 = _fgetc(file_handle);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      _fscanf(file_handle,"%d,%d,%f\n");
      do {
        iVar1 = _fgetc(file_handle);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      _fscanf(file_handle,"%d,%f,%d\n");
      local_20->exit_forward_cmd = local_28;
      do {
        iVar1 = _fgetc(file_handle);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      _fscanf(file_handle,"%d,%f\n");
      local_20->frame_step = 1;
      local_20->stored_frame_count = local_20->frame_count;
      do {
        iVar1 = _fgetc(file_handle);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      _fscanf(file_handle,&DAT_005c9847);
      if (0 < local_20->transition_count) {
        pSVar2 = (SMotionTransition *)malloc(local_20->transition_count * 0x18);
        local_20->transitions = pSVar2;
        if (pSVar2 == (SMotionTransition *)0x0) {
          _DAT_01d71de0 = "..\\core\\motion.cpp";
          _DAT_01d71de4 = 0xc0;
          core_main_c_FUN_004e4330("Out of memory");
        }
        local_14 = 0;
        if (0 < local_20->transition_count) {
          iVar1 = 0;
          do {
            pSVar2 = local_20->transitions;
            _fscanf(file_handle,"%d,%d,%d,%f,%f,%d\n");
            *(int *)((int)&pSVar2->cmd + iVar1) = local_28;
            iVar1 = iVar1 + 0x18;
            local_14 = local_14 + 1;
          } while (local_14 < local_20->transition_count);
        }
      }
      do {
        iVar1 = _fgetc(file_handle);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      iVar1 = 0;
      _fscanf(file_handle,&DAT_005c987f);
      if (0 < local_20->signal_count) {
        do {
          iVar1 = iVar1 + 1;
          _fscanf(file_handle,"%d,%d\n");
        } while (iVar1 < local_20->signal_count);
      }
      local_20->marker_count = 0;
      local_20 = local_20 + 1;
      local_1c = local_1c + 1;
    } while (local_1c < this_ptr->motion_count);
  }
  return;
}
