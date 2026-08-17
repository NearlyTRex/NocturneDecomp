// Name: core_skeleton.cpp_CSkeleton_loadStream_FUN_005175f0
// Address: 005175f0
// Address Range: [[005175f0, 005179c3]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CSkeleton_loadStream_FUN_005175f0(CSkeleton *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CSkeleton_loadStream_FUN_005175f0(CSkeleton *this_ptr,_FILE *file_handle)

{
  int iVar1;
  int iVar2;
  CQuaternion4f *pCVar3;
  float *pfVar4;
  int *piVar5;
  float *pfVar6;
  int iVar7;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  float *local_14;
  
  core_skeleton_cpp_CSkeleton_FUN_005174e0(this_ptr);
  local_24 = -1;
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(file_handle,"%d\n",&local_24);
  if (local_24 < 1) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 269;
    core_main_c_displayErrorAndQuit_FUN_004c8440("Invalid skeleton version");
  }
  if (local_24 < 2) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 270;
    core_main_c_displayErrorAndQuit_FUN_004c8440("Old skeleton version %d not supported",local_24);
  }
  if (0x00000003 < local_24) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 271;
    core_main_c_displayErrorAndQuit_FUN_004c8440
              ("Skeleton version %d is newer than .EXE, which can only process up to version %d",local_24,0x00000003);
  }
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(file_handle,"%d,%d\n",&local_20,&local_1c);
  core_skeleton_cpp_CSkeleton_allocMemory_FUN_005173c0(this_ptr,local_20,local_1c);
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = 0;
  if (0 < this_ptr->bone_count) {
    piVar5 = &this_ptr->bone_list[0].parent_index;
    do {
      _fscanf(file_handle,"\"%[^\"]\",%d\n",this_ptr->bone_list + iVar1,piVar5);
      iVar1 = iVar1 + 1;
      piVar5 = piVar5 + 9;
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
      iVar2 = (int)&this_ptr->frame_positions_1->x + iVar7;
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
      iVar2 = (int)&this_ptr->frame_positions_2->x + iVar7;
      _fscanf(file_handle,"%f,%f,%f\n",iVar2,iVar2 + 4,iVar2 + 8);
      iVar1 = iVar1 + 1;
      iVar7 = iVar7 + 0xc;
    } while (iVar1 < this_ptr->frame_count);
  }
  if ((file_handle->_flag & 0x20) != 0) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 324;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CSkeleton::loadStream - error reading file.");
  }
  core_motion_cpp_CMotionList_load_FUN_004e0920(&this_ptr->motion_list,file_handle);
  if (2 < local_24) {
    do {
      iVar1 = _fgetc(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    iVar1 = 0;
    if (0 < this_ptr->bone_count) {
LAB_0051793e:
      do {
        iVar7 = _fgetc(file_handle);
        if (-1 < iVar7) {
          if (iVar7 != 10) goto LAB_0051793e;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < this_ptr->bone_count);
    }
  }
  if ((file_handle->_flag & 0x20) != 0) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 351;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CSkeleton::loadStream - error reading file.");
    return;
  }
  return;
}
