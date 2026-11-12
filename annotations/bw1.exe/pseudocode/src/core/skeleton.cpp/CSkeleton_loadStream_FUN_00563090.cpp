// Name: core_skeleton.cpp_CSkeleton_loadStream_FUN_00563090
// Address: 00563090
// Address Range: [[00563090, 005634e7]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CSkeleton_loadStream_FUN_00563090(CSkeleton *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00563210) */
/* WARNING: Removing unreachable block (ram,0x005633fd) */
/* WARNING: Removing unreachable block (ram,0x00563248) */
/* WARNING: Removing unreachable block (ram,0x0056324c) */
/* WARNING: Removing unreachable block (ram,0x00563259) */
/* WARNING: Removing unreachable block (ram,0x00563374) */
/* WARNING: Removing unreachable block (ram,0x00563378) */
/* WARNING: Removing unreachable block (ram,0x00563385) */
/* WARNING: Removing unreachable block (ram,0x0056338a) */
/* WARNING: Removing unreachable block (ram,0x0056339a) */
/* WARNING: Removing unreachable block (ram,0x0056339e) */
/* WARNING: Removing unreachable block (ram,0x005633ab) */
/* WARNING: Removing unreachable block (ram,0x005633b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CSkeleton_loadStream_FUN_00563090(CSkeleton *this_ptr,_FILE *file_handle)

{
  int iVar1;
  int local_20;
  int local_1c;
  int local_18;
  
  core_skeleton_cpp_FUN_00562f70(this_ptr,1);
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(file_handle,&DAT_005f1b7e);
  _DAT_01d1d400 = "..\\core\\skeleton.cpp";
  _DAT_01d1d404 = 0x119;
  core_main_c_FUN_005030e0("Invalid skeleton version");
  _DAT_01d1d400 = "..\\core\\skeleton.cpp";
  _DAT_01d1d404 = 0x11a;
  core_main_c_FUN_005030e0("Old skeleton version %d not supported",0xffffffff);
  if (0x00000004 < -1) {
    _DAT_01d1d400 = "..\\core\\skeleton.cpp";
    _DAT_01d1d404 = 0x11b;
    core_main_c_FUN_005030e0("Skeleton version %d is newer than .EXE, which can only process up to version %d",0xffffffff,0x00000004);
  }
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(file_handle,"%d,%d\n");
  core_skeleton_cpp_CSkeleton_allocMemory_FUN_00562e60(this_ptr,local_20,local_1c);
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
    _DAT_01d1d400 = "..\\core\\skeleton.cpp";
    _DAT_01d1d404 = 0x159;
    core_main_c_FUN_005030e0("CSkeleton::loadStream - error reading file.");
  }
  core_motion_cpp_CMotionList_load_FUN_00523980(&this_ptr->motion_list,file_handle);
  if ((file_handle->_flag & 0x20) == 0) {
    return;
  }
  _DAT_01d1d400 = "..\\core\\skeleton.cpp";
  _DAT_01d1d404 = 0x174;
  core_main_c_FUN_005030e0("CSkeleton::loadStream - error reading file.");
  return;
}
