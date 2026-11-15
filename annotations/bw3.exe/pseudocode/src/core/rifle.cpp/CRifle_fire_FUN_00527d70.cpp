// Name: core_rifle.cpp_CRifle_fire_FUN_00527d70
// Address: 00527d70
// Address Range: [[00527d70, 005284c3]]
// Convention: __cdecl
// Signature: int __cdecl core_rifle_cpp_CRifle_fire_FUN_00527d70(CRifle *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_rifle_cpp_CRifle_fire_FUN_00527d70(CRifle *this_ptr)

{
  CDemonActor *actor;
  CDemonSet *this_ptr_00;
  float fVar1;
  int iVar2;
  float fVar3;
  CGlass *this_ptr_01;
  CTrigger *this_ptr_02;
  CCharacter *this_ptr_03;
  CCharacter *unaff_ESI;
  int unaff_EDI;
  byte bVar4;
  CDemonActor *in_stack_00000008;
  CRifle *apCStackY_10fc [3];
  float afStackY_10f0 [991];
  CVector3f *input_local_point;
  CRifle *this_ptr_04;
  double dVar5;
  CDemonActor *in_stack_fffffeac;
  int in_stack_fffffeb0;
  byte auStack_13c [44];
  float fStack_110;
  CRifle *pCStack_10c;
  CVector3f CStack_108;
  float afStack_fc [3];
  CVector3f CStack_f0;
  float fStack_e0;
  float fStack_dc;
  CVector3f CStack_d8;
  float fStack_c8;
  float fStack_c4;
  CVector3f CStack_c0;
  float fStack_b4;
  byte auStack_b0 [12];
  float afStack_a4 [5];
  CVector3f CStack_90;
  CVector3f CStack_84;
  float afStack_78 [4];
  float fStack_68;
  float fStack_64;
  CDemonActor *pCStack_60;
  float afStack_5c [5];
  float fStack_48;
  float afStack_44 [3];
  CDemonActor *pCStack_38;
  float afStack_34 [3];
  CTrigger *pCStack_28;
  CDemonActor *pCStack_24;
  CDemonActor *pCStack_20;
  CDemonActor *pCStack_1c;
  CFlameCan *pCStack_18;
  CCharacter *pCStack_14;
  
  bVar4 = 0;
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  input_local_point = &CStack_c0;
  fStack_c4 = fStack_48;
  *(float *)((int)&CStack_c0 + (uint)bVar4 * -8) = afStack_44[(uint)bVar4 * -2];
  *(float *)((int)&CStack_c0 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 4) =
       afStack_44[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
            ((CDemonActor *)this_ptr,input_local_point,(CVector3f *)(auStack_13c + 0x28));
  CStack_90.x = (float)auStack_13c._40_4_;
  *(float *)((int)&CStack_90 + (uint)bVar4 * -8 + 4) = (&fStack_110)[(uint)bVar4 * -2];
  this_ptr_04 = this_ptr;
  *(CRifle **)((int)&CStack_90 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       (&pCStack_10c)[(uint)bVar4 * -2 + (uint)bVar4 * -2];
  iVar2 = core_weapon_cpp_CWeapon_fire_FUN_0057b880(&this_ptr_04->base);
  if (iVar2 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_005609d0
              (0x02CF5680,(CDemonActor *)this_ptr,"?shotgun-noammo.wav" + 1,&CStack_90);
    return 0;
  }
  CStack_d8.z = (this_ptr->base).bolt_velocity;
  CStack_d8.x = 0.0;
  CStack_d8.y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408b00
            ((CDemonActor *)this_ptr,&CStack_d8,&CStack_f0);
  fVar1 = CStack_90.y;
  fVar3 = CStack_90.x;
  afStack_78[3] = CStack_f0.x;
  afStack_78[(uint)bVar4 * -2 + 4] = *(float *)((int)&CStack_f0 + (uint)bVar4 * -8 + 4);
  afStack_78[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 5] =
       *(float *)((int)&CStack_f0 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  fStack_b4 = fVar3 + afStack_78[3];
  auStack_b0._0_4_ = fVar1 + fStack_68;
  auStack_b0._4_4_ = CStack_90.z + fStack_64;
  CStack_84.x = fVar3 + afStack_78[3];
  afStack_78[(uint)bVar4 * -2 + -2] = *(float *)(auStack_b0 + (uint)bVar4 * -8);
  afStack_78[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -1] =
       *(float *)(auStack_b0 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 4);
  fVar3 = CStack_90.x;
  afStack_34[2] = (float)_DAT_005cdb39 / (this_ptr->base).bolt_velocity;
  afStack_44[2] = afStack_78[3] * afStack_34[2];
  pCStack_38 = (CDemonActor *)(fStack_68 * afStack_34[2]);
  afStack_34[0] = fStack_64 * afStack_34[2];
  afStack_78[0] = afStack_78[3] * afStack_34[2];
  afStack_78[(uint)bVar4 * -2 + 1] = (float)(&pCStack_38)[(uint)bVar4 * -2];
  afStack_78[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 2] =
       afStack_34[(uint)bVar4 * -2 + (uint)bVar4 * -2];
  pCStack_60 = (CDemonActor *)(fVar3 - afStack_78[0]);
  afStack_5c[0] = CStack_90.y - afStack_78[1];
  afStack_5c[1] = CStack_90.z - afStack_78[2];
  CStack_108.x = fVar3 - afStack_78[0];
  afStack_fc[(uint)bVar4 * -2 + -2] = afStack_5c[(uint)bVar4 * -2];
  afStack_fc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -1] =
       afStack_5c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  actor = (this_ptr->base).carried_by_actor;
  if (actor != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,actor);
  }
  pCStack_1c = (CDemonActor *)0x0;
  do {
    fVar3 = core_setcolid_cpp_CDemonSet_raycast_FUN_0053ccc0(g_CDemonSetPtr,&CStack_108,&CStack_84);
    dVar5 = (double)fVar3;
    if ((dVar5 < 0.0) || (1.0 < dVar5)) break;
    pCStack_14 = (CCharacter *)
                 core_actor_cpp_castToClassHash_FUN_0040c840
                           (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if (pCStack_14 != (CCharacter *)0x0) {
      (*(((pCStack_14->base).vtable._uc)->_uc).getDeathState)(pCStack_14);
    }
    this_ptr_01 = (CGlass *)
                  core_actor_cpp_castToClassHash_FUN_0040c840
                            (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    this_ptr_02 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040c840
                            (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    pCStack_28 = this_ptr_02;
    pCStack_20 = core_actor_cpp_castToClassHash_FUN_0040c840
                           (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
    pCStack_24 = core_actor_cpp_castToClassHash_FUN_0040c840
                           (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
    pCStack_24 = (CDemonActor *)
                 (*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                           ((CCharacter *)this_ptr,SUB84(__BITCAST_UINT64(dVar5),0),(int)((ulonglong)dVar5 >> 0x20));
    if (unaff_ESI == (CCharacter *)0x0) {
      if (this_ptr_01 == (CGlass *)0x0) {
        if (this_ptr_02 == (CTrigger *)0x0) {
          if (pCStack_14 == (CCharacter *)0x0) {
            if (pCStack_18 == (CFlameCan *)0x0) {
              core_fire_cpp_CFireEffect_createBulletImpact_FUN_004a2090
                        (0x01C73654,&g_CDemonSetPtr->collision_impact_position,
                         &g_CDemonSetPtr->collision_normal,g_CDemonSetPtr->ground_type,
                         g_CDemonSetPtr->collision_actor,0);
              break;
            }
            core_flamecan_cpp_CFlameCan_ignite_FUN_004a7110(pCStack_18);
          }
          else {
            core_crate_cpp_CCrate_explode_FUN_004461c0((CCrate *)pCStack_14);
          }
        }
        else {
          core_trigger_cpp_CTrigger_onProjectileHit_FUN_0056edc0(this_ptr_02);
          iVar2 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_0056ede0
                            (this_ptr_02,(CDemonActor *)this_ptr);
          if (iVar2 != 0) {
            core_trigger_cpp_CTrigger_applyDamage_FUN_0056ee20(this_ptr_02,(float)pCStack_24);
          }
          core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,pCStack_1c);
        }
      }
      else {
        iVar2 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004cc5d0(this_ptr_01);
        if (iVar2 == 0) break;
        core_glass_cpp_CGlass_shatter_FUN_004cc040
                  (this_ptr_01,&g_CDemonSetPtr->collision_impact_position);
      }
    }
    else {
      iVar2 = (*(((unaff_ESI->base).vtable._uc)->_uc).isInvulnerable)(unaff_ESI);
      this_ptr_00 = g_CDemonSetPtr;
      if (iVar2 != 0) {
        if (unaff_EDI == 0) {
          (this_ptr->base).ammo_count = (this_ptr->base).ammo_count + 1;
          core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(this_ptr_00);
          return 0;
        }
        break;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)&stack0xfffffeb4);
      this_ptr_03 = (CCharacter *)
                    (*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                              ((CCharacter *)this_ptr,in_stack_fffffeac,in_stack_fffffeb0);
      auStack_13c._4_4_ = 0.4;
      auStack_13c._0_4_ = this_ptr_03;
      pCStack_38 = (CDemonActor *)((g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x);
      afStack_34[0] = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
      afStack_34[1] = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
      CStack_108.y = (float)pCStack_38;
      afStack_fc[(uint)bVar4 * -2 + -1] = afStack_34[(uint)bVar4 * -2];
      afStack_fc[(uint)bVar4 * -2 + (uint)bVar4 * -2] =
           afStack_34[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      fVar3 = (float)_DAT_005cdb49 /
              SQRT(afStack_fc[0] * afStack_fc[0] +
                   CStack_108.y * CStack_108.y + CStack_108.z * CStack_108.z);
      fStack_e0 = CStack_108.y * fVar3;
      fStack_dc = CStack_108.z * fVar3;
      CStack_d8.x = afStack_fc[0] * fVar3;
      fStack_c8 = CStack_108.y * fVar3;
      (&fStack_c4)[(uint)bVar4 * -2] = (&fStack_dc)[(uint)bVar4 * -2];
      *(uint *)((int)&CStack_c0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           *(uint *)((int)&CStack_d8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      if ((float *)(auStack_13c + 8) != &fStack_c8) {
        auStack_13c._8_4_ = fStack_c8;
        auStack_13c._12_4_ = fStack_c4;
        auStack_13c._16_4_ = CStack_c0.x;
      }
      in_stack_fffffeac = (CDemonActor *)0x528324;
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                (in_stack_00000008,&g_CDemonSetPtr->collision_impact_position,
                 (CVector3f *)auStack_b0);
      CStack_84.y = (float)auStack_b0._0_4_;
      afStack_78[(uint)bVar4 * -2 + -1] = *(float *)(auStack_b0 + (uint)bVar4 * -8 + 4);
      afStack_78[(uint)bVar4 * -2 + (uint)bVar4 * -2] =
           *(float *)(auStack_b0 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
      if ((float *)(auStack_13c + 0x18) != &CStack_84.y) {
        auStack_13c._24_4_ = CStack_84.y;
        auStack_13c._28_4_ = CStack_84.z;
        auStack_13c._32_4_ = afStack_78[0];
      }
      auStack_13c._36_4_ = (this_ptr->base).ammo_type;
      fStack_110 = 1.41531e-43;
      auStack_13c._40_4_ = (CDemonActor *)0x3e19999a;
      pCStack_10c = this_ptr;
      CStack_108.y = (float)(*((this_ptr->base).base.vtable._ub)->getCarrier)
                                      ((CDemonActor *)this_ptr);
      in_stack_fffffeb0 = 0x5283b5;
      (*(((this_ptr_03->base).vtable._uc)->_uc).processDamage)
                (this_ptr_03,(SDamageInfo *)auStack_13c);
      if ((this_ptr->base).can_penetrate == 0) break;
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
    }
    pCStack_1c = (CDemonActor *)(pCStack_1c->actor_name + 1);
  } while ((int)pCStack_1c < 4);
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
  auStack_b0._8_4_ = CStack_90.x;
  afStack_a4[(uint)bVar4 * -2] = *(float *)((int)&CStack_90 + (uint)bVar4 * -8 + 4);
  afStack_a4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       *(float *)((int)&CStack_90 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  afStack_a4[0] = afStack_a4[0] + _DAT_005cdb41;
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004a2450
            (0x01C73654,(CVector3f *)(auStack_b0 + 8),&(this_ptr->base).base.orient_matrix);
  core_sound_cpp_CSound_playActorSound_FUN_005609d0
            (0x02CF5680,(CDemonActor *)this_ptr,"45.wav",&CStack_90);
  (this_ptr->base).fire_cooldown_timer = 1.5;
  return 1;
}
