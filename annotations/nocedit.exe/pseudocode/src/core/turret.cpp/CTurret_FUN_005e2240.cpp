// Name: core_turret.cpp_CTurret_FUN_005e2240
// Address: 005e2240
// Address Range: [[005e2240, 005e2315]]
// Convention: __cdecl
// Signature: void core_turret.cpp_CTurret_FUN_005e2240(CTurret * this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_turret_cpp_CTurret_FUN_005e2240(CTurret *this_ptr)

{
  float fVar1;
  CKeyFramedModel *this_ptr_00;
  CVector3i *pCVar2;
  int iVar3;
  float local_18;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)(this_ptr->field1_0x578 + 0xc));
  core_weapon_cpp_CWeapon_FUN_005edff0(&this_ptr->base_weapon);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                          (&(this_ptr->base_weapon).model);
  pCVar2 = core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_00477890
                     (this_ptr_00,this_ptr_00->frame_count + -1);
  local_18 = -1e+30;
  for (iVar3 = 0; iVar3 < this_ptr_00->vertex_count; iVar3 = iVar3 + 1) {
    fVar1 = (float)pCVar2->z + (float)pCVar2->y * (float)0.20000000000000001;
    if (local_18 < fVar1) {
      *(float *)(this_ptr->field12_0x85c + 4) = (float)pCVar2->x * _DAT_00664b58;
      *(float *)(this_ptr->field12_0x85c + 8) = (float)pCVar2->y * _DAT_00664b58;
      *(float *)(this_ptr->field12_0x85c + 0xc) = (float)pCVar2->z * _DAT_00664b58;
      local_18 = fVar1;
    }
    pCVar2 = pCVar2 + 1;
  }
  this_ptr->field12_0x85c[0x58] = '\0';
  this_ptr->field12_0x85c[0x59] = '\0';
  this_ptr->field12_0x85c[0x5a] = '\0';
  this_ptr->field12_0x85c[0x5b] = '\0';
  this_ptr->field12_0x85c[0x5c] = '\0';
  this_ptr->field12_0x85c[0x5d] = '\0';
  this_ptr->field12_0x85c[0x5e] = '\0';
  this_ptr->field12_0x85c[0x5f] = '\0';
  this_ptr->field12_0x85c[0x54] = '\0';
  this_ptr->field12_0x85c[0x55] = '\0';
  this_ptr->field12_0x85c[0x56] = '\0';
  this_ptr->field12_0x85c[0x57] = '\0';
  return;
}
