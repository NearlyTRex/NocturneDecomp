// Name: core_weapon.cpp_CWeapon_getMuzzlePoint_FUN_0057b820
// Address: 0057b820
// Address Range: [[0057b820, 0057b870]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_weapon_cpp_CWeapon_getMuzzlePoint_FUN_0057b820(CWeapon *this_ptr,CVector3f *out_point)

#include "nocturne.h"

CVector3f * __cdecl core_weapon_cpp_CWeapon_getMuzzlePoint_FUN_0057b820(CWeapon *this_ptr,CVector3f *out_point)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  CVector3f *unaff_ESI;
  CBoundingBox3D *pCVar3;
  float *pfVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_ffc [1011];
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  bVar6 = 0;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(&this_ptr->model);
  pCVar3 = &pCVar1->bounds;
  pfVar4 = (float *)&stack0xffffffd4;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar4 = (pCVar3->min).x;
    pCVar3 = (CBoundingBox3D *)((int)pCVar3 + (uint)bVar6 * -8 + 4);
    pfVar4 = pfVar4 + (uint)bVar6 * -2 + 1;
  }
  local_10 = local_1c;
  local_14 = 0;
  local_c = local_18;
  puVar5 = (uint *)((int)unaff_ESI + (uint)bVar6 * -8 + 4);
  unaff_ESI->x = 0.0;
  *puVar5 = *(uint *)((int)&stack0xfffffff0 + (uint)bVar6 * -8);
  puVar5[(uint)bVar6 * -2 + 1] =
       *(uint *)((int)&stack0xfffffff4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  return unaff_ESI;
}
