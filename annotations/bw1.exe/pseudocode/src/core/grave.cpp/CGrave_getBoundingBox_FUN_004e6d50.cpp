// Name: core_grave.cpp_CGrave_getBoundingBox_FUN_004e6d50
// Address: 004e6d50
// Address Range: [[004e6d50, 004e6e51]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_grave_cpp_CGrave_getBoundingBox_FUN_004e6d50(CGrave *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_grave_cpp_CGrave_getBoundingBox_FUN_004e6d50(CGrave *this_ptr,CBoundingBox3D *out_box)

{
  CVector3f *pCVar1;
  CKeyFramedModel *pCVar2;
  CKeyFramedModelInstance *this_ptr_00;
  int iVar3;
  CBoundingBox3D *unaff_ESI;
  CBoundingBox3D *pCVar4;
  CBoundingBox3D *pCVar5;
  byte bVar6;
  float10 fVar7;
  CBoundingBox3D CStack_24;
  int iStack_c;
  
  bVar6 = 0;
  if (*(int *)(0x01D2C900 + 0x1008) == 0) {
    fVar7 = (float10)this_ptr->cur_frame;
    this_ptr_00 = (CKeyFramedModelInstance *)round();
    iStack_c = (int)ROUND(fVar7);
    pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(this_ptr_00);
    pCVar4 = pCVar2->frame_bounds + iStack_c;
    if (&CStack_24 != pCVar4) {
      CStack_24.min.x = (pCVar4->min).x;
      CStack_24.min.y = (pCVar4->min).y;
      CStack_24.min.z = (pCVar4->min).z;
    }
    if (&CStack_24.max != &pCVar4->max) {
      CStack_24.max.x = (pCVar4->max).x;
      CStack_24.max.y = (pCVar4->max).y;
      CStack_24.max.z = (pCVar4->max).z;
      pCVar4 = &CStack_24;
      pCVar5 = unaff_ESI;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        (pCVar5->min).x = *(float *)pCVar4;
        pCVar4 = (CBoundingBox3D *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
        pCVar5 = (CBoundingBox3D *)((int)pCVar5 + (uint)bVar6 * -8 + 4);
      }
      return unaff_ESI;
    }
  }
  else {
    pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(&this_ptr->model);
    if (&CStack_24 != &pCVar2->bounds) {
      CStack_24.min.x = (pCVar2->bounds).min.x;
      CStack_24.min.y = (pCVar2->bounds).min.y;
      CStack_24.min.z = (pCVar2->bounds).min.z;
    }
    pCVar1 = &(pCVar2->bounds).max;
    if (&CStack_24.max != pCVar1) {
      CStack_24.max.x = pCVar1->x;
      CStack_24.max.y = (pCVar2->bounds).max.y;
      CStack_24.max.z = (pCVar2->bounds).max.z;
    }
  }
  pCVar4 = &CStack_24;
  pCVar5 = unaff_ESI;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    (pCVar5->min).x = *(float *)pCVar4;
    pCVar4 = (CBoundingBox3D *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
    pCVar5 = (CBoundingBox3D *)((int)pCVar5 + (uint)bVar6 * -8 + 4);
  }
  return unaff_ESI;
}
