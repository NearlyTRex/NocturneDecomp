// Name: core_doc.cpp_CDoc_updateArmRecoilBlend_FUN_0045b510
// Address: 0045b510
// Address Range: [[0045b510, 0045bb47]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_updateArmRecoilBlend_FUN_0045b510(CDoc *this_ptr,float delta_time,int is_weapon_active)

#include "nocturne.h"

void __cdecl core_doc_cpp_CDoc_updateArmRecoilBlend_FUN_0045b510(CDoc *this_ptr,float delta_time,int is_weapon_active)

{
  CDoc *this_ptr_00;
  EWeaponType EVar1;
  float fVar2;
  EDeathState EVar3;
  ECollisionType EVar4;
  byte bVar5;
  float afStackY_1100 [991];
  CVector3f *pCVar6;
  float local_15c;
  float local_158;
  float fStack_150;
  SCollisionInfo SStack_14c;
  CVector3f local_124;
  CVector3f local_118;
  float local_10c;
  float local_108 [4];
  float local_f8;
  CVector3f local_f4;
  CVector3f local_e8;
  float local_dc;
  float local_d8 [2];
  CVector3f local_d0;
  CVector3f local_c4;
  CVector3f local_b8;
  CVector3f local_ac;
  CVector3f local_a0;
  CVector3f local_94;
  CVector3f local_88;
  float local_7c;
  float local_78;
  float local_74;
  CVector3f local_70;
  CVector3f local_64;
  CVector3f local_58;
  float local_4c;
  float local_48 [2];
  CVector3f local_40 [2];
  float local_28;
  float local_24;
  int local_20;
  int local_1c;
  float local_18;
  
  bVar5 = 0;
  if (this_ptr->weapon == (CWeapon *)0x0) {
    is_weapon_active = 0;
  }
  else {
    EVar1 = this_ptr->weapon->weapon_type;
    if ((EVar1 == WEAPON_TYPE_GUN) || (EVar1 == WEAPON_TYPE_FLASHLIGHT)) {
      is_weapon_active = 1;
    }
  }
  local_158 = 0.0;
  if (is_weapon_active != 0) {
    local_1c = 0;
    for (local_20 = 0; local_20 < g_CDemonSetPtr->character_count; local_20 = local_20 + 1) {
      this_ptr_00 = *(CDoc **)((int)g_CDemonSetPtr->characters + local_1c);
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                ((CDemonActor *)this_ptr,&(this_ptr_00->base).base.base.location.position,&local_70)
      ;
      local_108[2] = local_70.x;
      local_108[(uint)bVar5 * -2 + 3] = *(float *)((int)&local_70 + (uint)bVar5 * -8 + 4);
      local_108[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
           *(float *)((int)&local_70 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      if (((ABS(local_108[2]) <= (float)1.5) &&
          (ABS(local_108[3]) <= (float)4)) &&
         ((0.0 <= local_f8 &&
          ((((int)local_f8 < 0x40c00001 && (this_ptr_00 != this_ptr)) &&
           (EVar3 = (*(((this_ptr_00->base).base.base.vtable._uc)->_uc).getDeathState)
                              ((CCharacter *)this_ptr_00), EVar3 == DEATH_STATE_ALIVE)))))) {
        core_setcolid_cpp_SCollisionInfo_ctor_FUN_00537fa0(&SStack_14c);
        EVar4 = (*((this_ptr_00->base).base.base.vtable._ub)->getCollisionType)
                          ((CDemonActor *)this_ptr_00,&SStack_14c);
        if ((EVar4 == COLLISION_TYPE_CYLINDER) &&
           (fStack_150 = 1.0 - ((local_f8 - SStack_14c.cylinder_radius) + (float)-1.5)
                               * (float)0.40000000000000002, local_158 <= fStack_150)) {
          if (fStack_150 < 0.0) {
            fStack_150 = 0.0;
          }
          local_158 = fStack_150;
        }
      }
      local_1c = local_1c + 4;
    }
    core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
    core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,(CDemonActor *)this_ptr);
    local_28 = 1.5;
    local_24 = 3.5;
    local_b8.x = 0.0;
    local_b8.y = 0.0;
    local_b8.z = 3.5;
    core_actor_cpp_CDemonActor_transformVector_FUN_00408cf0
              ((CDemonActor *)this_ptr,&local_b8,&local_ac);
    local_4c = local_ac.x;
    local_48[(uint)bVar5 * -2] = *(float *)((int)&local_ac + (uint)bVar5 * -8 + 4);
    local_48[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         *(float *)((int)&local_ac + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    if (&local_7c != &local_4c) {
      local_7c = local_4c;
      local_78 = local_48[0];
      local_74 = local_48[1];
    }
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
              (&(this_ptr->base).base.model,g_INT_01b4d25c,&local_d0);
    pCVar6 = &local_f4;
    local_f4.x = local_d0.x;
    *(uint *)((int)&local_f4 + (uint)bVar5 * -8 + 4) =
         *(uint *)((int)&local_d0 + (uint)bVar5 * -8 + 4);
    *(uint *)((int)&local_f4 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
         *(uint *)((int)&local_d0 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
              ((CDemonActor *)this_ptr,pCVar6,local_40);
    local_118.x = local_40[0].x;
    *(uint *)((int)&local_118 + (uint)bVar5 * -8 + 4) =
         *(uint *)((int)local_40 + (uint)bVar5 * -8 + 4);
    *(uint *)((int)&local_118 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
         *(uint *)((int)local_40 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    if (&local_124 != &local_118) {
      local_124.x = local_118.x;
      local_124.y = local_118.y;
      local_124.z = local_118.z;
    }
    local_d8[0] = local_124.y + local_78;
    local_d8[1] = local_124.z + local_74;
    local_dc = local_124.x + local_7c;
    local_64.x = local_124.x + local_7c;
    *(float *)((int)&local_64 + (uint)bVar5 * -8 + 4) = local_d8[(uint)bVar5 * -2];
    *(float *)((int)&local_64 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
         local_d8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    if (&local_94 != &local_64) {
      local_94.x = local_64.x;
      local_94.y = local_64.y;
      local_94.z = local_64.z;
    }
    local_18 = core_setcolid_cpp_CDemonSet_raycast_FUN_00535ee0(g_CDemonSetPtr,&local_124,&local_94)
    ;
    if (((0.0 <= local_18) && (local_18 < 1.0)) &&
       (fVar2 = 1.0 - (local_18 * local_24 - local_28) / (local_24 - local_28), local_158 < fVar2))
    {
      local_158 = fVar2;
    }
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
              (&(this_ptr->base).base.model,g_INT_01b4d260,&local_58);
    pCVar6 = &local_88;
    local_88.x = local_58.x;
    *(uint *)((int)&local_88 + (uint)bVar5 * -8 + 4) =
         *(uint *)((int)&local_58 + (uint)bVar5 * -8 + 4);
    *(uint *)((int)&local_88 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
         *(uint *)((int)&local_58 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
              ((CDemonActor *)this_ptr,pCVar6,&local_c4);
    local_a0.x = local_c4.x;
    *(uint *)((int)&local_a0 + (uint)bVar5 * -8 + 4) =
         *(uint *)((int)&local_c4 + (uint)bVar5 * -8 + 4);
    *(uint *)((int)&local_a0 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
         *(uint *)((int)&local_c4 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    if (&local_124 != &local_a0) {
      local_124.x = local_a0.x;
      local_124.y = local_a0.y;
      local_124.z = local_a0.z;
    }
    local_108[0] = local_124.y + local_78;
    local_108[1] = local_124.z + local_74;
    local_10c = local_124.x + local_7c;
    local_e8.x = local_124.x + local_7c;
    *(float *)((int)&local_e8 + (uint)bVar5 * -8 + 4) = local_108[(uint)bVar5 * -2];
    *(float *)((int)&local_e8 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
         local_108[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    if (&local_94 != &local_e8) {
      local_94.x = local_e8.x;
      local_94.y = local_e8.y;
      local_94.z = local_e8.z;
    }
    local_18 = core_setcolid_cpp_CDemonSet_raycast_FUN_00535ee0(g_CDemonSetPtr,&local_124,&local_94)
    ;
    if (((0.0 <= local_18) && (local_18 < 1.0)) &&
       (fVar2 = 1.0 - (local_18 * local_24 - local_28) / (local_24 - local_28), local_158 < fVar2))
    {
      local_158 = fVar2;
    }
    core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
  }
  if (1.0 < local_158) {
    local_158 = 1.0;
  }
  local_15c = local_158 - this_ptr->arm_recoil_blend;
  if (0.0 <= local_15c) {
    if ((0.0 < local_15c) && (delta_time / 0.05f < local_15c)) {
      local_15c = delta_time / 0.05f;
    }
  }
  else {
    fVar2 = -delta_time * (1.0 / 0.5f);
    if (local_15c < fVar2) {
      local_15c = fVar2;
    }
  }
  this_ptr->arm_recoil_blend = this_ptr->arm_recoil_blend + local_15c;
  return;
}
