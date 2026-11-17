// Name: core_crossbow.cpp_CCrossbow_fire_FUN_00449a50
// Address: 00449a50
// Address Range: [[00449a50, 0044a0bd]]
// Convention: __cdecl
// Signature: int __cdecl core_crossbow_cpp_CCrossbow_fire_FUN_00449a50(CCrossbow *this_ptr)

#include "nocturne.h"

int __cdecl core_crossbow_cpp_CCrossbow_fire_FUN_00449a50(CCrossbow *this_ptr)

{
  CDemonSet *this_ptr_00;
  uint uVar1;
  int iVar2;
  float fVar3;
  EDeathState EVar4;
  CGlass *this_ptr_01;
  CTrigger *this_ptr_02;
  CCharacter *this_ptr_03;
  CDemonActor *unaff_ESI;
  byte bVar5;
  CCrossbow *apCStackY_10f4 [3];
  float afStackY_10e8 [992];
  CVector3f *input_local_point;
  CCrossbow *this_ptr_04;
  double dVar6;
  CDemonActor *pCVar7;
  byte auStack_134 [44];
  float fStack_108;
  CCrossbow *pCStack_104;
  CDemonActor *pCStack_100;
  CDemonActor *pCStack_fc;
  float afStack_f8 [4];
  float fStack_e8;
  float afStack_e4 [6];
  float fStack_cc;
  float fStack_c8;
  byte auStack_c4 [8];
  float afStack_bc [4];
  CVector3f CStack_ac;
  float fStack_9c;
  float afStack_98 [4];
  CVector3f CStack_88;
  CVector3f CStack_7c;
  CVector3f aCStack_70 [2];
  float fStack_58;
  float afStack_54 [4];
  float fStack_44;
  CVector3f CStack_40;
  float fStack_34;
  float afStack_30 [2];
  int iStack_28;
  float fStack_24;
  CTrigger *pCStack_20;
  CCharacter *pCStack_18;
  float fStack_14;
  
  bVar5 = 0;
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  input_local_point = &CStack_ac;
  afStack_bc[3] = afStack_bc[1];
  *(float *)((int)&CStack_ac + (uint)bVar5 * -8) = afStack_bc[(uint)bVar5 * -2 + 2];
  *(float *)((int)&CStack_ac + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 4) =
       afStack_bc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 3];
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
            ((CDemonActor *)this_ptr,input_local_point,&CStack_7c);
  auStack_134._40_4_ = CStack_7c.x;
  (&fStack_108)[(uint)bVar5 * -2] = *(float *)((int)aCStack_70 + (uint)bVar5 * -8 + -8);
  this_ptr_04 = this_ptr;
  (&pCStack_104)[(uint)bVar5 * -2 + (uint)bVar5 * -2] =
       *(CCrossbow **)((int)aCStack_70 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + -4);
  iVar2 = core_weapon_cpp_CWeapon_fire_FUN_005adde0(&this_ptr_04->base);
  if (iVar2 == 0) {
    return 0;
  }
  afStack_bc[0] = (this_ptr->base).bolt_velocity;
  auStack_c4._0_4_ = 0.0;
  auStack_c4._4_4_ = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0
            ((CDemonActor *)this_ptr,(CVector3f *)auStack_c4,&CStack_88);
  fVar3 = fStack_108;
  uVar1 = auStack_134._40_4_;
  fStack_58 = CStack_88.x;
  afStack_54[(uint)bVar5 * -2] = *(float *)((int)&CStack_88 + (uint)bVar5 * -8 + 4);
  afStack_54[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       *(float *)((int)&CStack_88 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  fStack_34 = (float)uVar1 + fStack_58;
  afStack_30[0] = fVar3 + afStack_54[0];
  afStack_30[1] = (float)pCStack_104 + afStack_54[1];
  aCStack_70[0].x = (float)uVar1 + fStack_58;
  *(float *)((int)aCStack_70 + (uint)bVar5 * -8 + 4) = afStack_30[(uint)bVar5 * -2];
  *(float *)((int)aCStack_70 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       afStack_30[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  fVar3 = fStack_108;
  uVar1 = auStack_134._40_4_;
  fStack_24 = (float)1.5 / (this_ptr->base).bolt_velocity;
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
  CStack_40.x = (float)uVar1 - afStack_54[2];
  *(float *)((int)&CStack_40 + (uint)bVar5 * -8 + 4) = afStack_f8[(uint)bVar5 * -2 + -1];
  *(float *)((int)&CStack_40 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       afStack_f8[(uint)bVar5 * -2 + (uint)bVar5 * -2];
  core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_005592d0(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  pCVar7 = (this_ptr->base).carried_by_actor;
  if (pCVar7 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,pCVar7);
  }
  iStack_28 = 0;
  do {
    fVar3 = core_setcolid_cpp_CDemonSet_raycast_FUN_00557300(g_CDemonSetPtr,&CStack_40,aCStack_70);
    dVar6 = (double)fVar3;
    fStack_14 = fVar3;
    if ((dVar6 < 0.0) || (1.0 < dVar6)) break;
    pCStack_18 = (CCharacter *)
                 core_actor_cpp_castToClassHash_FUN_0040c600
                           (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if ((pCStack_18 != (CCharacter *)0x0) &&
       (EVar4 = (*(((pCStack_18->base).vtable._uc)->_uc).getDeathState)(pCStack_18), 0 < (int)EVar4)
       ) {
      fStack_14 = 0.0;
    }
    this_ptr_01 = (CGlass *)
                  core_actor_cpp_castToClassHash_FUN_0040c600
                            (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    this_ptr_02 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040c600
                            (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    pCStack_20 = this_ptr_02;
    if (pCStack_18 == (CCharacter *)0x0) {
      if (this_ptr_01 == (CGlass *)0x0) {
        if (this_ptr_02 == (CTrigger *)0x0) {
          core_fire_cpp_CFireEffect_createStake_FUN_004b5bc0
                    (g_CFireEffectPtr,&g_CDemonSetPtr->collision_impact_position,
                     &(this_ptr->base).base.orient.vec,&g_CDemonSetPtr->collision_normal,
                     g_CDemonSetPtr->ground_type);
          break;
        }
        core_trigger_cpp_CTrigger_onProjectileHit_FUN_0059bdd0(this_ptr_02);
        iVar2 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_0059bdf0
                          (this_ptr_02,(CDemonActor *)this_ptr);
        if (iVar2 != 0) {
          unaff_ESI = (CDemonActor *)
                      (*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                                ((CCharacter *)this_ptr,SUB84(__BITCAST_UINT64(dVar6),0),
                                 (int)((ulonglong)dVar6 >> 0x20));
          core_trigger_cpp_CTrigger_applyDamage_FUN_0059be30(this_ptr_02,(float)unaff_ESI);
        }
        core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,&pCStack_20->base);
      }
      else {
        iVar2 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004e3a40(this_ptr_01);
        if (iVar2 == 0) break;
        core_glass_cpp_CGlass_shatter_FUN_004e34b0
                  (this_ptr_01,&g_CDemonSetPtr->collision_impact_position);
      }
    }
    else {
      iVar2 = (*(((pCStack_18->base).vtable._uc)->_uc).isInvulnerable)(pCStack_18);
      this_ptr_00 = g_CDemonSetPtr;
      pCVar7 = (CDemonActor *)((ulonglong)dVar6 >> 0x20);
      if (iVar2 != 0) {
        if (fStack_24 == 0.0) {
          (this_ptr->base).ammo_count = (this_ptr->base).ammo_count + 1;
          core_setcolid_cpp_CDemonSet_init_FUN_00559220(this_ptr_00);
          return 0;
        }
        break;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010((SDamageInfo *)&stack0xfffffebc);
      this_ptr_03 = (CCharacter *)
                    (*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                              ((CCharacter *)this_ptr,pCVar7,(int)fVar3);
      auStack_134._4_4_ = 0.4;
      auStack_134._0_4_ = this_ptr_03;
      CStack_88.y = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
      CStack_88.z = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
      CStack_7c.x = (float)((g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z);
      fStack_9c = CStack_88.y;
      afStack_98[(uint)bVar5 * -2] = *(float *)((int)&CStack_88 + (uint)bVar5 * -8 + 8);
      afStack_98[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           *(float *)((int)aCStack_70 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + -0xc);
      fVar3 = (float)10 /
              SQRT(CStack_88.x * CStack_88.x +
                   afStack_98[2] * afStack_98[2] + afStack_98[3] * afStack_98[3]);
      fStack_cc = afStack_98[2] * fVar3;
      fStack_c8 = afStack_98[3] * fVar3;
      auStack_c4._0_4_ = CStack_88.x * fVar3;
      afStack_54[0] = afStack_98[2] * fVar3;
      afStack_54[(uint)bVar5 * -2 + 1] = (&fStack_c8)[(uint)bVar5 * -2];
      afStack_54[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 2] =
           *(float *)(auStack_c4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      if ((float *)(auStack_134 + 8) != afStack_54) {
        auStack_134._8_4_ = afStack_54[0];
        auStack_134._12_4_ = afStack_54[1];
        auStack_134._16_4_ = afStack_54[2];
      }
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                (unaff_ESI,&g_CDemonSetPtr->collision_impact_position,(CVector3f *)(auStack_c4 + 4))
      ;
      afStack_e4[0] = (float)auStack_c4._4_4_;
      afStack_e4[(uint)bVar5 * -2 + 1] = afStack_bc[(uint)bVar5 * -2];
      afStack_e4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 2] =
           afStack_bc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
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
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
    }
    iStack_28 = iStack_28 + 1;
  } while (iStack_28 < 4);
  core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
  core_sound_cpp_CSound_playActorSound_FUN_0057d8a0
            (g_CSound_PTR_006236b8,(CDemonActor *)this_ptr,"bow-!.wav",
             (CVector3f *)(auStack_134 + 0x28));
  (this_ptr->base).fire_cooldown_timer = 0.666;
  return 1;
}
