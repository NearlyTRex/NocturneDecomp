// Name: core_styldemo.cpp_FUN_0059e600
// Address: 0059e600
// Address Range: [[0059e600, 005a014d]]
// Convention: unknown
// Signature: void core_styldemo_cpp_FUN_0059e600(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_styldemo_cpp_FUN_0059e600(CCharacter *param_1,float param_2)

{
  char cVar1;
  CDemonMission *pCVar2;
  int iVar3;
  uint uVar4;
  CMotionList *pCVar5;
  uint uVar6;
  SMotion *pSVar7;
  int iVar8;
  CPathMap *path_map;
  char *pcVar9;
  float *pfVar10;
  CDemonActor *this_ptr;
  char *pcVar11;
  CDemonActor *pCVar12;
  byte bVar13;
  float10 fVar14;
  float afStackY_1318 [997];
  CCharacter *pCVar15;
  uint uVar16;
  CGore *this_ptr_00;
  CVector3f *pCVar17;
  uint uVar18;
  float fVar19;
  uint uVar20;
  uint *puVar21;
  EBloodType blood_type;
  float fVar22;
  SDamageInfo aSStack_36c [4];
  uint uStack_368;
  CCharacter *pCStack_338;
  CCharacter *pCStack_334;
  float fStack_330;
  float afStack_32c [2];
  CVector3f CStack_324;
  float fStack_318;
  float afStack_314 [5];
  float afStack_300 [3];
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  uint uStack_2e8;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  uint uStack_2d0;
  float fStack_2c4;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float afStack_29c [5];
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float afStack_278 [4];
  uint uStack_268;
  uint uStack_264;
  uint uStack_258;
  uint uStack_24c;
  uint uStack_248;
  uint uStack_244;
  uint uStack_240;
  float afStack_23c [6];
  float afStack_224 [4];
  uint uStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  CVector3f CStack_204;
  float fStack_1f8;
  float afStack_1f4 [6];
  float afStack_1dc [5];
  uint uStack_1c8;
  uint uStack_1bc;
  uint uStack_1b0;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_180;
  uint uStack_174;
  uint uStack_168;
  uint uStack_164;
  uint uStack_160;
  float fStack_15c;
  float fStack_158;
  uint uStack_150;
  uint uStack_14c;
  uint uStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_12c;
  float afStack_120 [3];
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float afStack_108 [3];
  float afStack_fc [3];
  byte auStack_f0 [12];
  uint uStack_e4;
  float afStack_e0 [4];
  float fStack_d0;
  float afStack_cc [3];
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float afStack_b4 [3];
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float afStack_9c [3];
  uint uStack_90;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  CDemonActor *pCStack_70;
  CDemonActor *pCStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_58;
  float *pfStack_50;
  float fStack_48;
  float fStack_40;
  float fStack_38;
  int iStack_30;
  float fStack_2c;
  CMotionController *pCStack_28;
  float fStack_24;
  CMotionController *pCStack_20;
  uint *puStack_1c;
  CDemonActor *pCStack_18;
  float fStack_14;
  
  bVar13 = 0;
  iVar3 = (**(code **)(*(int *)&param_1->field_0x154 + 0x148))(param_1,param_2);
  if (iVar3 == 0) {
    return;
  }
  if (*(int *)&param_1[1].field_0xed4 == 0) {
    iVar3 = core_actor_cpp_createActorByName_FUN_0040c4f0("CExorcism");
    *(int *)&param_1[1].field_0xf48 = iVar3;
    (*(code *)**(uint **)(iVar3 + 0x154))(iVar3);
    pcVar9 = "Bible";
    pcVar11 = *(char **)&param_1[1].field_0xf48;
    do {
      cVar1 = *pcVar9;
      *pcVar11 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar11[1] = cVar1;
      pcVar11 = pcVar11 + 2;
    } while (cVar1 != '\0');
    core_mission_cpp_FUN_004f6930(0x01D81080,*(CDemonActor **)&param_1[1].field_0xf48);
    if (*(int *)&param_1[1].field_0xf48 != 0) {
      *(uint *)(*(int *)&param_1[1].field_0xf48 + 0xfc) = 1;
      *(uint *)(*(int *)&param_1[1].field_0xf48 + 0xf8) = 0;
    }
    core_skeleton_cpp_FUN_0054dbd0(&param_1->field_0x158,*(uint *)&param_1->field_0x25a8);
    pfVar10 = afStack_e0 + 0x11;
    afStack_9c[0] = (float)uStack_1c8;
    afStack_e0[(uint)bVar13 * -2 + 0x12] = afStack_1dc[(uint)bVar13 * -2 + 6];
    afStack_e0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13] =
         afStack_1dc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
    core_actor_cpp_FUN_00408b80(param_1,pfVar10);
    uStack_150 = uStack_1bc;
    afStack_1dc[(uint)bVar13 * -2 + 0x24] = afStack_1dc[(uint)bVar13 * -2 + 9];
    afStack_1dc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x25] =
         afStack_1dc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10];
    iVar3 = *(int *)&param_1[1].field_0xf48;
    *(uint *)(iVar3 + 0x20) = uStack_150;
    *(uint *)(iVar3 + 0x24) = uStack_14c;
    *(uint *)(iVar3 + 0x28) = uStack_148;
    iVar3 = *(int *)&param_1[1].field_0xf48;
    if ((uint *)(iVar3 + 0x30) != (uint *)&param_1->field_0x30) {
      *(uint *)(iVar3 + 0x30) = *(uint *)&param_1->field_0x30;
      *(uint *)(iVar3 + 0x34) = *(uint *)&param_1->field_0x34;
      *(uint *)(iVar3 + 0x38) = *(uint *)&param_1->field_0x38;
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0
              (*(CDemonActor **)&param_1[1].field_0xf48);
    core_charactr_cpp_FUN_004319d0(param_1,0,*(uint *)&param_1[1].field_0xf48,0,0);
    *(uint *)&param_1[1].field_0xed4 = 1;
  }
  (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
  if (*(int *)&param_1[1].field_0x18 == 0) {
    iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
    iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10c))(iVar3);
    if (iVar3 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)&param_1->field_0x158,0,1);
      return;
    }
    *(uint *)&g_CGamePtr->field_0x244 = 1;
    *(uint *)&param_1[1].field_0x18 = *(uint *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
  }
  iVar3 = *(int *)&param_1[1].field_0x18;
  if (iVar3 == 0) {
    return;
  }
  fStack_288 = *(float *)&param_1->field_0x20 - *(float *)(iVar3 + 0x20);
  fStack_284 = *(float *)&param_1->field_0x24 - *(float *)(iVar3 + 0x24);
  fStack_280 = *(float *)&param_1->field_0x28 - *(float *)(iVar3 + 0x28);
  afStack_e0[2] = fStack_288;
  afStack_e0[(uint)bVar13 * -2 + 3] = afStack_29c[(uint)bVar13 * -2 + 6];
  afStack_e0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
       afStack_29c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
  if (afStack_314 + 0x1a != afStack_e0 + 2) {
    fStack_2ac = afStack_e0[2];
    fStack_2a8 = afStack_e0[3];
    fStack_2a4 = fStack_d0;
  }
  fStack_64 = fStack_2a4 * fStack_2a4 + fStack_2ac * fStack_2ac + fStack_2a8 * fStack_2a8;
  fStack_24 = (float)(((int)fStack_64 >> 1) + _DAT_01d1a0a4);
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  puStack_1c = (uint *)&param_1->field_0x30;
  fStack_68 = param_2 * *(float *)(param_1 + 1);
  pCStack_20 = (CMotionController *)&param_1->field_0x158;
  while (0.0 < fStack_68) {
    uVar4 = core_motion_cpp_CMotionController_advance_FUN_004fbb70(pCStack_20,&fStack_68);
    if (uVar4 < 0x583) {
      if (uVar4 < 0x57b) {
        if (uVar4 < 0x4b5) {
          if (uVar4 < 0x4b2) {
            core_charactr_cpp_FUN_00433fb0(param_1,uVar4);
          }
          else if (uVar4 < 0x4b3) {
            *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x3254) = 0x41700000;
            *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x3258) = 4;
          }
          else if (uVar4 == 0x4b3) {
            pcVar11 = &DAT_005da226;
            pCStack_18 = (CDemonActor *)
                         core_actor_cpp_createActorByName_FUN_0040c4f0("CZombie");
            pCVar12 = pCStack_18;
            do {
              cVar1 = *pcVar11;
              *(char *)pCVar12 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar11[1];
              pcVar11 = pcVar11 + 2;
              pCVar12->field_0x1 = cVar1;
              pCVar12 = (CDemonActor *)&pCVar12->field_0x2;
            } while (cVar1 != '\0');
            afStack_1f4[4] = 3.0;
            afStack_1f4[2] = 0.0;
            afStack_1f4[3] = 0.0;
            core_actor_cpp_FUN_00408b80(param_1,afStack_1f4 + 2);
            pCVar12 = pCStack_18;
            afStack_278[2] = (float)uStack_2e8;
            afStack_278[(uint)bVar13 * -2 + 3] = afStack_314[(uint)bVar13 * -2 + 0xc];
            afStack_278[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
                 afStack_314[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd];
            *(float *)&pCVar12->field_0x20 = afStack_278[2];
            *(float *)&pCVar12->field_0x24 = afStack_278[3];
            *(uint *)&pCVar12->field_0x28 = uStack_268;
            if ((uint *)&pCVar12->field_0x30 != puStack_1c) {
              *(uint *)&pCVar12->field_0x30 = *puStack_1c;
              *(uint *)&pCVar12->field_0x34 = puStack_1c[1];
              *(uint *)&pCVar12->field_0x38 = puStack_1c[2];
            }
            pCVar12 = pCStack_18 + 1;
            core_skeleton_cpp_FUN_0054eae0(pCVar12,"newzomb1.dfm");
            *(uint *)&pCStack_18[0x1d].field_0xc0 = 0x3f800000;
            (*(code *)**(uint **)&pCStack_18->field_0x154)(pCStack_18);
            iVar3 = 1;
            pcVar11 = "stand";
            pCVar5 = core_motion_cpp_FUN_004fc310((CMotionController *)pCVar12);
            iVar3 = core_motion_cpp_FUN_004fb9c0(pCVar5,pcVar11,iVar3);
            core_motion_cpp_CMotionController_jumpToMotion_FUN_004fc420
                      ((CMotionController *)pCVar12,iVar3,0.0);
            pCVar2 = 0x01D81080;
            *(uint *)&pCStack_18[0x1b].field_0xf0 = 0x41200000;
            core_mission_cpp_FUN_004f6930(pCVar2,pCStack_18);
            pcVar11 = &DAT_005da249;
            pCStack_70 = (CDemonActor *)
                         core_actor_cpp_createActorByName_FUN_0040c4f0("CZombie");
            pCVar12 = pCStack_70;
            do {
              cVar1 = *pcVar11;
              *(char *)pCVar12 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar11[1];
              pcVar11 = pcVar11 + 2;
              pCVar12->field_0x1 = cVar1;
              pCVar12 = (CDemonActor *)&pCVar12->field_0x2;
            } while (cVar1 != '\0');
            uStack_24c = 0x40400000;
            uStack_244 = 0x40400000;
            uStack_248 = 0;
            pCStack_18 = pCStack_70;
            core_actor_cpp_FUN_00408b80(param_1,&uStack_24c);
            afStack_224[2] = (float)uStack_1b0;
            afStack_224[(uint)bVar13 * -2 + 3] = afStack_1dc[(uint)bVar13 * -2 + 0xc];
            afStack_224[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
                 afStack_1dc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd];
            *(float *)&pCStack_70->field_0x20 = afStack_224[2];
            *(float *)&pCStack_70->field_0x24 = afStack_224[3];
            *(uint *)&pCStack_70->field_0x28 = uStack_214;
            if ((uint *)&pCStack_70->field_0x30 != puStack_1c) {
              *(uint *)&pCStack_70->field_0x30 = *puStack_1c;
              *(uint *)&pCStack_70->field_0x34 = puStack_1c[1];
              *(uint *)&pCStack_70->field_0x38 = puStack_1c[2];
            }
            this_ptr = pCStack_18 + 1;
            core_skeleton_cpp_FUN_0054eae0(this_ptr,"newzomb1.dfm");
            pCVar12 = pCStack_18;
            *(uint *)&pCStack_18[0x1d].field_0xc0 = 0x3f800000;
            (*(code *)**(uint **)&pCStack_18->field_0x154)(pCStack_18);
            iVar3 = 1;
            pcVar11 = "stand";
            pCVar5 = core_motion_cpp_FUN_004fc310((CMotionController *)this_ptr);
            iVar3 = core_motion_cpp_FUN_004fb9c0(pCVar5,pcVar11,iVar3);
            core_motion_cpp_CMotionController_jumpToMotion_FUN_004fc420
                      ((CMotionController *)this_ptr,iVar3,0.0);
            pCVar2 = 0x01D81080;
            *(uint *)&pCVar12[0x1b].field_0xf0 = 0x41200000;
            core_mission_cpp_FUN_004f6930(pCVar2,pCVar12);
            pcVar11 = &DAT_005da26c;
            pCStack_6c = (CDemonActor *)
                         core_actor_cpp_createActorByName_FUN_0040c4f0("CZombie");
            pCVar12 = pCStack_6c;
            do {
              cVar1 = *pcVar11;
              *(char *)pCVar12 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar11[1];
              pcVar11 = pcVar11 + 2;
              pCVar12->field_0x1 = cVar1;
              pCVar12 = (CDemonActor *)&pCVar12->field_0x2;
            } while (cVar1 != '\0');
            afStack_23c[2] = -3.0;
            afStack_23c[3] = 0.0;
            afStack_23c[4] = 3.0;
            pCStack_18 = pCStack_6c;
            core_actor_cpp_FUN_00408b80(param_1,afStack_23c + 2);
            uStack_168 = uStack_174;
            afStack_1dc[(uint)bVar13 * -2 + 0x1e] = afStack_1dc[(uint)bVar13 * -2 + 0x1b];
            afStack_1dc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1f] =
                 afStack_1dc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1c];
            *(uint *)&pCStack_6c->field_0x20 = uStack_168;
            *(uint *)&pCStack_6c->field_0x24 = uStack_164;
            *(uint *)&pCStack_6c->field_0x28 = uStack_160;
            if ((uint *)&pCStack_6c->field_0x30 != puStack_1c) {
              *(uint *)&pCStack_6c->field_0x30 = *puStack_1c;
              *(uint *)&pCStack_6c->field_0x34 = puStack_1c[1];
              *(uint *)&pCStack_6c->field_0x38 = puStack_1c[2];
            }
            pCVar12 = pCStack_18 + 1;
            core_skeleton_cpp_FUN_0054eae0(pCVar12,"newzomb1.dfm");
            *(uint *)&pCStack_18[0x1d].field_0xc0 = 0x3f800000;
            (*(code *)**(uint **)&pCStack_18->field_0x154)(pCStack_18);
            iVar3 = 1;
            pcVar11 = "stand";
            pCVar5 = core_motion_cpp_FUN_004fc310((CMotionController *)pCVar12);
            iVar3 = core_motion_cpp_FUN_004fb9c0(pCVar5,pcVar11,iVar3);
            core_motion_cpp_CMotionController_jumpToMotion_FUN_004fc420
                      ((CMotionController *)pCVar12,iVar3,0.0);
            pCVar2 = 0x01D81080;
            *(uint *)&pCStack_18[0x1b].field_0xf0 = 0x41200000;
            core_mission_cpp_FUN_004f6930(pCVar2,pCStack_18);
          }
          else {
            core_charactr_cpp_FUN_00433fb0(param_1,uVar4);
          }
        }
        else if (uVar4 < 0x4b6) {
          uVar20 = 2;
          uVar18 = 0;
          iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          uVar16 = 0;
          uVar6 = 0x40800000;
          pfVar10 = (float *)(iVar3 + 0x24 + (uint)bVar13 * -8);
          fStack_15c = *(float *)(iVar3 + 0x20);
          afStack_1dc[(uint)bVar13 * -2 + 0x21] = *pfVar10;
          afStack_1dc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x22] = pfVar10[(uint)bVar13 * -2 + 1]
          ;
          fStack_158 = fStack_158 + _DAT_005da4f6;
          core_fire_cpp_FUN_004a36e0(0x01C73654,afStack_1dc + 0x20,uVar6,uVar16,uVar18,uVar20);
          *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x3254) = 0x40a00000;
          *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x3258) = 3;
        }
        else if (uVar4 < 0x579) {
          if (uVar4 == 0x578) {
            iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)&param_1[1].field_0xed8);
            if (iVar3 == 0) {
              uVar6 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                                (param_1,"stydem_stand.wav");
              *(uint *)&param_1[1].field_0xed8 = uVar6;
            }
          }
          else {
            core_charactr_cpp_FUN_00433fb0(param_1,uVar4);
          }
        }
        else if (uVar4 < 0x57a) {
          iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xc6c4 + uVar4 * 4));
          if (iVar3 == 0) {
            uVar6 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                              (param_1,"stydem_walk.wav");
            *(uint *)(&param_1->field_0xc6c4 + uVar4 * 4) = uVar6;
          }
        }
        else {
          iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xc6c4 + uVar4 * 4));
          if (iVar3 == 0) {
            uVar6 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                              (param_1,"stydem_run.wav");
            *(uint *)(&param_1->field_0xc6c4 + uVar4 * 4) = uVar6;
          }
        }
      }
      else if (uVar4 < 0x57c) {
        iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xc6c4 + uVar4 * 4));
        if (iVar3 == 0) {
          uVar6 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                            (param_1,"stydem_attack.wav");
          *(uint *)(&param_1->field_0xc6c4 + uVar4 * 4) = uVar6;
        }
      }
      else if (uVar4 < 0x57f) {
        if (uVar4 < 0x57d) {
          iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xc6c4 + uVar4 * 4));
          if (iVar3 == 0) {
            uVar6 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                              (param_1,"stydem_damage.wav");
            *(uint *)(&param_1->field_0xc6c4 + uVar4 * 4) = uVar6;
          }
        }
        else if (uVar4 < 0x57e) {
          iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xc6c4 + uVar4 * 4));
          if (iVar3 == 0) {
            uVar6 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                              (param_1,"stydem_die.wav");
            *(uint *)(&param_1->field_0xc6c4 + uVar4 * 4) = uVar6;
          }
        }
        else {
          iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xc6c4 + uVar4 * 4));
          if (iVar3 == 0) {
            uVar6 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                              (param_1,"stydem_stand_fly.wav");
            *(uint *)(&param_1->field_0xc6c4 + uVar4 * 4) = uVar6;
          }
        }
      }
      else if (uVar4 < 0x580) {
        iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xc6c4 + uVar4 * 4));
        if (iVar3 == 0) {
          uVar6 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                            (param_1,"stydem_walk_fly.wav");
          *(uint *)(&param_1->field_0xc6c4 + uVar4 * 4) = uVar6;
        }
      }
      else if (uVar4 < 0x581) {
        iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xc6c4 + uVar4 * 4));
        if (iVar3 == 0) {
          uVar6 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                            (param_1,"stydem_run_fly.wav");
          *(uint *)(&param_1->field_0xc6c4 + uVar4 * 4) = uVar6;
        }
      }
      else if (uVar4 < 0x582) {
        iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xc6c4 + uVar4 * 4));
        if (iVar3 == 0) {
          uVar6 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                            (param_1,"stydem_attack_fly.wav");
          *(uint *)(&param_1->field_0xc6c4 + uVar4 * 4) = uVar6;
        }
      }
      else {
        iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xc6c4 + uVar4 * 4));
        if (iVar3 == 0) {
          uVar6 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                            (param_1,"stydem_warning_fly_spell.wav");
          *(uint *)(&param_1->field_0xc6c4 + uVar4 * 4) = uVar6;
        }
      }
    }
    else if (uVar4 < 0x584) {
      iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xc6c4 + uVar4 * 4));
      if (iVar3 == 0) {
        uVar6 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                          (param_1,"stydem_fly_spell.wav");
        *(uint *)(&param_1->field_0xc6c4 + uVar4 * 4) = uVar6;
      }
    }
    else if (uVar4 < 0x58a) {
      if (uVar4 < 0x586) {
        if (uVar4 < 0x585) {
          iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xc6c4 + uVar4 * 4));
          if (iVar3 == 0) {
            uVar6 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                              (param_1,"stydem_damage_fly.wav");
            *(uint *)(&param_1->field_0xc6c4 + uVar4 * 4) = uVar6;
          }
        }
        else {
          iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xc6c4 + uVar4 * 4));
          if (iVar3 == 0) {
            uVar6 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                              (param_1,"stydem_die_fly.wav");
            *(uint *)(&param_1->field_0xc6c4 + uVar4 * 4) = uVar6;
          }
        }
      }
      else if (uVar4 < 0x587) {
        iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xc6c4 + uVar4 * 4));
        if (iVar3 == 0) {
          uVar6 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                            (param_1,"stydem_takeoff.wav");
          *(uint *)(&param_1->field_0xc6c4 + uVar4 * 4) = uVar6;
        }
      }
      else if (uVar4 < 0x588) {
        iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xc6c4 + uVar4 * 4));
        if (iVar3 == 0) {
          uVar6 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                            (param_1,"stydem_land.wav");
          *(uint *)(&param_1->field_0xc6c4 + uVar4 * 4) = uVar6;
        }
      }
      else if (uVar4 < 0x589) {
        iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xc6c4 + uVar4 * 4));
        if (iVar3 == 0) {
          uVar6 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                            (param_1,"stydem_warning_spell_1.wav");
          *(uint *)(&param_1->field_0xc6c4 + uVar4 * 4) = uVar6;
        }
      }
      else {
        iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xc6c4 + uVar4 * 4));
        if (iVar3 == 0) {
          uVar6 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                            (param_1,"stydem_spell_1.wav");
          *(uint *)(&param_1->field_0xc6c4 + uVar4 * 4) = uVar6;
        }
      }
    }
    else if (uVar4 < 0x58b) {
      iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xc6c4 + uVar4 * 4));
      if (iVar3 == 0) {
        uVar6 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                          (param_1,"stydem_warning_spell_2.wav");
        *(uint *)(&param_1->field_0xc6c4 + uVar4 * 4) = uVar6;
      }
    }
    else if (uVar4 < 0x58e) {
      if (uVar4 < 0x58c) {
        iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xc6c4 + uVar4 * 4));
        if (iVar3 == 0) {
          uVar6 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                            (param_1,"stydem_spell_2.wav");
          *(uint *)(&param_1->field_0xc6c4 + uVar4 * 4) = uVar6;
        }
      }
      else if (uVar4 < 0x58d) {
        iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xc6c4 + uVar4 * 4));
        if (iVar3 == 0) {
          uVar6 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                            (param_1,"stydem_warning_spell_3.wav");
          *(uint *)(&param_1->field_0xc6c4 + uVar4 * 4) = uVar6;
        }
      }
      else {
        iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xc6c4 + uVar4 * 4));
        if (iVar3 == 0) {
          uVar6 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                            (param_1,"stydem_spell_3.wav");
          *(uint *)(&param_1->field_0xc6c4 + uVar4 * 4) = uVar6;
        }
      }
    }
    else if (uVar4 < 0x58f) {
      iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xc6c4 + uVar4 * 4));
      if (iVar3 == 0) {
        uVar6 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                          (param_1,"stydem_raise_zombie.wav");
        *(uint *)(&param_1->field_0xc6c4 + uVar4 * 4) = uVar6;
      }
    }
    else if (uVar4 < 0x590) {
      iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xc6c4 + uVar4 * 4));
      if (iVar3 == 0) {
        uVar6 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                          (param_1,"stydem_transforming.wav");
        *(uint *)(&param_1->field_0xc6c4 + uVar4 * 4) = uVar6;
      }
    }
    else if (uVar4 < 0x591) {
      iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xc6c4 + uVar4 * 4));
      if (iVar3 == 0) {
        uVar6 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                          (param_1,"stydem_taunt1.wav");
        *(uint *)(&param_1->field_0xc6c4 + uVar4 * 4) = uVar6;
      }
    }
    else if (uVar4 == 0x591) {
      iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)&param_1[1].field_0xf3c);
      if (iVar3 == 0) {
        uVar6 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                          (param_1,"stydem_taunt2.wav");
        *(uint *)&param_1[1].field_0xf3c = uVar6;
      }
    }
    else {
      core_charactr_cpp_FUN_00433fb0(param_1,uVar4);
    }
  }
  fVar19 = (float)_DAT_005da4c6;
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  core_charactr_cpp_FUN_00434850(param_1,param_2 * *(float *)(param_1 + 1) * fVar19);
  pCStack_28 = (CMotionController *)&param_1->field_0x158;
  pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(pCStack_28);
  iVar3 = *(int *)(pSVar7 + 0x24);
  iVar8 = core_charactr_cpp_FUN_00431660(param_1,param_2);
  if (iVar8 == 0) {
    switch(iVar3) {
    case 0:
    case 7:
      iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10c))(iVar3);
      if (iVar3 == 0) {
        fVar14 = (float10)fStack_24;
        round();
        fStack_14 = (float)(int)ROUND(fVar14);
        iVar3 = core_styldemo_cpp_FUN_005a0480(param_1,fStack_14);
        if ((iVar3 == 0) &&
           (((_DAT_005e84dc < fStack_24 || (*(float *)&param_1[1].field_0x14 <= 0.0)) &&
            (fStack_24 < *(float *)&param_1[1].field_0x10)))) {
          if (_DAT_005e84e8 <= fStack_24) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      ((CMotionController *)&param_1->field_0x158,8,1);
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      ((CMotionController *)&param_1->field_0x158,1,1);
          }
        }
      }
      break;
    case 1:
    case 2:
    case 8:
    case 9:
      if (*(int *)&param_1[1].field_0x18 != 0) {
        fVar14 = (float10)fStack_24;
        round();
        fStack_14 = (float)(int)ROUND(fVar14);
        iVar8 = core_styldemo_cpp_FUN_005a0480(param_1,fStack_14);
        if (iVar8 == 0) {
          if (fStack_24 <= _DAT_005e84dc + (float)_DAT_005da4e6) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      ((CMotionController *)&param_1->field_0x158,0,1);
            *(uint *)&param_1[1].field_0x14 = 0;
          }
          else if ((0.0 < *(float *)&param_1[1].field_0xec8) ||
                  (iVar8 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100), iVar8 < 0x56)) {
            fVar22 = 0.17453292;
            fVar19 = 0.2;
            auStack_f0._8_4_ = _DAT_005e84dc + (float)_DAT_005da4ee;
            *(uint *)&param_1->field_0x24a4 = 0;
            *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
            *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
            auStack_f0._0_4_ = 0;
            pCVar17 = (CVector3f *)auStack_f0;
            auStack_f0._4_4_ = 0;
            fStack_14 = (float)auStack_f0._8_4_;
            path_map = (CPathMap *)
                       (**(code **)(*(int *)(*(int *)&param_1[1].field_0x18 + 0x154) + 0xc4))
                                 (*(int *)&param_1[1].field_0x18);
            iVar8 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                              (param_1,(CVector3f *)(*(int *)&param_1[1].field_0x18 + 0x20),path_map
                               ,pCVar17,fVar19,fVar22);
            if (-1 < iVar8) {
              if ((_DAT_005e84e8 < fStack_24) && (iVar3 != 8)) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          ((CMotionController *)&param_1->field_0x158,8,1);
              }
              if (*(float *)&param_1[1].field_0x10 < fStack_24) {
                if (iVar3 == 8) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                            ((CMotionController *)&param_1->field_0x158,7,1);
                }
                else {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                            ((CMotionController *)&param_1->field_0x158,0,1);
                }
              }
            }
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      ((CMotionController *)&param_1->field_0x158,0x19,1);
            *(uint *)&param_1[1].field_0xec8 = 0x41700000;
          }
        }
      }
      break;
    case 0xb:
      iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      fStack_114 = *(float *)(iVar3 + 0x20) - *(float *)&param_1->field_0x20;
      fStack_110 = *(float *)(iVar3 + 0x24) - *(float *)&param_1->field_0x24;
      fStack_10c = *(float *)(iVar3 + 0x28) - *(float *)&param_1->field_0x28;
      afStack_108[0] = fStack_114;
      afStack_1dc[(uint)bVar13 * -2 + 0x36] = afStack_1dc[(uint)bVar13 * -2 + 0x33];
      afStack_1dc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x37] =
           afStack_1dc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x34];
      core_vecdir_cpp_FUN_00576250(afStack_1dc + 0x35);
      fStack_1a4 = fStack_12c;
      afStack_1dc[(uint)bVar13 * -2 + 0xf] = afStack_1dc[(uint)bVar13 * -2 + 0x2d];
      afStack_1dc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10] =
           afStack_1dc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x2e];
      fStack_60 = (float)core_actor_cpp_FUN_0040cfa0(fStack_1a0 - *(float *)&param_1->field_0x34);
      fStack_14 = fStack_60;
      fStack_14 = (float)core_actor_cpp_FUN_0040cfa0(fStack_1a4 - *(float *)&param_1->field_0x30);
      *(float *)&param_1->field_0x34 = *(float *)&param_1->field_0x34 + fStack_60;
      *(float *)&param_1->field_0x30 = *(float *)&param_1->field_0x30 + fStack_14;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0((CDemonActor *)param_1);
      *(uint *)&param_1[1].field_0x14 = 0x40a00000;
      break;
    case 0xc:
      iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      pfStack_50 = (float *)&param_1->field_0x20;
      fStack_210 = *(float *)(iVar3 + 0x20) - *(float *)&param_1->field_0x20;
      fStack_20c = *(float *)(iVar3 + 0x24) - *(float *)&param_1->field_0x24;
      fStack_208 = *(float *)(iVar3 + 0x28) - *(float *)&param_1->field_0x28;
      afStack_cc[0] = fStack_210;
      afStack_e0[(uint)bVar13 * -2 + 6] = afStack_224[(uint)bVar13 * -2 + 6];
      afStack_e0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
           afStack_224[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
      core_vecdir_cpp_FUN_00576250(afStack_e0 + 5);
      fStack_18c = fStack_2c4;
      afStack_1dc[(uint)bVar13 * -2 + 0x15] = afStack_314[(uint)bVar13 * -2 + 0x15];
      afStack_1dc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x16] =
           afStack_314[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x16];
      fStack_58 = (float)core_actor_cpp_FUN_0040cfa0(fStack_188 - *(float *)&param_1->field_0x34);
      fStack_14 = fStack_58;
      fStack_14 = (float)core_actor_cpp_FUN_0040cfa0(fStack_18c - *(float *)&param_1->field_0x30);
      *(float *)&param_1->field_0x34 = *(float *)&param_1->field_0x34 + fStack_58;
      *(float *)&param_1->field_0x30 = *(float *)&param_1->field_0x30 + fStack_14;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0((CDemonActor *)param_1);
      iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      fStack_2f4 = *(float *)(iVar3 + 0x20) - *pfStack_50;
      fStack_2f0 = *(float *)(iVar3 + 0x24) - pfStack_50[1];
      fStack_2ec = *(float *)(iVar3 + 0x28) - pfStack_50[2];
      fStack_318 = fStack_2f4;
      afStack_314[(uint)bVar13 * -2] = afStack_314[(uint)bVar13 * -2 + 9];
      afStack_314[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
           afStack_314[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10];
      core_skeleton_cpp_FUN_0054dcc0(pCStack_28,_DAT_02d24cf4);
      pfVar10 = afStack_314 + 5;
      afStack_300[0] = (float)uStack_264;
      afStack_314[(uint)bVar13 * -2 + 6] = afStack_278[(uint)bVar13 * -2 + 6];
      afStack_314[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
           afStack_278[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
      core_actor_cpp_FUN_00408b80(param_1,pfVar10);
      fVar19 = SQRT(afStack_314[1] * afStack_314[1] +
                    fStack_318 * fStack_318 + afStack_314[0] * afStack_314[0]);
      afStack_314[2] = (float)uStack_258;
      afStack_314[(uint)bVar13 * -2 + 3] = afStack_278[(uint)bVar13 * -2 + 9];
      afStack_314[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
           afStack_278[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10];
      if (0.0 < fVar19) {
        fVar22 = 1.0 / fVar19;
        fStack_318 = fStack_318 * fVar22;
        afStack_314[0] = afStack_314[0] * fVar22;
        afStack_314[1] = afStack_314[1] * fVar22;
      }
      else {
        afStack_314[0] = 0.0;
        fStack_318 = 0.0;
        afStack_314[1] = 0.0;
      }
      fStack_318 = fStack_318 * _DAT_005da4de;
      afStack_314[0] = afStack_314[0] * _DAT_005da4de;
      afStack_314[1] = afStack_314[1] * _DAT_005da4de;
      fStack_2c = fVar19;
      core_fire_cpp_FUN_004a3af0(0x01C73654,afStack_314 + 2,&fStack_318,1,2,0);
      break;
    case 0xd:
      iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
      fStack_14 = core_motion_cpp_FUN_004fc930(pCStack_28);
      if ((float)_DAT_005da4d6 < fStack_14) {
        if (iVar3 < 0x32) {
          iVar3 = 0x1c;
        }
        else {
          if (99 < iVar3) goto switchD_005a0147_caseD_3;
          iVar3 = 0x1d;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_28,iVar3,1);
      }
    case 3:
    case 10:
switchD_005a0147_caseD_3:
      core_motion_cpp_FUN_004fc930((CMotionController *)&param_1->field_0x158);
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_36c);
      uStack_368 = *(uint *)&param_1[1].field_0x90;
      pCStack_338 = param_1;
      pCStack_334 = param_1;
      core_xform_cpp_FUN_00583260
                (&DAT_02cfd900,&param_1->field_0xfd8 + _DAT_02d24cf4 * 0x30,0x3f19999a,aSStack_36c);
      pfVar10 = afStack_e0 + 0xb;
      afStack_b4[0] = (float)uStack_240;
      afStack_e0[(uint)bVar13 * -2 + 0xc] = afStack_23c[(uint)bVar13 * -2];
      afStack_e0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd] =
           afStack_23c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
      core_actor_cpp_FUN_00408b80(param_1,pfVar10);
      pfVar10 = afStack_1f4 + 5;
      afStack_1f4[5] = (float)uStack_2d0;
      afStack_1dc[(uint)bVar13 * -2] = afStack_314[(uint)bVar13 * -2 + 0x12];
      pCVar15 = param_1;
      afStack_1dc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
           afStack_314[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13];
      core_enemy_cpp_FUN_004893f0(pCVar15,pfVar10);
      *(uint *)&param_1[1].field_0x14 = 0x40000000;
      break;
    case 0x12:
      *(uint *)&param_1[1].field_0x14 = 0x41800000;
      break;
    case 0x14:
      *(uint *)&param_1[1].field_0x14 = 0x40c00000;
      break;
    case 0x16:
      iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      fStack_144 = *(float *)(iVar3 + 0x20) - *(float *)&param_1->field_0x20;
      fStack_140 = *(float *)(iVar3 + 0x24) - *(float *)&param_1->field_0x24;
      fStack_13c = *(float *)(iVar3 + 0x28) - *(float *)&param_1->field_0x28;
      afStack_1dc[2] = fStack_144;
      afStack_1dc[(uint)bVar13 * -2 + 3] = afStack_1dc[(uint)bVar13 * -2 + 0x27];
      afStack_1dc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
           afStack_1dc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x28];
      core_vecdir_cpp_FUN_00576250(afStack_1dc + 2);
      fStack_1f8 = fStack_180;
      afStack_1f4[(uint)bVar13 * -2] = afStack_1dc[(uint)bVar13 * -2 + 0x18];
      afStack_1f4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
           afStack_1dc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x19];
      fStack_48 = (float)core_actor_cpp_FUN_0040cfa0
                                   (afStack_1f4[0] - *(float *)&param_1->field_0x34);
      fStack_14 = fStack_48;
      fStack_14 = (float)core_actor_cpp_FUN_0040cfa0(fStack_1f8 - *(float *)&param_1->field_0x30);
      *(float *)&param_1->field_0x34 = *(float *)&param_1->field_0x34 + fStack_48;
      *(float *)&param_1->field_0x30 = *(float *)&param_1->field_0x30 + fStack_14;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0((CDemonActor *)param_1);
      *(uint *)&param_1[1].field_0x14 = 0x40c00000;
      break;
    case 0x17:
      iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      fStack_2a0 = *(float *)(iVar3 + 0x20) - *(float *)&param_1->field_0x20;
      afStack_29c[0] = *(float *)(iVar3 + 0x24) - *(float *)&param_1->field_0x24;
      afStack_29c[1] = *(float *)(iVar3 + 0x28) - *(float *)&param_1->field_0x28;
      afStack_120[0] = fStack_2a0;
      afStack_1dc[(uint)bVar13 * -2 + 0x30] = afStack_29c[(uint)bVar13 * -2];
      afStack_1dc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x31] =
           afStack_29c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
      core_vecdir_cpp_FUN_00576250(afStack_1dc + 0x2f);
      fStack_138 = afStack_23c[5];
      afStack_1dc[(uint)bVar13 * -2 + 0x2a] = afStack_224[(uint)bVar13 * -2];
      afStack_1dc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x2b] =
           afStack_224[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
      fStack_40 = (float)core_actor_cpp_FUN_0040cfa0(fStack_134 - *(float *)&param_1->field_0x34);
      fStack_14 = fStack_40;
      fStack_14 = (float)core_actor_cpp_FUN_0040cfa0(fStack_138 - *(float *)&param_1->field_0x30);
      *(float *)&param_1->field_0x34 = *(float *)&param_1->field_0x34 + fStack_40;
      *(float *)&param_1->field_0x30 = *(float *)&param_1->field_0x30 + fStack_14;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0((CDemonActor *)param_1);
      fStack_14 = (float)core_actor_cpp_FUN_0040ce40(0x40400000,0x40a00000);
      *(float *)&param_1[1].field_0xed0 = fStack_14;
      break;
    case 0x18:
      iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10c))(iVar3);
      if (iVar3 == 0) {
        iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
        fStack_84 = *(float *)(iVar3 + 0x20) - *(float *)&param_1->field_0x20;
        fStack_80 = *(float *)(iVar3 + 0x24) - *(float *)&param_1->field_0x24;
        fStack_7c = *(float *)(iVar3 + 0x28) - *(float *)&param_1->field_0x28;
        afStack_fc[0] = fStack_84;
        afStack_1dc[(uint)bVar13 * -2 + 0x39] = afStack_e0[(uint)bVar13 * -2 + 0x18];
        afStack_1dc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x3a] =
             afStack_e0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x19];
        core_vecdir_cpp_FUN_00576250(afStack_1dc + 0x38);
        fStack_330 = afStack_29c[2];
        afStack_32c[(uint)bVar13 * -2] = afStack_29c[(uint)bVar13 * -2 + 3];
        afStack_32c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
             afStack_29c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
        fStack_38 = (float)core_actor_cpp_FUN_0040cfa0
                                     (afStack_32c[0] - *(float *)&param_1->field_0x34);
        fStack_14 = fStack_38;
        fStack_14 = (float)core_actor_cpp_FUN_0040cfa0(fStack_330 - *(float *)&param_1->field_0x30);
        *(float *)&param_1->field_0x34 = *(float *)&param_1->field_0x34 + fStack_38;
        *(float *)&param_1->field_0x30 = *(float *)&param_1->field_0x30 + fStack_14;
        core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0((CDemonActor *)param_1);
        iVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                          (*(uint *)&param_1->field_0x25b0,g_CWeaponClassInfo.name_hash);
        iStack_30 = iVar3;
        if (iVar3 != 0) {
          core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
          *(CCharacter **)(iVar3 + 0x304) = param_1;
          uVar6 = *(uint *)(iVar3 + 0x568);
          *(uint *)(iVar3 + 0x568) = 100;
          iVar8 = (**(code **)(*(int *)(iVar3 + 0x154) + 0xe8))(iVar3);
          if (iVar8 != 0) {
            (**(code **)(*(int *)(iVar3 + 0x154) + 0xe4))(iVar3);
          }
          *(uint *)(iStack_30 + 0x568) = uVar6;
        }
        fVar19 = *(float *)&param_1[1].field_0xed0 - param_2;
        *(float *)&param_1[1].field_0xed0 = fVar19;
        if (fVar19 <= 0.0) {
          *(uint *)&param_1[1].field_0xed0 = 0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)&param_1->field_0x158,7,1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_28,7,1);
      }
      break;
    case 0x1b:
      iVar3 = *(int *)&param_1[1].field_0x294;
      *(uint *)(iVar3 + 0x20) = *(uint *)&param_1->field_0x20;
      *(uint *)(iVar3 + 0x24) = *(uint *)&param_1->field_0x24;
      *(uint *)(iVar3 + 0x28) = *(uint *)&param_1->field_0x28;
      *(uint *)(iVar3 + 0x2c) = *(uint *)&param_1->field_0x2c;
      iVar3 = *(int *)&param_1[1].field_0x294;
      if ((uint *)(iVar3 + 0x30) != (uint *)&param_1->field_0x30) {
        *(uint *)(iVar3 + 0x30) = *(uint *)&param_1->field_0x30;
        *(uint *)(iVar3 + 0x34) = *(uint *)&param_1->field_0x34;
        *(uint *)(iVar3 + 0x38) = *(uint *)&param_1->field_0x38;
      }
      fVar19 = param_2 * (float)_DAT_005da4ce + *(float *)&param_1[1].field_0xecc;
      *(float *)&param_1[1].field_0xecc = fVar19;
      if ((1.0 <= fVar19) && (*(CDemonActor **)&param_1[1].field_0x294 != (CDemonActor *)0x0)) {
        core_mission_cpp_FUN_004f6930(0x01D81080,*(CDemonActor **)&param_1[1].field_0x294);
        pCVar2 = 0x01D81080;
        *(uint *)&param_1[1].field_0x294 = 0;
        core_mission_cpp_FUN_004f6f10(pCVar2,param_1,1);
      }
    case 6:
    case 0xf:
      if ((*(int *)&param_1[1].field_0x4 == 0) && (*(int *)&param_1->field_0xdc == 0)) {
        core_skeleton_cpp_FUN_0054dbd0(&param_1->field_0x158,0);
        puVar21 = &uStack_e4;
        uStack_e4 = uStack_90;
        afStack_e0[(uint)bVar13 * -2] = afStack_e0[(uint)bVar13 * -2 + 0x15];
        afStack_e0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
             afStack_e0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x16];
        core_actor_cpp_FUN_00408b80(param_1,puVar21);
        blood_type = BLOOD_TYPE_RED;
        pCVar17 = &CStack_324;
        CStack_324._0_4_ = CStack_204._0_4_;
        *(uint *)((int)&CStack_324 + (uint)bVar13 * -8 + 4) =
             *(uint *)((int)&CStack_204 + (uint)bVar13 * -8 + 4);
        this_ptr_00 = g_CGorePtr;
        *(uint *)((int)&CStack_324 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
             *(uint *)((int)&CStack_204 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
        core_gore_cpp_FUN_004cec40(this_ptr_00,pCVar17,blood_type);
        *(uint *)&param_1[1].field_0x4 = 1;
      }
    }
  }
  else {
    uVar4 = *(uint *)&param_1->field_0x273c;
    if (uVar4 < 2) {
      if (uVar4 == 1) {
LAB_0059f45b:
        iVar3 = 1;
      }
      else {
LAB_0059f642:
        iVar3 = 0;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)&param_1->field_0x158,iVar3,1);
    }
    else {
      if (uVar4 < 3) goto LAB_0059f45b;
      if (uVar4 != 3) goto LAB_0059f642;
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)&param_1->field_0x158,0,1);
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
    }
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  }
  if (0.0 < *(float *)&param_1[1].field_0x14) {
    *(float *)&param_1[1].field_0x14 = *(float *)&param_1[1].field_0x14 - param_2;
  }
  if (0.0 < *(float *)&param_1[1].field_0xec8) {
    *(float *)&param_1[1].field_0xec8 = *(float *)&param_1[1].field_0xec8 - param_2;
  }
  iVar3 = core_charactr_cpp_FUN_0042ccf0(param_1);
  if (iVar3 != 0) {
    core_charactr_cpp_FUN_0042c1e0(param_1,param_2);
    fStack_a8 = *(float *)&param_1->field_0x2518 * param_2;
    fStack_a4 = *(float *)&param_1->field_0x251c * param_2;
    fStack_a0 = *(float *)&param_1->field_0x2520 * param_2;
    fStack_c0 = fStack_a8;
    afStack_e0[(uint)bVar13 * -2 + 9] = afStack_e0[(uint)bVar13 * -2 + 0xf];
    afStack_e0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10] =
         afStack_e0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10];
    fStack_2dc = fStack_c0 + *(float *)&param_1->field_0x250c;
    fStack_2d8 = fStack_bc + *(float *)&param_1->field_0x2510;
    fStack_2d4 = fStack_b8 + *(float *)&param_1->field_0x2514;
    fStack_2b8 = fStack_2dc;
    afStack_314[(uint)bVar13 * -2 + 0x18] = afStack_314[(uint)bVar13 * -2 + 0xf];
    afStack_314[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x19] =
         afStack_314[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10];
    fStack_198 = fStack_2b8 + *(float *)&param_1->field_0x249c;
    fStack_194 = fStack_2b4 + *(float *)&param_1->field_0x24a0;
    fStack_190 = fStack_2b0 + *(float *)&param_1->field_0x24a4;
    fStack_27c = fStack_198;
    afStack_278[(uint)bVar13 * -2] = afStack_1dc[(uint)bVar13 * -2 + 0x12];
    afStack_278[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
         afStack_1dc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13];
    *(uint *)&param_1->field_0x2514 = 0;
    *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
    core_charactr_cpp_FUN_0042c230(param_1,(CVector3f *)&fStack_27c);
  }
  core_charactr_cpp_FUN_0042cd30(param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            ((CDeformableModelInstance *)&param_1->field_0x158);
  core_charactr_cpp_FUN_00433350(param_1,param_2);
  return;
}
