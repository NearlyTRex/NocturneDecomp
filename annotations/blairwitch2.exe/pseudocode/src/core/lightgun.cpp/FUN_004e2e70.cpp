// Name: core_lightgun.cpp_FUN_004e2e70
// Address: 004e2e70
// Address Range: [[004e2e70, 004e38cc]]
// Convention: unknown
// Signature: undefined4 core_lightgun_cpp_FUN_004e2e70(CWeapon *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_lightgun_cpp_FUN_004e2e70(CWeapon *param_1)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  CDemonActor *pCVar4;
  CTrigger *this_ptr;
  int iVar5;
  byte *position;
  uint *puVar6;
  float *pfVar7;
  int iVar8;
  CVector3f *pCVar9;
  float *pfVar10;
  byte bVar11;
  float afStackY_1110 [953];
  CDemonSet *pCVar12;
  SDamageInfo aSStack_20c [4];
  float fStack_208;
  SDamageInfo aSStack_1d0 [4];
  float fStack_1cc;
  uint uStack_1c8;
  uint uStack_1c4;
  uint uStack_1c0;
  uint uStack_1bc;
  uint uStack_1a0;
  CWeapon *pCStack_19c;
  uint uStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float afStack_188 [3];
  CVector3f CStack_17c;
  CVector3f CStack_170;
  uint auStack_164 [6];
  float afStack_14c [6];
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  uint uStack_128;
  float afStack_124 [5];
  float afStack_110 [3];
  float afStack_104 [3];
  float afStack_f8 [3];
  float fStack_ec;
  float afStack_e8 [4];
  float fStack_d8;
  uint uStack_d4;
  uint uStack_bc;
  float afStack_b8 [5];
  float fStack_a4;
  float afStack_a0 [4];
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float afStack_4c [5];
  CDemonActor *pCStack_38;
  CTrigger *pCStack_34;
  int iStack_30;
  float *pfStack_2c;
  int iStack_28;
  int iStack_24;
  CDemonActor *pCStack_20;
  float *pfStack_1c;
  float fStack_18;
  
  bVar11 = 0;
  if (*(float *)&param_1[1].field_0x8 < _DAT_005f95d0) {
    return 0;
  }
  uVar1 = *(uint *)&param_1->field_0x444;
  *(uint *)&param_1[1].field_0x8 = 0;
  *(uint *)&param_1[1].field_0x1c = uVar1;
  (**(code **)(*(int *)&param_1->field_0x2b0 + 0xe8))(param_1);
  afStack_a0[2] = (float)uStack_128;
  afStack_a0[(uint)bVar11 * -2 + 3] = afStack_124[(uint)bVar11 * -2];
  afStack_a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
       afStack_124[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
  fStack_90 = fStack_90 + _DAT_005dc0a6;
  core_actor_cpp_FUN_00408d70(param_1,afStack_a0 + 2);
  fStack_ec = afStack_124[2];
  afStack_e8[(uint)bVar11 * -2] = afStack_124[(uint)bVar11 * -2 + 3];
  afStack_e8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
       afStack_124[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
  uStack_12c = *(uint *)&param_1->field_0x444;
  uStack_134 = 0;
  uStack_130 = 0;
  core_actor_cpp_FUN_00408cf0(param_1,&uStack_134);
  fVar3 = fStack_ec;
  fStack_68 = fStack_74;
  afStack_a0[(uint)bVar11 * -2 + 0xf] = afStack_a0[(uint)bVar11 * -2 + 0xc];
  afStack_a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10] =
       afStack_a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
  fStack_80 = fVar3 + fStack_68;
  fStack_7c = afStack_e8[0] + fStack_64;
  fStack_78 = afStack_e8[1] + fStack_60;
  afStack_110[0] = fVar3 + fStack_68;
  afStack_124[(uint)bVar11 * -2 + 6] = afStack_a0[(uint)bVar11 * -2 + 9];
  afStack_124[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
       afStack_a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
  afStack_f8[0] = fStack_ec;
  afStack_124[(uint)bVar11 * -2 + 0xc] = afStack_e8[(uint)bVar11 * -2];
  pCVar12 = g_CDemonSetPtr;
  afStack_124[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
       afStack_e8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
  core_setcolid_cpp_CDemonSet_init_FUN_00537e00(pCVar12);
  core_setcolid_cpp_CDemonSet_setRayTypeLaser_FUN_00537ef0(g_CDemonSetPtr,1,0xff,0xff,0xff);
  core_setcolid_cpp_FUN_00537df0(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,(CDemonActor *)param_1);
  if (*(CDemonActor **)&param_1->field_0x460 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
              (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0x460);
  }
  iVar8 = 0;
  core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00537a90(g_CDemonSetPtr);
  do {
    fStack_18 = (float)core_setcolid_cpp_FUN_00535ee0
                                 (g_CDemonSetPtr,afStack_124 + 0xb,afStack_124 + 5);
    if ((fStack_18 < 0.0) || (1.0 < fStack_18)) break;
    *(float *)&param_1[1].field_0x1c = *(float *)&param_1->field_0x444 * fStack_18;
    iStack_24 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          (*(uint *)&g_CDemonSetPtr->field_0x14d144,
                           g_CCharacterClassInfo.name_hash);
    if ((iStack_24 != 0) &&
       (iVar5 = (**(code **)(*(int *)(iStack_24 + 0x2b0) + 0x114))(iStack_24), 0 < iVar5)) {
      iStack_24 = 0;
    }
    pCVar4 = (CDemonActor *)
             core_actor_cpp_castToClassHash_FUN_0040c8f0
                       (*(uint *)&g_CDemonSetPtr->field_0x14d144,g_CGlassClassInfo.name_hash);
    this_ptr = (CTrigger *)
               core_actor_cpp_castToClassHash_FUN_0040c8f0
                         (*(uint *)&g_CDemonSetPtr->field_0x14d144,
                          g_CTriggerClassInfo.name_hash);
    pCStack_34 = this_ptr;
    if (iStack_24 != 0) {
      iVar5 = (**(code **)(*(int *)(iStack_24 + 0x2b0) + 0xe8))(iStack_24);
      pCVar12 = g_CDemonSetPtr;
      if ((iVar5 != 0) && (iVar8 == 0)) {
        *(float *)&param_1[1].field_0x8 = _DAT_005f95d0;
        core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00537c40(pCVar12);
        core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
        return 0;
      }
      break;
    }
    if (pCVar4 == (CDemonActor *)0x0) {
      if (this_ptr != (CTrigger *)0x0) {
        core_trigger_cpp_CTrigger_onProjectileHit_FUN_00578550(this_ptr);
        iVar8 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_00578570
                          (this_ptr,(CDemonActor *)param_1);
        if (iVar8 != 0) {
          fStack_18 = (float)(**(code **)(*(int *)&param_1->field_0x2b0 + 0xf4))(param_1);
          core_trigger_cpp_CTrigger_applyDamage_FUN_005785b0(this_ptr,fStack_18);
        }
        core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,(CDemonActor *)pCStack_34);
        break;
      }
    }
    else {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,pCVar4);
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 1);
  core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00537c40(g_CDemonSetPtr);
  core_lightgun_cpp_FUN_004e2bf0(param_1);
  iStack_28 = 0;
  pfStack_2c = afStack_188;
  iStack_30 = 0;
  do {
    if (*(int *)&g_CDemonSetPtr->field_0x14f0a8 <= iStack_28) {
      core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
      core_sound_cpp_CSound_playActorSound_FUN_0055ae50
                (0x0264B290,(CDemonActor *)param_1,"cre-fire.wav",(CVector3f *)&fStack_ec
                );
      sound_sndmain_cpp_FUN_00550f20(*(uint *)&param_1[1].field_0x4,0x40000000);
      *(uint *)(param_1 + 1) = 1;
      *(uint *)&param_1[1].field_0x10 = 1;
      core_weapon_cpp_CWeapon_fire_FUN_0058a290(param_1);
      return 1;
    }
    pCVar4 = *(CDemonActor **)(&g_CDemonSetPtr->field_0x14f0ac + iStack_30);
    pCStack_38 = pCVar4;
    iVar8 = (**(code **)(*(int *)&pCVar4->field_0x2b0 + 0xe8))(pCVar4);
    if (((iVar8 == 0) &&
        ((((iVar8 = core_actor_cpp_FUN_0040c840(pCVar4,"CGhoul"), iVar8 != 0 ||
           (iVar8 = core_actor_cpp_FUN_0040c840(pCVar4,"CTVBat"), iVar8 != 0)) ||
          (iVar8 = core_actor_cpp_FUN_0040c840(pCVar4,"CBatCreature"), iVar8 != 0)) ||
         ((iVar8 = core_actor_cpp_FUN_0040c840(pCVar4,"CWerewolf"), iVar8 != 0 ||
          (iVar8 = core_actor_cpp_FUN_0040c840(pCVar4,"CSvetlana"), iVar8 != 0)))))) ||
       ((((pCVar4 = pCStack_38,
          iVar8 = core_actor_cpp_FUN_0040c840(pCStack_38,"CDraculaBride"), iVar8 != 0 ||
          ((iVar8 = core_actor_cpp_FUN_0040c840(pCVar4,"CBatman"), iVar8 != 0 ||
           (iVar8 = core_actor_cpp_FUN_0040c840(pCVar4,"CBatCreature"), iVar8 != 0)))) ||
         (iVar8 = core_actor_cpp_FUN_0040c840(pCVar4,"CBride"), iVar8 != 0)) ||
        (iVar8 = core_actor_cpp_FUN_0040c840(pCVar4,"CShadow"), iVar8 != 0)))) {
      pCVar4 = pCStack_38;
      (**(code **)(*(int *)&pCStack_38->field_0x2b0 + 0x24))(pCStack_38);
      position = &pCVar4->field_0x20;
      puVar6 = auStack_164;
      pCVar9 = &CStack_17c;
      for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
        *(uint *)pCVar9 = *puVar6;
        puVar6 = puVar6 + (uint)bVar11 * -2 + 1;
        pCVar9 = (CVector3f *)((int)pCVar9 + ((uint)bVar11 * -2 + 1) * 4);
      }
      iVar8 = core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_00441720
                        ((CDemonCamera *)&g_CDemonLightInstance,(CVector3f *)position,
                         (CVector3f *)&pCVar4->field_0x30,&CStack_17c,&CStack_170);
      if (iVar8 != 0) {
        engine_console_cpp_FUN_00436710(g_CConsolePtr,"?%s in volume\n" + 1,pCStack_38);
        iVar8 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
        fStack_8c = *(float *)(iVar8 + 0x20) - *(float *)position;
        fStack_88 = *(float *)(iVar8 + 0x24) - *(float *)&pCVar4->field_0x24;
        fStack_84 = *(float *)(iVar8 + 0x28) - *(float *)&pCVar4->field_0x28;
        fStack_5c = fStack_8c;
        afStack_a0[(uint)bVar11 * -2 + 0x12] = afStack_a0[(uint)bVar11 * -2 + 6];
        afStack_a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13] =
             afStack_a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
        if (SQRT(fStack_54 * fStack_54 + fStack_5c * fStack_5c + fStack_58 * fStack_58) <
            (float)_DAT_005dc0b2) {
          core_actor_cpp_FUN_00408de0(iVar8,position);
          afStack_b8[2] = (float)uStack_d4;
          afStack_b8[(uint)bVar11 * -2 + 3] = afStack_e8[(uint)bVar11 * -2 + 6];
          afStack_b8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
               afStack_e8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
          afStack_b8[3] = 0.0;
          core_vecdir_cpp_FUN_005838f0(afStack_b8 + 2);
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_20c);
          fStack_208 = (float)(**(code **)(*(int *)&param_1->field_0x2b0 + 0xf4))(param_1);
          fStack_18 = fStack_208;
          (**(code **)(*(int *)&pCStack_38->field_0x2b0 + 0x110))(pCStack_38,aSStack_20c);
        }
        pfStack_1c = afStack_124 + 0xb;
        pCStack_20 = pCStack_38;
        core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00537a90(g_CDemonSetPtr);
        (**(code **)(*(int *)&pCStack_38->field_0x2b0 + 0x24))(pCStack_38);
        pfVar7 = afStack_14c;
        pfVar10 = &fStack_194;
        for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
          *pfVar10 = *pfVar7;
          pfVar7 = pfVar7 + (uint)bVar11 * -2 + 1;
          pfVar10 = pfVar10 + (uint)bVar11 * -2 + 1;
        }
        core_actor_cpp_CVector3f_ctor_FUN_0040d340((CVector3f *)&fStack_50);
        fStack_50 = fStack_194 + *pfStack_2c;
        afStack_4c[0] = fStack_190 + pfStack_2c[1];
        pCVar9 = (CVector3f *)&fStack_a4;
        afStack_4c[1] = fStack_18c + pfStack_2c[2];
        afStack_e8[2] = fStack_194 + *pfStack_2c;
        afStack_e8[(uint)bVar11 * -2 + 3] = afStack_4c[(uint)bVar11 * -2];
        afStack_e8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
             afStack_4c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
        core_actor_cpp_CVector3f_ctor_FUN_0040d340(pCVar9);
        fStack_a4 = afStack_e8[2] * _DAT_005dc0aa;
        afStack_a0[0] = afStack_e8[3] * _DAT_005dc0aa;
        afStack_a0[1] = fStack_d8 * _DAT_005dc0aa;
        afStack_104[0] = afStack_e8[2] * _DAT_005dc0aa;
        afStack_124[(uint)bVar11 * -2 + 9] = afStack_a0[(uint)bVar11 * -2];
        afStack_124[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
             afStack_a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
        core_actor_cpp_FUN_00408d70(pCStack_38,afStack_124 + 8);
        uStack_bc = afStack_4c[2];
        afStack_b8[(uint)bVar11 * -2] = afStack_4c[(uint)bVar11 * -2 + 3];
        afStack_b8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
             afStack_4c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
        iVar8 = 0;
        bVar2 = false;
        do {
          core_setcolid_cpp_FUN_00535ee0(g_CDemonSetPtr,pfStack_1c,&uStack_bc);
          pCVar4 = *(CDemonActor **)&g_CDemonSetPtr->field_0x14d144;
          if (pCVar4 == (CDemonActor *)0x0) break;
          if (pCVar4 == pCStack_20) {
            bVar2 = true;
            break;
          }
          iVar5 = core_actor_cpp_FUN_0040c840(pCVar4,"CTrigger || CGlass");
          if (iVar5 == 0) break;
          iVar8 = iVar8 + 1;
          core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                    (g_CDemonSetPtr,*(CDemonActor **)&g_CDemonSetPtr->field_0x14d144);
        } while (iVar8 < 3);
        core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00537c40(g_CDemonSetPtr);
        if (bVar2) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_1d0);
          pCVar4 = pCStack_38;
          iVar8 = core_actor_cpp_FUN_0040c840(pCStack_38,"CDraculaBride");
          if ((((iVar8 == 0) &&
               (iVar8 = core_actor_cpp_FUN_0040c840(pCVar4,"CBatman"), iVar8 == 0)) &&
              (iVar8 = core_actor_cpp_FUN_0040c840(pCVar4,"CBatCreature"), iVar8 == 0)) &&
             ((iVar8 = core_actor_cpp_FUN_0040c840(pCVar4,"CBride"), iVar8 == 0 &&
              (iVar8 = core_actor_cpp_FUN_0040c840(pCVar4,"CShadow"), iVar8 == 0)))) {
            fStack_1cc = 0.1;
          }
          else {
            fStack_1cc = (float)(**(code **)(*(int *)&param_1->field_0x2b0 + 0xf4))(param_1);
            fStack_18 = fStack_1cc;
          }
          uStack_1c8 = 0;
          uStack_1bc = 0;
          uStack_1c0 = 0;
          uStack_1c4 = 0;
          uStack_1a0 = 0x6c;
          pCStack_19c = param_1;
          uStack_198 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x9c))(param_1);
          (**(code **)(*(int *)&pCStack_38->field_0x2b0 + 0x110))(pCStack_38,aSStack_1d0);
        }
      }
    }
    iStack_28 = iStack_28 + 1;
    iStack_30 = iStack_30 + 4;
  } while( true );
}
