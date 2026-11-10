// Name: core_ladder.cpp_CLadder_getBoundingBox_FUN_004e00d0
// Address: 004e00d0
// Address Range: [[004e00d0, 004e018e]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_ladder_cpp_CLadder_getBoundingBox_FUN_004e00d0(CLadder *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CBoundingBox3D * __cdecl core_ladder_cpp_CLadder_getBoundingBox_FUN_004e00d0(CLadder *this_ptr,CBoundingBox3D *out_box)

{
  float fVar1;
  CKeyFramedModel *pCVar2;
  int iVar3;
  CBoundingBox3D *unaff_ESI;
  CBoundingBox3D *pCVar4;
  float *pfVar5;
  byte bVar6;
  CBoundingBox3D CStack_38;
  float afStack_20 [6];
  
  bVar6 = 0;
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(&this_ptr->model);
  if (pCVar2->poly_count < 1) {
    fVar1 = (float)_DAT_005dbd66;
    CStack_38.min.y = -0.1;
    CStack_38.max.x = (this_ptr->ladder_size).x * fVar1;
    CStack_38.max.y = (this_ptr->ladder_size).y + (float)_DAT_005dbd6e;
    CStack_38.max.z = (this_ptr->ladder_size).z * fVar1;
    iVar3 = 6;
    CStack_38.min.z = -(this_ptr->ladder_size).z * fVar1;
    CStack_38.min.x = -(this_ptr->ladder_size).x * fVar1;
    pCVar4 = &CStack_38;
    pfVar5 = afStack_20;
  }
  else {
    pfVar5 = afStack_20;
    pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(&this_ptr->model);
    iVar3 = 6;
    pCVar4 = &pCVar2->bounds;
  }
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar5 = (pCVar4->min).x;
    pCVar4 = (CBoundingBox3D *)((int)pCVar4 + (uint)bVar6 * -8 + 4);
    pfVar5 = pfVar5 + (uint)bVar6 * -2 + 1;
  }
  pfVar5 = afStack_20;
  pCVar4 = unaff_ESI;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    (pCVar4->min).x = *pfVar5;
    pfVar5 = pfVar5 + (uint)bVar6 * -2 + 1;
    pCVar4 = (CBoundingBox3D *)((int)pCVar4 + (uint)bVar6 * -8 + 4);
  }
  return unaff_ESI;
}
