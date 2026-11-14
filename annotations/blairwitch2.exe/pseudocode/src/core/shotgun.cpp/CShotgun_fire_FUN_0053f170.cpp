// Name: core_shotgun.cpp_CShotgun_fire_FUN_0053f170
// Address: 0053f170
// Address Range: [[0053f170, 0053f989]]
// Convention: __cdecl
// Signature: int __cdecl core_shotgun_cpp_CShotgun_fire_FUN_0053f170(CShotgun *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_shotgun_cpp_CShotgun_fire_FUN_0053f170(CShotgun *this_ptr)

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
  float *pfVar8;
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
  float fStack_12c;
  float afStack_128 [4];
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_fc;
  float afStack_f8 [5];
  CVector3f CStack_e4;
  float fStack_d8;
  uint auStack_d4 [5];
  float fStack_c0;
  float afStack_bc [5];
  CVector3f CStack_a8;
  float fStack_9c;
  float afStack_98 [5];
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float afStack_74 [5];
  float fStack_60;
  CTrigger *pCStack_48;
  CDemonActor *pCStack_44;
  float fStack_40;
  CDemonActor *pCStack_3c;
  CFlameCan *pCStack_38;
  float fStack_34;
  CCrate *pCStack_30;
  CCharacter *pCStack_24;
  float fStack_20;
  CCharacter *pCStack_1c;
  CCharacter *pCStack_14;
  
  bVar4 = 0;
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  pfVar8 = afStack_74 + 2;
  afStack_74[1] = fStack_60;
  afStack_74[(uint)bVar4 * -2 + 2] = afStack_74[(uint)bVar4 * -2 + 6];
  afStack_74[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 3] =
       afStack_74[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
  core_actor_cpp_FUN_00408d70(this_ptr,pfVar8);
  CStack_e4.x = fStack_fc;
  *(float *)((int)&CStack_e4 + (uint)bVar4 * -8 + 4) = afStack_f8[(uint)bVar4 * -2];
  this_ptr_02 = this_ptr;
  *(float *)((int)&CStack_e4 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       afStack_f8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  iVar2 = core_weapon_cpp_CWeapon_fire_FUN_0058a290(&this_ptr_02->base);
  if (iVar2 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (0x0264B290,(CDemonActor *)this_ptr,"shotgun-noammo.wav",&CStack_e4);
    return 0;
  }
  fVar5 = (float10)fptan((float10)this_ptr->spread_angle * (float10)_DAT_005e67f1 *
                         (float10)_DAT_005e67f5);
  fStack_40 = (float)(fVar5 * (float10)(this_ptr->base).bolt_velocity);
  pCStack_30 = (CCrate *)core_actor_cpp_getRandomInt_FUN_0040cfc0(10,0xf);
  pCStack_3c = (CDemonActor *)0x0;
  if (0 < (int)pCStack_30) {
    do {
      fStack_34 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
      fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,fStack_40);
      fVar5 = (float10)fcos((float10)fStack_34);
      fVar6 = (float10)fsin((float10)fStack_34);
      fStack_84 = (float)(fVar5 * (float10)fVar3);
      fStack_80 = (float)(fVar6 * (float10)fVar3);
      fStack_7c = (this_ptr->base).bolt_velocity;
      core_actor_cpp_FUN_00408cf0(this_ptr,&fStack_84);
      fStack_12c = afStack_f8[2];
      afStack_128[(uint)bVar4 * -2] = afStack_f8[(uint)bVar4 * -2 + 3];
      afStack_128[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           afStack_f8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
      if (&fStack_84 != &fStack_12c) {
        fStack_84 = fStack_12c;
        fStack_80 = afStack_128[0];
        fStack_7c = afStack_128[1];
      }
      afStack_128[2] = CStack_e4.x + fStack_84;
      afStack_128[3] = CStack_e4.y + fStack_80;
      fStack_118 = CStack_e4.z + fStack_7c;
      fStack_c0 = CStack_e4.x + fStack_84;
      afStack_bc[(uint)bVar4 * -2] = afStack_128[(uint)bVar4 * -2 + 3];
      afStack_bc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           afStack_128[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
      fVar1 = CStack_e4.y;
      fVar3 = CStack_e4.x;
      pCStack_38 = (CFlameCan *)((float)_DAT_005e6805 / (this_ptr->base).bolt_velocity);
      fStack_9c = fStack_84 * (float)pCStack_38;
      afStack_98[0] = fStack_80 * (float)pCStack_38;
      afStack_98[1] = fStack_7c * (float)pCStack_38;
      fStack_144 = fStack_84 * (float)pCStack_38;
      afStack_140[(uint)bVar4 * -2] = afStack_98[(uint)bVar4 * -2];
      afStack_140[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           afStack_98[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      fStack_78 = fVar3 - fStack_144;
      afStack_74[0] = fVar1 - afStack_140[0];
      afStack_74[1] = CStack_e4.z - afStack_140[1];
      fStack_114 = fVar3 - fStack_144;
      afStack_128[(uint)bVar4 * -2 + 6] = afStack_74[(uint)bVar4 * -2];
      afStack_128[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
           afStack_74[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_setRayType_FUN_00537eb0(g_CDemonSetPtr,1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,(CDemonActor *)this_ptr);
      pCVar7 = (this_ptr->base).carried_by_actor;
      this_ptr_00 = in_stack_fffffe5c;
      if (pCVar7 != (CDemonActor *)0x0) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,pCVar7);
        this_ptr_00 = in_stack_fffffe5c;
      }
      pCStack_1c = (CCharacter *)0x0;
      do {
        fStack_184 = (float)core_setcolid_cpp_FUN_00535ee0
                                      (g_CDemonSetPtr,afStack_128 + 5,&fStack_c0);
        auStack_18c = (byte  [8])(double)fStack_184;
        in_stack_fffffe5c = this_ptr_00;
        if (((double)auStack_18c < 0.0) || (1.0 < (double)auStack_18c)) break;
        pCVar7 = g_CDemonSetPtr->collision_actor;
        pCStack_14 = (CCharacter *)
                     core_actor_cpp_castToClassHash_FUN_0040c8f0
                               (pCVar7,g_CCharacterClassInfo.name_hash);
        grab_type = this_ptr_00;
        if (pCStack_14 != (CCharacter *)0x0) {
          pCVar7 = (CDemonActor *)0x53f597;
          (*(((pCStack_14->base).vtable._uc)->_uc).getDeathState)(pCStack_14);
          grab_type = this_ptr_00;
        }
        this_ptr_00 = (CDemonSet *)
                      core_actor_cpp_castToClassHash_FUN_0040c8f0
                                (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
        this_ptr_01 = (CTrigger *)
                      core_actor_cpp_castToClassHash_FUN_0040c8f0
                                (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
        pCStack_48 = this_ptr_01;
        pCStack_3c = core_actor_cpp_castToClassHash_FUN_0040c8f0
                               (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
        pCStack_44 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                               (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
        fVar3 = (float)(*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                                 ((CCharacter *)this_ptr,in_stack_fffffe58,(int)grab_type);
        fStack_20 = fStack_40;
        fStack_34 = ((1.0 - (float)pCVar7) * fVar3) / (float)(int)fStack_40;
        if (pCStack_24 == (CCharacter *)0x0) {
          if (this_ptr_00 == (CDemonSet *)0x0) {
            if (this_ptr_01 == (CTrigger *)0x0) {
              if (pCStack_30 == (CCrate *)0x0) {
                if (pCStack_38 == (CFlameCan *)0x0) {
                  in_stack_fffffe5c = (CDemonSet *)g_CDemonSetPtr->ground_type;
                  in_stack_fffffe58 = (CDemonActor *)&g_CDemonSetPtr->collision_normal;
                  core_fire_cpp_CFireEffect_createBulletImpact_FUN_0049cd50
                            (0x01C3DEB4,&g_CDemonSetPtr->collision_impact_position,
                             (CVector3f *)in_stack_fffffe58,(int)in_stack_fffffe5c,
                             g_CDemonSetPtr->collision_actor);
                  break;
                }
                this_ptr_00 = (CDemonSet *)0x53f92b;
                core_flamecan_cpp_CFlameCan_ignite_FUN_004a08d0(pCStack_38);
              }
              else {
                this_ptr_00 = (CDemonSet *)0x53f936;
                core_crate_cpp_FUN_0043a350(pCStack_30);
              }
            }
            else {
              core_trigger_cpp_CTrigger_onProjectileHit_FUN_00578550(this_ptr_01);
              iVar2 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_00578570
                                (this_ptr_01,(CDemonActor *)this_ptr);
              if (iVar2 != 0) {
                core_trigger_cpp_CTrigger_applyDamage_FUN_005785b0(this_ptr_01,fStack_34);
              }
              in_stack_fffffe58 = (CDemonActor *)0x53f6c5;
              this_ptr_00 = g_CDemonSetPtr;
              core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,pCStack_3c);
            }
          }
          else {
            in_stack_fffffe5c = (CDemonSet *)0x53f8ee;
            iVar2 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004c72d0
                              ((CGlass *)this_ptr_00);
            if (iVar2 == 0) break;
            in_stack_fffffe58 = (CDemonActor *)0x53f90a;
            core_glass_cpp_FUN_004c6d40(this_ptr_00,&g_CDemonSetPtr->collision_impact_position);
          }
        }
        else {
          in_stack_fffffe5c = (CDemonSet *)0x53f6da;
          iVar2 = (*(((pCStack_24->base).vtable._uc)->_uc).isInvulnerable)(pCStack_24);
          if (iVar2 != 0) break;
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)auStack_18c);
          auStack_18c._4_4_ = pCStack_30;
          auStack_18c._0_4_ = g_CDemonSetPtr->collision_part_index;
          fStack_184 = 0.4;
          fStack_114 = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
          fStack_110 = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
          fStack_10c = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
          fStack_c0 = fStack_114;
          afStack_bc[(uint)bVar4 * -2] = afStack_128[(uint)bVar4 * -2 + 6];
          afStack_bc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
               afStack_128[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
          pCStack_24 = (CCharacter *)
                       ((float)_DAT_005e680d /
                       SQRT(afStack_bc[1] * afStack_bc[1] +
                            fStack_c0 * fStack_c0 + afStack_bc[0] * afStack_bc[0]));
          fStack_9c = fStack_c0 * (float)pCStack_24;
          afStack_98[0] = afStack_bc[0] * (float)pCStack_24;
          afStack_98[1] = afStack_bc[1] * (float)pCStack_24;
          fStack_144 = fStack_c0 * (float)pCStack_24;
          afStack_140[(uint)bVar4 * -2] = afStack_98[(uint)bVar4 * -2];
          afStack_140[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
               afStack_98[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
          if (&fStack_180 != &fStack_144) {
            fStack_180 = fStack_144;
            fStack_17c = afStack_140[0];
            fStack_178 = afStack_140[1];
          }
          this_ptr_00 = (CDemonSet *)0x53f82f;
          core_actor_cpp_FUN_00408de0(fStack_20,&g_CDemonSetPtr->collision_impact_position);
          CStack_e4.x = fStack_d8;
          *(uint *)((int)&CStack_e4 + (uint)bVar4 * -8 + 4) = auStack_d4[(uint)bVar4 * -2];
          *(uint *)((int)&CStack_e4 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
               auStack_d4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
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
          core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                    (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
        }
        pCStack_1c = (CCharacter *)((pCStack_1c->base).actor_name + 1);
        in_stack_fffffe5c = this_ptr_00;
      } while ((int)pCStack_1c < 4);
      pCStack_3c = (CDemonActor *)(pCStack_3c->actor_name + 1);
    } while ((int)pCStack_3c < (int)pCStack_30);
  }
  core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
  rotation_matrix = &(this_ptr->base).base.orient_matrix;
  CStack_a8.x = CStack_e4.x;
  *(uint *)((int)&CStack_a8 + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&CStack_e4 + (uint)bVar4 * -8 + 4);
  *(uint *)((int)&CStack_a8 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       *(uint *)((int)&CStack_e4 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  CStack_a8.y = CStack_a8.y + _DAT_005e67fd;
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_0049d120(0x01C3DEB4,&CStack_a8,rotation_matrix);
  core_sound_cpp_CSound_playActorSound_FUN_0055ae50
            (0x0264B290,(CDemonActor *)this_ptr,"shotgun.wav",&CStack_e4);
  (this_ptr->base).fire_cooldown_timer = 0.666;
  return 1;
}
