// Name: core_bat.cpp_CBat_getBoundingBox_FUN_00411480
// Address: 00411480
// Address Range: [[00411480, 004114dd]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_bat_cpp_CBat_getBoundingBox_FUN_00411480(CBat *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_bat_cpp_CBat_getBoundingBox_FUN_00411480(CBat *this_ptr,CBoundingBox3D *out_box)

{
  CKeyFramedModelInstance *this_ptr_00;
  CKeyFramedModel *pCVar1;
  int iVar2;
  CBoundingBox3D *unaff_ESI;
  CBoundingBox3D *pCVar3;
  float *pfVar4;
  byte bVar5;
  float10 fVar6;
  float afStack_24 [6];
  int iStack_c;
  
  bVar5 = 0;
  fVar6 = (float10)this_ptr->anim_frame;
  this_ptr_00 = (CKeyFramedModelInstance *)round();
  iStack_c = (int)ROUND(fVar6);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(this_ptr_00);
  pCVar3 = pCVar1->frame_bounds + iStack_c;
  pfVar4 = afStack_24;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
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
