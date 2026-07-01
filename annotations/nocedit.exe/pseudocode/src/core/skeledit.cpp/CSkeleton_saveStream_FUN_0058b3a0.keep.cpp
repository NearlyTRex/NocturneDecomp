// Name: core_skeledit.cpp_CSkeleton_saveStream_FUN_0058b3a0
// Address: 0058b3a0
// MANUAL RECONSTRUCTION
// Address Range: [[0058b3a0, 0058b658]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CSkeleton_saveStream_FUN_0058b3a0(CSkeleton *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CSkeleton_saveStream_FUN_0058b3a0(CSkeleton *this_ptr,_FILE *file_handle)

{
  float *pfVar5;
  float *pfVar6;
  CVector3f *pCVar8;
  float *pfVar9;
  SBone *pSVar5;
  CQuaternion4f *pCVar6;
  CVector3f *pCVar7;
  int iVar8;
  int iVar10;
  int local_1c;
  int local_18;
  int local_14;
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  
  _fprintf(file_handle,"// skeleton version\n");
  _fprintf(file_handle,"%d\n",g_CSkeletonVersion);
  _fprintf(file_handle,"// bonecount, frameCount\n");
  _fprintf(file_handle,"%d,%d\n",this_ptr->bone_count,this_ptr->frame_count);
  iVar8 = 0;
  _fprintf(file_handle,"// boneList\n");
  if (0 < this_ptr->bone_count) {
    pSVar5 = this_ptr->bone_list;
    do {
      _fprintf(file_handle,"\"%s\", %d\n",pSVar5->bone_name,pSVar5->parent_index);
      iVar8 = iVar8 + 1;
      pSVar5 = pSVar5 + 1;
    } while (iVar8 < this_ptr->bone_count);
  }
  _fprintf(file_handle,"// angle list: w,x,y,z\n");
  pCVar6 = this_ptr->bone_angle_frames;
  local_18 = 0;
  if (0 < this_ptr->frame_count) {
    do {
      iVar10 = 0;
      if (0 < this_ptr->bone_count) {
        do {
          pfVar1 = &pCVar6->z;
          pfVar2 = &pCVar6->y;
          pfVar3 = &pCVar6->x;
          pfVar4 = &pCVar6->w;
          pCVar6 = pCVar6 + 1;
          iVar10 = iVar10 + 1;
          _fprintf(file_handle,"%g,%g,%g,%g\n",(double)*pfVar4,(double)*pfVar3,(double)*pfVar2,
                     (double)*pfVar1);
        } while (iVar10 < this_ptr->bone_count);
      }
      local_18 = local_18 + 1;
    } while (local_18 < this_ptr->frame_count);
  }
  _fprintf(file_handle,"// root offset list: x,y,z\n");
  local_1c = 0;
  if (0 < this_ptr->frame_count) {
    do {
      pCVar8 = &this_ptr->frame_positions_1[local_1c];
      _fprintf(file_handle,"%g,%g,%g\n",(double)pCVar8->x,(double)pCVar8->y,(double)pCVar8->z);
      local_1c = local_1c + 1;
    } while (local_1c < this_ptr->frame_count);
  }
  _fprintf(file_handle,"// canceled movement list: x,y,z\n");
  local_14 = 0;
  if (0 < this_ptr->frame_count) {
    do {
      pCVar8 = &this_ptr->frame_positions_2[local_14];
      _fprintf(file_handle,"%g,%g,%g\n",(double)pCVar8->x,(double)pCVar8->y,(double)pCVar8->z);
      local_14 = local_14 + 1;
    } while (local_14 < this_ptr->frame_count);
  }
  core_motion_cpp_CMotionList_save_FUN_0052d170(&this_ptr->motion_list,file_handle);
  iVar10 = 0;
  _fprintf(file_handle,"// reference bone org list: x,y,z\n");
  if (0 < this_ptr->bone_count) {
    pCVar7 = this_ptr->bone_scales;
    do {
      pfVar5 = &pCVar7->z;
      pfVar6 = &pCVar7->y;
      pfVar9 = &pCVar7->x;
      pCVar7 = pCVar7 + 1;
      iVar10 = iVar10 + 1;
      _fprintf(file_handle,"%g,%g,%g\n",(double)*pfVar9,(double)*pfVar6,(double)*pfVar5);
    } while (iVar10 < this_ptr->bone_count);
  }
  if ((file_handle->_flag & 0x20) != 0) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 1183;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CSkeleton::saveStream - error writing file.");
    return;
  }
  return;
}
