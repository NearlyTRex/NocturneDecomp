// Name: core_turret.cpp_CTurret_setup_FUN_005495f0
// Address: 005495f0
// Address Range: [[005495f0, 005496c5]]
// Convention: __cdecl
// Signature: void __cdecl core_turret_cpp_CTurret_setup_FUN_005495f0(CTurret *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_turret_cpp_CTurret_setup_FUN_005495f0(CTurret *this_ptr)

{
  float fVar1;
  CKeyFramedModel *this_ptr_00;
  CVector3i *pCVar2;
  int iVar3;
  float local_18;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(&this_ptr->model);
  core_weapon_cpp_CWeapon_setup_FUN_00553f10(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                          (&(this_ptr->base).model);
  pCVar2 = core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_00453080
                     (this_ptr_00,this_ptr_00->frame_count + -1);
  local_18 = -1e+30;
  for (iVar3 = 0; iVar3 < this_ptr_00->vertex_count; iVar3 = iVar3 + 1) {
    fVar1 = (float)pCVar2->z + (float)pCVar2->y * (float)0.20000000000000001;
    if (local_18 < fVar1) {
      (this_ptr->barrel_tip_pos).x = (float)pCVar2->x * _DAT_005a3788;
      (this_ptr->barrel_tip_pos).y = (float)pCVar2->y * _DAT_005a3788;
      (this_ptr->barrel_tip_pos).z = (float)pCVar2->z * _DAT_005a3788;
      local_18 = fVar1;
    }
    pCVar2 = pCVar2 + 1;
  }
  this_ptr->sfx_handles[0] = 0;
  this_ptr->sfx_handles[1] = 0;
  this_ptr->fire_sound_frames = 0;
  return;
}
