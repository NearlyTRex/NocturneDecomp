// Name: core_elephant.cpp_CElephantGun_fire_FUN_00477890
// Address: 00477890
// Address Range: [[00477890, 00477fcd]]
// Convention: __cdecl
// Signature: int __cdecl core_elephant_cpp_CElephantGun_fire_FUN_00477890(CElephantGun *this_ptr)

#include "nocturne.h"

int __cdecl core_elephant_cpp_CElephantGun_fire_FUN_00477890(CElephantGun *this_ptr)

{
  CDemonActor_vtable *pCVar1;
  CVector3f *pCVar2;
  int iVar3;
  CHero *pCVar4;
  CDemonSet *this_ptr_00;
  EDeathState EVar5;
  CTrigger *this_ptr_01;
  float fVar6;
  float10 fVar7;
  float10 fVar8;
  CDemonActor *in_stack_fffffec0;
  CDemonSet *in_stack_fffffec4;
  CDemonActor *pCVar9;
  double dStack_124;
  byte auStack_120 [12];
  float fStack_114;
  float fStack_110;
  CVector3f CStack_108;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  CElephantGun *pCStack_f0;
  CDemonActor *pCStack_e8;
  CVector3f CStack_dc;
  CVector3f aCStack_d0 [2];
  CVector3f aCStack_b8 [2];
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  CVector3f CStack_94;
  CVector3f CStack_88;
  CVector3f CStack_7c;
  CVector3f aCStack_70 [3];
  CTrigger *pCStack_4c;
  CDemonActor *pCStack_48;
  float fStack_44;
  CDemonActor *pCStack_40;
  CFlameCan *pCStack_3c;
  CDemonActor *pCStack_38;
  CCrate *pCStack_34;
  CDemonSet *pCStack_2c;
  float fStack_24;
  int iStack_20;
  CDemonActor *pCStack_14;
  
  pCVar2 = (CVector3f *)(*(((this_ptr->base).base.vtable._uc)->_uc).canWalk)((CCharacter *)this_ptr)
  ;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
            ((CDemonActor *)this_ptr,aCStack_d0,pCVar2);
  iVar3 = core_weapon_cpp_CWeapon_fire_FUN_00554600(&this_ptr->base);
  if (iVar3 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_0052ea60
              (g_CSound_PTR_005bed68,(CDemonActor *)this_ptr,"shotgun-noammo.wav",
               aCStack_d0);
    return 0;
  }
  fVar7 = (float10)fptan((float10)this_ptr->spread_angle * (float10)3.1415926535000001 *
                         (float10)0.0055555555555555497);
  pCStack_40 = (CDemonActor *)(float)(fVar7 * (float10)(this_ptr->base).bolt_velocity);
  pCStack_34 = (CCrate *)core_actor_cpp_getRandomInt_FUN_0040de00(10,0xf);
  pCStack_3c = (CFlameCan *)0x0;
  if (0 < (int)pCStack_34) {
    do {
      pCStack_48 = (CDemonActor *)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.0,6.2831855)
      ;
      pCStack_14 = pCStack_48;
      pCStack_14 = (CDemonActor *)
                   core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.0,(float)pCStack_40);
      fVar7 = (float10)fcos((float10)(float)pCStack_48);
      fVar8 = (float10)fsin((float10)(float)pCStack_48);
      CStack_dc.x = (float)(fVar7 * (float10)(float)pCStack_14);
      CStack_dc.y = (float)(fVar8 * (float10)(float)pCStack_14);
      CStack_dc.z = (this_ptr->base).bolt_velocity;
      pCVar2 = core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                         ((CDemonActor *)this_ptr,&CStack_88,&CStack_dc);
      if (&CStack_dc != pCVar2) {
        CStack_dc.x = pCVar2->x;
        CStack_dc.y = pCVar2->y;
        CStack_dc.z = pCVar2->z;
      }
      aCStack_b8[0].x = aCStack_d0[0].x + CStack_dc.x;
      aCStack_b8[0].y = aCStack_d0[0].y + CStack_dc.y;
      aCStack_b8[0].z = aCStack_d0[0].z + CStack_dc.z;
      pCStack_38 = (CDemonActor *)((float)1.5 / (this_ptr->base).bolt_velocity);
      fStack_a0 = CStack_dc.x * (float)pCStack_38;
      fStack_9c = CStack_dc.y * (float)pCStack_38;
      fStack_98 = CStack_dc.z * (float)pCStack_38;
      CStack_94.x = aCStack_d0[0].x - fStack_a0;
      CStack_94.y = aCStack_d0[0].y - fStack_9c;
      CStack_94.z = aCStack_d0[0].z - fStack_98;
      core_setcolid_cpp_CDemonSet_init_FUN_00511750(g_CDemonSet_PTR_005be368);
      core_setcolid_cpp_CDemonSet_setRayType_FUN_00511800(g_CDemonSet_PTR_005be368,1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                (g_CDemonSet_PTR_005be368,(CDemonActor *)this_ptr);
      pCVar9 = (this_ptr->base).carried_by_actor;
      if (pCVar9 != (CDemonActor *)0x0) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(g_CDemonSet_PTR_005be368,pCVar9);
      }
      iStack_20 = 0;
      do {
        auStack_120._4_4_ =
             core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00
                       (g_CDemonSet_PTR_005be368,&CStack_94,aCStack_b8);
        dStack_124 = (double)(float)auStack_120._4_4_;
        pCStack_14 = (CDemonActor *)auStack_120._4_4_;
        if ((dStack_124 < 0.0) || (1.0 < dStack_124)) break;
        pCVar9 = g_CDemonSet_PTR_005be368->collision_actor;
        this_ptr_00 = (CDemonSet *)
                      core_actor_cpp_castToClassHash_FUN_0040d890
                                (pCVar9,g_CCharacterActorType_00765a60.name_hash);
        if (this_ptr_00 != (CDemonSet *)0x0) {
          pCVar9 = (CDemonActor *)0x477c42;
          EVar5 = (**(code **)(this_ptr_00->cameras[0].camera_group + 0x104))
                            ((CCharacter *)this_ptr_00);
          if (0 < (int)EVar5) {
            this_ptr_00 = (CDemonSet *)0x0;
          }
        }
        pCStack_38 = core_actor_cpp_castToClassHash_FUN_0040d890
                               (g_CDemonSet_PTR_005be368->collision_actor,
                                g_CGlassActorType_01c78c40.name_hash);
        this_ptr_01 = (CTrigger *)
                      core_actor_cpp_castToClassHash_FUN_0040d890
                                (g_CDemonSet_PTR_005be368->collision_actor,
                                 g_CTriggerActorType_02dd1084.name_hash);
        pCStack_4c = this_ptr_01;
        pCStack_40 = core_actor_cpp_castToClassHash_FUN_0040d890
                               (g_CDemonSet_PTR_005be368->collision_actor,
                                g_CCrateActorType_0077bd40.name_hash);
        pCStack_48 = core_actor_cpp_castToClassHash_FUN_0040d890
                               (g_CDemonSet_PTR_005be368->collision_actor,
                                g_CFlameCanActorType_01c70654.name_hash);
        fVar6 = (float)(*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                                 ((CCharacter *)this_ptr,in_stack_fffffec0,(int)in_stack_fffffec4);
        fStack_24 = fStack_44;
        pCStack_38 = (CDemonActor *)(((1.0 - (float)pCVar9) * fVar6) / (float)(int)fStack_44);
        if (this_ptr_00 == (CDemonSet *)0x0) {
          if (pCStack_2c == (CDemonSet *)0x0) {
            if (this_ptr_01 == (CTrigger *)0x0) {
              if (pCStack_34 == (CCrate *)0x0) {
                if (pCStack_3c == (CFlameCan *)0x0) {
                  in_stack_fffffec4 = (CDemonSet *)g_CDemonSet_PTR_005be368->ground_type;
                  in_stack_fffffec0 = (CDemonActor *)&g_CDemonSet_PTR_005be368->collision_normal;
                  core_fire_cpp_CFireEffect_createBulletImpact_FUN_0048ab60
                            (g_CFireEffect_PTR_005b80f0,
                             &g_CDemonSet_PTR_005be368->collision_impact_position,
                             (CVector3f *)in_stack_fffffec0,(int)in_stack_fffffec4,
                             g_CDemonSet_PTR_005be368->collision_actor);
                  break;
                }
                in_stack_fffffec4 = (CDemonSet *)0x477f6f;
                core_flamecan_cpp_CFlameCan_ignite_FUN_0048e550(pCStack_3c);
              }
              else {
                in_stack_fffffec4 = (CDemonSet *)0x477f7a;
                core_crate_cpp_CCrate_explode_FUN_0043cdb0(pCStack_34);
              }
            }
            else {
              core_trigger_cpp_CTrigger_onProjectileHit_FUN_00548580(this_ptr_01);
              iVar3 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_005485a0
                                (this_ptr_01,(CDemonActor *)this_ptr);
              if (iVar3 != 0) {
                core_trigger_cpp_CTrigger_applyDamage_FUN_005485e0(this_ptr_01,(float)pCStack_38);
              }
              in_stack_fffffec0 = (CDemonActor *)0x477d6e;
              in_stack_fffffec4 = g_CDemonSet_PTR_005be368;
              core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(g_CDemonSet_PTR_005be368,pCStack_40);
            }
          }
          else {
            in_stack_fffffec4 = (CDemonSet *)0x477f2b;
            iVar3 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004aded0((CGlass *)pCStack_2c)
            ;
            if (iVar3 == 0) break;
            in_stack_fffffec0 = (CDemonActor *)0x477f4e;
            in_stack_fffffec4 = pCStack_2c;
            core_glass_cpp_CGlass_shatter_FUN_004ada20
                      ((CGlass *)pCStack_2c,&g_CDemonSet_PTR_005be368->collision_impact_position);
          }
        }
        else {
          in_stack_fffffec4 = (CDemonSet *)0x477d83;
          iVar3 = (**(code **)(this_ptr_00->cameras[0].camera_group + 0xd8))
                            ((CCharacter *)this_ptr_00);
          if (iVar3 != 0) break;
          core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)&stack0xfffffedc);
          dStack_124._4_4_ = pCStack_34;
          dStack_124._0_4_ = g_CDemonSet_PTR_005be368->collision_part_index;
          auStack_120._4_4_ = 0.4;
          CStack_7c.x = (g_CDemonSet_PTR_005be368->ray_target).x -
                        (g_CDemonSet_PTR_005be368->ray_origin).x;
          CStack_7c.y = (g_CDemonSet_PTR_005be368->ray_target).y -
                        (g_CDemonSet_PTR_005be368->ray_origin).y;
          CStack_7c.z = (g_CDemonSet_PTR_005be368->ray_target).z -
                        (g_CDemonSet_PTR_005be368->ray_origin).z;
          fStack_24 = (float)10 /
                      SQRT(CStack_7c.z * CStack_7c.z +
                           CStack_7c.x * CStack_7c.x + CStack_7c.y * CStack_7c.y);
          aCStack_d0[0].x = CStack_7c.x * fStack_24;
          aCStack_d0[0].y = CStack_7c.y * fStack_24;
          aCStack_d0[0].z = CStack_7c.z * fStack_24;
          if ((CVector3f *)((byte *)((int)register0x00000010 + -0x120) + 8) != aCStack_d0) {
            auStack_120._8_4_ = aCStack_d0[0].x;
            fStack_114 = aCStack_d0[0].y;
            fStack_110 = aCStack_d0[0].z;
          }
          in_stack_fffffec0 = (CDemonActor *)0x477e96;
          in_stack_fffffec4 = this_ptr_00;
          pCVar2 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                             ((CDemonActor *)this_ptr_00,aCStack_70,
                              &g_CDemonSet_PTR_005be368->collision_impact_position);
          if ((CVector3f *)((byte *)((int)register0x00000010 + -0x120) + 0x18) != pCVar2) {
            CStack_108.x = pCVar2->x;
            CStack_108.y = pCVar2->y;
            CStack_108.z = pCVar2->z;
          }
          fStack_fc = (float)(this_ptr->base).ammo_type;
          fStack_f4 = 1.49939e-43;
          fStack_f8 = 1.0;
          pCStack_f0 = this_ptr;
          pCStack_e8 = (*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
          (**(code **)(this_ptr_00->cameras[0].camera_group + 0x100))
                    ((CCharacter *)this_ptr_00,(SDamageInfo *)((int)register0x00000010 + -0x120));
          if ((this_ptr->base).can_penetrate == 0) break;
          core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                    (g_CDemonSet_PTR_005be368,g_CDemonSet_PTR_005be368->collision_actor);
        }
        iStack_20 = iStack_20 + 1;
      } while (iStack_20 < 4);
      pCStack_3c = (CFlameCan *)((pCStack_3c->base).actor_name + 1);
    } while ((int)pCStack_3c < (int)pCStack_34);
  }
  CStack_7c.x = aCStack_d0[0].x;
  CStack_7c.z = aCStack_d0[0].z;
  CStack_7c.y = aCStack_d0[0].y + 1.574918751107038e-314._0_4_;
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_0048af20
            (g_CFireEffect_PTR_005b80f0,&CStack_7c,&(this_ptr->base).base.orient_matrix);
  core_sound_cpp_CSound_playActorSound_FUN_0052ea60
            (g_CSound_PTR_005bed68,(CDemonActor *)this_ptr,"elephantgun.wav",aCStack_d0);
  pCVar1 = (this_ptr->base).base.vtable._ub;
  (this_ptr->base).fire_cooldown_timer = 1.0;
  pCVar4 = (CHero *)(*pCVar1->getCarrier)((CDemonActor *)this_ptr);
  if (pCVar4 == g_HeroActors[g_LocalHeroIndex]) {
    dStack_124._0_4_ = g_CForceFeedback_PTR_005b9284;
    engine_force_cpp_CForceFeedback_processEvent_FUN_004940d0(g_CForceFeedback_PTR_005b9284);
  }
  return 1;
}
