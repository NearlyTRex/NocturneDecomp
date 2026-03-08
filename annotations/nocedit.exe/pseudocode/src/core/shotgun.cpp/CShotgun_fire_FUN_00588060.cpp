// Name: core_shotgun.cpp_CShotgun_fire_FUN_00588060
// Address: 00588060
// Address Range: [[00588060, 005880fc] [0058830a, 005883ba]]
// Convention: __cdecl
// Signature: int __cdecl core_shotgun_cpp_CShotgun_fire_FUN_00588060(CShotgun *this_ptr)

#include "nocturne.h"

int __cdecl core_shotgun_cpp_CShotgun_fire_FUN_00588060(CShotgun *this_ptr)

{
  CDemonActor *actor;
  CVector3f *pCVar1;
  int iVar2;
  float fVar3;
  CCharacter *this_ptr_00;
  EDeathState EVar4;
  CTrigger *this_ptr_01;
  float fVar5;
  float10 fVar6;
  float10 fVar7;
  SDamageInfo SStack_11c;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  CVector3f CStack_d4;
  CVector3f CStack_c8;
  CVector3f CStack_bc;
  CVector3f CStack_b0;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  CVector3f CStack_8c;
  CVector3f local_80;
  CVector3f CStack_74;
  CVector3f aCStack_68 [2];
  float fStack_4c;
  CFlameCan *pCStack_48;
  CCrate *pCStack_44;
  int iStack_40;
  float fStack_3c;
  float fStack_38;
  CTrigger *pCStack_34;
  CFlameCan *pCStack_30;
  CCrate *pCStack_2c;
  float fStack_28;
  int iStack_24;
  CGlass *pCStack_20;
  float fStack_1c;
  float fStack_18;
  
  pCVar1 = (*(((this_ptr->base).base.vtable._uw)->_uw).getMuzzlePoint)(&this_ptr->base,&local_80);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&CStack_bc,pCVar1);
  iVar2 = core_weapon_cpp_CWeapon_fire_FUN_005ee6e0(&this_ptr->base);
  if (iVar2 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_005b3a40
              (g_CSoundPtr,(CDemonActor *)this_ptr,"shotgun-noammo.wav",&CStack_bc);
    return 0;
  }
  fVar6 = (float10)fptan((float10)this_ptr->spread_angle * (float10)3.1415926535000001 *
                         (float10)0.0055555555555555497);
  pCStack_44 = (CCrate *)(float)(fVar6 * (float10)(this_ptr->base).bolt_velocity);
  fStack_38 = (float)core_actor_cpp_getRandomInt_FUN_0040cc70(10,0xf);
  iStack_40 = 0;
  if (0 < (int)fStack_38) {
    do {
      fStack_4c = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,6.2831855);
      fStack_18 = fStack_4c;
      fStack_18 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,(float)pCStack_44);
      fVar6 = (float10)fcos((float10)fStack_4c);
      fVar7 = (float10)fsin((float10)fStack_4c);
      CStack_b0.x = (float)(fVar6 * (float10)fStack_18);
      CStack_b0.y = (float)(fVar7 * (float10)fStack_18);
      CStack_b0.z = (this_ptr->base).bolt_velocity;
      pCVar1 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                         ((CDemonActor *)this_ptr,&CStack_c8,&CStack_b0);
      if (&CStack_b0 != pCVar1) {
        CStack_b0.x = pCVar1->x;
        CStack_b0.y = pCVar1->y;
        CStack_b0.z = pCVar1->z;
      }
      CStack_74.x = CStack_bc.x + CStack_b0.x;
      CStack_74.y = CStack_bc.y + CStack_b0.y;
      CStack_74.z = CStack_bc.z + CStack_b0.z;
      fStack_3c = (float)1.5 / (this_ptr->base).bolt_velocity;
      fStack_a4 = CStack_b0.x * fStack_3c;
      fStack_a0 = CStack_b0.y * fStack_3c;
      fStack_9c = CStack_b0.z * fStack_3c;
      aCStack_68[0].x = CStack_bc.x - fStack_a4;
      aCStack_68[0].y = CStack_bc.y - fStack_a0;
      aCStack_68[0].z = CStack_bc.z - fStack_9c;
      core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)this_ptr);
      actor = (this_ptr->base).carried_by_actor;
      if (actor != (CDemonActor *)0x0) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,actor);
      }
      iStack_24 = 0;
      do {
        fVar3 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                          (g_CDemonSetPtr,aCStack_68,&CStack_74);
        fStack_18 = fVar3;
        if ((fVar3 < 0.0) || (1.0 < fVar3)) break;
        this_ptr_00 = (CCharacter *)
                      core_actor_cpp_castToClassHash_FUN_0040c790
                                (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
        if ((this_ptr_00 != (CCharacter *)0x0) &&
           (EVar4 = (*(((this_ptr_00->base).vtable._uc)->_uc).getDeathState)(this_ptr_00),
           0 < (int)EVar4)) {
          this_ptr_00 = (CCharacter *)0x0;
        }
        pCStack_20 = (CGlass *)
                     core_actor_cpp_castToClassHash_FUN_0040c790
                               (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
        this_ptr_01 = (CTrigger *)
                      core_actor_cpp_castToClassHash_FUN_0040c790
                                (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
        pCStack_34 = this_ptr_01;
        pCStack_2c = (CCrate *)
                     core_actor_cpp_castToClassHash_FUN_0040c790
                               (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
        pCStack_30 = (CFlameCan *)
                     core_actor_cpp_castToClassHash_FUN_0040c790
                               (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
        fVar5 = (*(((this_ptr->base).base.vtable._uw)->_uw).getDamage)(&this_ptr->base);
        fStack_18 = fStack_38;
        fStack_28 = ((1.0 - fVar3) * fVar5) / (float)(int)fStack_38;
        if (this_ptr_00 == (CCharacter *)0x0) {
          if (pCStack_20 == (CGlass *)0x0) {
            if (this_ptr_01 == (CTrigger *)0x0) {
              if (pCStack_2c == (CCrate *)0x0) {
                if (pCStack_30 == (CFlameCan *)0x0) {
                  core_fire_cpp_CFireEffect_createBulletImpact_FUN_004c76a0
                            (g_CFireEffectPtr,&g_CDemonSetPtr->collision_impact_position,
                             &g_CDemonSetPtr->collision_normal,g_CDemonSetPtr->ground_type,
                             g_CDemonSetPtr->collision_actor);
                  break;
                }
                core_flamecan_cpp_CFlameCan_ignite_FUN_004cb340(pCStack_30);
              }
              else {
                core_crate_cpp_CCrate_explode_FUN_00448a70(pCStack_2c);
              }
            }
            else {
              core_trigger_cpp_CTrigger_onProjectileHit_FUN_005e0aa0(this_ptr_01);
              iVar2 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_005e0ac0
                                (this_ptr_01,(CDemonActor *)this_ptr);
              if (iVar2 != 0) {
                core_trigger_cpp_CTrigger_applyDamage_FUN_005e0b00(this_ptr_01,fStack_28);
              }
              core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,&pCStack_34->base);
            }
          }
          else {
            iVar2 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(pCStack_20);
            if (iVar2 == 0) break;
            core_glass_cpp_CGlass_shatter_FUN_004eaef0
                      (pCStack_20,&g_CDemonSetPtr->collision_impact_position);
          }
        }
        else {
          iVar2 = (*(((this_ptr_00->base).vtable._uc)->_uc).canWalk)(this_ptr_00);
          if (iVar2 != 0) break;
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_11c);
          SStack_11c.hit_part_index = g_CDemonSetPtr->collision_part_index;
          SStack_11c.damage_amount = fStack_28;
          SStack_11c.gore_multiplier = 0.4;
          fStack_98 = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
          fStack_94 = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
          fStack_90 = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
          fStack_1c = (float)10 /
                      SQRT(fStack_90 * fStack_90 + fStack_98 * fStack_98 + fStack_94 * fStack_94);
          fStack_e0 = fStack_98 * fStack_1c;
          fStack_dc = fStack_94 * fStack_1c;
          fStack_d8 = fStack_90 * fStack_1c;
          if (&SStack_11c.impact_point != (CVector3f *)&fStack_e0) {
            SStack_11c.impact_point.x = fStack_e0;
            SStack_11c.impact_point.y = fStack_dc;
            SStack_11c.impact_point.z = fStack_d8;
          }
          pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                             (&this_ptr_00->base,&CStack_d4,
                              &g_CDemonSetPtr->collision_impact_position);
          if (&SStack_11c.impact_direction != pCVar1) {
            SStack_11c.impact_direction.x = pCVar1->x;
            SStack_11c.impact_direction.y = pCVar1->y;
            SStack_11c.impact_direction.z = pCVar1->z;
          }
          SStack_11c.ammo_type = (this_ptr->base).ammo_type;
          SStack_11c.damage_type = DAMAGE_TYPE_IMMUNE|DAMAGE_TYPE_DROWN;
          SStack_11c.dismember_prob = 0.15;
          SStack_11c.attacker = (CDemonActor *)this_ptr;
          SStack_11c.wielder =
               (*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
          (*(((this_ptr_00->base).vtable._uc)->_uc).processDamage)(this_ptr_00,&SStack_11c);
          if ((this_ptr->base).can_penetrate == 0) break;
          core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                    (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
        }
        iStack_24 = iStack_24 + 1;
      } while (iStack_24 < 4);
      iStack_40 = iStack_40 + 1;
    } while (iStack_40 < (int)fStack_38);
  }
  core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
  CStack_8c.x = CStack_bc.x;
  CStack_8c.z = CStack_bc.z;
  CStack_8c.y = CStack_bc.y + -0.125f;
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004c7a60
            (g_CFireEffectPtr,&CStack_8c,&(this_ptr->base).base.orient_matrix);
  core_sound_cpp_CSound_playActorSound_FUN_005b3a40
            (g_CSoundPtr,(CDemonActor *)this_ptr,"shotgun.wav",&CStack_bc);
  (this_ptr->base).fire_cooldown_timer = 0.666;
  return 1;
}
