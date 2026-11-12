// Name: core_crossbow.cpp_CCrossbow_fire_FUN_0043a7a0
// Address: 0043a7a0
// Address Range: [[0043a7a0, 0043ae0d]]
// Convention: __cdecl
// Signature: int __cdecl core_crossbow_cpp_CCrossbow_fire_FUN_0043a7a0(CCrossbow *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_crossbow_cpp_CCrossbow_fire_FUN_0043a7a0(CCrossbow *this_ptr)

{
  CDemonSet *this_ptr_00;
  uint uVar1;
  int iVar2;
  float fVar3;
  EDeathState EVar4;
  CGlass *this_ptr_01;
  CTrigger *this_ptr_02;
  CCharacter *this_ptr_03;
  float unaff_ESI;
  byte bVar5;
  CCrossbow *apCStackY_10f4 [3];
  float afStackY_10e8 [31];
  CDemonActor *apCStackY_106c [5];
  float afStackY_1058 [956];
  float *pfVar6;
  CCrossbow *this_ptr_04;
  double dVar7;
  CDemonActor *pCVar8;
  byte auStack_134 [44];
  float fStack_108;
  CCrossbow *pCStack_104;
  CDemonActor *pCStack_100;
  CDemonActor *pCStack_fc;
  float afStack_f8 [4];
  float fStack_e8;
  float afStack_e4 [6];
  float fStack_cc;
  float afStack_c8 [4];
  uint uStack_b8;
  uint uStack_b0;
  float afStack_ac [4];
  float fStack_9c;
  float afStack_98 [4];
  float fStack_88;
  float afStack_84 [2];
  CDemonActor *apCStack_7c [3];
  float fStack_70;
  float afStack_6c [5];
  float fStack_58;
  float afStack_54 [4];
  float fStack_44;
  CDemonActor *pCStack_40;
  float afStack_3c [4];
  float fStack_2c;
  int iStack_28;
  float fStack_24;
  CTrigger *pCStack_20;
  CCharacter *pCStack_18;
  float fStack_14;
  
  bVar5 = 0;
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  pfVar6 = afStack_c8 + 7;
  uStack_b0 = uStack_b8;
  afStack_c8[(uint)bVar5 * 0xfffffffe + 7] = afStack_c8[(uint)bVar5 * 0xfffffffe + 5];
  afStack_c8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 8] =
       afStack_c8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 6];
  core_actor_cpp_FUN_00408d70(this_ptr,pfVar6);
  auStack_134._40_4_ = apCStack_7c[0];
  (&fStack_108)[(uint)bVar5 * -2] = (float)apCStack_7c[(uint)bVar5 * -2 + 1];
  this_ptr_04 = this_ptr;
  (&pCStack_104)[(uint)bVar5 * -2 + (uint)bVar5 * -2] =
       (CCrossbow *)apCStack_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 2];
  iVar2 = core_weapon_cpp_CWeapon_fire_FUN_0058a290(&this_ptr_04->base);
  if (iVar2 == 0) {
    return 0;
  }
  afStack_c8[3] = (this_ptr->base).bolt_velocity;
  afStack_c8[1] = 0.0;
  afStack_c8[2] = 0.0;
  core_actor_cpp_FUN_00408cf0(this_ptr,afStack_c8 + 1);
  fVar3 = fStack_108;
  uVar1 = auStack_134._40_4_;
  fStack_58 = fStack_88;
  afStack_54[(uint)bVar5 * -2] = afStack_84[(uint)bVar5 * -2];
  afStack_54[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       afStack_84[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  afStack_3c[2] = (float)uVar1 + fStack_58;
  afStack_3c[3] = fVar3 + afStack_54[0];
  fStack_2c = (float)pCStack_104 + afStack_54[1];
  fStack_70 = (float)uVar1 + fStack_58;
  afStack_6c[(uint)bVar5 * -2] = afStack_3c[(uint)bVar5 * -2 + 3];
  afStack_6c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       afStack_3c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
  fVar3 = fStack_108;
  uVar1 = auStack_134._40_4_;
  fStack_24 = (float)_DAT_005ce22e / (this_ptr->base).bolt_velocity;
  fStack_e8 = fStack_58 * fStack_24;
  afStack_e4[0] = afStack_54[0] * fStack_24;
  afStack_e4[1] = afStack_54[1] * fStack_24;
  afStack_54[2] = fStack_58 * fStack_24;
  afStack_54[(uint)bVar5 * -2 + 3] = afStack_e4[(uint)bVar5 * -2];
  afStack_54[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
       afStack_e4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  pCStack_100 = (CDemonActor *)((float)uVar1 - afStack_54[2]);
  pCStack_fc = (CDemonActor *)(fVar3 - afStack_54[3]);
  afStack_f8[0] = (float)pCStack_104 - fStack_44;
  pCStack_40 = (CDemonActor *)((float)uVar1 - afStack_54[2]);
  afStack_3c[(uint)bVar5 * -2] = afStack_f8[(uint)bVar5 * -2 + -1];
  afStack_3c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       afStack_f8[(uint)bVar5 * -2 + (uint)bVar5 * -2];
  core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00537eb0(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  pCVar8 = (this_ptr->base).carried_by_actor;
  if (pCVar8 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,pCVar8);
  }
  iStack_28 = 0;
  do {
    fVar3 = (float)core_setcolid_cpp_FUN_00535ee0(g_CDemonSetPtr,&pCStack_40,&fStack_70);
    dVar7 = (double)fVar3;
    fStack_14 = fVar3;
    if ((dVar7 < 0.0) || (1.0 < dVar7)) break;
    pCStack_18 = (CCharacter *)
                 core_actor_cpp_castToClassHash_FUN_0040c8f0
                           (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if ((pCStack_18 != (CCharacter *)0x0) &&
       (EVar4 = (*(((pCStack_18->base).vtable._uc)->_uc).getDeathState)(pCStack_18), 0 < (int)EVar4)
       ) {
      fStack_14 = 0.0;
    }
    this_ptr_01 = (CGlass *)
                  core_actor_cpp_castToClassHash_FUN_0040c8f0
                            (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    this_ptr_02 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040c8f0
                            (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    pCStack_20 = this_ptr_02;
    if (pCStack_18 == (CCharacter *)0x0) {
      if (this_ptr_01 == (CGlass *)0x0) {
        if (this_ptr_02 == (CTrigger *)0x0) {
          core_fire_cpp_CFireEffect_createStake_FUN_0049d2c0
                    (0x01C3DEB4,&g_CDemonSetPtr->collision_impact_position,
                     &(this_ptr->base).base.orient.vec,&g_CDemonSetPtr->collision_normal,
                     g_CDemonSetPtr->ground_type);
          break;
        }
        core_trigger_cpp_CTrigger_onProjectileHit_FUN_00578550(this_ptr_02);
        iVar2 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_00578570
                          (this_ptr_02,(CDemonActor *)this_ptr);
        if (iVar2 != 0) {
          unaff_ESI = (float)(*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                                       ((CCharacter *)this_ptr,SUB84(__BITCAST_UINT64(dVar7),0),
                                        (int)((ulonglong)dVar7 >> 0x20));
          core_trigger_cpp_CTrigger_applyDamage_FUN_005785b0(this_ptr_02,unaff_ESI);
        }
        core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,&pCStack_20->base);
      }
      else {
        iVar2 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004c72d0(this_ptr_01);
        if (iVar2 == 0) break;
        core_glass_cpp_FUN_004c6d40(this_ptr_01,&g_CDemonSetPtr->collision_impact_position);
      }
    }
    else {
      iVar2 = (*(((pCStack_18->base).vtable._uc)->_uc).isInvulnerable)(pCStack_18);
      this_ptr_00 = g_CDemonSetPtr;
      pCVar8 = (CDemonActor *)((ulonglong)dVar7 >> 0x20);
      if (iVar2 != 0) {
        if (fStack_24 == 0.0) {
          (this_ptr->base).ammo_count = (this_ptr->base).ammo_count + 1;
          core_setcolid_cpp_CDemonSet_init_FUN_00537e00(this_ptr_00);
          return 0;
        }
        break;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)&stack0xfffffebc);
      this_ptr_03 = (CCharacter *)
                    (*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                              ((CCharacter *)this_ptr,pCVar8,(int)fVar3);
      auStack_134._4_4_ = 0.4;
      auStack_134._0_4_ = this_ptr_03;
      afStack_84[0] = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
      afStack_84[1] = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
      apCStack_7c[0] =
           (CDemonActor *)((g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z);
      fStack_9c = afStack_84[0];
      afStack_98[(uint)bVar5 * -2] = afStack_84[(uint)bVar5 * -2 + 1];
      afStack_98[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           (float)apCStack_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2];
      fVar3 = (float)_DAT_005ce236 /
              SQRT(fStack_88 * fStack_88 +
                   afStack_98[2] * afStack_98[2] + afStack_98[3] * afStack_98[3]);
      fStack_cc = afStack_98[2] * fVar3;
      afStack_c8[0] = afStack_98[3] * fVar3;
      afStack_c8[1] = fStack_88 * fVar3;
      afStack_54[0] = afStack_98[2] * fVar3;
      afStack_54[(uint)bVar5 * -2 + 1] = afStack_c8[(uint)bVar5 * -2];
      afStack_54[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 2] =
           afStack_c8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 1];
      if ((float *)(auStack_134 + 8) != afStack_54) {
        auStack_134._8_4_ = afStack_54[0];
        auStack_134._12_4_ = afStack_54[1];
        auStack_134._16_4_ = afStack_54[2];
      }
      core_actor_cpp_FUN_00408de0(unaff_ESI,&g_CDemonSetPtr->collision_impact_position);
      afStack_e4[0] = afStack_c8[2];
      afStack_e4[(uint)bVar5 * -2 + 1] = afStack_c8[(uint)bVar5 * 0xfffffffe + 3];
      afStack_e4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 2] =
           afStack_c8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 4];
      if ((float *)(auStack_134 + 0x18) != afStack_e4) {
        auStack_134._24_4_ = afStack_e4[0];
        auStack_134._28_4_ = afStack_e4[1];
        auStack_134._32_4_ = afStack_e4[2];
      }
      auStack_134._36_4_ = (this_ptr->base).ammo_type;
      fStack_108 = 1.45735e-43;
      pCStack_104 = this_ptr;
      auStack_134._40_4_ = (CDemonActor *)0x3e19999a;
      pCStack_fc = (*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
      (*(((this_ptr_03->base).vtable._uc)->_uc).processDamage)
                (this_ptr_03,(SDamageInfo *)auStack_134);
      if ((this_ptr->base).can_penetrate == 0) break;
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
    }
    iStack_28 = iStack_28 + 1;
  } while (iStack_28 < 4);
  core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
  core_sound_cpp_CSound_playActorSound_FUN_0055ae50
            (0x0264B290,(CDemonActor *)this_ptr,"bow-!.wav",
             (CVector3f *)(auStack_134 + 0x28));
  (this_ptr->base).fire_cooldown_timer = 0.666;
  return 1;
}
