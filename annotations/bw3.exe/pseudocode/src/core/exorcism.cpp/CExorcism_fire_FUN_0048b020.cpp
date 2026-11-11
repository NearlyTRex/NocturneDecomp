// Name: core_exorcism.cpp_CExorcism_fire_FUN_0048b020
// Address: 0048b020
// Address Range: [[0048b020, 0048b59d]]
// Convention: __cdecl
// Signature: int __cdecl core_exorcism_cpp_CExorcism_fire_FUN_0048b020(CExorcism *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_exorcism_cpp_CExorcism_fire_FUN_0048b020(CExorcism *this_ptr)

{
  CDemonActor *actor;
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  CGlass *this_ptr_00;
  CTrigger *this_ptr_01;
  CCrate *this_ptr_02;
  CFlameCan *this_ptr_03;
  byte bVar5;
  float afStackY_10a4 [1012];
  float *pfVar6;
  double dVar7;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  CVector3f CStack_98;
  float fStack_8c;
  float afStack_88 [5];
  uint uStack_74;
  float fStack_70;
  uint uStack_6c;
  float fStack_68;
  float afStack_64 [4];
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float afStack_38 [3];
  uint uStack_2c;
  float fStack_20;
  CTrigger *pCStack_1c;
  int iStack_18;
  CCharacter *pCStack_14;
  
  bVar5 = 0;
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  pfVar6 = afStack_88 + 2;
  afStack_88[1] = (float)uStack_2c;
  afStack_88[(uint)bVar5 * -2 + 2] = afStack_64[(uint)bVar5 * -2 + 0xf];
  afStack_88[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 3] =
       afStack_64[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10];
  core_actor_cpp_FUN_00408b80(this_ptr,pfVar6);
  CStack_98.x = fStack_44;
  *(float *)((int)&CStack_98 + (uint)bVar5 * -8 + 4) = afStack_64[(uint)bVar5 * -2 + 9];
  *(float *)((int)&CStack_98 + ((uint)bVar5 * -2 + (uint)bVar5 * -2) * 4 + 8) =
       afStack_64[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
  if (this_ptr->fire_cooldown <= 0.0) {
    iVar3 = core_weapon_cpp_CWeapon_fire_FUN_0057b880(&this_ptr->base);
    if (iVar3 == 0) {
      core_sound_cpp_CSound_playActorSound_FUN_005609d0
                (0x02CF5680,(CDemonActor *)this_ptr,"@@wp_nomana.wav" + 2,&CStack_98);
      (this_ptr->base).fire_cooldown_timer = 1.0;
      return 0;
    }
    this_ptr->fire_cooldown = 1.0;
  }
  this_ptr->is_firing = 1;
  if ((this_ptr->was_firing_prev_frame != 0) && (this_ptr->target != (CCharacter *)0x0)) {
    return 1;
  }
  iVar3 = sound_sndmain_cpp_FUN_00556700(_DAT_01c6e35c);
  if (iVar3 == 0) {
    _DAT_01c6e35c =
         core_sound_cpp_CSound_playActorSound_FUN_005609d0
                   (0x02CF5680,(CDemonActor *)this_ptr,"wp_exorcism.wav @ .5",&CStack_98);
  }
  this_ptr->target = (CCharacter *)0x0;
  iVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                    ((this_ptr->base).carried_by_actor,g_CHeroClassInfo.name_hash);
  if (iVar3 != 0) {
    this_ptr->hero_health = *(float *)(iVar3 + 0x2538);
  }
  fStack_70 = (this_ptr->base).bolt_velocity;
  uStack_74 = 0;
  uStack_6c = 0;
  core_actor_cpp_FUN_00408b00(this_ptr,&uStack_74);
  fVar2 = CStack_98.z;
  fVar1 = CStack_98.y;
  fVar4 = CStack_98.x;
  fStack_50 = fStack_8c;
  afStack_64[(uint)bVar5 * -2 + 6] = afStack_88[(uint)bVar5 * -2];
  afStack_64[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
       afStack_88[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  afStack_64[2] = fVar4 + fStack_50;
  afStack_64[3] = fVar1 + fStack_4c;
  fStack_54 = fVar2 + fStack_48;
  fStack_a4 = fVar4 + fStack_50;
  *(float *)((int)&stack0xffffff60 + (uint)bVar5 * 0xfffffffe * 4) =
       afStack_64[(uint)bVar5 * -2 + 3];
  *(float *)((int)&stack0xffffff60 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4) =
       afStack_64[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
  fVar1 = CStack_98.x;
  fStack_20 = (float)_DAT_005bdd8e / (this_ptr->base).bolt_velocity;
  fVar4 = fStack_50 * fStack_20;
  fStack_68 = fVar4;
  afStack_64[0] = fStack_4c * fStack_20;
  afStack_64[1] = fStack_48 * fStack_20;
  *(float *)((int)&stack0xffffff48 + (uint)bVar5 * -8) = afStack_64[(uint)bVar5 * -2];
  *(float *)((int)&stack0xffffff4c + ((uint)bVar5 * -2 + (uint)bVar5 * -2) * 4) =
       afStack_64[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  fStack_b0 = fVar1 - fVar4;
  fStack_ac = CStack_98.y - fStack_b8;
  fStack_a8 = CStack_98.z - fStack_b4;
  afStack_38[0] = fVar1 - fVar4;
  afStack_64[(uint)bVar5 * -2 + 0xc] = *(float *)((int)&stack0xffffff54 + (uint)bVar5 * -8);
  afStack_64[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
       *(float *)((int)&stack0xffffff58 + ((uint)bVar5 * -2 + (uint)bVar5 * -2) * 4);
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  core_setcolid_cpp_CDemonSet_skipExactCollisions_FUN_0053ebd0(g_CDemonSetPtr);
  actor = (this_ptr->base).carried_by_actor;
  if (actor != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,actor);
  }
  iStack_18 = 0;
  while( true ) {
    fVar4 = (float)core_setcolid_cpp_FUN_0053ccc0(g_CDemonSetPtr,afStack_64 + 0xb,&stack0xffffff5c);
    dVar7 = (double)fVar4;
    if ((dVar7 < 0.0) || (1.0 < dVar7)) goto LAB_0048b40f;
    pCStack_14 = (CCharacter *)
                 core_actor_cpp_castToClassHash_FUN_0040c840
                           (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if (pCStack_14 != (CCharacter *)0x0) {
      (*(((pCStack_14->base).vtable._uc)->_uc).getDeathState)(pCStack_14);
    }
    this_ptr_00 = (CGlass *)
                  core_actor_cpp_castToClassHash_FUN_0040c840
                            (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    this_ptr_01 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040c840
                            (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    pCStack_1c = this_ptr_01;
    this_ptr_02 = (CCrate *)
                  core_actor_cpp_castToClassHash_FUN_0040c840
                            (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
    this_ptr_03 = (CFlameCan *)
                  core_actor_cpp_castToClassHash_FUN_0040c840
                            (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
    if (pCStack_14 != (CCharacter *)0x0) break;
    if (this_ptr_00 == (CGlass *)0x0) {
      if (this_ptr_01 == (CTrigger *)0x0) {
        if (this_ptr_02 == (CCrate *)0x0) {
          if (this_ptr_03 == (CFlameCan *)0x0) goto LAB_0048b40f;
          core_flamecan_cpp_CFlameCan_ignite_FUN_004a7110(this_ptr_03);
        }
        else {
          core_crate_cpp_FUN_004461c0(this_ptr_02);
        }
      }
      else {
        core_trigger_cpp_CTrigger_onProjectileHit_FUN_0056edc0(this_ptr_01);
        iVar3 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_0056ede0
                          (this_ptr_01,(CDemonActor *)this_ptr);
        if (iVar3 != 0) {
          fVar4 = (float)(*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                                   ((CCharacter *)this_ptr,SUB84(__BITCAST_UINT64(dVar7),0),
                                    (int)((ulonglong)dVar7 >> 0x20));
          core_trigger_cpp_CTrigger_applyDamage_FUN_0056ee20(this_ptr_01,fVar4);
        }
        core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,&pCStack_1c->base);
      }
    }
    else {
      iVar3 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004cc5d0(this_ptr_00);
      if (iVar3 == 0) goto LAB_0048b40f;
      core_glass_cpp_FUN_004cc040(this_ptr_00,&g_CDemonSetPtr->collision_impact_position);
    }
    iStack_18 = iStack_18 + 1;
    if (3 < iStack_18) {
LAB_0048b40f:
      this_ptr->zap_timer = 0.0;
      core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
      return 1;
    }
  }
  iVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                    ((this_ptr->base).carried_by_actor,g_CHeroClassInfo.name_hash);
  if ((((iVar3 == 0) ||
       (iVar3 = (*(((pCStack_14->base).vtable._uc)->_uc).isInvulnerable)(pCStack_14), iVar3 == 0))
      && ((iVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                             ((this_ptr->base).carried_by_actor,g_CEnemyClassInfo.name_hash),
          iVar3 == 0 ||
          (iVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                             (pCStack_14,g_CEnemyClassInfo.name_hash), iVar3 == 0)))) &&
     (0.0 < pCStack_14->hit_points)) {
    this_ptr->target = pCStack_14;
  }
  goto LAB_0048b40f;
}
