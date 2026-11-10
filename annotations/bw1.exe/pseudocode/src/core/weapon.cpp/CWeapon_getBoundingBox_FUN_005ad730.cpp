// Name: core_weapon.cpp_CWeapon_getBoundingBox_FUN_005ad730
// Address: 005ad730
// Address Range: [[005ad730, 005ad76c]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_weapon_cpp_CWeapon_getBoundingBox_FUN_005ad730(CWeapon *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_weapon_cpp_CWeapon_getBoundingBox_FUN_005ad730(CWeapon *this_ptr,CBoundingBox3D *out_box)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  CBoundingBox3D *unaff_ESI;
  CBoundingBox3D *pCVar3;
  float *pfVar4;
  byte bVar5;
  float afStack_20 [6];
  
  bVar5 = 0;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(&this_ptr->model);
  pCVar3 = pCVar1->frame_bounds;
  pfVar4 = afStack_20;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar4 = (pCVar3->min).x;
    pCVar3 = (CBoundingBox3D *)((int)pCVar3 + (uint)bVar5 * -8 + 4);
    pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
  }
  pfVar4 = afStack_20;
  pCVar3 = unaff_ESI;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    (pCVar3->min).x = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
    pCVar3 = (CBoundingBox3D *)((int)pCVar3 + (uint)bVar5 * -8 + 4);
  }
  return unaff_ESI;
}
