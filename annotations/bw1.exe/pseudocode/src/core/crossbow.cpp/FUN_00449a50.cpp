// Name: core_crossbow.cpp_FUN_00449a50
// Address: 00449a50
// Address Range: [[00449a50, 0044a0bd]]
// Convention: unknown
// Signature: undefined4 core_crossbow_cpp_FUN_00449a50(CWeapon *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_crossbow_cpp_FUN_00449a50(CWeapon *param_1)

{
  CDemonSet *this_ptr;
  float fVar1;
  int iVar2;
  float fVar3;
  CGlass *this_ptr_00;
  CTrigger *this_ptr_01;
  byte bVar4;
  float afStackY_10f8 [995];
  float *pfVar5;
  CWeapon *this_ptr_02;
  double dVar6;
  uint uStack_14c;
  float fStack_148;
  uint uStack_144;
  float fStack_140;
  uint uStack_13c;
  uint uStack_138;
  float fStack_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  CWeapon *pCStack_118;
  uint uStack_114;
  float fStack_110;
  float afStack_10c [4];
  float fStack_fc;
  float fStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float afStack_c8 [3];
  uint uStack_bc;
  float afStack_b8 [5];
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_80;
  float afStack_74 [3];
  float fStack_68;
  uint uStack_64;
  uint uStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float afStack_44 [3];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  int iStack_2c;
  float fStack_28;
  CTrigger *pCStack_24;
  float fStack_20;
  int iStack_1c;
  float fStack_18;
  
  bVar4 = 0;
  (**(code **)(*(int *)&param_1->field_0x154 + 0xe0))(param_1);
  pfVar5 = afStack_b8 + 2;
  afStack_b8[2] = (float)uStack_bc;
  afStack_b8[(uint)bVar4 * -2 + 3] = afStack_b8[(uint)bVar4 * -2];
  afStack_b8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       afStack_b8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  core_actor_cpp_FUN_00408b40(param_1,pfVar5);
  fStack_110 = fStack_80;
  afStack_10c[(uint)bVar4 * -2] = afStack_b8[(uint)bVar4 * -2 + 0xf];
  this_ptr_02 = param_1;
  afStack_10c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_b8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10];
  iVar2 = core_weapon_cpp_CWeapon_fire_FUN_005adde0(this_ptr_02);
  if (iVar2 == 0) {
    return 0;
  }
  afStack_c8[2] = *(float *)&param_1->field_0x2e8;
  afStack_c8[0] = 0.0;
  afStack_c8[1] = 0.0;
  core_actor_cpp_FUN_00408ac0(param_1,afStack_10c + 0x11);
  fVar1 = afStack_10c[0];
  fVar3 = fStack_110;
  fStack_5c = fStack_8c;
  afStack_b8[(uint)bVar4 * -2 + 0x18] = afStack_b8[(uint)bVar4 * -2 + 0xc];
  afStack_b8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x19] =
       afStack_b8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
  fStack_38 = fVar3 + fStack_5c;
  fStack_34 = fVar1 + fStack_58;
  fStack_30 = afStack_10c[1] + fStack_54;
  afStack_74[0] = fVar3 + fStack_5c;
  afStack_b8[(uint)bVar4 * -2 + 0x12] = afStack_b8[(uint)bVar4 * -2 + 0x21];
  afStack_b8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x13] =
       afStack_b8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x22];
  fVar3 = fStack_110;
  fStack_28 = (float)_DAT_005d739a / *(float *)&param_1->field_0x2e8;
  fStack_ec = fStack_5c * fStack_28;
  fStack_e8 = fStack_58 * fStack_28;
  fStack_e4 = fStack_54 * fStack_28;
  fStack_50 = fStack_5c * fStack_28;
  afStack_b8[(uint)bVar4 * -2 + 0x1b] = afStack_10c[(uint)bVar4 * -2 + 9];
  afStack_b8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x1c] =
       afStack_10c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
  afStack_10c[2] = fVar3 - fStack_50;
  afStack_10c[3] = afStack_10c[0] - fStack_4c;
  fStack_fc = afStack_10c[1] - fStack_48;
  afStack_44[0] = fVar3 - fStack_50;
  afStack_b8[(uint)bVar4 * -2 + 0x1e] = afStack_10c[(uint)bVar4 * -2 + 3];
  afStack_b8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x1f] =
       afStack_10c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_005592d0(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,(CDemonActor *)param_1);
  if (*(CDemonActor **)&param_1->field_0x304 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
              (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0x304);
  }
  iStack_2c = 0;
  do {
    fVar3 = (float)core_setcolid_cpp_FUN_00557300
                             (g_CDemonSetPtr,afStack_b8 + 0x1d,afStack_b8 + 0x11);
    dVar6 = (double)fVar3;
    fStack_18 = fVar3;
    if ((dVar6 < 0.0) || (1.0 < dVar6)) break;
    iStack_1c = core_actor_cpp_castToClassHash_FUN_0040c600
                          (*(uint *)&g_CDemonSetPtr->field_0x14d144,
                           g_CCharacterClassInfo.name_hash,dVar6,fVar3);
    if ((iStack_1c != 0) &&
       (iVar2 = (**(code **)(*(int *)(iStack_1c + 0x154) + 0x10c))(iStack_1c), 0 < iVar2)) {
      iStack_1c = 0;
    }
    this_ptr_00 = (CGlass *)
                  core_actor_cpp_castToClassHash_FUN_0040c600
                            (*(uint *)&g_CDemonSetPtr->field_0x14d144,
                             g_CGlassClassInfo.name_hash,dVar6,fVar3);
    this_ptr_01 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040c600
                            (*(uint *)&g_CDemonSetPtr->field_0x14d144,
                             g_CTriggerClassInfo.name_hash);
    pCStack_24 = this_ptr_01;
    if (iStack_1c == 0) {
      if (this_ptr_00 == (CGlass *)0x0) {
        if (this_ptr_01 == (CTrigger *)0x0) {
          core_fire_cpp_FUN_004b5bc0
                    (0x01C57074,(CVector3f *)&g_CDemonSetPtr->field_0x14d138,
                     (CVector3f *)&param_1->field_0x30,(CVector3f *)&g_CDemonSetPtr->field_0x14d128,
                     *(int *)&g_CDemonSetPtr->field_0x14d134);
          break;
        }
        core_trigger_cpp_CTrigger_onProjectileHit_FUN_0059bdd0(this_ptr_01);
        iVar2 = core_trigger_cpp_FUN_0059bdf0(this_ptr_01,(CDemonActor *)param_1);
        if (iVar2 != 0) {
          fStack_18 = (float)(**(code **)(*(int *)&param_1->field_0x154 + 0xec))(param_1);
          core_trigger_cpp_FUN_0059be30(this_ptr_01,fStack_18);
        }
        core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,(CDemonActor *)pCStack_24);
      }
      else {
        iVar2 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004e3a40(this_ptr_00);
        if (iVar2 == 0) break;
        core_glass_cpp_FUN_004e34b0(this_ptr_00,&g_CDemonSetPtr->field_0x14d138);
      }
    }
    else {
      iVar2 = (**(code **)(*(int *)(iStack_1c + 0x154) + 0xe0))(iStack_1c);
      this_ptr = g_CDemonSetPtr;
      if (iVar2 != 0) {
        if (iStack_2c == 0) {
          *(int *)&param_1->field_0x568 = *(int *)&param_1->field_0x568 + 1;
          core_setcolid_cpp_CDemonSet_init_FUN_00559220(this_ptr);
          return 0;
        }
        break;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010((SDamageInfo *)&uStack_14c);
      uStack_14c = *(uint *)&g_CDemonSetPtr->field_0x14d148;
      fStack_18 = (float)(**(code **)(*(int *)&param_1->field_0x154 + 0xec))(param_1);
      uStack_144 = 0x3ecccccd;
      fStack_148 = fStack_18;
      fStack_98 = *(float *)&g_CDemonSetPtr->field_0x14d11c -
                  *(float *)&g_CDemonSetPtr->field_0x14d110;
      fStack_94 = *(float *)&g_CDemonSetPtr->field_0x14d120 -
                  *(float *)&g_CDemonSetPtr->field_0x14d114;
      fStack_90 = *(float *)&g_CDemonSetPtr->field_0x14d124 -
                  *(float *)&g_CDemonSetPtr->field_0x14d118;
      fStack_a4 = fStack_98;
      afStack_b8[(uint)bVar4 * -2 + 6] = afStack_b8[(uint)bVar4 * -2 + 9];
      afStack_b8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
           afStack_b8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
      fStack_20 = (float)_DAT_005d73a2 /
                  SQRT(fStack_9c * fStack_9c + fStack_a4 * fStack_a4 + fStack_a0 * fStack_a0);
      fStack_e0 = fStack_a4 * fStack_20;
      fStack_dc = fStack_a0 * fStack_20;
      fStack_d8 = fStack_9c * fStack_20;
      fStack_68 = fStack_a4 * fStack_20;
      afStack_b8[(uint)bVar4 * -2 + 0x15] = afStack_10c[(uint)bVar4 * -2 + 0xc];
      afStack_b8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x16] =
           afStack_10c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
      if (&fStack_140 != afStack_b8 + 0x14) {
        fStack_140 = fStack_68;
        uStack_13c = uStack_64;
        uStack_138 = uStack_60;
      }
      core_actor_cpp_FUN_00408bb0(iStack_1c,&g_CDemonSetPtr->field_0x14d138);
      fStack_f8 = fStack_d4;
      afStack_10c[(uint)bVar4 * -2 + 6] = afStack_10c[(uint)bVar4 * -2 + 0xf];
      afStack_10c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
           afStack_10c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10];
      if (&fStack_130 != afStack_10c + 5) {
        fStack_130 = fStack_f8;
        uStack_12c = uStack_f4;
        uStack_128 = uStack_f0;
      }
      uStack_124 = *(uint *)&param_1->field_0x56c;
      uStack_11c = 0x68;
      pCStack_118 = param_1;
      uStack_120 = 0x3e19999a;
      uStack_114 = (**(code **)(*(int *)&param_1->field_0x154 + 0x94))(param_1);
      (**(code **)(*(int *)(iStack_1c + 0x154) + 0x108))(iStack_1c,&uStack_14c);
      if (*(int *)&param_1->field_0x2e4 == 0) break;
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                (g_CDemonSetPtr,*(CDemonActor **)&g_CDemonSetPtr->field_0x14d144);
    }
    iStack_2c = iStack_2c + 1;
  } while (iStack_2c < 4);
  core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
  core_sound_cpp_CSound_playActorSound_FUN_0057d8a0
            (0x02C82A60,(CDemonActor *)param_1,"bow-!.wav",(CVector3f *)&fStack_110);
  *(uint *)&param_1->field_0x300 = 0x3f2a7efa;
  return 1;
}
