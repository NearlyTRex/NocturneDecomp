// Name: core_crossbow.cpp_CCrossbow_FUN_00448f20
// Address: 00448f20
// Address Range: [[00448f20, 0044953a]]
// Convention: __cdecl
// Signature: int core_crossbow.cpp_CCrossbow_FUN_00448f20(CCrossbow * this_ptr)

#include "nocturne.h"

int __cdecl core_crossbow_cpp_CCrossbow_FUN_00448f20(CCrossbow *this_ptr)

{
  CDemonActor *actor;
  CDemonSet *this_ptr_00;
  CVector3f *pCVar1;
  int iVar2;
  CCharacter *this_ptr_01;
  int extraout_EAX;
  byte auStack_100 [8];
  CDemonActor *pCStack_f8;
  SDamageInfo SStack_f4;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  CVector3f CStack_a0;
  CVector3f CStack_94;
  CVector3f CStack_88;
  CVector3f CStack_7c;
  CVector3f CStack_70;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  SDamageInfo local_4c;
  
  pCVar1 = (CVector3f *)(*(((this_ptr->base).base.vtable._uc)->_uc).cfunc3)();
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&CStack_70,pCVar1);
  iVar2 = core_weapon_cpp_FUN_005ee6e0();
  if (iVar2 == 0) {
    return 0;
  }
  CStack_88.z = (this_ptr->base).bolt_velocity;
  CStack_88.x = 0.0;
  CStack_88.y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            ((CDemonActor *)this_ptr,&CStack_a0,&CStack_88);
  CStack_7c.x = CStack_70.x + CStack_a0.x;
  CStack_7c.y = CStack_70.y + CStack_a0.y;
  CStack_7c.z = CStack_70.z + CStack_a0.z;
  local_4c.impact_direction.z = (float)1.5 / (this_ptr->base).bolt_velocity;
  fStack_58 = CStack_a0.x * local_4c.impact_direction.z;
  fStack_54 = CStack_a0.y * local_4c.impact_direction.z;
  fStack_50 = CStack_a0.z * local_4c.impact_direction.z;
  CStack_94.x = CStack_70.x - fStack_58;
  CStack_94.y = CStack_70.y - fStack_54;
  CStack_94.z = CStack_70.z - fStack_50;
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  actor = *(CDemonActor **)&(this_ptr->base).carried_by_actor;
  if (actor != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,actor);
  }
  local_4c.weapon_damage_modifier = 0.0;
  do {
    pCStack_f8 = (CDemonActor *)
                 core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                           (g_CDemonSetPtr,&CStack_94,&CStack_7c);
    auStack_100 = (byte  [8])(double)(float)pCStack_f8;
    local_4c.wielder = pCStack_f8;
    if (((double)auStack_100 < 0.0) || (1.0 < (double)auStack_100)) break;
    this_ptr_01 = (CCharacter *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if ((this_ptr_01 != (CCharacter *)0x0) &&
       (iVar2 = (*(((this_ptr_01->base).vtable._uc)->_uc).isDamageable)(this_ptr_01), 0 < iVar2)) {
      this_ptr_01 = (CCharacter *)0x0;
    }
    local_4c.attacker =
         core_actor_cpp_castToClassHash_FUN_0040c790
                   (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    local_4c.ammo_type =
         (int)core_actor_cpp_castToClassHash_FUN_0040c790
                        (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    if (this_ptr_01 == (CCharacter *)0x0) {
      if ((CGlass *)local_4c.attacker == (CGlass *)0x0) {
        if ((CDemonActor *)local_4c.ammo_type == (CDemonActor *)0x0) {
          core_fire_cpp_CFireEffect_createStake_FUN_004c7bb0
                    (g_CFireEffectPtr,&g_CDemonSetPtr->collision_impact_position,
                     (CVector3f *)&(this_ptr->base).base.orient,&g_CDemonSetPtr->collision_normal,
                     g_CDemonSetPtr->ground_type);
          break;
        }
        core_trigger_cpp_FUN_005e0aa0();
        iVar2 = core_trigger_cpp_FUN_005e0ac0();
        if (iVar2 != 0) {
          local_4c.wielder = (CDemonActor *)(*(((this_ptr->base).base.vtable._uc)->_uc).cfunc6)();
          core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
        }
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                  (g_CDemonSetPtr,(CDemonActor *)local_4c.ammo_type);
      }
      else {
        core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0((CGlass *)local_4c.attacker);
        if (extraout_EAX == 0) break;
        core_glass_cpp_CGlass_shatter_FUN_004eaef0
                  ((CGlass *)local_4c.attacker,&g_CDemonSetPtr->collision_impact_position);
      }
    }
    else {
      iVar2 = (*(((this_ptr_01->base).vtable._uc)->_uc).cfunc3)();
      this_ptr_00 = g_CDemonSetPtr;
      if (iVar2 != 0) {
        if (local_4c.weapon_damage_modifier == 0.0) {
          (this_ptr->base).ammo_count = (this_ptr->base).ammo_count + 1;
          core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(this_ptr_00);
          return 0;
        }
        break;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_f4);
      SStack_f4.unknown = g_CDemonSetPtr->unk1;
      local_4c.weapon_damage_modifier = (float)(*(((this_ptr->base).base.vtable._uc)->_uc).cfunc6)()
      ;
      pCStack_f8 = (CDemonActor *)0x3ecccccd;
      auStack_100._4_4_ = local_4c.weapon_damage_modifier;
      fStack_b8 = (g_CDemonSetPtr->collision_result_vec2).x -
                  (g_CDemonSetPtr->collision_result_vec1).x;
      fStack_b4 = (g_CDemonSetPtr->collision_result_vec2).y -
                  (g_CDemonSetPtr->collision_result_vec1).y;
      fStack_b0 = (g_CDemonSetPtr->collision_result_vec2).z -
                  (g_CDemonSetPtr->collision_result_vec1).z;
      local_4c.impact_direction.z =
           (float)10 /
           SQRT(fStack_b0 * fStack_b0 + fStack_b8 * fStack_b8 + fStack_b4 * fStack_b4);
      local_4c.unknown = (int)(fStack_b8 * local_4c.impact_direction.z);
      local_4c.damage_amount = fStack_b4 * local_4c.impact_direction.z;
      local_4c.damage_flags = (int)(fStack_b0 * local_4c.impact_direction.z);
      if (&SStack_f4 != &local_4c) {
        SStack_f4.unknown = local_4c.unknown;
        SStack_f4.damage_amount = local_4c.damage_amount;
        SStack_f4.damage_flags = local_4c.damage_flags;
      }
      pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (&this_ptr_01->base,&local_4c.impact_point,
                          &g_CDemonSetPtr->collision_impact_position);
      if ((CVector3f *)&SStack_f4.impact_point.y != pCVar1) {
        SStack_f4.impact_point.y = pCVar1->x;
        SStack_f4.impact_point.z = pCVar1->y;
        SStack_f4.impact_force = pCVar1->z;
      }
      SStack_f4.impact_direction.x = (float)(this_ptr->base).ammo_type;
      SStack_f4.impact_direction.z = 1.45735e-43;
      SStack_f4.ammo_type = (int)this_ptr;
      SStack_f4.impact_direction.y = 0.15;
      SStack_f4.damage_type =
           (int)(*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
      (*(((this_ptr_01->base).vtable._uc)->_uc).processDamage)
                (this_ptr_01,(SDamageInfo *)(auStack_100 + 4));
      if (*(int *)((this_ptr->base).unk1 + 0xc) == 0) break;
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
    }
    local_4c.weapon_damage_modifier = (float)((int)local_4c.weapon_damage_modifier + 1);
  } while ((int)local_4c.weapon_damage_modifier < 4);
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  if (1.0 < (float)pCStack_f8) {
    pCStack_f8 = (CDemonActor *)0x3f800000;
  }
  fStack_64 = CStack_a0.x * (float)pCStack_f8;
  fStack_60 = CStack_a0.y * (float)pCStack_f8;
  fStack_5c = CStack_a0.z * (float)pCStack_f8;
  fStack_b8 = CStack_94.x + fStack_64;
  fStack_b4 = CStack_94.y + fStack_60;
  fStack_b0 = CStack_94.z + fStack_5c;
  core_sound_cpp_CSound_playActorSound_FUN_005b3a40
            (g_CSoundPtr,(CDemonActor *)this_ptr,"bow-!.wav",&CStack_70);
  (this_ptr->base).unk2[0xc] = -6;
  (this_ptr->base).unk2[0xd] = '~';
  (this_ptr->base).unk2[0xe] = '*';
  (this_ptr->base).unk2[0xf] = '?';
  return 1;
}
