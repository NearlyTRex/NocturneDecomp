// Name: core_drip.cpp_CDrip_getBoundingBox_FUN_0046f1f0
// Address: 0046f1f0
// Address Range: [[0046f1f0, 0046f26e]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_drip_cpp_CDrip_getBoundingBox_FUN_0046f1f0(CDrip *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_drip_cpp_CDrip_getBoundingBox_FUN_0046f1f0(CDrip *this_ptr,CBoundingBox3D *out_box)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  CBoundingBox3D *unaff_ESI;
  CBoundingBox3D *pCVar3;
  float *pfVar4;
  byte bVar5;
  CBoundingBox3D CStack_3c;
  float afStack_24 [6];
  
  bVar5 = 0;
  if (this_ptr->type == DRIP_TYPE_STALAG) {
    pfVar4 = afStack_24;
    pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(&this_ptr->model);
    iVar2 = 6;
    pCVar3 = pCVar1->frame_bounds;
  }
  else {
    CStack_3c.min.z = -0.5;
    CStack_3c.min.x = -0.5;
    CStack_3c.min.y = 0.0;
    CStack_3c.max.x = 0.5;
    iVar2 = 6;
    CStack_3c.max.y = 1.0;
    CStack_3c.max.z = 1.0;
    pCVar3 = &CStack_3c;
    pfVar4 = afStack_24;
  }
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar4 = (pCVar3->min).x;
    pCVar3 = (CBoundingBox3D *)((int)pCVar3 + (uint)bVar5 * -8 + 4);
    pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
  }
  pfVar4 = afStack_24;
  pCVar3 = unaff_ESI;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    (pCVar3->min).x = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
    pCVar3 = (CBoundingBox3D *)((int)pCVar3 + (uint)bVar5 * -8 + 4);
  }
  return unaff_ESI;
}
