// Name: core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromVertices_FUN_0054e850
// Address: 0054e850
// Address Range: [[0054e850, 0054ea33]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromVertices_FUN_0054e850(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromVertices_FUN_0054e850(CDeformableModelInstance *this_ptr)

{
  CBoundingBox3D *pCVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  CDeformableModel *pCVar6;
  int iVar7;
  CVector3f *pCVar8;
  int *piVar9;
  int *piVar10;
  byte bVar11;
  int aiStackY_1040 [6];
  float afStackY_1028 [1006];
  int local_64;
  int local_60;
  int local_5c;
  int local_54 [5];
  float local_40;
  float local_3c [4];
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar11 = 0;
  local_54[4] = 0x7fffffff;
  local_54[3] = 0x7fffffff;
  local_54[2] = 0x7fffffff;
  local_5c = -0x7fffffff;
  local_60 = -0x7fffffff;
  local_64 = -0x7fffffff;
  pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(this_ptr);
  iVar5 = pCVar6->vertex_count[0];
  core_skeleton_cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0054c180(this_ptr,0,0.0);
  core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0054e420(this_ptr,0);
  if (0 < iVar5) {
    iVar7 = 0;
    do {
      piVar9 = (int *)((int)&this_ptr->skinned_vertices_buffer->x + iVar7);
      piVar10 = piVar9 + (uint)bVar11 * -2 + 1;
      iVar4 = *piVar9;
      local_54[(uint)bVar11 * -2] = *piVar10;
      local_54[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] = piVar10[(uint)bVar11 * -2 + 1];
      if (iVar4 < local_54[2]) {
        local_54[2] = iVar4;
      }
      if (local_64 < iVar4) {
        local_64 = iVar4;
      }
      if (local_54[0] < local_54[3]) {
        local_54[3] = local_54[0];
      }
      if (local_60 < local_54[0]) {
        local_60 = local_54[0];
      }
      if (local_54[1] < local_54[4]) {
        local_54[4] = local_54[1];
      }
      if (local_5c < local_54[1]) {
        local_5c = local_54[1];
      }
      iVar7 = iVar7 + 0xc;
    } while (iVar7 < iVar5 * 0xc);
  }
  pCVar1 = &this_ptr->bounding_box;
  (pCVar1->min).x = (float)local_54[2] * _DAT_005e4760;
  (this_ptr->bounding_box).min.y = (float)local_54[3] * _DAT_005e4760;
  (this_ptr->bounding_box).min.z = (float)local_54[4] * _DAT_005e4760;
  pCVar8 = &(this_ptr->bounding_box).max;
  pCVar8->x = (float)local_64 * _DAT_005e4760;
  (this_ptr->bounding_box).max.y = (float)local_60 * _DAT_005e4760;
  (this_ptr->bounding_box).max.z = (float)local_5c * _DAT_005e4760;
  local_3c[2] = pCVar8->x - (pCVar1->min).x;
  local_3c[3] = (this_ptr->bounding_box).max.y - (this_ptr->bounding_box).min.y;
  local_2c = (this_ptr->bounding_box).max.z - (this_ptr->bounding_box).min.z;
  local_28 = local_3c[2];
  local_3c[(uint)bVar11 * -2 + 6] = local_3c[(uint)bVar11 * -2 + 3];
  local_3c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
       local_3c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
  local_1c = local_28 * _DAT_005d20f0;
  local_18 = local_24 * _DAT_005d20f0;
  local_14 = local_20 * _DAT_005d20f0;
  local_40 = local_28 * _DAT_005d20f0;
  local_3c[(uint)bVar11 * -2] = local_3c[(uint)bVar11 * -2 + 9];
  local_3c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
       local_3c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
  fVar2 = (this_ptr->bounding_box).min.y;
  fVar3 = (this_ptr->bounding_box).min.z;
  (pCVar1->min).x = (pCVar1->min).x - local_40;
  (this_ptr->bounding_box).min.y = fVar2 - local_3c[0];
  (this_ptr->bounding_box).min.z = fVar3 - local_3c[1];
  fVar2 = (this_ptr->bounding_box).max.y;
  fVar3 = (this_ptr->bounding_box).max.z;
  pCVar8->x = pCVar8->x + local_40;
  (this_ptr->bounding_box).max.y = fVar2 + local_3c[0];
  (this_ptr->bounding_box).max.z = fVar3 + local_3c[1];
  return;
}
