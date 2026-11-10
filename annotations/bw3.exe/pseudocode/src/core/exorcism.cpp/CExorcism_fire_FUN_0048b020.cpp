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
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  CGlass *this_ptr_00;
  CTrigger *this_ptr_01;
  CCrate *this_ptr_02;
  CFlameCan *this_ptr_03;
  byte bVar5;
  float afStackY_10a8 [1012];
  float *pfVar6;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  CVector3f CStack_9c;
  float fStack_90;
  float afStack_8c [5];
  float fStack_78;
  uint uStack_74;
  uint uStack_70;
  float fStack_6c;
  float afStack_68 [4];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float afStack_3c [3];
  uint uStack_30;
  float fStack_24;
  CTrigger *pCStack_20;
  int iStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar5 = 0;
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))(this_ptr);
  pfVar6 = afStack_8c + 2;
  afStack_8c[2] = (float)uStack_30;
  afStack_8c[(uint)bVar5 * -2 + 3] = afStack_68[(uint)bVar5 * -2 + 0xf];
  afStack_8c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
       afStack_68[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10];
  core_actor_cpp_FUN_00408b80(this_ptr,pfVar6);
  CStack_9c.x = fStack_48;
  *(float *)((int)&CStack_9c + (uint)bVar5 * -8 + 4) = afStack_68[(uint)bVar5 * -2 + 9];
  *(float *)((int)&CStack_9c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       afStack_68[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
  if (*(float *)&this_ptr->field_0x5a8 <= 0.0) {
    iVar4 = core_weapon_cpp_CWeapon_fire_FUN_0057b880((CWeapon *)this_ptr);
    if (iVar4 == 0) {
      core_sound_cpp_CSound_playActorSound_FUN_005609d0
                (0x02CF5680,(CDemonActor *)this_ptr,"@@wp_nomana.wav" + 2,&CStack_9c);
      *(uint *)&this_ptr->field_0x300 = 0x3f800000;
      return 0;
    }
    *(uint *)&this_ptr->field_0x5a8 = 0x3f800000;
  }
  *(uint *)&this_ptr->field_0x598 = 1;
  if ((*(int *)&this_ptr->field_0x594 != 0) && (*(int *)&this_ptr->field_0x59c != 0)) {
    return 1;
  }
  iVar4 = sound_sndmain_cpp_FUN_00556700(_DAT_01c6e35c);
  if (iVar4 == 0) {
    _DAT_01c6e35c =
         core_sound_cpp_CSound_playActorSound_FUN_005609d0
                   (0x02CF5680,(CDemonActor *)this_ptr,"wp_exorcism.wav @ .5",&CStack_9c);
  }
  *(uint *)&this_ptr->field_0x59c = 0;
  iVar4 = core_actor_cpp_castToClassHash_FUN_0040c840
                    (*(uint *)&this_ptr->field_0x304,g_CHeroClassInfo.name_hash);
  if (iVar4 != 0) {
    *(uint *)&this_ptr->field_0x5a0 = *(uint *)(iVar4 + 0x2538);
  }
  uStack_74 = *(uint *)&this_ptr->field_0x2e8;
  fStack_78 = 0.0;
  uStack_70 = 0;
  core_actor_cpp_FUN_00408b00(this_ptr,afStack_8c + 5);
  fVar3 = CStack_9c.z;
  fVar2 = CStack_9c.y;
  fVar1 = CStack_9c.x;
  fStack_54 = fStack_90;
  afStack_68[(uint)bVar5 * -2 + 6] = afStack_8c[(uint)bVar5 * -2];
  afStack_68[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
       afStack_8c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  afStack_68[2] = fVar1 + fStack_54;
  afStack_68[3] = fVar2 + fStack_50;
  fStack_58 = fVar3 + fStack_4c;
  fStack_a8 = fVar1 + fStack_54;
  *(float *)((int)&stack0xffffff5c + (uint)bVar5 * 0xfffffffe * 4) =
       afStack_68[(uint)bVar5 * -2 + 3];
  afStack_8c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + -5] =
       afStack_68[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
  fVar2 = CStack_9c.x;
  fStack_24 = (float)_DAT_005bdd8e / *(float *)&this_ptr->field_0x2e8;
  fVar1 = fStack_54 * fStack_24;
  fStack_6c = fVar1;
  afStack_68[0] = fStack_50 * fStack_24;
  afStack_68[1] = fStack_4c * fStack_24;
  *(float *)((int)&stack0xffffff44 + (uint)bVar5 * -8) = afStack_68[(uint)bVar5 * -2];
  *(float *)((int)&stack0xffffff48 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       afStack_68[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  fStack_b4 = fVar2 - fVar1;
  fStack_b0 = CStack_9c.y - fStack_bc;
  fStack_ac = CStack_9c.z - fStack_b8;
  afStack_3c[0] = fStack_b4;
  afStack_68[(uint)bVar5 * -2 + 0xc] = *(float *)((int)&stack0xffffff50 + (uint)bVar5 * -8);
  afStack_68[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
       *(float *)((int)&stack0xffffff54 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  core_setcolid_cpp_CDemonSet_skipExactCollisions_FUN_0053ebd0(g_CDemonSetPtr);
  if (*(CDemonActor **)&this_ptr->field_0x304 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
              (g_CDemonSetPtr,*(CDemonActor **)&this_ptr->field_0x304);
  }
  iStack_1c = 0;
  while( true ) {
    fStack_14 = (float)core_setcolid_cpp_FUN_0053ccc0
                                 (g_CDemonSetPtr,afStack_68 + 0xb,&stack0xffffff58);
    if ((fStack_14 < 0.0) || (1.0 < fStack_14)) goto LAB_0048b40f;
    iStack_18 = core_actor_cpp_castToClassHash_FUN_0040c840
                          (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if ((iStack_18 != 0) &&
       (iVar4 = (**(code **)(*(int *)(iStack_18 + 0x154) + 0x10c))(iStack_18), 0 < iVar4)) {
      iStack_18 = 0;
    }
    this_ptr_00 = (CGlass *)
                  core_actor_cpp_castToClassHash_FUN_0040c840
                            (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    this_ptr_01 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040c840
                            (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    pCStack_20 = this_ptr_01;
    this_ptr_02 = (CCrate *)
                  core_actor_cpp_castToClassHash_FUN_0040c840
                            (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
    this_ptr_03 = (CFlameCan *)
                  core_actor_cpp_castToClassHash_FUN_0040c840
                            (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
    if (iStack_18 != 0) break;
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
        iVar4 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_0056ede0
                          (this_ptr_01,(CDemonActor *)this_ptr);
        if (iVar4 != 0) {
          fStack_14 = (float)(**(code **)(*(int *)&this_ptr->field_0x154 + 0xec))(this_ptr);
          core_trigger_cpp_CTrigger_applyDamage_FUN_0056ee20(this_ptr_01,fStack_14);
        }
        core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,&pCStack_20->base);
      }
    }
    else {
      iVar4 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004cc5d0(this_ptr_00);
      if (iVar4 == 0) goto LAB_0048b40f;
      core_glass_cpp_FUN_004cc040(this_ptr_00,&g_CDemonSetPtr->collision_impact_position);
    }
    iStack_1c = iStack_1c + 1;
    if (3 < iStack_1c) {
LAB_0048b40f:
      *(uint *)&this_ptr->field_0x5a4 = 0;
      core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
      return 1;
    }
  }
  iVar4 = core_actor_cpp_castToClassHash_FUN_0040c840
                    (*(uint *)&this_ptr->field_0x304,g_CHeroClassInfo.name_hash);
  if ((((iVar4 == 0) ||
       (iVar4 = (**(code **)(*(int *)(iStack_18 + 0x154) + 0xe0))(iStack_18), iVar4 == 0)) &&
      ((iVar4 = core_actor_cpp_castToClassHash_FUN_0040c840
                          (*(uint *)&this_ptr->field_0x304,g_CEnemyClassInfo.name_hash),
       iVar4 == 0 ||
       (iVar4 = core_actor_cpp_castToClassHash_FUN_0040c840(iStack_18,g_CEnemyClassInfo.name_hash),
       iVar4 == 0)))) && (0.0 < *(float *)(iStack_18 + 0x2538))) {
    *(int *)&this_ptr->field_0x59c = iStack_18;
  }
  goto LAB_0048b40f;
}
