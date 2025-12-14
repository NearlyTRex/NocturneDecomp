// Name: core_skeledit.cpp_CDeformableModel_calcRootOffsetScale_FUN_0058e690
// Address: 0058e690
// Address Range: [[0058e690, 0058ea9a]]
// Convention: __cdecl
// Signature: void core_skeledit.cpp_CDeformableModel_calcRootOffsetScale_FUN_0058e690(CDeformableModel * this_ptr)

#include "nocturne.h"

/* WARNING: Variable defined which should be unmapped: this_ptr */

void __cdecl
core_skeledit_cpp_CDeformableModel_calcRootOffsetScale_FUN_0058e690(CDeformableModel *this_ptr)

{
  CVector3i *pCVar1;
  float fVar2;
  float fVar3;
  CSkeleton *pCVar4;
  CDeformableModelInstance *this_ptr_00;
  CDeformableModelInstance *this_ptr_01;
  CVector3f *pCVar5;
  int *piVar6;
  float *pfVar7;
  int iVar8;
  BADSPACEBASE *in_ESP;
  int iVar9;
  float in_stack_00000008;
  CDeformableModel *in_stack_0000000c;
  int in_stack_00000010;
  CDeformableModel *in_stack_0000001c;
  int in_stack_00000028;
  int in_stack_00000030;
  float in_stack_ffffffcc;
  CBoundingBox3D local_30;
  float local_18;
  CVector3f local_14;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x6c);
  pCVar4 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(in_stack_0000000c);
  if (pCVar4->bone_scales[0].x < (float)-9999) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x9f8;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CDeformableModel::calcRootOffsetScale - Reference bone origin list for skeleton %s is not valid.",pCVar4->loaded_filename);
  }
  this_ptr_00 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x22b4,"..\\core\\skeledit.cpp",0x9fd);
  this_ptr_01 = (CDeformableModelInstance *)0x0;
  if (this_ptr_00 != (CDeformableModelInstance *)0x0) {
    this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0059ddc0(this_ptr_00);
  }
  if (this_ptr_01 == (CDeformableModelInstance *)0x0) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x9fe;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::calcRootOffsetScale - out of memory!");
  }
  core_skeleton_cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480
            (this_ptr_01,in_stack_0000001c);
  iVar8 = 0;
  if (0 < *(int *)((int)in_stack_00000008 + 0x28558)) {
    pfVar7 = (float *)((int)in_stack_00000008 + 0x2937c);
    pCVar5 = this_ptr_01->transformed_vertices;
    do {
      if (pCVar5 != (CVector3f *)pfVar7) {
        pCVar5->x = *pfVar7;
        pCVar5->y = pfVar7[1];
        pCVar5->z = pfVar7[2];
      }
      pCVar5 = pCVar5 + 1;
      iVar8 = iVar8 + 1;
      pfVar7 = pfVar7 + 3;
    } while (iVar8 < *(int *)((int)in_stack_00000008 + 0x28558));
  }
  core_skeleton_cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0059e070(this_ptr_01,0,0.0);
  core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(this_ptr_01,0);
  pCVar1 = this_ptr_01->skinned_vertices_buffer;
  local_18 = (float)pCVar1->x * 0.00390625f;
  local_14.x = (float)pCVar1->y * 0.00390625f;
  local_14.y = (float)pCVar1->z * 0.00390625f;
  if ((CVector3f *)&stack0xffffffc8 != &local_14) {
    local_30.min.x = local_14.z;
    in_stack_ffffffcc = local_14.y;
  }
  if ((CVector3f *)&local_30.min.y != &local_14) {
    local_30.max.x = local_14.z;
    local_30.min.y = local_14.x;
    local_30.min.z = local_14.y;
  }
  iVar8 = 1;
  if (1 < *(int *)(in_stack_00000028 + 0x2c)) {
    iVar9 = 0xc;
    do {
      piVar6 = (int *)((int)&this_ptr_01->skinned_vertices_buffer->x + iVar9);
      local_14.x = (float)*piVar6 * 0.00390625f;
      local_14.y = (float)piVar6[1] * 0.00390625f;
      local_14.z = (float)piVar6[2] * 0.00390625f;
      core_box_cpp_CBoundingBox3D_expand_FUN_00420240((CBoundingBox3D *)&stack0xffffffc8,&local_14);
      iVar8 = iVar8 + 1;
      iVar9 = iVar9 + 0xc;
    } while (iVar8 < *(int *)(in_stack_00000028 + 0x2c));
  }
  in_stack_ffffffcc = local_30.min.z - in_stack_ffffffcc;
  fVar2 = local_30.max.x - local_30.min.x;
  this_ptr = (CDeformableModel *)0x3f800000;
  in_stack_00000008 = 1.0;
  in_stack_0000000c = (CDeformableModel *)0x3f800000;
  if (&this_ptr_01->scaled_model_dimensions != (CVector3f *)&this_ptr) {
    (this_ptr_01->scaled_model_dimensions).y = 1.0;
    (this_ptr_01->scaled_model_dimensions).z = 1.0;
    (this_ptr_01->scaled_model_dimensions).x = 1.0;
  }
  iVar8 = 0;
  if (0 < *(int *)(in_stack_00000010 + 0x28558)) {
    pCVar5 = this_ptr_01->transformed_vertices;
    pfVar7 = (float *)(in_stack_00000028 + 0x7c90);
    do {
      if (pCVar5 != (CVector3f *)pfVar7) {
        pCVar5->x = *pfVar7;
        pCVar5->y = pfVar7[1];
        pCVar5->z = pfVar7[2];
      }
      pCVar5 = pCVar5 + 1;
      iVar8 = iVar8 + 1;
      pfVar7 = pfVar7 + 3;
    } while (iVar8 < *(int *)(in_stack_00000010 + 0x28558));
  }
  core_skeleton_cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0059e070(this_ptr_01,0,0.0);
  core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(this_ptr_01,0);
  pCVar1 = this_ptr_01->skinned_vertices_buffer;
  local_14.y = (float)pCVar1->x * 0.00390625f;
  local_14.z = (float)pCVar1->y * 0.00390625f;
  fVar3 = (float)pCVar1->z * 0.00390625f;
  if (&local_30 != (CBoundingBox3D *)&local_14.z) {
    local_30.min.x = local_14.z;
    local_30.min.y = fVar3;
    local_30.min.z = in_stack_ffffffcc;
  }
  if (&local_30.max != (CVector3f *)&local_14.z) {
    local_30.max.x = local_14.z;
    local_30.max.y = fVar3;
    local_30.max.z = in_stack_ffffffcc;
  }
  iVar8 = 1;
  if (1 < *(int *)(in_stack_00000030 + 0x2c)) {
    iVar9 = 0xc;
    do {
      local_14.z = (float)*(int *)((int)&this_ptr_01->skinned_vertices_buffer->x + iVar9) *
                   0.00390625f;
      core_box_cpp_CBoundingBox3D_expand_FUN_00420240(&local_30,(CVector3f *)&local_14.z);
      iVar8 = iVar8 + 1;
      iVar9 = iVar9 + 0xc;
    } while (iVar8 < *(int *)(in_stack_00000030 + 0x2c));
  }
  local_18 = local_30.max.x - local_30.min.x;
  local_14.x = local_30.max.y - local_30.min.y;
  local_14.y = local_30.max.z - local_30.min.z;
  *(float *)(in_stack_00000030 + 0x7c84) = local_18 / fVar2;
  *(float *)(in_stack_00000030 + 0x7c88) = local_14.x / (float)this_ptr;
  *(float *)(in_stack_00000030 + 0x7c8c) = local_14.y / in_stack_00000008;
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  g_CurrentDebugLine = 0xa32;
  (*((this_ptr_01->motion_controller).vtable)->dtor)(&this_ptr_01->motion_controller);
  return;
}
