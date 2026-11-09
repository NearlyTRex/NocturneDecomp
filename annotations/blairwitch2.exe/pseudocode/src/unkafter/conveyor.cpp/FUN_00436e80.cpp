// Name: unkafter_conveyor.cpp_FUN_00436e80
// Address: 00436e80
// Address Range: [[00436e80, 00437b6e]]
// Convention: unknown
// Signature: void unkafter_conveyor_cpp_FUN_00436e80(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_conveyor_cpp_FUN_00436e80(CEnemy *param_1,float param_2)

{
  byte *this_ptr;
  uint uVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  CPathMap *path_map;
  CEnemy *pCVar7;
  byte bVar8;
  float afStackY_19b4 [1503];
  CVector3f *pCVar9;
  float fVar10;
  SDamageInfo *pSVar11;
  float max_distance;
  SDamageInfo aSStack_214 [4];
  uint uStack_210;
  CEnemy *pCStack_1e0;
  CEnemy *pCStack_1dc;
  uint uStack_1d8;
  uint auStack_1d4 [7];
  byte auStack_1b8 [12];
  CVector3f CStack_1ac;
  float fStack_1a0;
  float afStack_19c [5];
  uint uStack_188;
  float fStack_17c;
  float fStack_170;
  float afStack_16c [5];
  uint uStack_158;
  uint uStack_14c;
  float fStack_148;
  uint uStack_140;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  uint uStack_128;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  CVector3f CStack_e0;
  float fStack_d4;
  float afStack_d0 [4];
  float fStack_c0;
  CVector3f CStack_bc;
  float fStack_b0;
  float afStack_ac [2];
  CVector3f CStack_a4;
  CVector3f CStack_98;
  float fStack_8c;
  float afStack_88 [5];
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  CMotionController *pCStack_38;
  byte *puStack_34;
  byte *puStack_30;
  byte *puStack_2c;
  float *pfStack_28;
  int iStack_24;
  float *pfStack_20;
  float fStack_1c;
  int iStack_18;
  byte *puStack_14;
  
  bVar8 = 0;
  iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                    (0x01C38BC0,&param_1[1].field_0xb0);
  if (iVar3 != 0) {
    *(uint *)&param_1->field_0x25a8 = 0;
    *(uint *)&param_1->field_0x10a64 = 1;
    *(uint *)&param_1[1].field_0x7e4 = 0;
    if (*(int *)&param_1[1].field_0x7e0 == 0) {
      core_construc_cpp_FUN_00438060(param_1);
    }
    core_motion_cpp_CMotionController_jumpToMotion_FUN_00503980
              ((CMotionController *)&param_1->field_0x2b4,0xb,0.0);
  }
  iVar3 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0((CCharacter *)param_1,param_2);
  if (iVar3 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&param_1[1].field_0x64);
    return;
  }
  if ((*(int *)&param_1[1].field_0x7e0 == 1) && (0.0 < *(float *)&param_1->field_0x25a8)) {
    fVar10 = *(float *)&param_1[1].field_0x7e4 + param_2;
    *(float *)&param_1[1].field_0x7e4 = fVar10;
    if (fVar10 <= *(float *)&param_1[1].field_0x114) {
      iVar3 = *(int *)(&param_1[1].field_0x164 + *(int *)&param_1[1].field_0x7e8 * 0x48);
      if (iVar3 == 0) {
        return;
      }
      iVar5 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x9c))(iVar3);
      if (iVar5 != *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4)) {
        return;
      }
      core_event_cpp_CEventList_executeCommands_FUN_004894f0(0x01C38BC0,&param_1[1].field_0xb0);
      core_event_cpp_CEventList_executeCommands_FUN_004894f0
                (0x01C38BC0,"ConstructKilled");
      CStack_e0._4_4_ = 0x40400000;
      CStack_e0._0_4_ = 0;
      CStack_e0._8_4_ = 0;
      iVar5 = 0;
      core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0049d230
                (0x01C3DEB4,(CVector3f *)(iVar3 + 0x20),0.5,&CStack_e0,0xffff);
      do {
        iVar5 = iVar5 + 1;
        core_fire_cpp_FUN_0049d6a0
                  (0x01C3DEB4,(CVector3f *)(iVar3 + 0x20),0,0x4000,0x10000,0,0xffff,0x3f800000,
                   0x3ecccccd);
      } while (iVar5 < 10);
      core_charactr_cpp_FUN_00428e00(*(CCharacter **)(_DAT_01cedef4 * 4 + 0x1cedee4));
      return;
    }
    core_construc_cpp_FUN_004382a0(param_1);
  }
  if (*(int *)&param_1[1].field_0x7e0 == 2) {
    fVar10 = param_2 / _DAT_005f46a8 + *(float *)&param_1[1].field_0x7e4;
    *(float *)&param_1[1].field_0x7e4 = fVar10;
    if (fVar10 < 1.0) {
      iStack_24 = 0;
      if (*(int *)&param_1[1].field_0x11c < 1) {
        return;
      }
      puStack_34 = &param_1[1].field_0x120;
      pfStack_28 = (float *)&param_1[1].field_0x7e4;
      puStack_2c = &param_1[1].field_0x138;
      puStack_30 = &param_1[1].field_0x148;
      pfStack_20 = (float *)&param_1[1].field_0x158;
      do {
        pfVar2 = pfStack_20;
        pfVar4 = (float *)(puStack_34 + iStack_24 * 0x48);
        fStack_3c = pfVar4[0x11];
        fStack_5c = *pfVar4 - *pfStack_20;
        fStack_58 = pfVar4[1] - pfStack_20[1];
        fStack_54 = pfVar4[2] - pfStack_20[2];
        fStack_ec = *pfVar4 - *pfStack_20;
        afStack_16c[(uint)bVar8 * -2 + 0x21] = afStack_88[(uint)bVar8 * -2 + 0xc];
        afStack_16c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x22] =
             afStack_88[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd];
        fStack_68 = fStack_ec * *pfStack_28;
        fStack_64 = fStack_e8 * *pfStack_28;
        fStack_60 = fStack_e4 * *pfStack_28;
        fStack_74 = fStack_ec * *pfStack_28;
        afStack_88[(uint)bVar8 * -2 + 6] = afStack_88[(uint)bVar8 * -2 + 9];
        afStack_88[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
             afStack_88[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
        afStack_d0[2] = *pfVar2 + fStack_74;
        afStack_d0[3] = pfVar2[1] + fStack_70;
        fStack_c0 = pfVar2[2] + fStack_6c;
        fStack_f8 = *pfVar2 + fStack_74;
        afStack_16c[(uint)bVar8 * -2 + 0x1e] = afStack_d0[(uint)bVar8 * -2 + 3];
        afStack_16c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x1f] =
             afStack_d0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
        core_xform_cpp_slerpQuaternion_FUN_00593df0
                  (puStack_2c,puStack_30,*(uint *)&param_1[1].field_0x7e4);
        uStack_1d8 = auStack_1d4[3];
        auStack_1d4[(uint)bVar8 * -2] = auStack_1d4[(uint)bVar8 * -2 + 4];
        auStack_1d4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
             auStack_1d4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 5];
        (auStack_1d4 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1] =
             (auStack_1d4 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 5)[(uint)bVar8 * -2 + 1];
        core_xform_cpp_FUN_005940b0(&uStack_1d8);
        fStack_1a0 = fStack_17c;
        afStack_19c[(uint)bVar8 * -2] = afStack_19c[(uint)bVar8 * -2 + 9];
        afStack_19c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
             afStack_19c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
        fStack_1a0 = *(float *)&param_1[1].field_0x7e4 * (float)_DAT_005cde1b + fStack_1a0;
        *(float *)((int)fStack_3c + 0x20) = fStack_f8;
        *(uint *)((int)fStack_3c + 0x24) = uStack_f4;
        *(uint *)((int)fStack_3c + 0x28) = uStack_f0;
        if ((float *)((int)fStack_3c + 0x30) != &fStack_1a0) {
          *(float *)((int)fStack_3c + 0x30) = fStack_1a0;
          *(float *)((int)fStack_3c + 0x34) = afStack_19c[0];
          *(float *)((int)fStack_3c + 0x38) = afStack_19c[1];
        }
        if ((float *)((int)fStack_3c + 0x10e0) != &fStack_f8) {
          *(float *)((int)fStack_3c + 0x10e0) = fStack_f8;
          *(uint *)((int)fStack_3c + 0x10e4) = uStack_f4;
          *(uint *)((int)fStack_3c + 0x10e8) = uStack_f0;
        }
        if ((float *)((int)fStack_3c + 0x10ec) != &fStack_1a0) {
          *(float *)((int)fStack_3c + 0x10ec) = fStack_1a0;
          *(float *)((int)fStack_3c + 0x10f0) = afStack_19c[0];
          *(float *)((int)fStack_3c + 0x10f4) = afStack_19c[1];
        }
        iStack_24 = iStack_24 + 1;
        puStack_2c = puStack_2c + 0x48;
        puStack_30 = puStack_30 + 0x48;
        pfStack_20 = pfStack_20 + 0x12;
      } while (iStack_24 < *(int *)&param_1[1].field_0x11c);
      return;
    }
    iVar3 = 0;
    core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_00547440
              ((CDeformableModelInstance *)&param_1->field_0x2b4);
    pCVar7 = param_1;
    if (0 < *(int *)&param_1[1].field_0x11c) {
      do {
        core_mission_cpp_FUN_004fc7b0(0x01D182F0,*(uint *)&pCVar7[1].field_0x164,1);
        *(uint *)&pCVar7[1].field_0x164 = 0;
        iVar3 = iVar3 + 1;
        pCVar7 = (CEnemy *)&pCVar7->field_0x48;
      } while (iVar3 < *(int *)&param_1[1].field_0x11c);
    }
    *(uint *)&param_1[1].field_0x7e0 = 0;
    *(float *)&param_1->field_0x25a8 = (float)*(int *)&param_1[1].field_0x118;
  }
  *(uint *)&param_1->field_0x2510 = 0;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
  fStack_48 = param_2 * *(float *)&param_1->field_0x10a60;
  this_ptr = &param_1->field_0x2b4;
  while (0.0 < fStack_48) {
    iVar3 = core_motion_cpp_CMotionController_advance_FUN_005030c0
                      ((CMotionController *)this_ptr,afStack_88 + 0x10);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)param_1,iVar3);
  }
  *(uint *)&param_1->field_0x2594 = *(uint *)&param_1->field_0x2510;
  core_charactr_cpp_FUN_0042b2a0();
  iVar3 = core_motion_cpp_FUN_005035c0(this_ptr);
  iVar3 = *(int *)(iVar3 + 0x24);
  iStack_18 = iVar3;
  iVar5 = core_charactr_cpp_FUN_004287f0((CCharacter *)param_1,param_2);
  if (iVar5 == 0) {
    switch(iVar3) {
    case 0:
    case 1:
    case 2:
      iVar3 = core_enemy_cpp_FUN_00488970(param_1,param_2);
      if (iVar3 == 0) {
        (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))();
        if (*(int *)&param_1->field_0x10a78 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&param_1->field_0x2b4,3,1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&param_1->field_0x2b4,3,1);
      }
      break;
    case 3:
    case 4:
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))();
      pCStack_38 = (CMotionController *)&param_1->field_0x2b4;
      if (*(int *)&param_1->field_0x10a78 == 0) {
        iVar3 = core_enemy_cpp_FUN_00488970(param_1,param_2);
        if (iVar3 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_38,0,1);
        }
      }
      else {
        max_distance = 0.17453292;
        auStack_1b8._0_4_ = 0;
        auStack_1b8._8_4_ = 0x40400000;
        pCVar9 = (CVector3f *)auStack_1b8;
        auStack_1b8._4_4_ = 0;
        fVar10 = 0.5;
        fStack_44 = 0x40400000 + (float)_DAT_005cde03;
        path_map = (CPathMap *)
                   (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0xcc))();
        iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                          ((CCharacter *)param_1,
                           (CVector3f *)(*(int *)&param_1->field_0x10a78 + 0x20),path_map,pCVar9,
                           fVar10,max_distance);
        if (iVar3 < 0) {
          engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s gave up chase - I'm confused\n",param_1)
          ;
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_38,0,1);
        }
        else {
          iVar3 = *(int *)&param_1->field_0x10a78;
          fStack_d4 = *(float *)&param_1->field_0x20 - *(float *)(iVar3 + 0x20);
          afStack_d0[0] = *(float *)&param_1->field_0x24 - *(float *)(iVar3 + 0x24);
          afStack_d0[1] = *(float *)&param_1->field_0x28 - *(float *)(iVar3 + 0x28);
          afStack_19c[2] = fStack_d4;
          afStack_19c[(uint)bVar8 * -2 + 3] = afStack_d0[(uint)bVar8 * -2];
          afStack_19c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
               afStack_d0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
          fStack_1c = SQRT(afStack_19c[4] * afStack_19c[4] + afStack_19c[2] * afStack_19c[2]);
          afStack_19c[3] = 0.0;
          fStack_40 = fStack_1c;
          if ((fStack_1c <= fStack_44) && (*(float *)&param_1->field_0x10a74 <= 0.0)) {
            fStack_110 = *(float *)(iVar3 + 0x20) - *(float *)&param_1->field_0x20;
            fStack_10c = *(float *)(iVar3 + 0x24) - *(float *)&param_1->field_0x24;
            fStack_108 = *(float *)(iVar3 + 0x28) - *(float *)&param_1->field_0x28;
            afStack_16c[2] = fStack_110;
            afStack_16c[(uint)bVar8 * -2 + 3] = afStack_16c[(uint)bVar8 * -2 + 0x18];
            afStack_16c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
                 afStack_16c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x19];
            core_vecdir_cpp_FUN_005838f0(afStack_16c + 2);
            uStack_14c = uStack_140;
            afStack_16c[(uint)bVar8 * -2 + 9] = afStack_16c[(uint)bVar8 * -2 + 0xc];
            afStack_16c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
                 afStack_16c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd];
            puStack_14 = (byte *)
                         core_actor_cpp_FUN_0040d0c0(fStack_148 - *(float *)&param_1->field_0x34);
            if (ABS((float)puStack_14) < (float)_DAT_005cde0b) {
              iVar5 = 1;
              iVar3 = core_actor_cpp_FUN_0040cfc0(0,1);
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        (pCStack_38,iVar3 + 5,iVar5);
              uVar1 = *(uint *)&param_1[1].field_0xa4;
              *(uint *)&param_1->field_0x10a74 = 0x40200000;
              iVar3 = sound_sndmain_cpp_FUN_00550b70(uVar1);
              if ((iVar3 == 0) &&
                 (iVar3 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1[1].field_0xa8),
                 iVar3 == 0)) {
                uVar6 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))();
                *(uint *)&param_1[1].field_0xa8 = uVar6;
              }
            }
          }
          if (*(float *)&param_1->field_0x10a70 * _DAT_005cde13 < fStack_40) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)&param_1->field_0x2b4,0,1);
          }
        }
      }
      break;
    case 5:
    case 6:
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_214);
      uStack_210 = core_actor_cpp_FUN_0040cf60();
      pSVar11 = aSStack_214;
      pCStack_1e0 = param_1;
      pCStack_1dc = param_1;
      puStack_14 = &param_1->field_0x1134;
      fVar10 = 0.4;
      core_xform_cpp_FUN_00591530();
      uStack_188 = uStack_158;
      afStack_19c[(uint)bVar8 * -2 + 6] = afStack_16c[(uint)bVar8 * -2 + 6];
      afStack_19c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
           afStack_16c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
      core_actor_cpp_FUN_00408d70();
      pCVar9 = &CStack_a4;
      CStack_a4._0_4_ = CStack_1ac._0_4_;
      *(uint *)((int)&CStack_a4 + (uint)bVar8 * -8 + 4) =
           *(uint *)((int)&CStack_1ac + (uint)bVar8 * -8 + 4);
      pCVar7 = param_1;
      *(uint *)((int)&CStack_a4 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           *(uint *)((int)&CStack_1ac + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      core_enemy_cpp_FUN_00488110(pCVar7,pCVar9,fVar10,pSVar11);
      pSVar11 = aSStack_214;
      fVar10 = 0.4;
      core_xform_cpp_FUN_00591530();
      afStack_88[2] = (float)uStack_128;
      afStack_88[(uint)bVar8 * -2 + 3] = afStack_16c[(uint)bVar8 * -2 + 0x12];
      afStack_88[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
           afStack_16c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x13];
      core_actor_cpp_FUN_00408d70();
      pCVar9 = &CStack_bc;
      CStack_bc._0_4_ = CStack_98._0_4_;
      *(uint *)((int)&CStack_bc + (uint)bVar8 * -8 + 4) =
           *(uint *)((int)&CStack_98 + (uint)bVar8 * -8 + 4);
      pCVar7 = param_1;
      *(uint *)((int)&CStack_bc + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           *(uint *)((int)&CStack_98 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      core_enemy_cpp_FUN_00488110(pCVar7,pCVar9,fVar10,pSVar11);
      break;
    case 0xb:
      if ((*(int *)&param_1->field_0x10a64 == 0) && (*(int *)&param_1->field_0xdc == 0)) {
        *(uint *)&param_1->field_0x10a64 = 1;
      }
      break;
    case 0xc:
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))();
      if ((*(int *)&param_1->field_0x10a78 != 0) ||
         (iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                            (0x01C38BC0,(char *)(param_1 + 1)), iVar3 != 0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&param_1->field_0x2b4,0xe,1);
        iVar3 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1[1].field_0xa4);
        if ((iVar3 == 0) &&
           ((iVar3 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1[1].field_0xa8), iVar3 == 0 &&
            (iVar3 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1[1].field_0xa0), iVar3 == 0))))
        {
          uVar6 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))();
          *(uint *)&param_1[1].field_0xa0 = uVar6;
        }
      }
      break;
    case 0xe:
      if (*(float *)&param_1->field_0x24 < *(float *)&param_1->field_0x2574 + (float)_DAT_005cddfb)
      {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)this_ptr,0xf,1);
      }
      break;
    case 0xf:
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))();
    }
    goto switchD_00437b48_caseD_7;
  }
  uVar1 = *(uint *)&param_1->field_0x27ac;
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_0043739d:
      iVar5 = 1;
      iVar3 = 3;
    }
    else {
LAB_004375f4:
      iVar5 = 1;
      iVar3 = core_actor_cpp_FUN_0040cfc0(0,2);
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&param_1->field_0x2b4,iVar3,iVar5);
  }
  else {
    if (uVar1 < 3) goto LAB_0043739d;
    if (uVar1 != 3) goto LAB_004375f4;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)this_ptr,0,1);
    engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)&param_1->field_0x2510 = 0;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
