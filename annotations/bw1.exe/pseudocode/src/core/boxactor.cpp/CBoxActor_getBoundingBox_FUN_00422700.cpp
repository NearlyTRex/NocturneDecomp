// Name: core_boxactor.cpp_CBoxActor_getBoundingBox_FUN_00422700
// Address: 00422700
// Address Range: [[00422700, 0042275d]]
// Convention: __stack_esi
// Signature: CBoundingBox3D * __stack_esi core_boxactor_cpp_CBoxActor_getBoundingBox_FUN_00422700(CBoxActor *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __stack_esi core_boxactor_cpp_CBoxActor_getBoundingBox_FUN_00422700(CBoxActor *this_ptr,CBoundingBox3D *out_box)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  CBoundingBox3D *pCVar3;
  float *pfVar4;
  byte bVar5;
  double dVar6;
  float afStack_28 [6];
  int iStack_10;
  
  bVar5 = 0;
  afStack_28[0] = 6.075171e-39;
  dVar6 = round((double)this_ptr->anim_frame);
  iStack_10 = (int)ROUND(dVar6);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(&this_ptr->model);
  pCVar3 = pCVar1->frame_bounds + iStack_10;
  pfVar4 = afStack_28;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar4 = (pCVar3->min).x;
    pCVar3 = (CBoundingBox3D *)((int)pCVar3 + (uint)bVar5 * -8 + 4);
    pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
  }
  pfVar4 = afStack_28;
  pCVar3 = out_box;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    (pCVar3->min).x = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
    pCVar3 = (CBoundingBox3D *)((int)pCVar3 + (uint)bVar5 * -8 + 4);
  }
  return out_box;
}
