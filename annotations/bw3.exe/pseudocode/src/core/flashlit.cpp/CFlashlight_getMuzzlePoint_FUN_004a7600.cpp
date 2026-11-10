// Name: core_flashlit.cpp_CFlashlight_getMuzzlePoint_FUN_004a7600
// Address: 004a7600
// Address Range: [[004a7600, 004a769b]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_flashlit_cpp_CFlashlight_getMuzzlePoint_FUN_004a7600(CFlashlight *this_ptr,CVector3f *out_point)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3f * __cdecl core_flashlit_cpp_CFlashlight_getMuzzlePoint_FUN_004a7600(CFlashlight *this_ptr,CVector3f *out_point)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  CVector3f *unaff_ESI;
  CBoundingBox3D *pCVar3;
  float *pfVar4;
  byte bVar5;
  byte auStack_23d0 [9124];
  float afStack_2c [3];
  float fStack_20;
  float fStack_1c;
  uint uStack_18;
  float fStack_14;
  float afStack_10 [2];
  
  bVar5 = 0;
  core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0054bf00
            ((CDeformableModelInstance *)auStack_23d0);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(&(this_ptr->base).model)
  ;
  pCVar3 = &pCVar1->bounds;
  pfVar4 = afStack_2c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar4 = (pCVar3->min).x;
    pCVar3 = (CBoundingBox3D *)((int)pCVar3 + (uint)bVar5 * -8 + 4);
    pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
  }
  fStack_14 = fStack_20 * _DAT_005c0d03;
  afStack_10[1] = (float)uStack_18;
  afStack_10[0] = fStack_1c + (float)_DAT_005c0d07;
  core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0054bf80
            ((CDeformableModelInstance *)auStack_23d0,0);
  pfVar4 = (float *)((int)unaff_ESI + (uint)bVar5 * -8 + 4);
  unaff_ESI->x = fStack_14;
  *pfVar4 = afStack_10[(uint)bVar5 * -2];
  pfVar4[(uint)bVar5 * -2 + 1] = afStack_10[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  return unaff_ESI;
}
