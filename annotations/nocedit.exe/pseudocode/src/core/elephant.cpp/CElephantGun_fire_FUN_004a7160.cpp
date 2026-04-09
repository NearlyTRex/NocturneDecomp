// Name: core_elephant.cpp_CElephantGun_fire_FUN_004a7160
// Address: 004a7160
// Address Range: [[004a7160, 004a7892]]
// Convention: __cdecl
// Signature: int __cdecl core_elephant_cpp_CElephantGun_fire_FUN_004a7160(CElephantGun *this_ptr)

#include "nocturne.h"

int __cdecl core_elephant_cpp_CElephantGun_fire_FUN_004a7160(CElephantGun *this_ptr)

{
  float fVar1;
  CVector3f *pCVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar8;
  CVector3f *pCVar9;
  float fVar3;
  CCharacter *this_ptr_00;
  EDeathState EVar4;
  CGlass *this_ptr_02;
  CTrigger *this_ptr_01;
  CCrate *this_ptr_03;
  CFlameCan *this_ptr_04;
  float fVar5;
  int iVar10;
  float10 fVar6;
  float10 fVar11;
  float10 fVar7;
  SDamageInfo SStack_11c;
  CVector3f CStack_e0;
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
  CVector3f CStack_80;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  CVector3f local_68 [2];
  float fStack_48;
  float fStack_44;
  CCrate *pCStack_40;
  CFlameCan *pCStack_3c;
  float fStack_38;
  CTrigger *pCStack_34;
  CGlass *pCStack_30;
  CFlameCan *pCStack_2c;
  float fStack_28;
  int iStack_24;
  CGlass *pCStack_20;
  float fStack_1c;
  float fStack_18;
  CDemonActor *actor;
  
  pCVar1 = (*(((this_ptr->base).base.vtable._uw)->_uw).getMuzzlePoint)(&this_ptr->base,local_68);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&CStack_80,pCVar1);
  iVar2 = core_weapon_cpp_CWeapon_fire_FUN_005ee6e0(&this_ptr->base);
  if (iVar2 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_005b3a40
              (g_CSoundPtr,(CDemonActor *)this_ptr,"shotgun-noammo.wav",&CStack_80);
    return 0;
  }
  fVar6 = (float10)fptan((float10)this_ptr->spread_angle * (float10)3.1415926535000001 *
                         (float10)0.0055555555555555497);
  fVar1 = (this_ptr->base).bolt_velocity;
  iVar3 = core_actor_cpp_getRandomInt_FUN_0040cc70(10,0xf);
  pCStack_40 = (CCrate *)0x0;
  if (0 < iVar3) {
    do {
      fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(0.0,6.2831855);
      fVar8 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10
                        (0.0,(float)(fVar6 * (float10)fVar1));
      fVar11 = (float10)fcos((float10)fVar4);
      fVar7 = (float10)fsin((float10)fVar4);
      CStack_bc.x = (float)(fVar11 * (float10)fVar8);
      CStack_bc.y = (float)(fVar7 * (float10)fVar8);
      CStack_bc.z = (this_ptr->base).bolt_velocity;
      pCVar9 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                         ((CDemonActor *)this_ptr,&CStack_b0,&CStack_bc);
      if (&CStack_bc != pCVar9) {
        CStack_bc.x = pCVar9->x;
        CStack_bc.y = pCVar9->y;
        CStack_bc.z = pCVar9->z;
      }
      CStack_d4.x = CStack_80.x + CStack_bc.x;
      CStack_d4.y = CStack_80.y + CStack_bc.y;
      CStack_d4.z = CStack_80.z + CStack_bc.z;
      fVar4 = (float)1.5 / (this_ptr->base).bolt_velocity;
      CStack_8c.x = CStack_80.x - CStack_bc.x * fVar4;
      CStack_8c.y = CStack_80.y - CStack_bc.y * fVar4;
      CStack_8c.z = CStack_80.z - CStack_bc.z * fVar4;
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
                          (g_CDemonSetPtr,&CStack_8c,&CStack_d4);
        if ((fVar3 < 0.0) || (1.0 < fVar3)) break;
        this_ptr_00 = (CCharacter *)
                      core_actor_cpp_castToClassHash_FUN_0040c790
                                (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
        if ((this_ptr_00 != (CCharacter *)0x0) &&
           (EVar4 = (*(((this_ptr_00->base).vtable._uc)->_uc).getDeathState)(this_ptr_00),
           0 < (int)EVar4)) {
          this_ptr_00 = (CCharacter *)0x0;
        }
        this_ptr_02 = (CGlass *)
                      core_actor_cpp_castToClassHash_FUN_0040c790
                                (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
        this_ptr_01 = (CTrigger *)
                      core_actor_cpp_castToClassHash_FUN_0040c790
                                (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
        this_ptr_03 = (CCrate *)
                      core_actor_cpp_castToClassHash_FUN_0040c790
                                (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
        this_ptr_04 = (CFlameCan *)
                      core_actor_cpp_castToClassHash_FUN_0040c790
                                (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
        fVar5 = (*(((this_ptr->base).base.vtable._uw)->_uw).getDamage)(&this_ptr->base);
        fVar4 = ((1.0 - fVar3) * fVar5) / (float)iVar3;
        if (this_ptr_00 == (CCharacter *)0x0) {
          if (this_ptr_02 == (CGlass *)0x0) {
            if (this_ptr_01 == (CTrigger *)0x0) {
              if (this_ptr_03 == (CCrate *)0x0) {
                if (this_ptr_04 == (CFlameCan *)0x0) {
                  core_fire_cpp_CFireEffect_createBulletImpact_FUN_004c76a0
                            (g_CFireEffectPtr,&g_CDemonSetPtr->collision_impact_position,
                             &g_CDemonSetPtr->collision_normal,g_CDemonSetPtr->ground_type,
                             g_CDemonSetPtr->collision_actor);
                  break;
                }
                core_flamecan_cpp_CFlameCan_ignite_FUN_004cb340(this_ptr_04);
              }
              else {
                core_crate_cpp_CCrate_explode_FUN_00448a70(this_ptr_03);
              }
            }
            else {
              core_trigger_cpp_CTrigger_onProjectileHit_FUN_005e0aa0(this_ptr_01);
              iVar10 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_005e0ac0
                                 (this_ptr_01,(CDemonActor *)this_ptr);
              if (iVar10 != 0) {
                core_trigger_cpp_CTrigger_applyDamage_FUN_005e0b00(this_ptr_01,fVar4);
              }
              core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                        (g_CDemonSetPtr,(CDemonActor *)this_ptr_01);
            }
          }
          else {
            iVar10 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(this_ptr_02);
            if (iVar10 == 0) break;
            core_glass_cpp_CGlass_shatter_FUN_004eaef0
                      (this_ptr_02,&g_CDemonSetPtr->collision_impact_position);
          }
        }
        else {
          iVar10 = (*(((this_ptr_00->base).vtable._uc)->_uc).canWalk)(this_ptr_00);
          if (iVar10 != 0) break;
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_11c);
          SStack_11c.hit_part_index = g_CDemonSetPtr->collision_part_index;
          SStack_11c.gore_multiplier = 0.4;
          fStack_98 = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
          fStack_94 = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
          fStack_90 = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
          fVar8 = (float)10 /
                  SQRT(fStack_90 * fStack_90 + fStack_98 * fStack_98 + fStack_94 * fStack_94);
          fStack_a4 = fStack_98 * fVar8;
          fStack_a0 = fStack_94 * fVar8;
          fStack_9c = fStack_90 * fVar8;
          if (&SStack_11c.impact_point != (CVector3f *)&fStack_a4) {
            SStack_11c.impact_point.x = fStack_a4;
            SStack_11c.impact_point.y = fStack_a0;
            SStack_11c.impact_point.z = fStack_9c;
          }
          SStack_11c.damage_amount = fVar4;
          pCVar9 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                             (&this_ptr_00->base,&CStack_e0,
                              &g_CDemonSetPtr->collision_impact_position);
          if (&SStack_11c.impact_direction != pCVar9) {
            SStack_11c.impact_direction.x = pCVar9->x;
            SStack_11c.impact_direction.y = pCVar9->y;
            SStack_11c.impact_direction.z = pCVar9->z;
          }
          SStack_11c.ammo_type = (this_ptr->base).ammo_type;
          SStack_11c.damage_type = DAMAGE_TYPE_PIERCING;
          SStack_11c.dismember_prob = 1.0;
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
      pCStack_40 = (CCrate *)((pCStack_40->base).actor_name + 1);
    } while ((int)pCStack_40 < iVar3);
  }
  CStack_c8.x = CStack_80.x;
  CStack_c8.z = CStack_80.z;
  CStack_c8.y = CStack_80.y + -0.125f;
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004c7a60
            (g_CFireEffectPtr,&CStack_c8,&(this_ptr->base).base.orient_matrix);
  core_sound_cpp_CSound_playActorSound_FUN_005b3a40
            (g_CSoundPtr,(CDemonActor *)this_ptr,"elephantgun.wav",&CStack_80);
  (this_ptr->base).fire_cooldown_timer = 1.0;
  return 1;
}
