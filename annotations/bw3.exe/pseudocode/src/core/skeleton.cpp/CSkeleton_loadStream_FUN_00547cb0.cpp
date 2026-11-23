// Name: core_skeleton.cpp_CSkeleton_loadStream_FUN_00547cb0
// Address: 00547cb0
// Address Range: [[00547cb0, 00548083]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CSkeleton_loadStream_FUN_00547cb0(CSkeleton *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00547fd4) */
/* WARNING: Removing unreachable block (ram,0x00547fd8) */
/* WARNING: Removing unreachable block (ram,0x00547fe5) */
/* WARNING: Removing unreachable block (ram,0x00547fea) */
/* WARNING: Removing unreachable block (ram,0x00547ffa) */
/* WARNING: Removing unreachable block (ram,0x00547ffe) */
/* WARNING: Removing unreachable block (ram,0x0054800b) */
/* WARNING: Removing unreachable block (ram,0x00548010) */

void __cdecl core_skeleton_cpp_CSkeleton_loadStream_FUN_00547cb0(CSkeleton *this_ptr,_FILE *file_handle)

{
  int iVar1;
  int local_20;
  int local_1c;
  int local_18;
  
  core_skeleton_cpp_CSkeleton_free_FUN_00547b90(this_ptr,1);
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(file_handle,"%d\n");
  g_CurrentFilename = "..\\core\\skeleton.cpp";
  g_CurrentLineNumber = 281;
  core_main_c_displayErrorAndQuit_FUN_004e4330("Invalid skeleton version");
  g_CurrentFilename = "..\\core\\skeleton.cpp";
  g_CurrentLineNumber = 282;
  core_main_c_displayErrorAndQuit_FUN_004e4330("Old skeleton version %d not supported");
  if (g_INT_00604170 < -1) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 283;
    core_main_c_displayErrorAndQuit_FUN_004e4330("Skeleton version %d is newer than .EXE, which can only process up to version %d");
  }
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(file_handle,"%d,%d\n");
  core_skeleton_cpp_CSkeleton_allocMemory_FUN_00547a80(this_ptr,local_20,local_1c);
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = 0;
  if (0 < this_ptr->bone_count) {
    do {
      _fscanf(file_handle,"\"%[^\"]\",%d\n");
      iVar1 = iVar1 + 1;
    } while (iVar1 < this_ptr->bone_count);
  }
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  local_18 = 0;
  if (0 < this_ptr->frame_count) {
    do {
      iVar1 = 0;
      if (0 < this_ptr->bone_count) {
        do {
          iVar1 = iVar1 + 1;
          _fscanf(file_handle,"%f,%f,%f,%f\n");
        } while (iVar1 < this_ptr->bone_count);
      }
      local_18 = local_18 + 1;
    } while (local_18 < this_ptr->frame_count);
  }
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = 0;
  if (0 < this_ptr->frame_count) {
    do {
      _fscanf(file_handle,"%f,%f,%f\n");
      iVar1 = iVar1 + 1;
    } while (iVar1 < this_ptr->frame_count);
  }
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = 0;
  if (0 < this_ptr->frame_count) {
    do {
      _fscanf(file_handle,"%f,%f,%f\n");
      iVar1 = iVar1 + 1;
    } while (iVar1 < this_ptr->frame_count);
  }
  if ((file_handle->_flag & 0x20) != 0) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 336;
    core_main_c_displayErrorAndQuit_FUN_004e4330("CSkeleton::loadStream - error reading file.");
  }
  core_motion_cpp_CMotionList_load_FUN_004fb280(&this_ptr->motion_list,file_handle);
  if ((file_handle->_flag & 0x20) == 0) {
    return;
  }
  g_CurrentFilename = "..\\core\\skeleton.cpp";
  g_CurrentLineNumber = 363;
  core_main_c_displayErrorAndQuit_FUN_004e4330("CSkeleton::loadStream - error reading file.");
  return;
}
