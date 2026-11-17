// Name: core_burncrss.cpp_CBurncross_fire_FUN_00424550
// Address: 00424550
// Address Range: [[00424550, 00424e22]]
// Convention: __cdecl
// Signature: int __cdecl core_burncrss_cpp_CBurncross_fire_FUN_00424550(CBurncross *this_ptr)

#include "nocturne.h"

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
  CDemonActor *unaff_EDI;
  byte bVar9;
  CCharacter *unaff_retaddr;
  CBurncross *apCStackY_1128 [3];
  float afStackY_111c [992];
  CVector3f *input_local_point;
  CBurncross *this_ptr_03;
  CDemonSet *this_ptr_04;
  double dVar10;
  byte auStack_16c [28];
  float fStack_150;
  float fStack_14c;
  byte auStack_148 [12];
  CBurncross *apCStack_13c [2];
  CVector3f aCStack_134 [2];
  CDemonActor *pCStack_11c;
  float afStack_118 [2];
  CVector3f aCStack_110 [2];
  float fStack_f8;
  float afStack_f4 [2];
  CVector3f CStack_ec;
  uint uStack_e0;
  uint auStack_dc [5];
  CVector3f CStack_c8;
  float fStack_bc;
  float afStack_b8 [2];
  CVector3f CStack_b0;
  float fStack_a4;
  float afStack_a0 [4];
  float fStack_90;
  float fStack_80;
  float afStack_7c [2];
  CVector3f CStack_74;
  float fStack_68;
  float afStack_64 [4];
  float fStack_54;
  CVector3f CStack_44;
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
  input_local_point = &CStack_b0;
  afStack_b8[1] = (float)uStack_e0;
  *(uint *)((int)&CStack_b0 + (uint)bVar9 * -8) = auStack_dc[(uint)bVar9 * -2];
  *(uint *)((int)&CStack_b0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 4) =
       auStack_dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
            ((CDemonActor *)this_ptr,input_local_point,aCStack_110);
  CStack_c8.x = aCStack_110[0].x;
  *(uint *)((int)&CStack_c8 + (uint)bVar9 * -8 + 4) =
       *(uint *)((int)aCStack_110 + (uint)bVar9 * -8 + 4);
  this_ptr_03 = this_ptr;
  *(uint *)((int)&CStack_c8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
       *(uint *)((int)aCStack_110 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  iVar3 = core_weapon_cpp_CWeapon_fire_FUN_0057b880(&this_ptr_03->base);
  if (iVar3 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_005609d0
              (g_CSound_PTR_006045f8,(CDemonActor *)this_ptr,"wp_nomana.wav",&CStack_c8);
    this_ptr->firing = 0;
    (this_ptr->base).fire_cooldown_timer = 1.0;
    return 0;
  }
  iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->sfx_handle);
  if (iVar3 == 0) {
    uVar6 = core_sound_cpp_CSound_playActorSound_FUN_005609d0
                      (g_CSound_PTR_006045f8,(CDemonActor *)this_ptr,"wp_burningcross.wav",
                       &CStack_c8);
    this_ptr->sfx_handle = uVar6;
  }
  this_ptr->fire_cooldown = 0.25;
  CStack_ec.z = (this_ptr->base).bolt_velocity;
  CStack_ec.x = 0.0;
  CStack_ec.y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408b00
            ((CDemonActor *)this_ptr,&CStack_ec,(CVector3f *)(auStack_16c + 0x2c));
  fVar2 = CStack_c8.z;
  fVar1 = CStack_c8.y;
  fVar8 = CStack_c8.x;
  fStack_a4 = (float)auStack_148._8_4_;
  afStack_a0[(uint)bVar9 * -2] = (float)apCStack_13c[(uint)bVar9 * -2];
  afStack_a0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       (float)apCStack_13c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
  fStack_f8 = fVar8 + fStack_a4;
  afStack_f4[0] = fVar1 + afStack_a0[0];
  afStack_f4[1] = fVar2 + afStack_a0[1];
  CStack_44.x = fVar8 + fStack_a4;
  *(float *)((int)&CStack_44 + (uint)bVar9 * -8 + 4) = afStack_f4[(uint)bVar9 * -2];
  *(float *)((int)&CStack_44 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
       afStack_f4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
  fVar2 = CStack_c8.z;
  fVar1 = CStack_c8.y;
  fVar8 = CStack_c8.x;
  CStack_38.z = (float)1.5 / (this_ptr->base).bolt_velocity;
  afStack_a0[2] = fStack_a4 * CStack_38.z;
  afStack_a0[3] = afStack_a0[0] * CStack_38.z;
  fStack_90 = afStack_a0[1] * CStack_38.z;
  afStack_64[2] = fStack_a4 * CStack_38.z;
  afStack_64[(uint)bVar9 * -2 + 3] = afStack_a0[(uint)bVar9 * -2 + 3];
  afStack_64[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
       afStack_a0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
  pCStack_11c = (CDemonActor *)(fVar8 - afStack_64[2]);
  afStack_118[0] = fVar1 - afStack_64[3];
  afStack_118[1] = fVar2 - fStack_54;
  aCStack_134[0].x = fVar8 - afStack_64[2];
  *(float *)((int)aCStack_134 + (uint)bVar9 * -8 + 4) = afStack_118[(uint)bVar9 * -2];
  this_ptr_04 = g_CDemonSetPtr;
  *(float *)((int)aCStack_134 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
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
    fStack_14 = core_setcolid_cpp_CDemonSet_raycast_FUN_0053ccc0
                          (g_CDemonSetPtr,aCStack_134,&CStack_44);
    dVar10 = (double)fStack_14;
    if ((dVar10 < 0.0) || (1.0 < dVar10)) break;
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
                                ((CCharacter *)this_ptr,SUB84(__BITCAST_UINT64(dVar10),0),
                                 (int)((ulonglong)dVar10 >> 0x20));
        auStack_16c._4_4_ = 0.4;
        auStack_16c._0_4_ = this_ptr_02;
        fStack_68 = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
        afStack_64[0] = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
        afStack_64[1] = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
        fStack_bc = fStack_68;
        afStack_b8[(uint)bVar9 * -2] = afStack_64[(uint)bVar9 * -2];
        afStack_b8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
             afStack_64[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
        fStack_20 = (float)10 /
                    SQRT(CStack_b0.z * CStack_b0.z +
                         CStack_b0.x * CStack_b0.x + CStack_b0.y * CStack_b0.y);
        fStack_80 = CStack_b0.x * fStack_20;
        afStack_7c[0] = CStack_b0.y * fStack_20;
        afStack_7c[1] = CStack_b0.z * fStack_20;
        afStack_64[2] = CStack_b0.x * fStack_20;
        afStack_64[(uint)bVar9 * -2 + 3] = afStack_7c[(uint)bVar9 * -2];
        afStack_64[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
             afStack_7c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
        if ((float *)(auStack_16c + 8) != afStack_64 + 2) {
          auStack_16c._8_4_ = afStack_64[2];
          auStack_16c._12_4_ = afStack_64[3];
          auStack_16c._16_4_ = fStack_54;
        }
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                  (unaff_EDI,&g_CDemonSetPtr->collision_impact_position,&CStack_74);
        CStack_c8.x = CStack_74.x;
        *(uint *)((int)&CStack_c8 + (uint)bVar9 * -8 + 4) =
             *(uint *)((int)&CStack_74 + (uint)bVar9 * -8 + 4);
        *(uint *)((int)&CStack_c8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
             *(uint *)((int)&CStack_74 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
        if ((CVector3f *)(auStack_16c + 0x18) != &CStack_c8) {
          auStack_16c._24_4_ = CStack_c8.x;
          fStack_150 = CStack_c8.y;
          fStack_14c = CStack_c8.z;
        }
        auStack_148._0_4_ = (this_ptr->base).ammo_type;
        auStack_148._4_4_ = (CDemonActor *)0x3e19999a;
        auStack_148._8_4_ = 1.42932e-43;
        apCStack_13c[0] = this_ptr;
        aCStack_134[0].x =
             (float)(*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
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
          if (aCStack_110 != &CStack_38) {
            aCStack_110[0].y = fStack_1c;
            aCStack_110[0].z = fStack_20;
            aCStack_110[0].x = CStack_38.x;
          }
          iVar3 = iVar3 + 1;
          core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0
                    (g_CFireEffect_PTR_005fc5a0,&CStack_ec,aCStack_110,0x20000,0x10000,4,0xffff);
        } while (iVar3 < 0x10);
        if (unaff_retaddr->gun_flame_ignitable != 0) {
          core_charactr_cpp_CCharacter_igniteBone_FUN_0042fbd0
                    (unaff_retaddr,(CVector3f *)(auStack_16c + 0x24),0,0,1.0,1,2.0);
        }
      }
      break;
    }
    if (this_ptr_00 == (CGlass *)0x0) {
      if (this_ptr_01 == (CTrigger *)0x0) {
        core_fire_cpp_CFireEffect_createBulletImpact_FUN_004a2090
                  (g_CFireEffect_PTR_005fc5a0,&g_CDemonSetPtr->collision_impact_position,
                   &g_CDemonSetPtr->collision_normal,g_CDemonSetPtr->ground_type,
                   g_CDemonSetPtr->collision_actor,1);
        core_fire_cpp_CFireEffect_createGunFlames_FUN_004a3af0
                  (g_CFireEffect_PTR_005fc5a0,&g_CDemonSetPtr->collision_impact_position,
                   &g_CDemonSetPtr->collision_normal,3,0,0);
        core_sound_cpp_CSound_playActorSound_FUN_005609d0
                  (g_CSound_PTR_006045f8,(CDemonActor *)this_ptr,"wp_burningcross_scorch.wav"
                   ,&g_CDemonSetPtr->collision_impact_position);
        break;
      }
      core_trigger_cpp_CTrigger_onProjectileHit_FUN_0056edc0(this_ptr_01);
      iVar7 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_0056ede0
                        (this_ptr_01,(CDemonActor *)this_ptr);
      if (iVar7 != 0) {
        fVar8 = (float)(*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                                 ((CCharacter *)this_ptr,SUB84(__BITCAST_UINT64(dVar10),0),
                                  (int)((ulonglong)dVar10 >> 0x20));
        core_trigger_cpp_CTrigger_applyDamage_FUN_0056ee20(this_ptr_01,fVar8);
      }
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,&pCStack_28->base);
    }
    else {
      iVar7 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004cc5d0(this_ptr_00);
      if (iVar7 == 0) break;
      core_glass_cpp_CGlass_shatter_FUN_004cc040
                (this_ptr_00,&g_CDemonSetPtr->collision_impact_position);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
  return 1;
}
