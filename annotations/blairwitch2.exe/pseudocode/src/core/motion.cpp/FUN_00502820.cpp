// Name: core_motion.cpp_FUN_00502820
// Address: 00502820
// Address Range: [[00502820, 00502c14]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_FUN_00502820(CMotionList *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00502bdb) */
/* WARNING: Removing unreachable block (ram,0x00502b16) */
/* WARNING: Removing unreachable block (ram,0x00502b18) */
/* WARNING: Removing unreachable block (ram,0x00502b25) */
/* WARNING: Removing unreachable block (ram,0x00502b2a) */
/* WARNING: Removing unreachable block (ram,0x00502b4b) */
/* WARNING: Removing unreachable block (ram,0x00502b51) */
/* WARNING: Removing unreachable block (ram,0x00502b6e) */
/* WARNING: Removing unreachable block (ram,0x00502b70) */
/* WARNING: Removing unreachable block (ram,0x00502b7d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_motion_cpp_FUN_00502820(CMotionList *this_ptr,_FILE *file_handle)

{
  int iVar1;
  SMotionTransition *pSVar2;
  int local_28;
  SMotion *local_20;
  int local_1c;
  int local_14;
  
  core_moon_cpp_FUN_005027b0(this_ptr);
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(file_handle,&DAT_005df720);
  _DAT_01d046a0 = "..\\core\\motion.cpp";
  _DAT_01d046a4 = 0x80;
  core_main_c_FUN_004e4500("Error reading motion list.");
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(file_handle,&DAT_005df7d8);
  iVar1 = 0;
  if (0 < this_ptr->state_count) {
    do {
      _fscanf(file_handle,&DAT_005df7dc);
      iVar1 = iVar1 + 1;
    } while (iVar1 < this_ptr->state_count);
  }
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(file_handle,&DAT_005df7e0);
  local_1c = 0;
  if (0 < this_ptr->motion_count) {
    local_20 = this_ptr->motions;
LAB_00502933:
    do {
      iVar1 = _fgetc(file_handle);
      if (-1 < iVar1) {
        if (iVar1 != 10) goto LAB_00502933;
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
      do {
        iVar1 = _fgetc(file_handle);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      _fscanf(file_handle,&DAT_005df814);
      if (0 < local_20->transition_count) {
        pSVar2 = (SMotionTransition *)malloc(local_20->transition_count * 0x18);
        local_20->transitions = pSVar2;
        if (pSVar2 == (SMotionTransition *)0x0) {
          _DAT_01d046a0 = "..\\core\\motion.cpp";
          _DAT_01d046a4 = 0xb1;
          core_main_c_FUN_004e4500("Out of memory");
        }
        iVar1 = 0;
        if (0 < local_20->transition_count) {
          local_14 = 0;
          do {
            pSVar2 = local_20->transitions;
            _fscanf(file_handle,"%d,%d,%d,%f,%f,%d\n");
            iVar1 = iVar1 + 1;
            *(int *)((int)&pSVar2->cmd + local_14) = local_28;
            local_14 = local_14 + 0x18;
          } while (iVar1 < local_20->transition_count);
        }
      }
      do {
        iVar1 = _fgetc(file_handle);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      iVar1 = 0;
      _fscanf(file_handle,&DAT_005df84c);
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
