// Name: core_turret.cpp_CTurret_setup_FUN_005e2240
// Address: 005e2240
// Address Range: [[005e2240, 005e2315]]
// Convention: __cdecl
// Signature: void __cdecl core_turret_cpp_CTurret_setup_FUN_005e2240(CTurret *this_ptr)

#include "nocturne.h"

void __cdecl core_turret_cpp_CTurret_setup_FUN_005e2240(CTurret *this_ptr)

{
  float fVar1;
  CKeyFramedModel *this_ptr_00;
  CVector3i *pCVar2;
  int iVar3;
  float local_18;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&this_ptr->model);
  core_weapon_cpp_CWeapon_setup_FUN_005edff0(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                          (&(this_ptr->base).model);
  pCVar2 = core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_00477890
                     (this_ptr_00,this_ptr_00->frame_count + -1);
  local_18 = -1e+30;
  for (iVar3 = 0; iVar3 < this_ptr_00->vertex_count; iVar3 = iVar3 + 1) {
    fVar1 = (float)pCVar2->z + (float)pCVar2->y * (float)0.20000000000000001;
    if (local_18 < fVar1) {
      (this_ptr->barrel_tip_pos).x = (float)pCVar2->x * 0.00390625f;
      (this_ptr->barrel_tip_pos).y = (float)pCVar2->y * 0.00390625f;
      (this_ptr->barrel_tip_pos).z = (float)pCVar2->z * 0.00390625f;
      local_18 = fVar1;
    }
    pCVar2 = pCVar2 + 1;
  }
  this_ptr->loop_sfx_handle = 0;
  this_ptr->anim_sfx_handle = 0;
  this_ptr->fire_sound_frames = 0;
  return;
}
