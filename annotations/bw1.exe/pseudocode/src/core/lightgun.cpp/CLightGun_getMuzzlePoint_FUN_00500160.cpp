// Name: core_lightgun.cpp_CLightGun_getMuzzlePoint_FUN_00500160
// Address: 00500160
// Address Range: [[00500160, 005001b6]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_lightgun_cpp_CLightGun_getMuzzlePoint_FUN_00500160(CLightGun *this_ptr,CVector3f *out_point)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3f * __cdecl core_lightgun_cpp_CLightGun_getMuzzlePoint_FUN_00500160(CLightGun *this_ptr,CVector3f *out_point)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  CVector3f *unaff_ESI;
  CBoundingBox3D *pCVar3;
  float *pfVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_ffc [1011];
  float fStack_1c;
  uint uStack_18;
  uint uStack_14;
  float fStack_10;
  uint uStack_c;
  
  bVar6 = 0;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                     ((CKeyFramedModelInstance *)&this_ptr->field_0x158);
  pCVar3 = &pCVar1->bounds;
  pfVar4 = (float *)&stack0xffffffd4;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar4 = (pCVar3->min).x;
    pCVar3 = (CBoundingBox3D *)((int)pCVar3 + (uint)bVar6 * -8 + 4);
    pfVar4 = pfVar4 + (uint)bVar6 * -2 + 1;
  }
  uStack_14 = 0;
  uStack_c = uStack_18;
  fStack_10 = fStack_1c + (float)_DAT_005e6e7a;
  puVar5 = (uint *)((int)unaff_ESI + (uint)bVar6 * -8 + 4);
  unaff_ESI->x = 0.0;
  *puVar5 = *(uint *)((int)&stack0xfffffff0 + (uint)bVar6 * -8);
  puVar5[(uint)bVar6 * -2 + 1] =
       *(uint *)((int)&stack0xfffffff4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  return unaff_ESI;
}
