// Name: core_burncrss.cpp_CBurncross_fire_FUN_00424550
// Address: 00424550
// Address Range: [[00424550, 00424e22]]
// Convention: __cdecl
// Signature: int __cdecl core_burncrss_cpp_CBurncross_fire_FUN_00424550(CBurncross *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_burncrss_cpp_CBurncross_fire_FUN_00424550(CBurncross *this_ptr)

{
  float fVar1;
  float fVar2;
  int iVar3;
  EDeathState EVar4;
  CGlass *this_ptr_00;
  CTrigger *this_ptr_01;
  CDemonActor *pCVar5;
  CCharacter *this_ptr_02;
  uint uVar6;
  int iVar7;
  float fVar8;
  byte bVar9;
  int unaff_retaddr;
  float afStackY_1128 [995];
  float *pfVar10;
  CBurncross *this_ptr_03;
  CDemonSet *this_ptr_04;
  double dVar11;
  byte auStack_16c [28];
  float fStack_150;
  float fStack_14c;
  CDemonActor *pCStack_148;
  CDemonActor *pCStack_144;
  float fStack_140;
  CBurncross *pCStack_13c;
  CDemonActor *pCStack_134;
  float afStack_130 [5];
  CDemonActor *pCStack_11c;
  float afStack_118 [2];
  CVector3f aCStack_110 [2];
  float fStack_f8;
  float afStack_f4 [2];
  CVector3f CStack_ec;
  uint uStack_e0;
  float afStack_dc [5];
  CVector3f CStack_c8;
  float fStack_bc;
  float afStack_b8 [4];
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_80;
  float afStack_7c [5];
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_44;
  float afStack_40 [2];
  CVector3f CStack_38;
  CTrigger *pCStack_28;
  float fStack_20;
  float fStack_1c;
  CCharacter *pCStack_18;
  float fStack_14;
  
  bVar9 = 0;
  this_ptr->firing = 1;
  if (0.0 < this_ptr->fire_cooldown) {
    return 1;
  }
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  pfVar10 = afStack_b8 + 2;
  afStack_b8[1] = (float)uStack_e0;
  afStack_b8[(uint)bVar9 * -2 + 2] = afStack_dc[(uint)bVar9 * -2];
  afStack_b8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 3] =
       afStack_dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
  core_actor_cpp_FUN_00408b80(this_ptr,pfVar10);
  CStack_c8.x = aCStack_110[0].x;
  *(uint *)((int)&CStack_c8 + (uint)bVar9 * -8 + 4) =
       *(uint *)((int)aCStack_110 + (uint)bVar9 * -8 + 4);
  this_ptr_03 = this_ptr;
  *(uint *)((int)&CStack_c8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
       *(uint *)((int)aCStack_110 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  iVar3 = core_weapon_cpp_CWeapon_fire_FUN_0057b880(&this_ptr_03->base);
  if (iVar3 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_005609d0
              (0x02CF5680,(CDemonActor *)this_ptr,"wp_nomana.wav",&CStack_c8);
    this_ptr->firing = 0;
    (this_ptr->base).fire_cooldown_timer = 1.0;
    return 0;
  }
  iVar3 = sound_sndmain_cpp_FUN_00556700(this_ptr->sfx_handle);
  if (iVar3 == 0) {
    uVar6 = core_sound_cpp_CSound_playActorSound_FUN_005609d0
                      (0x02CF5680,(CDemonActor *)this_ptr,"wp_burningcross.wav",
                       &CStack_c8);
    this_ptr->sfx_handle = uVar6;
  }
  this_ptr->fire_cooldown = 0.25;
  CStack_ec.z = (this_ptr->base).bolt_velocity;
  CStack_ec.x = 0.0;
  CStack_ec.y = 0.0;
  core_actor_cpp_FUN_00408b00(this_ptr,&CStack_ec);
  fVar2 = CStack_c8.z;
  fVar1 = CStack_c8.y;
  fVar8 = CStack_c8.x;
  fStack_a4 = fStack_140;
  afStack_b8[(uint)bVar9 * -2 + 6] = afStack_130[(uint)bVar9 * -2 + -3];
  afStack_b8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
       afStack_130[(uint)bVar9 * -2 + (uint)bVar9 * -2 + -2];
  fStack_f8 = fVar8 + fStack_a4;
  afStack_f4[0] = fVar1 + fStack_a0;
  afStack_f4[1] = fVar2 + fStack_9c;
  fStack_44 = fVar8 + fStack_a4;
  afStack_40[(uint)bVar9 * -2] = afStack_f4[(uint)bVar9 * -2];
  afStack_40[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       afStack_f4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
  fVar2 = CStack_c8.z;
  fVar1 = CStack_c8.y;
  fVar8 = CStack_c8.x;
  CStack_38.z = (float)_DAT_005b7926 / (this_ptr->base).bolt_velocity;
  fStack_98 = fStack_a4 * CStack_38.z;
  fStack_94 = fStack_a0 * CStack_38.z;
  fStack_90 = fStack_9c * CStack_38.z;
  fStack_5c = fStack_a4 * CStack_38.z;
  afStack_7c[(uint)bVar9 * -2 + 9] = afStack_b8[(uint)bVar9 * -2 + 9];
  afStack_7c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
       afStack_b8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
  pCStack_11c = (CDemonActor *)(fVar8 - fStack_5c);
  afStack_118[0] = fVar1 - fStack_58;
  afStack_118[1] = fVar2 - fStack_54;
  pCStack_134 = (CDemonActor *)(fVar8 - fStack_5c);
  afStack_130[(uint)bVar9 * -2] = afStack_118[(uint)bVar9 * -2];
  this_ptr_04 = g_CDemonSetPtr;
  afStack_130[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       afStack_118[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(this_ptr_04);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  core_setcolid_cpp_CDemonSet_skipExactCollisions_FUN_0053ebd0(g_CDemonSetPtr);
  pCVar5 = (this_ptr->base).carried_by_actor;
  if (pCVar5 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,pCVar5);
  }
  iVar3 = 0;
  do {
    fStack_14 = (float)core_setcolid_cpp_FUN_0053ccc0(g_CDemonSetPtr,auStack_16c + 0x38,&fStack_44);
    dVar11 = (double)fStack_14;
    if ((dVar11 < 0.0) || (1.0 < dVar11)) break;
    pCStack_18 = (CCharacter *)
                 core_actor_cpp_castToClassHash_FUN_0040c840
                           (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if ((pCStack_18 != (CCharacter *)0x0) &&
       (EVar4 = (*(((pCStack_18->base).vtable._uc)->_uc).getDeathState)(pCStack_18), 0 < (int)EVar4)
       ) {
      fStack_14 = 0.0;
    }
    this_ptr_00 = (CGlass *)
                  core_actor_cpp_castToClassHash_FUN_0040c840
                            (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    this_ptr_01 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040c840
                            (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    pCStack_28 = this_ptr_01;
    if (pCStack_18 != (CCharacter *)0x0) {
      pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                         ((this_ptr->base).carried_by_actor,g_CEnemyClassInfo.name_hash);
      if ((pCVar5 != (CDemonActor *)0x0) ||
         (iVar3 = (*(((pCStack_18->base).vtable._uc)->_uc).isInvulnerable)(pCStack_18), iVar3 == 0))
      {
        core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)&stack0xfffffe84);
        this_ptr_02 = (CCharacter *)
                      (*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                                ((CCharacter *)this_ptr,SUB84(__BITCAST_UINT64(dVar11),0),
                                 (int)((ulonglong)dVar11 >> 0x20));
        auStack_16c._4_4_ = 0.4;
        auStack_16c._0_4_ = this_ptr_02;
        fStack_68 = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
        fStack_64 = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
        fStack_60 = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
        fStack_bc = fStack_68;
        afStack_b8[(uint)bVar9 * -2] = afStack_7c[(uint)bVar9 * -2 + 6];
        afStack_b8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
             afStack_7c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
        fStack_20 = (float)_DAT_005b792e /
                    SQRT(fStack_a8 * fStack_a8 +
                         afStack_b8[2] * afStack_b8[2] + afStack_b8[3] * afStack_b8[3]);
        fStack_80 = afStack_b8[2] * fStack_20;
        afStack_7c[0] = afStack_b8[3] * fStack_20;
        afStack_7c[1] = fStack_a8 * fStack_20;
        fStack_5c = afStack_b8[2] * fStack_20;
        afStack_7c[(uint)bVar9 * -2 + 9] = afStack_7c[(uint)bVar9 * -2];
        afStack_7c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
             afStack_7c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
        if ((float *)(auStack_16c + 8) != afStack_7c + 8) {
          auStack_16c._8_4_ = fStack_5c;
          auStack_16c._12_4_ = fStack_58;
          auStack_16c._16_4_ = fStack_54;
        }
        core_actor_cpp_FUN_00408bf0();
        CStack_c8.x = afStack_7c[2];
        *(float *)((int)&CStack_c8 + (uint)bVar9 * -8 + 4) = afStack_7c[(uint)bVar9 * -2 + 3];
        *(float *)((int)&CStack_c8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
             afStack_7c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
        if ((CVector3f *)(auStack_16c + 0x18) != &CStack_c8) {
          auStack_16c._24_4_ = CStack_c8.x;
          fStack_150 = CStack_c8.y;
          fStack_14c = CStack_c8.z;
        }
        pCStack_148 = (CDemonActor *)(this_ptr->base).ammo_type;
        pCStack_144 = (CDemonActor *)0x3e19999a;
        fStack_140 = 1.42932e-43;
        pCStack_13c = this_ptr;
        pCStack_134 = (*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
        (*(((this_ptr_02->base).vtable._uc)->_uc).processDamage)
                  (this_ptr_02,(SDamageInfo *)auStack_16c);
        if (&CStack_ec != &g_CDemonSetPtr->collision_impact_position) {
          CStack_ec.x = (g_CDemonSetPtr->collision_impact_position).x;
          CStack_ec.y = (g_CDemonSetPtr->collision_impact_position).y;
          CStack_ec.z = (g_CDemonSetPtr->collision_impact_position).z;
        }
        iVar3 = 0;
        do {
          fStack_20 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-5.0,5.0);
          fStack_1c = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,10.0);
          CStack_38.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-5.0,5.0);
          CStack_38.y = fStack_1c;
          CStack_38.z = fStack_20;
          if (aCStack_110 != (CVector3f *)(afStack_40 + 2)) {
            aCStack_110[0].y = fStack_1c;
            aCStack_110[0].z = fStack_20;
            aCStack_110[0].x = CStack_38.x;
          }
          iVar3 = iVar3 + 1;
          core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0
                    (0x01C73654,&CStack_ec,aCStack_110,0x20000,0x10000,4,0xffff);
        } while (iVar3 < 0x10);
        if (*(int *)(unaff_retaddr + 0x27c0) != 0) {
          core_charactr_cpp_FUN_0042fbd0(unaff_retaddr,auStack_16c + 0x24,0);
        }
      }
      break;
    }
    if (this_ptr_00 == (CGlass *)0x0) {
      if (this_ptr_01 == (CTrigger *)0x0) {
        core_fire_cpp_FUN_004a2090
                  (0x01C73654,&g_CDemonSetPtr->collision_impact_position,
                   &g_CDemonSetPtr->collision_normal,g_CDemonSetPtr->ground_type,
                   g_CDemonSetPtr->collision_actor,1);
        core_fire_cpp_CFireEffect_createGunFlames_FUN_004a3af0
                  (0x01C73654,&g_CDemonSetPtr->collision_impact_position,
                   &g_CDemonSetPtr->collision_normal,3,0,0);
        core_sound_cpp_CSound_playActorSound_FUN_005609d0
                  (0x02CF5680,(CDemonActor *)this_ptr,"wp_burningcross_scorch.wav",
                   &g_CDemonSetPtr->collision_impact_position);
        break;
      }
      core_trigger_cpp_CTrigger_onProjectileHit_FUN_0056edc0(this_ptr_01);
      iVar7 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_0056ede0
                        (this_ptr_01,(CDemonActor *)this_ptr);
      if (iVar7 != 0) {
        fVar8 = (float)(*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                                 ((CCharacter *)this_ptr,SUB84(__BITCAST_UINT64(dVar11),0),
                                  (int)((ulonglong)dVar11 >> 0x20));
        core_trigger_cpp_CTrigger_applyDamage_FUN_0056ee20(this_ptr_01,fVar8);
      }
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,&pCStack_28->base);
    }
    else {
      iVar7 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004cc5d0(this_ptr_00);
      if (iVar7 == 0) break;
      core_glass_cpp_FUN_004cc040(this_ptr_00,&g_CDemonSetPtr->collision_impact_position);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
  return 1;
}
