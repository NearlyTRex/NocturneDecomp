// Name: core_turret.cpp_CTurret_setup_FUN_0057e550
// Address: 0057e550
// Address Range: [[0057e550, 0057e625]]
// Convention: __cdecl
// Signature: void __cdecl core_turret_cpp_CTurret_setup_FUN_0057e550(CTurret *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_turret_cpp_CTurret_setup_FUN_0057e550(CTurret *this_ptr)

{
  float fVar1;
  CKeyFramedModel *this_ptr_00;
  CVector3i *pCVar2;
  int iVar3;
  float fStack_14;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(&this_ptr->model);
  core_weapon_cpp_CWeapon_setup_FUN_00589b50(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
                          (&(this_ptr->base).model);
  pCVar2 = core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_0044e6e0
                     (this_ptr_00,this_ptr_00->frame_count + -1);
  fStack_14 = -1e+30;
  for (iVar3 = 0; iVar3 < this_ptr_00->vertex_count; iVar3 = iVar3 + 1) {
    fVar1 = (float)pCVar2->z + (float)pCVar2->y * (float)_DAT_005ed684;
    if (fStack_14 < fVar1) {
      (this_ptr->barrel_tip_pos).x = (float)pCVar2->x * _DAT_005fd518;
      (this_ptr->barrel_tip_pos).y = (float)pCVar2->y * _DAT_005fd518;
      (this_ptr->barrel_tip_pos).z = (float)pCVar2->z * _DAT_005fd518;
      fStack_14 = fVar1;
    }
    pCVar2 = pCVar2 + 1;
  }
  this_ptr->sfx_handles[0] = 0;
  this_ptr->sfx_handles[1] = 0;
  this_ptr->fire_sound_frames = 0;
  return;
}
