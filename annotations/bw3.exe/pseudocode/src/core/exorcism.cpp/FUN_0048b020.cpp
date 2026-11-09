// Name: core_exorcism.cpp_FUN_0048b020
// Address: 0048b020
// Address Range: [[0048b020, 0048b59d]]
// Convention: unknown
// Signature: undefined4 core_exorcism_cpp_FUN_0048b020(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_exorcism_cpp_FUN_0048b020(CDemonActor *param_1)

{
  float fVar1;
  byte auVar2 [4];
  float fVar3;
  int iVar4;
  CGlass *this_ptr;
  CTrigger *this_ptr_00;
  CCrate *this_ptr_01;
  CFlameCan *this_ptr_02;
  byte bVar5;
  float afStackY_10a8 [1012];
  float *pfVar6;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  byte auStack_9c [4];
  float afStack_98 [5];
  float afStack_84 [5];
  uint uStack_70;
  float fStack_6c;
  float afStack_68 [4];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float afStack_3c [3];
  float fStack_30;
  float fStack_24;
  CTrigger *pCStack_20;
  int iStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar5 = 0;
  (**(code **)(*(int *)&param_1->field_0x154 + 0xe0))(param_1);
  pfVar6 = afStack_98 + 5;
  afStack_84[0] = fStack_30;
  afStack_98[(uint)bVar5 * -2 + 6] = afStack_68[(uint)bVar5 * -2 + 0xf];
  afStack_98[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
       afStack_68[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10];
  core_actor_cpp_FUN_00408b80(param_1,pfVar6);
  auStack_9c = (byte  [4])fStack_48;
  afStack_98[(uint)bVar5 * -2] = afStack_68[(uint)bVar5 * -2 + 9];
  afStack_98[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       afStack_68[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
  if (*(float *)&param_1[4].field_0x48 <= 0.0) {
    iVar4 = core_weapon_cpp_FUN_0057b880(param_1);
    if (iVar4 == 0) {
      core_sound_cpp_CSound_playActorSound_FUN_005609d0
                (0x02CF5680,param_1,"@@wp_nomana.wav" + 2,(CVector3f *)auStack_9c);
      *(uint *)&param_1[2].field_0x50 = 0x3f800000;
      return 0;
    }
    *(uint *)&param_1[4].field_0x48 = 0x3f800000;
  }
  *(uint *)&param_1[4].field_0x38 = 1;
  if ((*(int *)&param_1[4].field_0x34 != 0) && (*(int *)&param_1[4].field_0x3c != 0)) {
    return 1;
  }
  iVar4 = sound_sndmain_cpp_FUN_00556700(_DAT_01c6e35c);
  if (iVar4 == 0) {
    _DAT_01c6e35c =
         core_sound_cpp_CSound_playActorSound_FUN_005609d0
                   (0x02CF5680,param_1,"wp_exorcism.wav @ .5",(CVector3f *)auStack_9c);
  }
  *(uint *)&param_1[4].field_0x3c = 0;
  iVar4 = core_actor_cpp_castToClassHash_FUN_0040c840
                    (*(uint *)&param_1[2].field_0x54,g_CHeroClassInfo.name_hash);
  if (iVar4 != 0) {
    *(uint *)&param_1[4].field_0x40 = *(uint *)(iVar4 + 0x2538);
  }
  afStack_84[4] = *(float *)&param_1[2].field_0x38;
  afStack_84[3] = 0.0;
  uStack_70 = 0;
  core_actor_cpp_FUN_00408b00(param_1,afStack_98 + 8);
  fVar3 = afStack_98[1];
  fVar1 = afStack_98[0];
  auVar2 = auStack_9c;
  fStack_54 = afStack_98[2];
  afStack_68[(uint)bVar5 * -2 + 6] = afStack_98[(uint)bVar5 * -2 + 3];
  afStack_68[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
       afStack_98[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
  afStack_68[2] = (float)auVar2 + fStack_54;
  afStack_68[3] = fVar1 + fStack_50;
  fStack_58 = fVar3 + fStack_4c;
  fStack_a8 = (float)auVar2 + fStack_54;
  *(float *)((int)&stack0xffffff5c + (uint)bVar5 * 0xfffffffe * 4) =
       afStack_68[(uint)bVar5 * -2 + 3];
  afStack_84[(uint)bVar5 * -2 + (uint)bVar5 * -2 + -7] =
       afStack_68[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
  auVar2 = auStack_9c;
  fStack_24 = (float)_DAT_005bdd8e / *(float *)&param_1[2].field_0x38;
  fVar1 = fStack_54 * fStack_24;
  fStack_6c = fVar1;
  afStack_68[0] = fStack_50 * fStack_24;
  afStack_68[1] = fStack_4c * fStack_24;
  *(float *)((int)&stack0xffffff44 + (uint)bVar5 * -8) = afStack_68[(uint)bVar5 * -2];
  *(float *)((int)&stack0xffffff48 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       afStack_68[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  fStack_b4 = (float)auVar2 - fVar1;
  fStack_b0 = afStack_98[0] - fStack_bc;
  fStack_ac = afStack_98[1] - fStack_b8;
  afStack_3c[0] = fStack_b4;
  afStack_68[(uint)bVar5 * -2 + 0xc] = *(float *)((int)&stack0xffffff50 + (uint)bVar5 * -8);
  afStack_68[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
       *(float *)((int)&stack0xffffff54 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,param_1);
  core_setcolid_cpp_FUN_0053ebd0(g_CDemonSetPtr);
  if (*(CDemonActor **)&param_1[2].field_0x54 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
              (g_CDemonSetPtr,*(CDemonActor **)&param_1[2].field_0x54);
  }
  iStack_1c = 0;
  while( true ) {
    fStack_14 = (float)core_setcolid_cpp_FUN_0053ccc0
                                 (g_CDemonSetPtr,afStack_68 + 0xb,&stack0xffffff58);
    if ((fStack_14 < 0.0) || (1.0 < fStack_14)) goto LAB_0048b40f;
    iStack_18 = core_actor_cpp_castToClassHash_FUN_0040c840
                          (*(uint *)&g_CDemonSetPtr->field_0x14d144,
                           g_CCharacterClassInfo.name_hash);
    if ((iStack_18 != 0) &&
       (iVar4 = (**(code **)(*(int *)(iStack_18 + 0x154) + 0x10c))(iStack_18), 0 < iVar4)) {
      iStack_18 = 0;
    }
    this_ptr = (CGlass *)
               core_actor_cpp_castToClassHash_FUN_0040c840
                         (*(uint *)&g_CDemonSetPtr->field_0x14d144,g_CGlassClassInfo.name_hash
                         );
    this_ptr_00 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040c840
                            (*(uint *)&g_CDemonSetPtr->field_0x14d144,
                             g_CTriggerClassInfo.name_hash);
    pCStack_20 = this_ptr_00;
    this_ptr_01 = (CCrate *)
                  core_actor_cpp_castToClassHash_FUN_0040c840
                            (*(uint *)&g_CDemonSetPtr->field_0x14d144,
                             g_CCrateClassInfo.name_hash);
    this_ptr_02 = (CFlameCan *)
                  core_actor_cpp_castToClassHash_FUN_0040c840
                            (*(uint *)&g_CDemonSetPtr->field_0x14d144,
                             g_CFlameCanClassInfo.name_hash);
    if (iStack_18 != 0) break;
    if (this_ptr == (CGlass *)0x0) {
      if (this_ptr_00 == (CTrigger *)0x0) {
        if (this_ptr_01 == (CCrate *)0x0) {
          if (this_ptr_02 == (CFlameCan *)0x0) goto LAB_0048b40f;
          core_flamecan_cpp_CFlameCan_ignite_FUN_004a7110(this_ptr_02);
        }
        else {
          core_crate_cpp_FUN_004461c0(this_ptr_01);
        }
      }
      else {
        core_trigger_cpp_CTrigger_onProjectileHit_FUN_0056edc0(this_ptr_00);
        iVar4 = core_trigger_cpp_FUN_0056ede0(this_ptr_00,param_1);
        if (iVar4 != 0) {
          fStack_14 = (float)(**(code **)(*(int *)&param_1->field_0x154 + 0xec))(param_1);
          core_trigger_cpp_FUN_0056ee20(this_ptr_00,fStack_14);
        }
        core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,(CDemonActor *)pCStack_20);
      }
    }
    else {
      iVar4 = core_glass_cpp_FUN_004cc5d0(this_ptr);
      if (iVar4 == 0) goto LAB_0048b40f;
      core_glass_cpp_FUN_004cc040(this_ptr,&g_CDemonSetPtr->field_0x14d138);
    }
    iStack_1c = iStack_1c + 1;
    if (3 < iStack_1c) {
LAB_0048b40f:
      *(uint *)&param_1[4].field_0x44 = 0;
      core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
      return 1;
    }
  }
  iVar4 = core_actor_cpp_castToClassHash_FUN_0040c840
                    (*(uint *)&param_1[2].field_0x54,g_CHeroClassInfo.name_hash);
  if ((((iVar4 == 0) ||
       (iVar4 = (**(code **)(*(int *)(iStack_18 + 0x154) + 0xe0))(iStack_18), iVar4 == 0)) &&
      ((iVar4 = core_actor_cpp_castToClassHash_FUN_0040c840
                          (*(uint *)&param_1[2].field_0x54,g_CEnemyClassInfo.name_hash),
       iVar4 == 0 ||
       (iVar4 = core_actor_cpp_castToClassHash_FUN_0040c840(iStack_18,g_CEnemyClassInfo.name_hash),
       iVar4 == 0)))) && (0.0 < *(float *)(iStack_18 + 0x2538))) {
    *(int *)&param_1[4].field_0x3c = iStack_18;
  }
  goto LAB_0048b40f;
}
