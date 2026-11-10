// Name: core_crossbow.cpp_CCrossbow_getMuzzlePoint_FUN_004499f0
// Address: 004499f0
// Address Range: [[004499f0, 00449a40]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_crossbow_cpp_CCrossbow_getMuzzlePoint_FUN_004499f0(CCrossbow *this_ptr,CVector3f *out_point)

#include "nocturne.h"

CVector3f * __cdecl core_crossbow_cpp_CCrossbow_getMuzzlePoint_FUN_004499f0(CCrossbow *this_ptr,CVector3f *out_point)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  CVector3f *unaff_ESI;
  CBoundingBox3D *pCVar3;
  float *pfVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_ffc [1011];
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  bVar6 = 0;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(&(this_ptr->base).model)
  ;
  pCVar3 = &pCVar1->bounds;
  pfVar4 = (float *)&stack0xffffffd4;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar4 = (pCVar3->min).x;
    pCVar3 = (CBoundingBox3D *)((int)pCVar3 + (uint)bVar6 * -8 + 4);
    pfVar4 = pfVar4 + (uint)bVar6 * -2 + 1;
  }
  uStack_10 = uStack_1c;
  uStack_14 = 0;
  uStack_c = uStack_18;
  puVar5 = (uint *)((int)unaff_ESI + (uint)bVar6 * -8 + 4);
  unaff_ESI->x = 0.0;
  *puVar5 = *(uint *)((int)&stack0xfffffff0 + (uint)bVar6 * -8);
  puVar5[(uint)bVar6 * -2 + 1] =
       *(uint *)((int)&stack0xfffffff4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  return unaff_ESI;
}
