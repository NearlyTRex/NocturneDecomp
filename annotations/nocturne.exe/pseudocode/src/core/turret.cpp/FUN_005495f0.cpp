// Name: core_turret.cpp_FUN_005495f0
// Address: 005495f0
// Address Range: [[005495f0, 005496c5]]
// Convention: unknown
// Signature: void core_turret_cpp_FUN_005495f0(CWeapon *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_turret_cpp_FUN_005495f0(CWeapon *param_1)

{
  float fVar1;
  CKeyFramedModel *this_ptr;
  CVector3i *pCVar2;
  int iVar3;
  float local_18;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510
            ((CKeyFramedModelInstance *)(param_1[1].base.actor_name + 0xc));
  core_weapon_cpp_CWeapon_setup_FUN_00553f10(param_1);
  this_ptr = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(&param_1->model);
  pCVar2 = core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_00453080
                     (this_ptr,this_ptr->frame_count + -1);
  local_18 = -1e+30;
  for (iVar3 = 0; iVar3 < this_ptr->vertex_count; iVar3 = iVar3 + 1) {
    fVar1 = (float)pCVar2->z + (float)pCVar2->y * (float)0.20000000000000001;
    if (local_18 < fVar1) {
      param_1[1].can_attach_light = (int)((float)pCVar2->x * _DAT_005a3788);
      param_1[1].muzzle_flash_color.r = (int)((float)pCVar2->y * _DAT_005a3788);
      param_1[1].muzzle_flash_color.g = (int)((float)pCVar2->z * _DAT_005a3788);
      local_18 = fVar1;
    }
    pCVar2 = pCVar2 + 1;
  }
  param_1[1].physics_box.dead = 0;
  param_1[1].physics_box.linear_velocity.x = 0.0;
  param_1[1].physics_box.rotation_matrix.m[2].z = 0.0;
  return;
}
