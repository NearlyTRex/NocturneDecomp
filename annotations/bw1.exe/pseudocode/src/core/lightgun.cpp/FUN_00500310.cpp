// Name: core_lightgun.cpp_FUN_00500310
// Address: 00500310
// Address Range: [[00500310, 00500d1b]]
// Convention: unknown
// Signature: undefined4 core_lightgun_cpp_FUN_00500310(CWeapon *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_lightgun_cpp_FUN_00500310(CWeapon *param_1)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  CDemonActor *pCVar6;
  CTrigger *this_ptr;
  int iVar7;
  byte *position;
  uint *puVar8;
  float *pfVar9;
  CVector3f *pCVar10;
  float *pfVar11;
  byte bVar12;
  float afStackY_111c [956];
  CDemonSet *pCVar13;
  SDamageInfo aSStack_20c [4];
  float fStack_208;
  uint uStack_1dc;
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
  float afStack_17c [6];
  CVector3f CStack_164;
  CVector3f CStack_158;
  uint auStack_14c [6];
  float fStack_134;
  float afStack_130 [2];
  byte auStack_128 [4];
  float afStack_124 [5];
  uint uStack_110;
  uint uStack_104;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_e0;
  float afStack_dc [2];
  byte auStack_d4 [4];
  float afStack_d0 [4];
  float fStack_c0;
  float afStack_bc [2];
  float fStack_b4;
  uint uStack_b0;
  float fStack_a4;
  float afStack_a0 [5];
  uint uStack_8c;
  float afStack_88 [5];
  float afStack_74 [3];
  float afStack_68 [3];
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float afStack_44 [3];
  uint uStack_38;
  CDemonActor *pCStack_34;
  CTrigger *pCStack_30;
  float *pfStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  CDemonActor *pCStack_1c;
  float *pfStack_18;
  float fStack_14;
  
  bVar12 = 0;
  iVar5 = core_weapon_cpp_CWeapon_fire_FUN_005adde0(param_1);
  if (iVar5 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_0057d8a0
              (0x02C82A60,(CDemonActor *)param_1,"shotgun-noammo.wav",
               (CVector3f *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x20));
  }
  else if (_DAT_00603010 <= *(float *)&param_1[1].field_0x8) {
    uVar1 = *(uint *)&param_1->field_0x2e8;
    *(uint *)&param_1[1].field_0x8 = 0;
    *(uint *)&param_1[1].field_0x1c = uVar1;
    (**(code **)(*(int *)&param_1->field_0x154 + 0xe0))(param_1);
    afStack_bc[0] = (float)uStack_110;
    afStack_d0[(uint)bVar12 * -2 + 6] = afStack_124[(uint)bVar12 * -2 + 6];
    afStack_d0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7] =
         afStack_124[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7];
    fStack_b4 = fStack_b4 + _DAT_005e6eca;
    core_actor_cpp_FUN_00408b40(param_1,afStack_d0 + 5);
    fStack_a4 = fStack_134;
    afStack_a0[(uint)bVar12 * -2] = afStack_130[(uint)bVar12 * -2];
    afStack_a0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
         afStack_130[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
    afStack_a0[4] = *(float *)&param_1->field_0x2e8;
    afStack_a0[2] = 0.0;
    afStack_a0[3] = 0.0;
    uStack_38 = afStack_a0[4];
    core_actor_cpp_FUN_00408ac0(param_1,afStack_a0 + 2);
    fVar3 = fStack_a4;
    fStack_f8 = afStack_88[2];
    afStack_124[(uint)bVar12 * -2 + 0xc] = afStack_88[(uint)bVar12 * -2 + 3];
    afStack_124[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd] =
         afStack_88[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
    fStack_e0 = fVar3 + fStack_f8;
    afStack_dc[0] = afStack_a0[0] + fStack_f4;
    afStack_dc[1] = afStack_a0[1] + fStack_f0;
    afStack_74[0] = fVar3 + fStack_f8;
    afStack_88[(uint)bVar12 * -2 + 6] = afStack_dc[(uint)bVar12 * -2];
    afStack_88[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7] =
         afStack_dc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
    afStack_124[2] = fStack_a4;
    afStack_124[(uint)bVar12 * -2 + 3] = afStack_a0[(uint)bVar12 * -2];
    pCVar13 = g_CDemonSetPtr;
    afStack_124[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
         afStack_a0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
    core_setcolid_cpp_CDemonSet_init_FUN_00559220(pCVar13);
    core_setcolid_cpp_CDemonSet_setRayTypeLaser_FUN_00559310(g_CDemonSetPtr,1,0xff,0xff,0xff);
    core_setcolid_cpp_FUN_00559210(g_CDemonSetPtr);
    core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,(CDemonActor *)param_1);
    if (*(CDemonActor **)&param_1->field_0x304 != (CDemonActor *)0x0) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0x304);
    }
    core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00558eb0(g_CDemonSetPtr);
    iVar5 = 0;
    do {
      fStack_14 = (float)core_setcolid_cpp_FUN_00557300
                                   (g_CDemonSetPtr,afStack_124 + 2,afStack_88 + 5);
      uVar4 = g_CCharacterClassInfo.name_hash;
      if ((fStack_14 < 0.0) || (1.0 < fStack_14)) break;
      *(float *)&param_1[1].field_0x1c = *(float *)&param_1->field_0x2e8 * fStack_14;
      iStack_20 = core_actor_cpp_castToClassHash_FUN_0040c600
                            (*(uint *)&g_CDemonSetPtr->field_0x14d144,uVar4);
      if ((iStack_20 != 0) &&
         (iVar7 = (**(code **)(*(int *)(iStack_20 + 0x154) + 0x10c))(iStack_20), 0 < iVar7)) {
        iStack_20 = 0;
      }
      pCVar6 = (CDemonActor *)
               core_actor_cpp_castToClassHash_FUN_0040c600
                         (*(uint *)&g_CDemonSetPtr->field_0x14d144,g_CGlassClassInfo.name_hash
                         );
      this_ptr = (CTrigger *)
                 core_actor_cpp_castToClassHash_FUN_0040c600
                           (*(uint *)&g_CDemonSetPtr->field_0x14d144,
                            g_CTriggerClassInfo.name_hash);
      pCStack_30 = this_ptr;
      if (iStack_20 != 0) {
        iVar7 = (**(code **)(*(int *)(iStack_20 + 0x154) + 0xe0))(iStack_20);
        pCVar13 = g_CDemonSetPtr;
        if ((iVar7 != 0) && (iVar5 == 0)) {
          *(float *)&param_1[1].field_0x8 = _DAT_00603010;
          core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00559060(pCVar13);
          core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
          return 0;
        }
        break;
      }
      if (pCVar6 == (CDemonActor *)0x0) {
        if (this_ptr != (CTrigger *)0x0) {
          core_trigger_cpp_CTrigger_onProjectileHit_FUN_0059bdd0(this_ptr);
          iVar5 = core_trigger_cpp_FUN_0059bdf0(this_ptr,(CDemonActor *)param_1);
          if (iVar5 != 0) {
            fStack_14 = (float)(**(code **)(*(int *)&param_1->field_0x154 + 0xec))(param_1);
            core_trigger_cpp_FUN_0059be30(this_ptr,fStack_14);
          }
          core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,(CDemonActor *)pCStack_30);
          break;
        }
      }
      else {
        core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,pCVar6);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 1);
    core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00559060(g_CDemonSetPtr);
    core_lightgun_cpp_FUN_00500090(param_1);
    iStack_24 = 0;
    pfStack_2c = afStack_188;
    iStack_28 = 0;
    do {
      if (*(int *)&g_CDemonSetPtr->field_0x14f0a8 <= iStack_24) {
        core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
        core_sound_cpp_CSound_playActorSound_FUN_0057d8a0
                  (0x02C82A60,(CDemonActor *)param_1,"cre-fire.wav",
                   (CVector3f *)&fStack_a4);
        sound_sndmain_cpp_FUN_00573950(*(uint *)&param_1[1].field_0x4,0x40000000);
        fVar3 = _DAT_00603010;
        *(uint *)(param_1 + 1) = 1;
        *(uint *)&param_1[1].field_0x10 = 1;
        *(float *)&param_1->field_0x300 = fVar3;
        return 1;
      }
      pCStack_34 = *(CDemonActor **)(&g_CDemonSetPtr->field_0x14f0ac + iStack_28);
      iVar5 = (**(code **)(*(int *)&pCStack_34->field_0x154 + 0xe0))(pCStack_34);
      pCVar6 = pCStack_34;
      if (((iVar5 == 0) &&
          ((((iVar5 = core_actor_cpp_FUN_0040c550(pCStack_34,"CGhoul"), iVar5 != 0 ||
             (iVar5 = core_actor_cpp_FUN_0040c550(pCVar6,"CTVBat"), iVar5 != 0)) ||
            (iVar5 = core_actor_cpp_FUN_0040c550(pCVar6,"CBatCreature"), iVar5 != 0)) ||
           ((iVar5 = core_actor_cpp_FUN_0040c550(pCVar6,"CWerewolf"), iVar5 != 0 ||
            (iVar5 = core_actor_cpp_FUN_0040c550(pCVar6,"CSvetlana"), iVar5 != 0)))))) ||
         (iVar5 = core_lightgun_cpp_FUN_004fff70(pCStack_34), iVar5 != 0)) {
        pCVar6 = pCStack_34;
        (**(code **)(*(int *)&pCStack_34->field_0x154 + 0x1c))(pCStack_34);
        position = &pCVar6->field_0x20;
        puVar8 = auStack_14c;
        pCVar10 = &CStack_164;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(uint *)pCVar10 = *puVar8;
          puVar8 = puVar8 + (uint)bVar12 * -2 + 1;
          pCVar10 = (CVector3f *)((int)pCVar10 + ((uint)bVar12 * -2 + 1) * 4);
        }
        iVar5 = core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452de0
                          ((CDemonCamera *)&g_CDemonLightInstance,(CVector3f *)position,
                           (CVector3f *)&pCVar6->field_0x30,&CStack_164,&CStack_158);
        if (iVar5 != 0) {
          engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s in volume\n",pCStack_34);
          iVar5 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
          afStack_d0[2] = *(float *)(iVar5 + 0x20) - *(float *)position;
          afStack_d0[3] = *(float *)(iVar5 + 0x24) - *(float *)&pCVar6->field_0x24;
          fStack_c0 = *(float *)(iVar5 + 0x28) - *(float *)&pCVar6->field_0x28;
          fStack_50 = afStack_d0[2];
          afStack_88[(uint)bVar12 * -2 + 0xf] = afStack_d0[(uint)bVar12 * -2 + 3];
          afStack_88[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x10] =
               afStack_d0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
          if (SQRT(fStack_48 * fStack_48 + fStack_50 * fStack_50 + fStack_4c * fStack_4c) <
              (float)_DAT_005e6ed2) {
            core_actor_cpp_FUN_00408bb0(iVar5,position);
            uStack_8c = uStack_104;
            afStack_88[(uint)bVar12 * -2] = afStack_124[(uint)bVar12 * -2 + 9];
            afStack_88[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
                 afStack_124[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10];
            afStack_88[0] = 0.0;
            core_vecdir_cpp_FUN_005a7520(&uStack_8c);
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_20c);
            fStack_208 = (float)(**(code **)(*(int *)&param_1->field_0x154 + 0xec))(param_1);
            uStack_1dc = 0x6c;
            fStack_14 = fStack_208;
            (**(code **)(*(int *)&pCStack_34->field_0x154 + 0x108))(pCStack_34,aSStack_20c);
          }
          pfStack_18 = afStack_124 + 2;
          pCStack_1c = pCStack_34;
          core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00558eb0(g_CDemonSetPtr);
          (**(code **)(*(int *)&pCStack_34->field_0x154 + 0x1c))(pCStack_34);
          pfVar9 = afStack_17c;
          pfVar11 = &fStack_194;
          for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
            *pfVar11 = *pfVar9;
            pfVar9 = pfVar9 + (uint)bVar12 * -2 + 1;
            pfVar11 = pfVar11 + (uint)bVar12 * -2 + 1;
          }
          core_actor_cpp_CVector3f_ctor_FUN_0040cfe0((CVector3f *)auStack_128);
          auStack_128 = (byte  [4])(fStack_194 + *pfStack_2c);
          afStack_124[0] = fStack_190 + pfStack_2c[1];
          pCVar10 = (CVector3f *)auStack_d4;
          afStack_124[1] = fStack_18c + pfStack_2c[2];
          fStack_5c = fStack_194 + *pfStack_2c;
          afStack_88[(uint)bVar12 * -2 + 0xc] = afStack_124[(uint)bVar12 * -2];
          afStack_88[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd] =
               afStack_124[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
          core_actor_cpp_CVector3f_ctor_FUN_0040cfe0(pCVar10);
          pCVar6 = pCStack_34;
          pfVar9 = afStack_88 + 8;
          auStack_d4 = (byte  [4])(fStack_5c * _DAT_005e6ece);
          afStack_d0[0] = fStack_58 * _DAT_005e6ece;
          afStack_d0[1] = fStack_54 * _DAT_005e6ece;
          afStack_68[0] = fStack_5c * _DAT_005e6ece;
          afStack_88[(uint)bVar12 * -2 + 9] = afStack_d0[(uint)bVar12 * -2];
          afStack_88[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10] =
               afStack_d0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
          core_actor_cpp_FUN_00408b40(pCVar6,pfVar9);
          afStack_44[0] = (float)uStack_b0;
          afStack_88[(uint)bVar12 * -2 + 0x12] = afStack_d0[(uint)bVar12 * -2 + 9];
          afStack_88[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x13] =
               afStack_d0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10];
          iVar5 = 0;
          bVar2 = false;
          do {
            core_setcolid_cpp_FUN_00557300(g_CDemonSetPtr,pfStack_18,afStack_88 + 0x11);
            pCVar6 = *(CDemonActor **)&g_CDemonSetPtr->field_0x14d144;
            if (pCVar6 == (CDemonActor *)0x0) break;
            if (pCVar6 == pCStack_1c) {
              bVar2 = true;
              break;
            }
            iVar7 = core_actor_cpp_FUN_0040c550(pCVar6,"CTrigger || CGlass");
            if (iVar7 == 0) break;
            iVar5 = iVar5 + 1;
            core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                      (g_CDemonSetPtr,*(CDemonActor **)&g_CDemonSetPtr->field_0x14d144);
          } while (iVar5 < 3);
          core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00559060(g_CDemonSetPtr);
          if (bVar2) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_1d0);
            iVar5 = core_lightgun_cpp_FUN_004fff70(pCStack_34);
            if (iVar5 == 0) {
              fStack_1cc = 0.1;
            }
            else {
              fStack_1cc = (float)(**(code **)(*(int *)&param_1->field_0x154 + 0xec))(param_1);
              fStack_14 = fStack_1cc;
            }
            uStack_1a0 = 0x6c;
            uStack_1c8 = 0;
            uStack_1bc = 0;
            uStack_1c0 = 0;
            uStack_1c4 = 0;
            pCStack_19c = param_1;
            uStack_198 = (**(code **)(*(int *)&param_1->field_0x154 + 0x94))(param_1);
            (**(code **)(*(int *)&pCStack_34->field_0x154 + 0x108))(pCStack_34,aSStack_1d0);
          }
        }
      }
      iStack_24 = iStack_24 + 1;
      iStack_28 = iStack_28 + 4;
    } while( true );
  }
  return 0;
}
