// Name: core_turret.cpp_FUN_005e3750
// Address: 005e3750
// Address Range: [[005e3750, 005e3c6a]]
// Convention: unknown
// Signature: undefined core_turret.cpp_FUN_005e3750()

#include "nocturne.h"

/* Signature: byte actors_weapon_turret.cpp_FUN_005e3750(uint param_1) */

uint core_turret_cpp_FUN_005e3750(void)

{
  float fVar1;
  CVector3f *pCVar2;
  CCharacter *this_ptr;
  int iVar3;
  CDemonActor *pCVar4;
  CDemonActor *pCVar5;
  int extraout_EAX;
  CDemonActor *in_stack_00000004;
  ulonglong uStack_e8;
  SDamageInfo SStack_e0;
  CVector3f CStack_a4;
  CVector3f CStack_98;
  CVector3f aCStack_8c [2];
  CVector3f CStack_74;
  CVector3f CStack_68;
  SDamageInfo local_5c;
  CGlass *pCStack_20;
  float fStack_18;
  
  pCVar2 = (CVector3f *)(*(((in_stack_00000004->vtable)._uc)->_uc).cfunc3)();
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(in_stack_00000004,&CStack_a4,pCVar2);
  CStack_68.z = in_stack_00000004[2].orient.heading;
  CStack_68.x = 0.0;
  CStack_68.y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            (in_stack_00000004,(CVector3f *)&local_5c.impact_direction.z,&CStack_68);
  CStack_98.x = CStack_a4.x + local_5c.impact_direction.z;
  CStack_98.y = CStack_a4.y + (float)local_5c.ammo_type;
  CStack_98.z = CStack_a4.z + local_5c.weapon_damage_modifier;
  CStack_74.x = CStack_a4.x;
  CStack_74.y = CStack_a4.y;
  CStack_74.z = CStack_a4.z;
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
  local_5c.wielder = (CDemonActor *)0x0;
  do {
    fStack_18 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                          (g_CDemonSetPtr,&CStack_74,&CStack_98);
    uStack_e8 = (double)fStack_18;
    if ((uStack_e8 < 0.0) || (1.0 < uStack_e8)) break;
    this_ptr = (CCharacter *)
               core_actor_cpp_castToClassHash_FUN_0040c790
                         (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if ((this_ptr != (CCharacter *)0x0) &&
       (iVar3 = (*(((this_ptr->base).vtable._uc)->_uc).isDamageable)(this_ptr), 0 < iVar3)) {
      this_ptr = (CCharacter *)0x0;
    }
    pCStack_20 = (CGlass *)
                 core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    local_5c.damage_type = (int)pCVar4;
    local_5c.attacker =
         core_actor_cpp_castToClassHash_FUN_0040c790
                   (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
    pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
    if (this_ptr == (CCharacter *)0x0) {
      if (pCStack_20 == (CGlass *)0x0) {
        if (pCVar4 != (CDemonActor *)0x0) {
          core_trigger_cpp_FUN_005e0aa0();
          iVar3 = core_trigger_cpp_FUN_005e0ac0();
          pCVar4 = (CDemonActor *)local_5c.damage_type;
          if (iVar3 != 0) {
            fStack_18 = (float)(*(((in_stack_00000004->vtable)._uc)->_uc).cfunc6)();
            core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
            pCVar4 = (CDemonActor *)local_5c.damage_type;
          }
          goto LAB_005e3ae2;
        }
        if (local_5c.attacker == (CDemonActor *)0x0) {
          if (pCVar5 == (CDemonActor *)0x0) {
            core_fire_cpp_CFireEffect_FUN_004c76a0(g_CFireEffectPtr);
            break;
          }
          core_flamecan_cpp_FUN_004cb340();
        }
        else {
          core_crate_cpp_FUN_00448a70();
        }
      }
      else {
        core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(pCStack_20);
        if (extraout_EAX == 0) break;
        core_glass_cpp_CGlass_shatter_FUN_004eaef0
                  (pCStack_20,&g_CDemonSetPtr->collision_impact_position);
      }
    }
    else {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_e0);
      SStack_e0.unknown = g_CDemonSetPtr->unk1;
      local_5c.wielder = (CDemonActor *)(*(((in_stack_00000004->vtable)._uc)->_uc).cfunc6)();
      uStack_e8 = (double)CONCAT44(0x3ecccccd,local_5c.wielder);
      CStack_98.x = (g_CDemonSetPtr->collision_result_vec2).x -
                    (g_CDemonSetPtr->collision_result_vec1).x;
      CStack_98.y = (g_CDemonSetPtr->collision_result_vec2).y -
                    (g_CDemonSetPtr->collision_result_vec1).y;
      CStack_98.z = (g_CDemonSetPtr->collision_result_vec2).z -
                    (g_CDemonSetPtr->collision_result_vec1).z;
      local_5c.attacker =
           (CDemonActor *)
           ((float)10 /
           SQRT(CStack_98.z * CStack_98.z + CStack_98.x * CStack_98.x + CStack_98.y * CStack_98.y));
      local_5c.unknown = (int)(CStack_98.x * (float)local_5c.attacker);
      local_5c.damage_amount = CStack_98.y * (float)local_5c.attacker;
      local_5c.damage_flags = (int)(CStack_98.z * (float)local_5c.attacker);
      if (&SStack_e0 != &local_5c) {
        SStack_e0.unknown = local_5c.unknown;
        SStack_e0.damage_amount = local_5c.damage_amount;
        SStack_e0.damage_flags = local_5c.damage_flags;
      }
      pCVar2 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (&this_ptr->base,aCStack_8c,&g_CDemonSetPtr->collision_impact_position);
      if ((CVector3f *)&SStack_e0.impact_point.y != pCVar2) {
        SStack_e0.impact_point.y = pCVar2->x;
        SStack_e0.impact_point.z = pCVar2->y;
        SStack_e0.impact_force = pCVar2->z;
      }
      SStack_e0.impact_direction.x = *(float *)(in_stack_00000004[4].actor_name + 0xc);
      SStack_e0.impact_direction.y = 1.0;
      SStack_e0.ammo_type = (int)in_stack_00000004;
      SStack_e0.impact_direction.z = 1.41531e-43;
      SStack_e0.damage_type =
           (int)(*((in_stack_00000004->vtable)._ub)->getCarrier)(in_stack_00000004);
      (*(((this_ptr->base).vtable._uc)->_uc).processDamage)(this_ptr,(SDamageInfo *)&uStack_e8);
      if (in_stack_00000004[2].orient.bank == 0.0) break;
      pCVar4 = g_CDemonSetPtr->collision_actor;
LAB_005e3ae2:
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCVar4);
    }
    local_5c.wielder = (CDemonActor *)((local_5c.wielder)->actor_name + 1);
  } while ((int)local_5c.wielder < 4);
  local_5c.impact_force = CStack_a4.x;
  local_5c.impact_direction.y = CStack_a4.z;
  local_5c.impact_direction.x = CStack_a4.y + -0.125f;
  core_fire_cpp_CFireEffect_FUN_004c7a60(g_CFireEffectPtr);
  fVar1 = *(float *)(in_stack_00000004[5].create_event + 0x44);
  in_stack_00000004[6].create_event[0x28] = '\x02';
  in_stack_00000004[6].create_event[0x29] = '\0';
  in_stack_00000004[6].create_event[0x2a] = '\0';
  in_stack_00000004[6].create_event[0x2b] = '\0';
  in_stack_00000004[2].orient_matrix.m[1].z = fVar1;
  return 1;
}
