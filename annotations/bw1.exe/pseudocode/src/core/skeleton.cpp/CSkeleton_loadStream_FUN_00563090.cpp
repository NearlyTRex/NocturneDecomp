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
  CQuaternion4f *pCVar4;
  SBone *pSVar5;
  float *pfVar6;
  float *pfVar7;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  float *local_14;
  
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
  if (0 < this_ptr->bone_count) {
    pSVar5 = this_ptr->bone_list + 0x20;
    do {
      _fscanf(file_handle,"\"%[^\"]\",%d\n",this_ptr->bone_list + iVar1 * 0x24,pSVar5);
      iVar1 = iVar1 + 1;
      pSVar5 = pSVar5 + 0x24;
    } while (iVar1 < this_ptr->bone_count);
  }
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  if (local_24 < 4) {
    local_18 = 0;
    pCVar4 = this_ptr->bone_angle_frames;
    if (0 < this_ptr->frame_count) {
      do {
        iVar1 = 0;
        if (0 < this_ptr->bone_count) {
          pfVar7 = &pCVar4->x;
          local_14 = &pCVar4->y;
          pfVar6 = &pCVar4->z;
          do {
            iVar1 = iVar1 + 1;
            _fscanf(file_handle,"%f,%f,%f,%f\n",pCVar4,pfVar7,local_14,pfVar6);
            pfVar7 = pfVar7 + 4;
            pCVar4 = pCVar4 + 1;
            local_14 = local_14 + 4;
            pfVar6 = pfVar6 + 4;
          } while (iVar1 < this_ptr->bone_count);
        }
        local_18 = local_18 + 1;
      } while (local_18 < this_ptr->frame_count);
    }
  }
  else {
    iVar1 = _fread(this_ptr->bone_angle_frames,
                       this_ptr->frame_count * this_ptr->bone_count * 0x10,1,file_handle);
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
  if (0 < this_ptr->frame_count) {
    iVar3 = 0;
    do {
      iVar2 = *(int *)&this_ptr->field_0x1ec94 + iVar3;
      _fscanf(file_handle,"%f,%f,%f\n",iVar2,iVar2 + 4,iVar2 + 8);
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar1 < this_ptr->frame_count);
  }
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = 0;
  if (0 < this_ptr->frame_count) {
    iVar3 = 0;
    do {
      iVar2 = *(int *)&this_ptr->field_0x1ec98 + iVar3;
      _fscanf(file_handle,"%f,%f,%f\n",iVar2,iVar2 + 4,iVar2 + 8);
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar1 < this_ptr->frame_count);
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
    if (0 < this_ptr->bone_count) {
LAB_0056339e:
      do {
        iVar3 = _fgetc(file_handle);
        if (-1 < iVar3) {
          if (iVar3 != 10) goto LAB_0056339e;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < this_ptr->bone_count);
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
