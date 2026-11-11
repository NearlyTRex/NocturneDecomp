// Name: core_rifle.cpp_CRifle_fire_FUN_00527d70
// Address: 00527d70
// Address Range: [[00527d70, 005284c3]]
// Convention: __cdecl
// Signature: int __cdecl core_rifle_cpp_CRifle_fire_FUN_00527d70(CRifle *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_rifle_cpp_CRifle_fire_FUN_00527d70(CRifle *this_ptr)

{
  CDemonSet *this_ptr_00;
  int iVar1;
  float fVar2;
  EDeathState EVar3;
  CGlass *this_ptr_01;
  CTrigger *this_ptr_02;
  float fVar4;
  int unaff_ESI;
  byte bVar5;
  float afStackY_10fc [20];
  CDemonActor *apCStackY_10ac [4];
  float afStackY_109c [970];
  CDemonActor **ppCVar6;
  CRifle *this_ptr_03;
  CDemonActor *pCVar7;
  double dVar8;
  int grab_type;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  CVector3f CStack_134;
  CDemonActor *pCStack_128;
  CDemonActor *pCStack_124;
  uint uStack_120;
  CRifle *pCStack_11c;
  CDemonActor *pCStack_114;
  float afStack_110 [8];
  float fStack_f0;
  float afStack_ec [5];
  float fStack_d8;
  float afStack_d4 [4];
  float fStack_c4;
  CDemonActor *apCStack_c0 [3];
  float fStack_b4;
  float afStack_b0 [2];
  CVector3f aCStack_a8 [2];
  CVector3f CStack_90;
  float fStack_84;
  float afStack_80 [4];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_48;
  float afStack_44 [4];
  float fStack_34;
  float fStack_2c;
  CTrigger *pCStack_28;
  float fStack_24;
  uint uStack_20;
  CDemonActor *pCStack_1c;
  CFlameCan *pCStack_18;
  CCharacter *pCStack_14;
  
  bVar5 = 0;
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  ppCVar6 = apCStack_c0;
  fStack_c4 = fStack_48;
  apCStack_c0[(uint)bVar5 * -2] = (CDemonActor *)afStack_44[(uint)bVar5 * -2];
  apCStack_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       (CDemonActor *)afStack_44[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  core_actor_cpp_FUN_00408b80(this_ptr,ppCVar6);
  CStack_90.x = (float)pCStack_114;
  *(float *)((int)&CStack_90 + (uint)bVar5 * -8 + 4) = afStack_110[(uint)bVar5 * -2];
  this_ptr_03 = this_ptr;
  *(float *)((int)&CStack_90 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       afStack_110[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  iVar1 = core_weapon_cpp_CWeapon_fire_FUN_0057b880(&this_ptr_03->base);
  if (iVar1 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_005609d0
              (0x02CF5680,(CDemonActor *)this_ptr,"?shotgun-noammo.wav" + 1,&CStack_90);
    return 0;
  }
  afStack_d4[1] = (this_ptr->base).bolt_velocity;
  fStack_d8 = 0.0;
  afStack_d4[0] = 0.0;
  core_actor_cpp_FUN_00408b00(this_ptr,&fStack_d8);
  fVar4 = CStack_90.y;
  fVar2 = CStack_90.x;
  fStack_6c = fStack_f0;
  afStack_80[(uint)bVar5 * -2 + 6] = afStack_ec[(uint)bVar5 * -2];
  afStack_80[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
       afStack_ec[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  fStack_b4 = fVar2 + fStack_6c;
  afStack_b0[0] = fVar4 + fStack_68;
  afStack_b0[1] = CStack_90.z + fStack_64;
  fStack_84 = fVar2 + fStack_6c;
  afStack_80[(uint)bVar5 * -2] = afStack_b0[(uint)bVar5 * -2];
  afStack_80[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       afStack_b0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  fVar4 = CStack_90.y;
  fVar2 = CStack_90.x;
  fStack_2c = (float)_DAT_005cdb39 / (this_ptr->base).bolt_velocity;
  afStack_44[2] = fStack_6c * fStack_2c;
  afStack_44[3] = fStack_68 * fStack_2c;
  fStack_34 = fStack_64 * fStack_2c;
  afStack_80[2] = fStack_6c * fStack_2c;
  afStack_80[(uint)bVar5 * -2 + 3] = afStack_44[(uint)bVar5 * -2 + 3];
  afStack_80[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
       afStack_44[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
  fStack_60 = fVar2 - afStack_80[2];
  fStack_5c = fVar4 - afStack_80[3];
  fStack_58 = CStack_90.z - fStack_70;
  afStack_110[2] = fVar2 - afStack_80[2];
  afStack_110[(uint)bVar5 * -2 + 3] = afStack_80[(uint)bVar5 * -2 + 9];
  afStack_110[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
       afStack_80[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  pCVar7 = (this_ptr->base).carried_by_actor;
  if (pCVar7 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,pCVar7);
  }
  pCStack_1c = (CDemonActor *)0x0;
  do {
    fVar2 = (float)core_setcolid_cpp_FUN_0053ccc0(g_CDemonSetPtr,afStack_110 + 2,&fStack_84);
    dVar8 = (double)fVar2;
    if ((dVar8 < 0.0) || (1.0 < dVar8)) break;
    pCStack_14 = (CCharacter *)
                 core_actor_cpp_castToClassHash_FUN_0040c840
                           (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if ((pCStack_14 != (CCharacter *)0x0) &&
       (EVar3 = (*(((pCStack_14->base).vtable._uc)->_uc).getDeathState)(pCStack_14), 0 < (int)EVar3)
       ) {
      pCStack_14 = (CCharacter *)0x0;
    }
    this_ptr_01 = (CGlass *)
                  core_actor_cpp_castToClassHash_FUN_0040c840
                            (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    this_ptr_02 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040c840
                            (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    pCStack_28 = this_ptr_02;
    uStack_20 = core_actor_cpp_castToClassHash_FUN_0040c840
                          (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
    fStack_24 = (float)core_actor_cpp_castToClassHash_FUN_0040c840
                                 (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
    fStack_24 = (float)(*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                                 ((CCharacter *)this_ptr,SUB84(__BITCAST_UINT64(dVar8),0),
                                  (int)((ulonglong)dVar8 >> 0x20));
    pCVar7 = SUB84(__BITCAST_UINT64(dVar8),0);
    if (unaff_ESI == 0) {
      if (this_ptr_01 == (CGlass *)0x0) {
        if (this_ptr_02 == (CTrigger *)0x0) {
          if (pCStack_14 == (CCharacter *)0x0) {
            if (pCStack_18 == (CFlameCan *)0x0) {
              core_fire_cpp_FUN_004a2090
                        (0x01C73654,&g_CDemonSetPtr->collision_impact_position,
                         &g_CDemonSetPtr->collision_normal,g_CDemonSetPtr->ground_type,
                         g_CDemonSetPtr->collision_actor);
              break;
            }
            core_flamecan_cpp_CFlameCan_ignite_FUN_004a7110(pCStack_18);
          }
          else {
            core_crate_cpp_FUN_004461c0((CCrate *)pCStack_14);
          }
        }
        else {
          core_trigger_cpp_CTrigger_onProjectileHit_FUN_0056edc0(this_ptr_02);
          iVar1 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_0056ede0
                            (this_ptr_02,(CDemonActor *)this_ptr);
          if (iVar1 != 0) {
            core_trigger_cpp_CTrigger_applyDamage_FUN_0056ee20(this_ptr_02,fStack_24);
          }
          core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,pCStack_1c);
        }
      }
      else {
        iVar1 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004cc5d0(this_ptr_01);
        if (iVar1 == 0) break;
        core_glass_cpp_FUN_004cc040();
      }
    }
    else {
      grab_type = 0x5280ce;
      iVar1 = (**(code **)(*(int *)(unaff_ESI + 0x154) + 0xe0))();
      this_ptr_00 = g_CDemonSetPtr;
      if (iVar1 != 0) {
        if (pCStack_1c == (CDemonActor *)0x0) {
          (this_ptr->base).ammo_count = (this_ptr->base).ammo_count + 1;
          core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(this_ptr_00);
          return 0;
        }
        break;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)&stack0xfffffea4);
      fVar4 = (float)(*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                               ((CCharacter *)this_ptr,pCVar7,grab_type);
      fStack_148 = 0.4;
      fStack_14c = fVar4;
      fStack_48 = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
      afStack_44[0] = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
      afStack_44[1] = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
      pCStack_114 = (CDemonActor *)fStack_48;
      afStack_110[(uint)bVar5 * -2] = afStack_44[(uint)bVar5 * -2];
      afStack_110[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           afStack_44[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      fVar2 = (float)_DAT_005cdb49 /
              SQRT(afStack_110[1] * afStack_110[1] +
                   (float)pCStack_114 * (float)pCStack_114 + afStack_110[0] * afStack_110[0]);
      fStack_f0 = (float)pCStack_114 * fVar2;
      afStack_ec[0] = afStack_110[0] * fVar2;
      afStack_ec[1] = afStack_110[1] * fVar2;
      fStack_d8 = (float)pCStack_114 * fVar2;
      afStack_d4[(uint)bVar5 * -2] = afStack_ec[(uint)bVar5 * -2];
      afStack_d4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           afStack_ec[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      if (&stack0xfffffebc != &fStack_d8) {
        fStack_144 = fStack_d8;
        fStack_140 = afStack_d4[0];
        fStack_13c = afStack_d4[1];
      }
      core_actor_cpp_FUN_00408bf0();
      CStack_90.x = (float)apCStack_c0[0];
      *(CDemonActor **)((int)&CStack_90 + (uint)bVar5 * -8 + 4) = apCStack_c0[(uint)bVar5 * -2 + 1];
      *(CDemonActor **)((int)&CStack_90 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           apCStack_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 2];
      if (&CStack_134 != &CStack_90) {
        CStack_134.x = CStack_90.x;
        CStack_134.y = CStack_90.y;
        CStack_134.z = CStack_90.z;
      }
      pCStack_128 = (CDemonActor *)(this_ptr->base).ammo_type;
      uStack_120 = 0x65;
      pCStack_124 = (CDemonActor *)0x3e19999a;
      pCStack_11c = this_ptr;
      pCStack_114 = (*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
      (**(code **)(*(int *)((int)fVar4 + 0x154) + 0x108))();
      if ((this_ptr->base).can_penetrate == 0) break;
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
    }
    pCStack_1c = (CDemonActor *)(pCStack_1c->actor_name + 1);
  } while ((int)pCStack_1c < 4);
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
  aCStack_a8[0].x = CStack_90.x;
  *(uint *)((int)aCStack_a8 + (uint)bVar5 * -8 + 4) =
       *(uint *)((int)&CStack_90 + (uint)bVar5 * -8 + 4);
  *(uint *)((int)aCStack_a8 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       *(uint *)((int)&CStack_90 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  aCStack_a8[0].y = aCStack_a8[0].y + _DAT_005cdb41;
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004a2450
            (0x01C73654,aCStack_a8,&(this_ptr->base).base.orient_matrix);
  core_sound_cpp_CSound_playActorSound_FUN_005609d0
            (0x02CF5680,(CDemonActor *)this_ptr,"45.wav",&CStack_90);
  (this_ptr->base).fire_cooldown_timer = 1.5;
  return 1;
}
