// Name: core_skeledit.cpp_CSkeleton_saveStream_FUN_0058b3a0
// Address: 0058b3a0
// Address Range: [[0058b3a0, 0058b658]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CSkeleton_saveStream_FUN_0058b3a0(CSkeleton *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CSkeleton_saveStream_FUN_0058b3a0(CSkeleton *this_ptr,_FILE *file_handle)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  SBone *pSVar5;
  CQuaternion4f *pCVar6;
  CVector3f *pCVar7;
  int iVar8;
  int local_1c;
  int local_18;
  int local_14;
  
  __STK();
  _fprintf(file_handle,"// skeleton version\n");
  _fprintf(file_handle,"%d\n");
  _fprintf(file_handle,"// bonecount, frameCount\n");
  _fprintf(file_handle,"%d,%d\n",this_ptr->bone_count);
  iVar8 = 0;
  _fprintf(file_handle,"// boneList\n");
  if (0 < this_ptr->bone_count) {
    pSVar5 = this_ptr->bone_list;
    do {
      _fprintf(file_handle,"\"%s\", %d\n",pSVar5);
      iVar8 = iVar8 + 1;
      pSVar5 = pSVar5 + 1;
    } while (iVar8 < this_ptr->bone_count);
  }
  _fprintf(file_handle,"// angle list: w,x,y,z\n");
  pCVar6 = this_ptr->bone_angle_frames;
  local_18 = 0;
  if (0 < this_ptr->frame_count) {
    do {
      iVar8 = 0;
      if (0 < this_ptr->bone_count) {
        do {
          pfVar1 = &pCVar6->z;
          pfVar2 = &pCVar6->y;
          pfVar3 = &pCVar6->x;
          pfVar4 = &pCVar6->w;
          pCVar6 = pCVar6 + 1;
          iVar8 = iVar8 + 1;
          _fprintf(file_handle,"%g,%g,%g,%g\n",(double)*pfVar4,(double)*pfVar3,(double)*pfVar2,
                     (double)*pfVar1);
        } while (iVar8 < this_ptr->bone_count);
      }
      local_18 = local_18 + 1;
    } while (local_18 < this_ptr->frame_count);
  }
  _fprintf(file_handle,"// root offset list: x,y,z\n");
  local_1c = 0;
  if (0 < this_ptr->frame_count) {
    iVar8 = 0;
    do {
      pCVar7 = this_ptr->frame_positions_1;
      _fprintf(file_handle,"%g,%g,%g\n",(double)*(float *)((int)&pCVar7->x + iVar8),
                 (double)*(float *)((int)&pCVar7->y + iVar8),
                 (double)*(float *)((int)&pCVar7->z + iVar8));
      iVar8 = iVar8 + 0xc;
      local_1c = local_1c + 1;
    } while (local_1c < this_ptr->frame_count);
  }
  _fprintf(file_handle,"// canceled movement list: x,y,z\n");
  local_14 = 0;
  if (0 < this_ptr->frame_count) {
    iVar8 = 0;
    do {
      pCVar7 = this_ptr->frame_positions_2;
      _fprintf(file_handle,"%g,%g,%g\n",(double)*(float *)((int)&pCVar7->x + iVar8),
                 (double)*(float *)((int)&pCVar7->y + iVar8),
                 (double)*(float *)((int)&pCVar7->z + iVar8));
      iVar8 = iVar8 + 0xc;
      local_14 = local_14 + 1;
    } while (local_14 < this_ptr->frame_count);
  }
  core_motion_cpp_CMotionList_save_FUN_0052d170(&this_ptr->motion_list,file_handle);
  iVar8 = 0;
  _fprintf(file_handle,"// reference bone org list: x,y,z\n");
  if (0 < this_ptr->bone_count) {
    pCVar7 = this_ptr->bone_scales;
    do {
      pfVar1 = &pCVar7->z;
      pfVar2 = &pCVar7->y;
      pfVar3 = &pCVar7->x;
      pCVar7 = pCVar7 + 1;
      iVar8 = iVar8 + 1;
      _fprintf(file_handle,"%g,%g,%g\n",(double)*pfVar3,(double)*pfVar2,(double)*pfVar1);
    } while (iVar8 < this_ptr->bone_count);
  }
  if ((file_handle->_flag & 0x20) != 0) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x49f;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CSkeleton::saveStream - error writing file.");
    return;
  }
  return;
}
