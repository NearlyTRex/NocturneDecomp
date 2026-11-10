// Name: core_rifle.cpp_CRifle_getMuzzlePoint_FUN_0053ffb0
// Address: 0053ffb0
// Address Range: [[0053ffb0, 0054005d]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_rifle_cpp_CRifle_getMuzzlePoint_FUN_0053ffb0(CRifle *this_ptr,CVector3f *out_point)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3f * __cdecl core_rifle_cpp_CRifle_getMuzzlePoint_FUN_0053ffb0(CRifle *this_ptr,CVector3f *out_point)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  CVector3f *unaff_ESI;
  CBoundingBox3D *pCVar3;
  float *pfVar4;
  byte bVar5;
  byte auStack_23d4 [9124];
  float afStack_30 [3];
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float afStack_14 [2];
  
  bVar5 = 0;
  core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_00567370
            ((CDeformableModelInstance *)auStack_23d4);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                     ((CKeyFramedModelInstance *)&this_ptr->field_0x158);
  pCVar3 = &pCVar1->bounds;
  pfVar4 = afStack_30;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar4 = (pCVar3->min).x;
    pCVar3 = (CBoundingBox3D *)((int)pCVar3 + (uint)bVar5 * -8 + 4);
    pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
  }
  iVar2 = _strcmp(&this_ptr->field_0x1d0,"LITEDESLILE.kfm");
  if (iVar2 == 0) {
    afStack_14[1] = fStack_1c + (float)_DAT_005edc2f;
    afStack_14[0] = fStack_20 + (float)_DAT_005edc27;
  }
  else {
    afStack_14[0] = fStack_20;
    afStack_14[1] = fStack_1c;
  }
  fStack_18 = fStack_24 * _DAT_005edc37;
  core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_005673f0
            ((CDeformableModelInstance *)auStack_23d4,0);
  pfVar4 = (float *)((int)unaff_ESI + (uint)bVar5 * -8 + 4);
  unaff_ESI->x = fStack_18;
  *pfVar4 = afStack_14[(uint)bVar5 * -2];
  pfVar4[(uint)bVar5 * -2 + 1] = afStack_14[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  return unaff_ESI;
}
