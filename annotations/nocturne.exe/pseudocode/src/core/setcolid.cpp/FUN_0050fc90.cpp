// Name: core_setcolid.cpp_FUN_0050fc90
// Address: 0050fc90
// Address Range: [[0050fc90, 0050fdcc]]
// Convention: unknown
// Signature: float core_setcolid_cpp_FUN_0050fc90(CDemonSet *param_1)

#include "nocturne.h"

float core_setcolid_cpp_FUN_0050fc90(CDemonSet *param_1)

{
  char *pcVar1;
  float *pfVar2;
  CVector3f *ray_target;
  CVector3f *ray_origin;
  CMatrix3x3f *pCVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  char acStack_30 [44];
  
  if (param_1->vdir_boxes[0xec].rotation_matrix.m[0].x <
      param_1->vdir_boxes[0xec].rotation_matrix.m[0].y) {
    pcVar1 = param_1->lights[199].filter_names[0x12] + 0x24;
    pfVar2 = &param_1->vdir_boxes[0xec].rotation_matrix.m[0].z;
    if ((float *)pcVar1 != pfVar2) {
      *(float *)pcVar1 = *pfVar2;
      *(float *)param_1->lights[199].filter_names[0x13] =
           param_1->vdir_boxes[0xec].rotation_matrix.m[1].x;
      *(float *)(param_1->lights[199].filter_names[0x13] + 4) =
           param_1->vdir_boxes[0xec].rotation_matrix.m[1].y;
    }
    ray_target = (CVector3f *)(param_1->lights[199].filter_names[0x12] + 0x18);
    fVar11 = param_1->vdir_boxes[0xec].rotation_matrix.m[0].y;
    ray_origin = (CVector3f *)(param_1->lights[199].filter_names[0x12] + 0xc);
    fVar10 = param_1->vdir_boxes[0xec].rotation_matrix.m[0].x;
    *(float *)(param_1->lights[199].filter_names[0x13] + 8) =
         param_1->vdir_boxes[0xec].rotation_matrix.m[1].z;
    fVar11 = core_setcolid_cpp_CDemonSet_raycastAgainstActors_FUN_0050ffe0
                       (param_1,fVar10,ray_origin,ray_target,fVar11);
    param_1->vdir_boxes[0xec].rotation_matrix.m[0].x = fVar11;
    if (param_1->vdir_boxes[0xec].rotation_matrix.m[0].x <= 1.0) {
      fVar11 = *(float *)(param_1->lights[199].filter_names[0x12] + 0x1c);
      fVar10 = *(float *)(param_1->lights[199].filter_names[0x12] + 0x10);
      pCVar3 = &param_1->vdir_boxes[0xec].rotation_matrix;
      fVar4 = *(float *)(param_1->lights[199].filter_names[0x12] + 0x20);
      fVar5 = *(float *)(param_1->lights[199].filter_names[0x12] + 0x14);
      fVar6 = pCVar3->m[0].x;
      fVar7 = pCVar3->m[0].x;
      fVar8 = *(float *)(param_1->lights[199].filter_names[0x12] + 0x10);
      fVar9 = *(float *)(param_1->lights[199].filter_names[0x12] + 0x14);
      pcVar1 = param_1->lights[199].filter_names[0x13] + 0xc;
      if (pcVar1 != acStack_30) {
        *(float *)pcVar1 = ray_origin->x + (ray_target->x - ray_origin->x) * pCVar3->m[0].x;
        *(float *)(param_1->lights[199].filter_names[0x13] + 0x10) =
             fVar8 + (fVar11 - fVar10) * fVar6;
        *(float *)(param_1->lights[199].filter_names[0x13] + 0x14) = fVar9 + (fVar4 - fVar5) * fVar7
        ;
      }
    }
    return param_1->vdir_boxes[0xec].rotation_matrix.m[0].x;
  }
  return 2.0;
}
