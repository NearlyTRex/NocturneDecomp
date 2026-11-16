// Name: core_muzzle.cpp_SFollowFormation_updateSlot_FUN_0059dd00
// Address: 0059dd00
// Address Range: [[0059dd00, 0059decc]]
// Convention: __cdecl
// Signature: void __cdecl core_muzzle_cpp_SFollowFormation_updateSlot_FUN_0059dd00(SFollowFormation *this_ptr,SFollowSlotStruct *slot)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_muzzle_cpp_SFollowFormation_updateSlot_FUN_0059dd00(SFollowFormation *this_ptr,SFollowSlotStruct *slot)

{
  float *pfVar1;
  CCharacter *pCVar2;
  CCharacter *pCVar3;
  float fVar4;
  byte bVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float afStackY_1058 [1017];
  CVector3f local_70;
  float local_64;
  float local_60;
  float local_5c;
  CVector3f local_58;
  CVector3f local_4c;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24 [5];
  
  bVar5 = 0;
  pCVar2 = slot->follower;
  if (pCVar2 != (CCharacter *)0x0) {
    pCVar3 = this_ptr->leader;
    local_4c.x = (pCVar2->base).location.position.x - (pCVar3->base).location.position.x;
    local_4c.y = (pCVar2->base).location.position.y - (pCVar3->base).location.position.y;
    local_4c.z = (pCVar2->base).location.position.z - (pCVar3->base).location.position.z;
    if (&local_58 != &local_4c) {
      local_58.x = local_4c.x;
      local_58.z = local_4c.z;
    }
    local_24[3] = SQRT(local_58.z * local_58.z + local_58.x * local_58.x);
    local_58.y = 0.0;
    if (local_24[3] <= 0.0) {
      local_58.x = 0.0;
      local_58.z = 0.0;
    }
    else {
      fVar4 = 1.0 / local_24[3];
      local_58.x = local_58.x * fVar4;
      local_58.y = fVar4 * 0.0;
      local_58.z = local_58.z * fVar4;
    }
    pfVar1 = &slot->follow_distance;
    local_58.x = local_58.x * *pfVar1;
    local_58.y = local_58.y * *pfVar1;
    local_58.z = local_58.z * *pfVar1;
    if (&slot->offset != &local_58) {
      (slot->offset).x = local_58.x;
      (slot->offset).y = local_58.y;
      (slot->offset).z = local_58.z;
    }
    pCVar2 = this_ptr->leader;
    local_64 = (pCVar2->base).location.position.x + (slot->offset).x;
    local_60 = (pCVar2->base).location.position.y + (slot->offset).y;
    local_5c = (pCVar2->base).location.position.z + (slot->offset).z;
    if (&slot->target_position != (CVector3f *)&local_34) {
      (slot->target_position).x = local_64;
      (slot->target_position).y = local_60;
      (slot->target_position).z = local_5c;
    }
    local_40 = local_4c.x;
    local_3c = local_4c.y;
    local_38 = local_4c.z;
    local_34 = local_64;
    local_30 = local_60;
    local_2c = local_5c;
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&local_58,&local_70);
    local_28 = local_70.x;
    local_24[(uint)bVar5 * -2] = *(float *)((int)&local_70 + (uint)bVar5 * -8 + 4);
    local_24[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         *(float *)((int)&local_70 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    slot->heading = local_24[0];
    slot->follower_radius = slot->follower->collision_cylinder_radius;
    fVar6 = (float10)(slot->offset).y;
    fVar7 = (float10)(slot->offset).x;
    fVar8 = (float10)(slot->offset).z;
    fVar6 = asin
                      ((float10)slot->follower_radius /
                       SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6));
    slot->spread_angle = (float)(fVar6 * (float10)_DAT_005ef84f);
  }
  return;
}
