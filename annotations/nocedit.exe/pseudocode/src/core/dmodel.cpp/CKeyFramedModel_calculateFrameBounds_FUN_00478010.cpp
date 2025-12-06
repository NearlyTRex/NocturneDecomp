// Name: core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010
// Address: 00478010
// Address Range: [[00478010, 00478187]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(CKeyFramedModel * model_ptr)

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(CKeyFramedModel *model_ptr)

{
  CVector3i *pCVar1;
  CVector3i *pCVar2;
  CVector3i *pCVar3;
  CBoundingBox3D *this_ptr;
  CVector3i **ppCVar4;
  float fVar5;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int iVar6;
  CBoundingBox3D *local_14;
  
  if (0 < model_ptr->frame_count) {
    local_14 = (CBoundingBox3D *)&model_ptr->bounds_min;
    do {
      this_ptr = (CBoundingBox3D *)model_ptr->frame_bounds;
      ppCVar4 = model_ptr->vertex_list;
      fVar5 = (float)65536f;
      pCVar1 = *ppCVar4;
      pCVar2 = ppCVar4[1];
      pCVar3 = ppCVar4[2];
      if (this_ptr != (CBoundingBox3D *)&stack0xffffffd8) {
        (this_ptr->min).x = (float)(int)pCVar1 * fVar5;
        (this_ptr->min).y = (float)(int)pCVar2 * fVar5;
        (this_ptr->min).z = (float)(int)pCVar3 * fVar5;
      }
      if (&this_ptr->max != (CVector3f *)&stack0xffffffd8) {
        (this_ptr->max).x = (float)(int)pCVar1 * fVar5;
        (this_ptr->max).y = (float)(int)pCVar2 * fVar5;
        (this_ptr->max).z = (float)(int)pCVar3 * fVar5;
      }
      iVar6 = 1;
      if (1 < model_ptr->vertex_count) {
        do {
          iVar6 = iVar6 + 1;
          core_box_cpp_CBoundingBox3D_expand_FUN_00420240(this_ptr,(CVector3f *)&stack0xffffffd8);
        } while (iVar6 < model_ptr->vertex_count);
      }
      if (this_ptr != local_14) {
        (local_14->min).x = (this_ptr->min).x;
        (local_14->min).y = (this_ptr->min).y;
        (local_14->min).z = (this_ptr->min).z;
      }
      if ((CBoundingBox3D *)&local_14->max != this_ptr) {
        (local_14->max).x = (this_ptr->min).x;
        (local_14->max).y = (this_ptr->min).y;
        (local_14->max).z = (this_ptr->min).z;
      }
      core_box_cpp_CBoundingBox3D_expand_FUN_00420240(local_14,(CVector3f *)this_ptr);
      core_box_cpp_CBoundingBox3D_expand_FUN_00420240(local_14,&this_ptr->max);
      local_14 = local_14 + 1;
      unaff_EBP = unaff_EBP + 1;
    } while (unaff_EBP < model_ptr->frame_count);
  }
  return;
}
