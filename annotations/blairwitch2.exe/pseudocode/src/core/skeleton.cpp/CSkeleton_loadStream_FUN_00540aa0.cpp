// Name: core_skeleton.cpp_CSkeleton_loadStream_FUN_00540aa0
// Address: 00540aa0
// Address Range: [[00540aa0, 00540e73]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CSkeleton_loadStream_FUN_00540aa0(CSkeleton *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00540dc4) */
/* WARNING: Removing unreachable block (ram,0x00540dc8) */
/* WARNING: Removing unreachable block (ram,0x00540dd5) */
/* WARNING: Removing unreachable block (ram,0x00540dda) */
/* WARNING: Removing unreachable block (ram,0x00540dea) */
/* WARNING: Removing unreachable block (ram,0x00540dee) */
/* WARNING: Removing unreachable block (ram,0x00540dfb) */
/* WARNING: Removing unreachable block (ram,0x00540e00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CSkeleton_loadStream_FUN_00540aa0(CSkeleton *this_ptr,_FILE *file_handle)

{
  int iVar1;
  int local_20;
  int local_1c;
  int local_18;
  
  core_skeleton_cpp_CSkeleton_free_FUN_00540980(this_ptr,1);
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(file_handle,&DAT_005e69ac);
  _DAT_01d046a0 = "..\\core\\skeleton.cpp";
  _DAT_01d046a4 = 0x118;
  core_main_c_FUN_004e4500("Invalid skeleton version");
  _DAT_01d046a0 = "..\\core\\skeleton.cpp";
  _DAT_01d046a4 = 0x119;
  core_main_c_FUN_004e4500("Old skeleton version %d not supported",0xffffffff);
  if (0x00000003 < -1) {
    _DAT_01d046a0 = "..\\core\\skeleton.cpp";
    _DAT_01d046a4 = 0x11a;
    core_main_c_FUN_004e4500("Skeleton version %d is newer than .EXE, which can only process up to version %d",0xffffffff,0x00000003);
  }
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(file_handle,"%d,%d\n");
  core_skeleton_cpp_CSkeleton_allocMemory_FUN_00540870(this_ptr,local_20,local_1c);
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
    _DAT_01d046a0 = "..\\core\\skeleton.cpp";
    _DAT_01d046a4 = 0x14f;
    core_main_c_FUN_004e4500("CSkeleton::loadStream - error reading file.");
  }
  core_motion_cpp_FUN_00502820(&this_ptr->motion_list,file_handle);
  if ((file_handle->_flag & 0x20) == 0) {
    return;
  }
  _DAT_01d046a0 = "..\\core\\skeleton.cpp";
  _DAT_01d046a4 = 0x16a;
  core_main_c_FUN_004e4500("CSkeleton::loadStream - error reading file.");
  return;
}
