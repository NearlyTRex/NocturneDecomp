// Name: core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromVertices_FUN_005a05e0
// Address: 005a05e0
// MANUAL RECONSTRUCTION
// Address Range: [[005a05e0, 005a0797] [0060c8c1, 0060c8df]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromVertices_FUN_005a05e0(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromVertices_FUN_005a05e0(CDeformableModelInstance *this_ptr)

{
  float fVar1;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int vertex_count;
  CDeformableModel *pCVar8;
  int iVar9;
  CVector3f *pCVar10;
  int *piVar11;
  int local_4c;
  int local_48;
  int local_44;
  int local_34;
  int local_30;
  int local_2c;
  float fVar6;
  float fVar3;
  CBoundingBox3D *pCVar1;
  float fVar7;
  float fVar2;
  float fVar5;
  
  local_2c = 0x7fffffff;
  local_30 = 0x7fffffff;
  local_34 = 0x7fffffff;
  local_44 = -0x7fffffff;
  local_48 = -0x7fffffff;
  local_4c = -0x7fffffff;
  pCVar8 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
  vertex_count = pCVar8->vertex_count[0];
  core_skeleton_cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0059e070(this_ptr,0,0.0);
  core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(this_ptr,0);
  if (0 < vertex_count) {
    iVar9 = 0;
    do {
      piVar11 = (int *)((int)&this_ptr->skinned_vertices_buffer->x + iVar9);
      iVar5 = *piVar11;
      iVar6 = piVar11[1];
      iVar7 = piVar11[2];
      if (iVar5 < local_34) {
        local_34 = iVar5;
      }
      if (local_4c < iVar5) {
        local_4c = iVar5;
      }
      if (iVar6 < local_30) {
        local_30 = iVar6;
      }
      if (local_48 < iVar6) {
        local_48 = iVar6;
      }
      if (iVar7 < local_2c) {
        local_2c = iVar7;
      }
      if (local_44 < iVar7) {
        local_44 = iVar7;
      }
      iVar9 = iVar9 + 0xc;
    } while (iVar9 < vertex_count * 0xc);
  }
  pCVar1 = &this_ptr->bounding_box;
  (pCVar1->min).x = (float)local_34 * 0.00390625f;
  (this_ptr->bounding_box).min.y = (float)local_30 * 0.00390625f;
  (this_ptr->bounding_box).min.z = (float)local_2c * 0.00390625f;
  pCVar10 = &(this_ptr->bounding_box).max;
  pCVar10->x = (float)local_4c * 0.00390625f;
  (this_ptr->bounding_box).max.y = (float)local_48 * 0.00390625f;
  (this_ptr->bounding_box).max.z = (float)local_44 * 0.00390625f;
  fVar5 = (pCVar10->x - (pCVar1->min).x) * 0.05f;
  fVar6 = ((this_ptr->bounding_box).max.y - (this_ptr->bounding_box).min.y) * 0.05f;
  fVar7 = ((this_ptr->bounding_box).max.z - (this_ptr->bounding_box).min.z) * 0.05f;
  fVar2 = (this_ptr->bounding_box).min.y;
  (pCVar1->min).x = (pCVar1->min).x - fVar5;
  fVar3 = (this_ptr->bounding_box).min.z;
  (this_ptr->bounding_box).min.y = fVar2 - fVar6;
  (this_ptr->bounding_box).min.z = fVar3 - fVar7;
  fVar1 = (this_ptr->bounding_box).max.y;
  pCVar10->x = pCVar10->x + fVar5;
  fVar4 = (this_ptr->bounding_box).max.z;
  (this_ptr->bounding_box).max.y = fVar1 + fVar6;
  (this_ptr->bounding_box).max.z = fVar4 + fVar7;
  return;
}
