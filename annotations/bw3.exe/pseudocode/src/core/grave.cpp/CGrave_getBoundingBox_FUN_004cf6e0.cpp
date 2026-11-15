// Name: core_grave.cpp_CGrave_getBoundingBox_FUN_004cf6e0
// Address: 004cf6e0
// Address Range: [[004cf6e0, 004cf7e1]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_grave_cpp_CGrave_getBoundingBox_FUN_004cf6e0(CGrave *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_grave_cpp_CGrave_getBoundingBox_FUN_004cf6e0(CGrave *this_ptr,CBoundingBox3D *out_box)

{
  CVector3f *pCVar1;
  CKeyFramedModel *pCVar2;
  int iVar3;
  CBoundingBox3D *unaff_ESI;
  float *pfVar4;
  CBoundingBox3D *pCVar5;
  byte bVar6;
  double dVar7;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  bVar6 = 0;
  if (*(int *)(0x01D81080 + 0x1008) == 0) {
    dVar7 = round((double)this_ptr->cur_frame);
    fStack_10 = (float)(int)ROUND(dVar7);
    pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(&this_ptr->model);
    pCVar5 = pCVar2->frame_bounds + (int)fStack_10;
    if ((CBoundingBox3D *)&stack0xffffffd8 != pCVar5) {
      fStack_24 = (pCVar5->min).y;
      fStack_20 = (pCVar5->min).z;
    }
    if ((CVector3f *)&fStack_1c != &pCVar5->max) {
      fStack_1c = (pCVar5->max).x;
      fStack_18 = (pCVar5->max).y;
      fStack_14 = (pCVar5->max).z;
      pfVar4 = (float *)&stack0xffffffd8;
      pCVar5 = unaff_ESI;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        (pCVar5->min).x = *pfVar4;
        pfVar4 = pfVar4 + (uint)bVar6 * -2 + 1;
        pCVar5 = (CBoundingBox3D *)((int)pCVar5 + (uint)bVar6 * -8 + 4);
      }
      return unaff_ESI;
    }
  }
  else {
    pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(&this_ptr->model);
    if ((CBoundingBox3D *)&fStack_24 != &pCVar2->bounds) {
      fStack_24 = (pCVar2->bounds).min.x;
      fStack_20 = (pCVar2->bounds).min.y;
      fStack_1c = (pCVar2->bounds).min.z;
    }
    pCVar1 = &(pCVar2->bounds).max;
    if ((CVector3f *)&fStack_18 != pCVar1) {
      fStack_18 = pCVar1->x;
      fStack_14 = (pCVar2->bounds).max.y;
      fStack_10 = (pCVar2->bounds).max.z;
    }
  }
  pfVar4 = (float *)&stack0xffffffd8;
  pCVar5 = unaff_ESI;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    (pCVar5->min).x = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar6 * -2 + 1;
    pCVar5 = (CBoundingBox3D *)((int)pCVar5 + (uint)bVar6 * -8 + 4);
  }
  return unaff_ESI;
}
