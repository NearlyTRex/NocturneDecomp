// Name: core_skeleton.cpp_CSkeleton_loadStream_FUN_005175f0
// Address: 005175f0
// Address Range: [[005175f0, 005179c3]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CSkeleton_loadStream_FUN_005175f0(CSkeleton *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00517914) */
/* WARNING: Removing unreachable block (ram,0x00517918) */
/* WARNING: Removing unreachable block (ram,0x00517925) */
/* WARNING: Removing unreachable block (ram,0x0051792a) */
/* WARNING: Removing unreachable block (ram,0x0051793a) */
/* WARNING: Removing unreachable block (ram,0x0051793e) */
/* WARNING: Removing unreachable block (ram,0x0051794b) */
/* WARNING: Removing unreachable block (ram,0x00517950) */

void __cdecl core_skeleton_cpp_CSkeleton_loadStream_FUN_005175f0(CSkeleton *this_ptr,_FILE *file_handle)

{
  int iVar1;
  int local_20;
  int local_1c;
  int local_18;
  
  core_skeleton_cpp_FUN_005174e0(this_ptr);
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(file_handle,"%d\n");
  PTR_01cc4800 = "..\\core\\skeleton.cpp";
  INT_01cc4804 = 0x10d;
  core_main_c_FUN_004c8440("Invalid skeleton version");
  PTR_01cc4800 = "..\\core\\skeleton.cpp";
  INT_01cc4804 = 0x10e;
  core_main_c_FUN_004c8440("Old skeleton version %d not supported",0xffffffff);
  if (0x00000003 < -1) {
    PTR_01cc4800 = "..\\core\\skeleton.cpp";
    INT_01cc4804 = 0x10f;
    core_main_c_FUN_004c8440("Skeleton version %d is newer than .EXE, which can only process up to version %d",0xffffffff,0x00000003);
  }
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(file_handle,"%d,%d\n");
  core_skeleton_cpp_CSkeleton_allocMemory_FUN_005173c0(this_ptr,local_20,local_1c);
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
    PTR_01cc4800 = "..\\core\\skeleton.cpp";
    INT_01cc4804 = 0x144;
    core_main_c_FUN_004c8440("CSkeleton::loadStream - error reading file.");
  }
  core_motion_cpp_CMotionList_load_FUN_004e0920(&this_ptr->motion_list,file_handle);
  if ((file_handle->_flag & 0x20) == 0) {
    return;
  }
  PTR_01cc4800 = "..\\core\\skeleton.cpp";
  INT_01cc4804 = 0x15f;
  core_main_c_FUN_004c8440("CSkeleton::loadStream - error reading file.");
  return;
}
