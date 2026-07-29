// Name: core_motion.cpp_CMotionList_load_FUN_004e0920
// Address: 004e0920
// Address Range: [[004e0920, 004e0d19]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionList_load_FUN_004e0920(CMotionList *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004e0ce1) */
/* WARNING: Removing unreachable block (ram,0x004e0c1c) */
/* WARNING: Removing unreachable block (ram,0x004e0c1e) */
/* WARNING: Removing unreachable block (ram,0x004e0c2b) */
/* WARNING: Removing unreachable block (ram,0x004e0c30) */
/* WARNING: Removing unreachable block (ram,0x004e0c51) */
/* WARNING: Removing unreachable block (ram,0x004e0c57) */
/* WARNING: Removing unreachable block (ram,0x004e0c74) */
/* WARNING: Removing unreachable block (ram,0x004e0c76) */
/* WARNING: Removing unreachable block (ram,0x004e0c83) */

void __cdecl core_motion_cpp_CMotionList_load_FUN_004e0920(CMotionList *this_ptr,_FILE *file_handle)

{
  int iVar1;
  int iVar2;
  EMotionTransitionCmd local_38;
  SMotion *local_2c;
  int local_28;
  
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(file_handle,"%d\n");
  PTR_01cc4800 = "..\\core\\motion.cpp";
  INT_01cc4804 = 0x5b;
  core_main_c_FUN_004c8440("Error reading motion list.");
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = 0;
  _fscanf(file_handle,"%d\n");
  if (0 < this_ptr->state_count) {
    do {
      _fscanf(file_handle,"%s\n");
      iVar1 = iVar1 + 1;
    } while (iVar1 < this_ptr->state_count);
  }
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(file_handle,"%d\n");
  local_28 = 0;
  if (0 < this_ptr->motion_count) {
    local_2c = this_ptr->motions;
LAB_004e0a23:
    do {
      iVar1 = _fgetc(file_handle);
      if (-1 < iVar1) {
        if (iVar1 != 10) goto LAB_004e0a23;
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
      local_2c->exit_forward_cmd = local_38;
      do {
        iVar1 = _fgetc(file_handle);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      _fscanf(file_handle,"%d,%f\n");
      do {
        iVar1 = _fgetc(file_handle);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      iVar1 = 0;
      _fscanf(file_handle,"%d\n");
      if (0 < local_2c->transition_count) {
        do {
          _fscanf(file_handle,"%d,%d,%d,%f,%f,%d\n");
          iVar2 = iVar1 + 1;
          local_2c->transitions[iVar1].cmd = local_38;
          iVar1 = iVar2;
        } while (iVar2 < local_2c->transition_count);
      }
      do {
        iVar1 = _fgetc(file_handle);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      iVar1 = 0;
      _fscanf(file_handle,"%d\n");
      if (0 < local_2c->signal_count) {
        do {
          iVar1 = iVar1 + 1;
          _fscanf(file_handle,"%d,%d\n");
        } while (iVar1 < local_2c->signal_count);
      }
      local_2c->marker_count = 0;
      local_2c = local_2c + 1;
      local_28 = local_28 + 1;
    } while (local_28 < this_ptr->motion_count);
  }
  return;
}
