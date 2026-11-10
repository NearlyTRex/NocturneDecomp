// Name: core_skeleton.cpp_CSkeleton_loadStream_FUN_00547cb0
// Address: 00547cb0
// Address Range: [[00547cb0, 00548083]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CSkeleton_loadStream_FUN_00547cb0(CSkeleton *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CSkeleton_loadStream_FUN_00547cb0(CSkeleton *this_ptr,_FILE *file_handle)

{
  int iVar1;
  int iVar2;
  CQuaternion4f *pCVar3;
  float *pfVar4;
  SBone *pSVar5;
  float *pfVar6;
  int iVar7;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  float *local_14;
  
  core_skeleton_cpp_FUN_00547b90(this_ptr,1);
  local_24 = -1;
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(file_handle,&DAT_005d16a9,&local_24);
  if (local_24 < 1) {
    _DAT_01d71de0 = "..\\core\\skeleton.cpp";
    _DAT_01d71de4 = 0x119;
    core_main_c_FUN_004e4330("Invalid skeleton version");
  }
  if (local_24 < 2) {
    _DAT_01d71de0 = "..\\core\\skeleton.cpp";
    _DAT_01d71de4 = 0x11a;
    core_main_c_FUN_004e4330("Old skeleton version %d not supported",local_24);
  }
  if (0x00000003 < local_24) {
    _DAT_01d71de0 = "..\\core\\skeleton.cpp";
    _DAT_01d71de4 = 0x11b;
    core_main_c_FUN_004e4330("Skeleton version %d is newer than .EXE, which can only process up to version %d",local_24,0x00000003);
  }
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(file_handle,"%d,%d\n",&local_20,&local_1c);
  core_skeleton_cpp_CSkeleton_allocMemory_FUN_00547a80(this_ptr,local_20,local_1c);
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
  local_18 = 0;
  pCVar3 = this_ptr->bone_angle_frames;
  if (0 < this_ptr->frame_count) {
    do {
      iVar1 = 0;
      if (0 < this_ptr->bone_count) {
        local_14 = &pCVar3->x;
        pfVar6 = &pCVar3->y;
        pfVar4 = &pCVar3->z;
        do {
          iVar1 = iVar1 + 1;
          _fscanf(file_handle,"%f,%f,%f,%f\n",pCVar3,local_14,pfVar6,pfVar4);
          pfVar6 = pfVar6 + 4;
          pCVar3 = pCVar3 + 1;
          local_14 = local_14 + 4;
          pfVar4 = pfVar4 + 4;
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
    iVar7 = 0;
    do {
      iVar2 = *(int *)&this_ptr->field_0x1ec94 + iVar7;
      _fscanf(file_handle,"%f,%f,%f\n",iVar2,iVar2 + 4,iVar2 + 8);
      iVar1 = iVar1 + 1;
      iVar7 = iVar7 + 0xc;
    } while (iVar1 < this_ptr->frame_count);
  }
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = 0;
  if (0 < this_ptr->frame_count) {
    iVar7 = 0;
    do {
      iVar2 = *(int *)&this_ptr->field_0x1ec98 + iVar7;
      _fscanf(file_handle,"%f,%f,%f\n",iVar2,iVar2 + 4,iVar2 + 8);
      iVar1 = iVar1 + 1;
      iVar7 = iVar7 + 0xc;
    } while (iVar1 < this_ptr->frame_count);
  }
  if (((byte)file_handle[0xc] & 0x20) != 0) {
    _DAT_01d71de0 = "..\\core\\skeleton.cpp";
    _DAT_01d71de4 = 0x150;
    core_main_c_FUN_004e4330("CSkeleton::loadStream - error reading file.");
  }
  core_motion_cpp_FUN_004fb280((CMotionList *)this_ptr,file_handle);
  if (2 < local_24) {
    do {
      iVar1 = _fgetc(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    iVar1 = 0;
    if (0 < this_ptr->bone_count) {
LAB_00547ffe:
      do {
        iVar7 = _fgetc(file_handle);
        if (-1 < iVar7) {
          if (iVar7 != 10) goto LAB_00547ffe;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < this_ptr->bone_count);
    }
  }
  if (((byte)file_handle[0xc] & 0x20) != 0) {
    _DAT_01d71de0 = "..\\core\\skeleton.cpp";
    _DAT_01d71de4 = 0x16b;
    core_main_c_FUN_004e4330("CSkeleton::loadStream - error reading file.");
    return;
  }
  return;
}
