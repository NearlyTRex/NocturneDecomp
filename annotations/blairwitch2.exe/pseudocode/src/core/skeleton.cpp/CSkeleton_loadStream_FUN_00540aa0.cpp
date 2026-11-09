// Name: core_skeleton.cpp_CSkeleton_loadStream_FUN_00540aa0
// Address: 00540aa0
// Address Range: [[00540aa0, 00540e73]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CSkeleton_loadStream_FUN_00540aa0(CSkeleton *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CSkeleton_loadStream_FUN_00540aa0(CSkeleton *this_ptr,_FILE *file_handle)

{
  int iVar1;
  int iVar2;
  byte *puVar3;
  int iVar4;
  int iVar5;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  core_skeleton_cpp_FUN_00540980(this_ptr,1);
  local_24 = -1;
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(file_handle,&DAT_005e69ac,&local_24);
  if (local_24 < 1) {
    _DAT_01d046a0 = "..\\core\\skeleton.cpp";
    _DAT_01d046a4 = 0x118;
    core_main_c_FUN_004e4500("Invalid skeleton version");
  }
  if (local_24 < 2) {
    _DAT_01d046a0 = "..\\core\\skeleton.cpp";
    _DAT_01d046a4 = 0x119;
    core_main_c_FUN_004e4500("Old skeleton version %d not supported",local_24);
  }
  if (0x00000003 < local_24) {
    _DAT_01d046a0 = "..\\core\\skeleton.cpp";
    _DAT_01d046a4 = 0x11a;
    core_main_c_FUN_004e4500("Skeleton version %d is newer than .EXE, which can only process up to version %d",local_24,0x00000003);
  }
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(file_handle,"%d,%d\n",&local_20,&local_1c);
  core_skeleton_cpp_CSkeleton_allocMemory_FUN_00540870(this_ptr,local_20,local_1c);
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = 0;
  if (0 < *(int *)&this_ptr->field_0x1d1f8) {
    puVar3 = &this_ptr->field_0x1d21c;
    do {
      _fscanf(file_handle,"\"%[^\"]\",%d\n",&this_ptr->field_0x1d1fc + iVar1 * 0x24,puVar3);
      iVar1 = iVar1 + 1;
      puVar3 = puVar3 + 0x24;
    } while (iVar1 < *(int *)&this_ptr->field_0x1d1f8);
  }
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  local_18 = 0;
  iVar1 = *(int *)&this_ptr->field_0x1e010;
  if (0 < *(int *)&this_ptr->field_0x1e00c) {
    do {
      iVar5 = 0;
      if (0 < *(int *)&this_ptr->field_0x1d1f8) {
        local_14 = iVar1 + 4;
        iVar4 = iVar1 + 8;
        iVar2 = iVar1 + 0xc;
        do {
          iVar5 = iVar5 + 1;
          _fscanf(file_handle,"%f,%f,%f,%f\n",iVar1,local_14,iVar4,iVar2)
          ;
          iVar4 = iVar4 + 0x10;
          iVar1 = iVar1 + 0x10;
          local_14 = local_14 + 0x10;
          iVar2 = iVar2 + 0x10;
        } while (iVar5 < *(int *)&this_ptr->field_0x1d1f8);
      }
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)&this_ptr->field_0x1e00c);
  }
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = 0;
  if (0 < *(int *)&this_ptr->field_0x1e00c) {
    iVar5 = 0;
    do {
      iVar4 = *(int *)&this_ptr->field_0x1e014 + iVar5;
      _fscanf(file_handle,"%f,%f,%f\n",iVar4,iVar4 + 4,iVar4 + 8);
      iVar1 = iVar1 + 1;
      iVar5 = iVar5 + 0xc;
    } while (iVar1 < *(int *)&this_ptr->field_0x1e00c);
  }
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = 0;
  if (0 < *(int *)&this_ptr->field_0x1e00c) {
    iVar5 = 0;
    do {
      iVar4 = *(int *)&this_ptr->field_0x1e018 + iVar5;
      _fscanf(file_handle,"%f,%f,%f\n",iVar4,iVar4 + 4,iVar4 + 8);
      iVar1 = iVar1 + 1;
      iVar5 = iVar5 + 0xc;
    } while (iVar1 < *(int *)&this_ptr->field_0x1e00c);
  }
  if (((byte)file_handle[0xc] & 0x20) != 0) {
    _DAT_01d046a0 = "..\\core\\skeleton.cpp";
    _DAT_01d046a4 = 0x14f;
    core_main_c_FUN_004e4500("CSkeleton::loadStream - error reading file.");
  }
  core_motion_cpp_FUN_00502820((CMotionList *)this_ptr,file_handle);
  if (2 < local_24) {
    do {
      iVar1 = _fgetc(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    iVar1 = 0;
    if (0 < *(int *)&this_ptr->field_0x1d1f8) {
LAB_00540dee:
      do {
        iVar5 = _fgetc(file_handle);
        if (-1 < iVar5) {
          if (iVar5 != 10) goto LAB_00540dee;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)&this_ptr->field_0x1d1f8);
    }
  }
  if (((byte)file_handle[0xc] & 0x20) != 0) {
    _DAT_01d046a0 = "..\\core\\skeleton.cpp";
    _DAT_01d046a4 = 0x16a;
    core_main_c_FUN_004e4500("CSkeleton::loadStream - error reading file.");
    return;
  }
  return;
}
