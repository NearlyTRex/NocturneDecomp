// Name: core_skeledit.cpp_CDeformableModel_calcRootOffsetScale_FUN_0058e690
// Address: 0058e690
// Address Range: [[0058e690, 0058ea9a]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CDeformableModel_calcRootOffsetScale_FUN_0058e690(CDeformableModel *this_ptr)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CDeformableModel_calcRootOffsetScale_FUN_0058e690(CDeformableModel *this_ptr)

{
  CVector3i *pCVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  CDeformableModelInstance *this_ptr_00;
  CDeformableModelInstance *this_ptr_01;
  CVector3f *pCVar2;
  int *piVar3;
  CVector3f *pCVar4;
  int *piVar7;
  int iVar5;
  CVector3f *pCVar8;
  int iVar6;
  int iVar9;
  int iVar10;
  CBoundingBox3D local_5c;
  float local_44;
  float local_40;
  float local_3c;
  CVector3f local_38;
  float local_2c;
  float local_28;
  float local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  CSkeleton *local_14;
  CVector3i *pCVar1;
  
  local_14 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(this_ptr);
  if (local_14->bone_scales[0].x < (float)-9999) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x9f8;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CDeformableModel::calcRootOffsetScale - Reference bone origin list for skeleton %s is not valid.",local_14->loaded_filename);
  }
  this_ptr_00 = (CDeformableModelInstance *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x22b4,"..\\core\\skeledit.cpp",0x9fd);
  this_ptr_01 = (CDeformableModelInstance *)0x0;
  if (this_ptr_00 != (CDeformableModelInstance *)0x0) {
    this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0059ddc0(this_ptr_00);
  }
  if (this_ptr_01 == (CDeformableModelInstance *)0x0) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x9fe;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::calcRootOffsetScale - out of memory!");
  }
  core_skeleton_cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480(this_ptr_01,this_ptr);
  iVar5 = 0;
  if (0 < local_14->bone_count) {
    pCVar8 = local_14->bone_scales;
    pCVar2 = this_ptr_01->transformed_vertices;
    do {
      if (pCVar2 != pCVar8) {
        pCVar2->x = pCVar8->x;
        pCVar2->y = pCVar8->y;
        pCVar2->z = pCVar8->z;
      }
      pCVar2 = pCVar2 + 1;
      iVar5 = iVar5 + 1;
      pCVar8 = pCVar8 + 1;
    } while (iVar5 < local_14->bone_count);
  }
  core_skeleton_cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0059e070(this_ptr_01,0,0.0);
  core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(this_ptr_01,0);
  pCVar1 = this_ptr_01->skinned_vertices_buffer;
  local_38.x = (float)pCVar1->x * 0.00390625f;
  local_38.y = (float)pCVar1->y * 0.00390625f;
  local_38.z = (float)pCVar1->z * 0.00390625f;
  if (&local_5c != (CBoundingBox3D *)&local_38) {
    local_5c.min.x = local_38.x;
    local_5c.min.y = local_38.y;
    local_5c.min.z = local_38.z;
  }
  if (&local_5c.max != &local_38) {
    local_5c.max.x = local_38.x;
    local_5c.max.y = local_38.y;
    local_5c.max.z = local_38.z;
  }
  iVar10 = 1;
  if (1 < this_ptr->vertex_count[0]) {
    iVar6 = 0xc;
    do {
      piVar3 = (int *)((int)&this_ptr_01->skinned_vertices_buffer->x + iVar6);
      local_38.x = (float)*piVar3 * 0.00390625f;
      local_38.y = (float)piVar3[1] * 0.00390625f;
      local_38.z = (float)piVar3[2] * 0.00390625f;
      core_box_cpp_CBoundingBox3D_expand_FUN_00420240(&local_5c,&local_38);
      iVar10 = iVar10 + 1;
      iVar6 = iVar6 + 0xc;
    } while (iVar10 < this_ptr->vertex_count[0]);
  }
  fVar4 = local_5c.max.x - local_5c.min.x;
  fVar5 = local_5c.max.y - local_5c.min.y;
  fVar6 = local_5c.max.z - local_5c.min.z;
  local_20 = 0x3f800000;
  local_1c = 0x3f800000;
  local_18 = 0x3f800000;
  if (&this_ptr_01->scaled_model_dimensions != (CVector3f *)&local_20) {
    (this_ptr_01->scaled_model_dimensions).y = 1.0;
    (this_ptr_01->scaled_model_dimensions).z = 1.0;
    (this_ptr_01->scaled_model_dimensions).x = 1.0;
  }
  iVar10 = 0;
  if (0 < local_14->bone_count) {
    pCVar8 = this_ptr_01->transformed_vertices;
    pCVar4 = this_ptr->vertex_pool;
    do {
      if (pCVar8 != pCVar4) {
        pCVar8->x = pCVar4->x;
        pCVar8->y = pCVar4->y;
        pCVar8->z = pCVar4->z;
      }
      pCVar8 = pCVar8 + 1;
      iVar10 = iVar10 + 1;
      pCVar4 = pCVar4 + 1;
    } while (iVar10 < local_14->bone_count);
  }
  core_skeleton_cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0059e070(this_ptr_01,0,0.0);
  core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(this_ptr_01,0);
  pCVar3 = this_ptr_01->skinned_vertices_buffer;
  local_38.x = (float)pCVar3->x * 0.00390625f;
  local_38.y = (float)pCVar3->y * 0.00390625f;
  local_38.z = (float)pCVar3->z * 0.00390625f;
  if (&local_5c != (CBoundingBox3D *)&local_38) {
    local_5c.min.x = local_38.x;
    local_5c.min.y = local_38.y;
    local_5c.min.z = local_38.z;
  }
  if (&local_5c.max != &local_38) {
    local_5c.max.x = local_38.x;
    local_5c.max.y = local_38.y;
    local_5c.max.z = local_38.z;
  }
  iVar10 = 1;
  if (1 < this_ptr->vertex_count[0]) {
    iVar9 = 0xc;
    do {
      piVar7 = (int *)((int)&this_ptr_01->skinned_vertices_buffer->x + iVar9);
      local_38.x = (float)*piVar7 * 0.00390625f;
      local_38.y = (float)piVar7[1] * 0.00390625f;
      local_38.z = (float)piVar7[2] * 0.00390625f;
      core_box_cpp_CBoundingBox3D_expand_FUN_00420240(&local_5c,&local_38);
      iVar10 = iVar10 + 1;
      iVar9 = iVar9 + 0xc;
    } while (iVar10 < this_ptr->vertex_count[0]);
  }
  (this_ptr->model_scale).x = (local_5c.max.x - local_5c.min.x) / fVar4;
  (this_ptr->model_scale).y = (local_5c.max.y - local_5c.min.y) / fVar5;
  (this_ptr->model_scale).z = (local_5c.max.z - local_5c.min.z) / fVar6;
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  g_CurrentDebugLine = 0xa32;
  (*((this_ptr_01->motion_controller).vtable)->dtor)(&this_ptr_01->motion_controller,2);
  return;
}
