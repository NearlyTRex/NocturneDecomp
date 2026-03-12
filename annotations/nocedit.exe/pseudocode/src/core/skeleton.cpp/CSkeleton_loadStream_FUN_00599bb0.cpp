// Name: core_skeleton.cpp_CSkeleton_loadStream_FUN_00599bb0
// Address: 00599bb0
// Address Range: [[00599bb0, 00599fb6]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CSkeleton_loadStream_FUN_00599bb0(CSkeleton *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CSkeleton_loadStream_FUN_00599bb0(CSkeleton *this_ptr,_FILE *file_handle)

{
  int iVar1;
  int iVar3;
  int iVar2;
  int iVar4;
  CQuaternion4f *pCVar3;
  int *piVar4;
  float *pfVar5;
  int iVar5;
  int iVar6;
  float *pfVar6;
  float *pfVar8;
  float *pfVar7;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  float *local_14;
  
  core_skeleton_cpp_CSkeleton_free_FUN_00599a50(this_ptr);
  local_24 = -1;
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(file_handle,"%d\n",&local_24);
  if (local_24 < 1) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 0x10d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid skeleton version");
  }
  if (local_24 < 2) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 0x10e;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Old skeleton version %d not supported",local_24);
  }
  if (g_CSkeletonVersion < local_24) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 0x10f;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Skeleton version %d is newer than .EXE, which can only process up to version %d",local_24,g_CSkeletonVersion);
  }
  do {
    iVar3 = _fgetc(file_handle);
    if (iVar3 < 0) break;
  } while (iVar3 != 10);
  _fscanf(file_handle,"%d,%d\n",&local_20,&local_1c);
  core_skeleton_cpp_CSkeleton_allocMemory_FUN_00599910(this_ptr,local_20,local_1c);
  do {
    iVar3 = _fgetc(file_handle);
    if (iVar3 < 0) break;
  } while (iVar3 != 10);
  iVar3 = 0;
  if (0 < this_ptr->bone_count) {
    piVar4 = &this_ptr->bone_list[0].parent_index;
    do {
      _fscanf(file_handle,"\"%[^\"]\",%d\n",this_ptr->bone_list + iVar3,piVar4);
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 9;
    } while (iVar3 < this_ptr->bone_count);
  }
  do {
    iVar3 = _fgetc(file_handle);
    if (iVar3 < 0) break;
  } while (iVar3 != 10);
  local_18 = 0;
  pCVar3 = this_ptr->bone_angle_frames;
  if (0 < this_ptr->frame_count) {
    do {
      iVar3 = 0;
      if (0 < this_ptr->bone_count) {
        pfVar5 = &pCVar3->x;
        local_14 = &pCVar3->y;
        pfVar8 = &pCVar3->z;
        do {
          iVar3 = iVar3 + 1;
          _fscanf(file_handle,"%f,%f,%f,%f\n",pCVar3,pfVar5,local_14,pfVar8);
          pfVar5 = pfVar5 + 4;
          pCVar3 = pCVar3 + 1;
          local_14 = local_14 + 4;
          pfVar8 = pfVar8 + 4;
        } while (iVar3 < this_ptr->bone_count);
      }
      local_18 = local_18 + 1;
    } while (local_18 < this_ptr->frame_count);
  }
  do {
    iVar3 = _fgetc(file_handle);
    if (iVar3 < 0) break;
  } while (iVar3 != 10);
  iVar3 = 0;
  if (0 < this_ptr->frame_count) {
    iVar5 = 0;
    do {
      iVar2 = (int)&this_ptr->frame_positions_1->x + iVar5;
      _fscanf(file_handle,"%f,%f,%f\n",iVar2,iVar2 + 4,iVar2 + 8);
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0xc;
    } while (iVar3 < this_ptr->frame_count);
  }
  do {
    iVar3 = _fgetc(file_handle);
    if (iVar3 < 0) break;
  } while (iVar3 != 10);
  iVar3 = 0;
  if (0 < this_ptr->frame_count) {
    iVar6 = 0;
    do {
      iVar4 = (int)&this_ptr->frame_positions_2->x + iVar6;
      _fscanf(file_handle,"%f,%f,%f\n",iVar4,iVar4 + 4,iVar4 + 8);
      iVar3 = iVar3 + 1;
      iVar6 = iVar6 + 0xc;
    } while (iVar3 < this_ptr->frame_count);
  }
  if ((file_handle->_flag & 0x20) != 0) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 0x144;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CSkeleton::loadStream - error reading file.");
  }
  core_motion_cpp_CMotionList_load_FUN_0052cd70(&this_ptr->motion_list,file_handle);
  if (local_24 < 3) {
    this_ptr->bone_scales[0].x = -99999.0;
  }
  else {
    do {
      iVar3 = _fgetc(file_handle);
      if (iVar3 < 0) break;
    } while (iVar3 != 10);
    iVar3 = 0;
    if (0 < this_ptr->bone_count) {
      pfVar6 = &this_ptr->bone_scales[0].y;
      pfVar7 = &this_ptr->bone_scales[0].z;
      do {
        _fscanf(file_handle,"%f,%f,%f\n",this_ptr->bone_scales + iVar3,pfVar6,pfVar7);
        pfVar7 = pfVar7 + 3;
        iVar3 = iVar3 + 1;
        pfVar6 = pfVar6 + 3;
      } while (iVar3 < this_ptr->bone_count);
    }
  }
  if ((file_handle->_flag & 0x20) != 0) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 0x15f;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CSkeleton::loadStream - error reading file.");
    return;
  }
  return;
}