switchD_00437b48_caseD_7:
  if (0.0 < *(float *)&param_1->field_0x10a74) {
    *(float *)&param_1->field_0x10a74 = *(float *)&param_1->field_0x10a74 - param_2;
  }
  iVar3 = core_charactr_cpp_FUN_00424430((CCharacter *)param_1);
  if ((iVar3 != 0) && (iStack_18 != 0xc)) {
    core_charactr_cpp_FUN_00423a10();
    fStack_11c = *(float *)&param_1->field_0x2588 * param_2;
    fStack_118 = *(float *)&param_1->field_0x258c * param_2;
    fStack_114 = *(float *)&param_1->field_0x2590 * param_2;
    fStack_134 = fStack_11c;
    afStack_16c[(uint)bVar8 * -2 + 0xf] = afStack_16c[(uint)bVar8 * -2 + 0x15];
    afStack_16c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10] =
         afStack_16c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x16];
    fStack_b0 = fStack_134 + *(float *)&param_1->field_0x257c;
    afStack_ac[0] = fStack_130 + *(float *)&param_1->field_0x2580;
    afStack_ac[1] = fStack_12c + *(float *)&param_1->field_0x2584;
    fStack_104 = fStack_b0;
    afStack_16c[(uint)bVar8 * -2 + 0x1b] = afStack_ac[(uint)bVar8 * -2];
    afStack_16c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x1c] =
         afStack_ac[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    fStack_8c = fStack_104 + *(float *)&param_1->field_0x2508;
    afStack_88[0] = fStack_100 + *(float *)&param_1->field_0x250c;
    afStack_88[1] = fStack_fc + *(float *)&param_1->field_0x2510;
    fStack_170 = fStack_8c;
    afStack_16c[(uint)bVar8 * -2] = afStack_88[(uint)bVar8 * -2];
    afStack_16c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         afStack_88[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    *(uint *)&param_1->field_0x2584 = 0;
    *(uint *)&param_1->field_0x2580 = *(uint *)&param_1->field_0x2584;
    *(uint *)&param_1->field_0x257c = *(uint *)&param_1->field_0x2580;
    *(uint *)&param_1->field_0x2510 = 0;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
    core_charactr_cpp_FUN_00423a60((CCharacter *)param_1,(CVector3f *)&fStack_170);
  }
  core_charactr_cpp_FUN_00424470((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            ((CDeformableModelInstance *)&param_1->field_0x2b4);
  iVar3 = iStack_18;
  core_charactr_cpp_FUN_00429e90((CCharacter *)param_1,param_2);
  if (((iVar3 == 3) || (iVar3 == 4)) &&
     (iVar3 = sound_sndmain_cpp_FUN_005515e0
                        ((double)*(float *)&param_1->field_0x20,
                         (double)*(float *)&param_1->field_0x24,
                         (double)*(float *)&param_1->field_0x28,0x42c80000), iVar3 != 0)) {
    iVar3 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1[1].field_0x64);
    if (iVar3 != 0) {
      return;
    }
    sound_sndmain_cpp_FUN_00550450();
    iVar3 = 2;
    puStack_14 = (byte *)core_actor_cpp_FUN_0040cf60(0,0x3f800000);
    sound_sndmain_cpp_FUN_005503e0((double)(float)puStack_14,iVar3);
    uVar6 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x38))();
    *(uint *)&param_1[1].field_0x64 = uVar6;
    sound_sndmain_cpp_FUN_005504d0();
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&param_1[1].field_0x64);
  return;
}
