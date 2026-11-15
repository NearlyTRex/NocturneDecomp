// Name: core_shotgun.cpp_CShotgun_fire_FUN_00561760
// Address: 00561760
// Address Range: [[00561760, 00561f79]]
// Convention: __cdecl
// Signature: int __cdecl core_shotgun_cpp_CShotgun_fire_FUN_00561760(CShotgun *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_shotgun_cpp_CShotgun_fire_FUN_00561760(CShotgun *this_ptr)

{
  float fVar1;
  int iVar2;
  float fVar3;
  CDemonSet *this_ptr_00;
  CTrigger *this_ptr_01;
  byte bVar4;
  float10 fVar5;
  float10 fVar6;
  float afStackY_112c [991];
  CDemonActor *in_stack_fffffe58;
  CDemonSet *in_stack_fffffe5c;
  CDemonSet *grab_type;
  CDemonActor *pCVar7;
  CVector3f *input_local_point;
  CShotgun *this_ptr_02;
  CMatrix3x3f *rotation_matrix;
  byte auStack_18c [8];
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  CVector3f CStack_170;
  EAmmoType EStack_164;
  float fStack_160;
  EDamageType EStack_15c;
  CShotgun *pCStack_158;
  CDemonActor *pCStack_150;
  float fStack_144;
  float afStack_140 [5];
  CVector3f CStack_12c;
  float fStack_120;
  float afStack_11c [2];
  CVector3f aCStack_114 [2];
  CVector3f CStack_fc;
  CVector3f CStack_f0;
  CVector3f CStack_e4;
  CVector3f aCStack_d8 [2];
  CVector3f aCStack_c0 [2];
  CVector3f CStack_a8;
  float fStack_9c;
  float afStack_98 [5];
  CVector3f CStack_84;
  float fStack_78;
  float afStack_74 [2];
  CVector3f CStack_6c;
  float fStack_60;
  uint auStack_5c [5];
  CTrigger *pCStack_48;
  CDemonActor *pCStack_44;
  CDemonActor *pCStack_40;
  CDemonActor *pCStack_3c;
  CFlameCan *pCStack_38;
  float fStack_34;
  CCrate *pCStack_30;
  CCharacter *pCStack_24;
  CDemonActor *pCStack_20;
  CCharacter *pCStack_1c;
  CCharacter *pCStack_14;
  
  bVar4 = 0;
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  input_local_point = &CStack_6c;
  afStack_74[1] = fStack_60;
  *(uint *)((int)&CStack_6c + (uint)bVar4 * -8) = auStack_5c[(uint)bVar4 * -2];
  *(uint *)((int)&CStack_6c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 4) =
       auStack_5c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
            ((CDemonActor *)this_ptr,input_local_point,&CStack_fc);
  CStack_e4.x = CStack_fc.x;
  *(uint *)((int)aCStack_d8 + (uint)bVar4 * -8 + -8) =
       *(uint *)((int)&CStack_fc + (uint)bVar4 * -8 + 4);
  this_ptr_02 = this_ptr;
  *(uint *)((int)aCStack_d8 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + -4) =
       *(uint *)((int)&CStack_fc + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  iVar2 = core_weapon_cpp_CWeapon_fire_FUN_005adde0(&this_ptr_02->base);
  if (iVar2 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_0057d8a0
              (0x02C82A60,(CDemonActor *)this_ptr,"shotgun-noammo.wav",&CStack_e4);
    return 0;
  }
  fVar5 = (float10)fptan((float10)this_ptr->spread_angle * (float10)_DAT_005f19c3 *
                         (float10)_DAT_005f19c7);
  pCStack_40 = (CDemonActor *)(float)(fVar5 * (float10)(this_ptr->base).bolt_velocity);
  pCStack_30 = (CCrate *)core_actor_cpp_getRandomInt_FUN_0040cc60(10,0xf);
  pCStack_3c = (CDemonActor *)0x0;
  if (0 < (int)pCStack_30) {
    do {
      fStack_34 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,6.2831855);
      fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,(float)pCStack_40);
      fVar5 = (float10)fcos((float10)fStack_34);
      fVar6 = (float10)fsin((float10)fStack_34);
      CStack_84.x = (float)(fVar5 * (float10)fVar3);
      CStack_84.y = (float)(fVar6 * (float10)fVar3);
      CStack_84.z = (this_ptr->base).bolt_velocity;
      core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0
                ((CDemonActor *)this_ptr,&CStack_84,&CStack_f0);
      CStack_12c.x = CStack_f0.x;
      *(uint *)((int)&CStack_12c + (uint)bVar4 * -8 + 4) =
           *(uint *)((int)&CStack_f0 + (uint)bVar4 * -8 + 4);
      *(uint *)((int)&CStack_12c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
           *(uint *)((int)&CStack_f0 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
      if (&CStack_84 != &CStack_12c) {
        CStack_84.x = CStack_12c.x;
        CStack_84.y = CStack_12c.y;
        CStack_84.z = CStack_12c.z;
      }
      fStack_120 = CStack_e4.x + CStack_84.x;
      afStack_11c[0] = CStack_e4.y + CStack_84.y;
      afStack_11c[1] = CStack_e4.z + CStack_84.z;
      aCStack_c0[0].x = CStack_e4.x + CStack_84.x;
      *(float *)((int)aCStack_c0 + (uint)bVar4 * -8 + 4) = afStack_11c[(uint)bVar4 * -2];
      *(float *)((int)aCStack_c0 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
           afStack_11c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      fVar1 = CStack_e4.y;
      fVar3 = CStack_e4.x;
      pCStack_38 = (CFlameCan *)((float)_DAT_005f19d7 / (this_ptr->base).bolt_velocity);
      fStack_9c = CStack_84.x * (float)pCStack_38;
      afStack_98[0] = CStack_84.y * (float)pCStack_38;
      afStack_98[1] = CStack_84.z * (float)pCStack_38;
      fStack_144 = CStack_84.x * (float)pCStack_38;
      afStack_140[(uint)bVar4 * -2] = afStack_98[(uint)bVar4 * -2];
      afStack_140[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           afStack_98[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      fStack_78 = fVar3 - fStack_144;
      afStack_74[0] = fVar1 - afStack_140[0];
      afStack_74[1] = CStack_e4.z - afStack_140[1];
      aCStack_114[0].x = fVar3 - fStack_144;
      *(float *)((int)aCStack_114 + (uint)bVar4 * -8 + 4) = afStack_74[(uint)bVar4 * -2];
      *(float *)((int)aCStack_114 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
           afStack_74[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_setRayType_FUN_005592d0(g_CDemonSetPtr,1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,(CDemonActor *)this_ptr);
      pCVar7 = (this_ptr->base).carried_by_actor;
      this_ptr_00 = in_stack_fffffe5c;
      if (pCVar7 != (CDemonActor *)0x0) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,pCVar7);
        this_ptr_00 = in_stack_fffffe5c;
      }
      pCStack_1c = (CCharacter *)0x0;
      do {
        fStack_184 = core_setcolid_cpp_CDemonSet_raycast_FUN_00557300
                               (g_CDemonSetPtr,aCStack_114,aCStack_c0);
        auStack_18c = (byte  [8])(double)fStack_184;
        in_stack_fffffe5c = this_ptr_00;
        if (((double)auStack_18c < 0.0) || (1.0 < (double)auStack_18c)) break;
        pCVar7 = g_CDemonSetPtr->collision_actor;
        pCStack_14 = (CCharacter *)
                     core_actor_cpp_castToClassHash_FUN_0040c600
                               (pCVar7,g_CCharacterClassInfo.name_hash);
        grab_type = this_ptr_00;
        if (pCStack_14 != (CCharacter *)0x0) {
          pCVar7 = (CDemonActor *)0x561b87;
          (*(((pCStack_14->base).vtable._uc)->_uc).getDeathState)(pCStack_14);
          grab_type = this_ptr_00;
        }
        this_ptr_00 = (CDemonSet *)
                      core_actor_cpp_castToClassHash_FUN_0040c600
                                (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
        this_ptr_01 = (CTrigger *)
                      core_actor_cpp_castToClassHash_FUN_0040c600
                                (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
        pCStack_48 = this_ptr_01;
        pCStack_3c = core_actor_cpp_castToClassHash_FUN_0040c600
                               (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
        pCStack_44 = core_actor_cpp_castToClassHash_FUN_0040c600
                               (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
        fVar3 = (float)(*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                                 ((CCharacter *)this_ptr,in_stack_fffffe58,(int)grab_type);
        pCStack_20 = pCStack_40;
        fStack_34 = ((1.0 - (float)pCVar7) * fVar3) / (float)(int)pCStack_40;
        if (pCStack_24 == (CCharacter *)0x0) {
          if (this_ptr_00 == (CDemonSet *)0x0) {
            if (this_ptr_01 == (CTrigger *)0x0) {
              if (pCStack_30 == (CCrate *)0x0) {
                if (pCStack_38 == (CFlameCan *)0x0) {
                  in_stack_fffffe5c = (CDemonSet *)g_CDemonSetPtr->ground_type;
                  in_stack_fffffe58 = (CDemonActor *)&g_CDemonSetPtr->collision_normal;
                  core_fire_cpp_CFireEffect_createBulletImpact_FUN_004b56a0
                            (0x01C57074,&g_CDemonSetPtr->collision_impact_position,
                             (CVector3f *)in_stack_fffffe58,(int)in_stack_fffffe5c,
                             g_CDemonSetPtr->collision_actor);
                  break;
                }
                this_ptr_00 = (CDemonSet *)0x561f1b;
                core_flamecan_cpp_CFlameCan_ignite_FUN_004b9180(pCStack_38);
              }
              else {
                this_ptr_00 = (CDemonSet *)0x561f26;
                core_crate_cpp_FUN_00449600(pCStack_30);
              }
            }
            else {
              core_trigger_cpp_CTrigger_onProjectileHit_FUN_0059bdd0(this_ptr_01);
              iVar2 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_0059bdf0
                                (this_ptr_01,(CDemonActor *)this_ptr);
              if (iVar2 != 0) {
                core_trigger_cpp_CTrigger_applyDamage_FUN_0059be30(this_ptr_01,fStack_34);
              }
              in_stack_fffffe58 = (CDemonActor *)0x561cb5;
              this_ptr_00 = g_CDemonSetPtr;
              core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,pCStack_3c);
            }
          }
          else {
            in_stack_fffffe5c = (CDemonSet *)0x561ede;
            iVar2 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004e3a40
                              ((CGlass *)this_ptr_00);
            if (iVar2 == 0) break;
            in_stack_fffffe58 = (CDemonActor *)0x561efa;
            core_glass_cpp_CGlass_shatter_FUN_004e34b0
                      ((CGlass *)this_ptr_00,&g_CDemonSetPtr->collision_impact_position);
          }
        }
        else {
          in_stack_fffffe5c = (CDemonSet *)0x561cca;
          iVar2 = (*(((pCStack_24->base).vtable._uc)->_uc).isInvulnerable)(pCStack_24);
          if (iVar2 != 0) break;
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010((SDamageInfo *)auStack_18c);
          auStack_18c._4_4_ = pCStack_30;
          auStack_18c._0_4_ = g_CDemonSetPtr->collision_part_index;
          fStack_184 = 0.4;
          aCStack_114[0].x = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
          aCStack_114[0].y = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
          aCStack_114[0].z = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
          aCStack_c0[0].x = aCStack_114[0].x;
          *(uint *)((int)aCStack_c0 + (uint)bVar4 * -8 + 4) =
               *(uint *)((int)aCStack_114 + (uint)bVar4 * -8 + 4);
          *(uint *)((int)aCStack_c0 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
               *(uint *)((int)aCStack_114 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
          pCStack_24 = (CCharacter *)
                       ((float)_DAT_005f19df /
                       SQRT(aCStack_c0[0].z * aCStack_c0[0].z +
                            aCStack_c0[0].x * aCStack_c0[0].x + aCStack_c0[0].y * aCStack_c0[0].y));
          fStack_9c = aCStack_c0[0].x * (float)pCStack_24;
          afStack_98[0] = aCStack_c0[0].y * (float)pCStack_24;
          afStack_98[1] = aCStack_c0[0].z * (float)pCStack_24;
          fStack_144 = aCStack_c0[0].x * (float)pCStack_24;
          afStack_140[(uint)bVar4 * -2] = afStack_98[(uint)bVar4 * -2];
          afStack_140[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
               afStack_98[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
          if (&fStack_180 != &fStack_144) {
            fStack_180 = fStack_144;
            fStack_17c = afStack_140[0];
            fStack_178 = afStack_140[1];
          }
          this_ptr_00 = (CDemonSet *)0x561e1f;
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                    (pCStack_20,&g_CDemonSetPtr->collision_impact_position,aCStack_d8);
          CStack_e4.x = aCStack_d8[0].x;
          *(uint *)((int)aCStack_d8 + (uint)bVar4 * -8 + -8) =
               *(uint *)((int)aCStack_d8 + (uint)bVar4 * -8 + 4);
          *(uint *)((int)aCStack_d8 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + -4) =
               *(uint *)((int)aCStack_d8 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
          if (&CStack_170 != &CStack_e4) {
            CStack_170.x = CStack_e4.x;
            CStack_170.y = CStack_e4.y;
            CStack_170.z = CStack_e4.z;
          }
          EStack_164 = (this_ptr->base).ammo_type;
          EStack_15c = DAMAGE_TYPE_ATTACK_BULLET;
          fStack_160 = 0.15;
          pCStack_158 = this_ptr;
          pCStack_150 = (*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
          (*(((pCStack_1c->base).vtable._uc)->_uc).processDamage)
                    (pCStack_1c,(SDamageInfo *)(auStack_18c + 4));
          in_stack_fffffe5c = this_ptr_00;
          if ((this_ptr->base).can_penetrate == 0) break;
          core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                    (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
        }
        pCStack_1c = (CCharacter *)((pCStack_1c->base).actor_name + 1);
        in_stack_fffffe5c = this_ptr_00;
      } while ((int)pCStack_1c < 4);
      pCStack_3c = (CDemonActor *)(pCStack_3c->actor_name + 1);
    } while ((int)pCStack_3c < (int)pCStack_30);
  }
  core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
  rotation_matrix = &(this_ptr->base).base.orient_matrix;
  CStack_a8.x = CStack_e4.x;
  *(uint *)((int)&CStack_a8 + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)aCStack_d8 + (uint)bVar4 * -8 + -8);
  *(uint *)((int)&CStack_a8 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       *(uint *)((int)aCStack_d8 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + -4);
  CStack_a8.y = CStack_a8.y + _DAT_005f19cf;
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004b5a70(0x01C57074,&CStack_a8,rotation_matrix);
  core_sound_cpp_CSound_playActorSound_FUN_0057d8a0
            (0x02C82A60,(CDemonActor *)this_ptr,"shotgun.wav",&CStack_e4);
  (this_ptr->base).fire_cooldown_timer = 0.666;
  return 1;
}
