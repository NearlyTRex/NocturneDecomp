// Name: core_skeleton.cpp_CSkeleton_loadStream_FUN_00563090
// Address: 00563090
// Address Range: [[00563090, 005634e7]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CSkeleton_loadStream_FUN_00563090(CSkeleton *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CSkeleton_loadStream_FUN_00563090(CSkeleton *this_ptr,_FILE *file_handle)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *puVar4;
  int iVar5;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  core_skeleton_cpp_FUN_00562f70(this_ptr,1);
  local_24 = -1;
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(file_handle,&DAT_005f1b7e,&local_24);
  if (local_24 < 1) {
    _DAT_01d1d400 = "..\\core\\skeleton.cpp";
    _DAT_01d1d404 = 0x119;
    core_main_c_FUN_005030e0("Invalid skeleton version");
  }
  if (local_24 < 2) {
    _DAT_01d1d400 = "..\\core\\skeleton.cpp";
    _DAT_01d1d404 = 0x11a;
    core_main_c_FUN_005030e0("Old skeleton version %d not supported",local_24);
  }
  if (0x00000004 < local_24) {
    _DAT_01d1d400 = "..\\core\\skeleton.cpp";
    _DAT_01d1d404 = 0x11b;
    core_main_c_FUN_005030e0("Skeleton version %d is newer than .EXE, which can only process up to version %d",local_24,0x00000004);
  }
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(file_handle,"%d,%d\n",&local_20,&local_1c);
  core_skeleton_cpp_CSkeleton_allocMemory_FUN_00562e60(this_ptr,local_20,local_1c);
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = 0;
  if (0 < *(int *)&this_ptr->field_0x1de78) {
    puVar4 = &this_ptr->field_0x1de9c;
    do {
      _fscanf(file_handle,"\"%[^\"]\",%d\n",&this_ptr->field_0x1de7c + iVar1 * 0x24,puVar4);
      iVar1 = iVar1 + 1;
      puVar4 = puVar4 + 0x24;
    } while (iVar1 < *(int *)&this_ptr->field_0x1de78);
  }
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  if (local_24 < 4) {
    local_18 = 0;
    iVar1 = *(int *)&this_ptr->field_0x1ec90;
    if (0 < *(int *)&this_ptr->field_0x1ec8c) {
      do {
        iVar3 = 0;
        if (0 < *(int *)&this_ptr->field_0x1de78) {
          iVar2 = iVar1 + 4;
          local_14 = iVar1 + 8;
          iVar5 = iVar1 + 0xc;
          do {
            iVar3 = iVar3 + 1;
            _fscanf(file_handle,"%f,%f,%f,%f\n",iVar1,iVar2,local_14,iVar5);
            iVar2 = iVar2 + 0x10;
            iVar1 = iVar1 + 0x10;
            local_14 = local_14 + 0x10;
            iVar5 = iVar5 + 0x10;
          } while (iVar3 < *(int *)&this_ptr->field_0x1de78);
        }
        local_18 = local_18 + 1;
      } while (local_18 < *(int *)&this_ptr->field_0x1ec8c);
    }
  }
  else {
    iVar1 = _fread(*(uint *)&this_ptr->field_0x1ec90,
                       *(int *)&this_ptr->field_0x1ec8c * *(int *)&this_ptr->field_0x1de78 * 0x10,1,
                       file_handle);
    if (iVar1 != 1) {
      _DAT_01d1d400 = "..\\core\\skeleton.cpp";
      _DAT_01d1d404 = 0x137;
      core_main_c_FUN_005030e0("Skeleton file corrupt");
    }
    do {
      iVar1 = _fgetc(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
  }
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = 0;
  if (0 < *(int *)&this_ptr->field_0x1ec8c) {
    iVar3 = 0;
    do {
      iVar2 = *(int *)&this_ptr->field_0x1ec94 + iVar3;
      _fscanf(file_handle,"%f,%f,%f\n",iVar2,iVar2 + 4,iVar2 + 8);
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar1 < *(int *)&this_ptr->field_0x1ec8c);
  }
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = 0;
  if (0 < *(int *)&this_ptr->field_0x1ec8c) {
    iVar3 = 0;
    do {
      iVar2 = *(int *)&this_ptr->field_0x1ec98 + iVar3;
      _fscanf(file_handle,"%f,%f,%f\n",iVar2,iVar2 + 4,iVar2 + 8);
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar1 < *(int *)&this_ptr->field_0x1ec8c);
  }
  if (((byte)file_handle[0xc] & 0x20) != 0) {
    _DAT_01d1d400 = "..\\core\\skeleton.cpp";
    _DAT_01d1d404 = 0x159;
    core_main_c_FUN_005030e0("CSkeleton::loadStream - error reading file.");
  }
  core_motion_cpp_FUN_00523980(this_ptr,file_handle);
  if (2 < local_24) {
    do {
      iVar1 = _fgetc(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    iVar1 = 0;
    if (0 < *(int *)&this_ptr->field_0x1de78) {
LAB_0056339e:
      do {
        iVar3 = _fgetc(file_handle);
        if (-1 < iVar3) {
          if (iVar3 != 10) goto LAB_0056339e;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)&this_ptr->field_0x1de78);
    }
  }
  if (((byte)file_handle[0xc] & 0x20) != 0) {
    _DAT_01d1d400 = "..\\core\\skeleton.cpp";
    _DAT_01d1d404 = 0x174;
    core_main_c_FUN_005030e0("CSkeleton::loadStream - error reading file.");
    return;
  }
  return;
}
