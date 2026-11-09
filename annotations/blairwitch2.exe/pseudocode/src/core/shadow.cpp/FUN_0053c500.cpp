// Name: core_shadow.cpp_FUN_0053c500
// Address: 0053c500
// Address Range: [[0053c500, 0053df0f]]
// Convention: unknown
// Signature: void core_shadow_cpp_FUN_0053c500(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_shadow_cpp_FUN_0053c500(CEnemy *param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  CEnemy *pCVar3;
  int iVar4;
  CSkeleton *pCVar5;
  CPathMap *path_map;
  int iVar6;
  uint uVar7;
  float *pfVar8;
  byte *puVar9;
  float *pfVar10;
  byte bVar11;
  float10 fVar12;
  float10 fVar13;
  ulonglong uVar14;
  float afStackY_127c [973];
  uint *puVar15;
  CVector3f *pCVar16;
  float fVar17;
  SDamageInfo *pSVar18;
  float fVar19;
  SDamageInfo aSStack_330 [4];
  float fStack_32c;
  CEnemy *pCStack_2fc;
  CEnemy *pCStack_2f8;
  float afStack_2f4 [6];
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float afStack_2ac [6];
  float fStack_294;
  float afStack_290 [5];
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  CVector3f CStack_270;
  byte auStack_264 [12];
  float fStack_258;
  float afStack_254 [4];
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  byte auStack_234 [8];
  float fStack_22c;
  uint uStack_228;
  float afStack_224 [5];
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  uint uStack_1f8;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  uint uStack_1d4;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  uint uStack_1b0;
  uint auStack_1ac [2];
  int iStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  uint uStack_198;
  float afStack_194 [5];
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  uint uStack_15c;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float afStack_140 [4];
  float fStack_130;
  float afStack_12c [3];
  CVector3f CStack_120;
  uint uStack_114;
  uint auStack_110 [2];
  CVector3f CStack_108;
  float fStack_fc;
  float afStack_f8 [4];
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  CVector3f CStack_b4;
  float fStack_a8;
  float afStack_a4 [4];
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float afStack_5c [7];
  float fStack_40;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  int iStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar11 = 0;
  iVar2 = core_motion_cpp_FUN_005035c0();
  fStack_2c = *(float *)&param_1->field_0x2bc;
  iStack_1c = *(int *)(iVar2 + 0x24);
  iVar2 = core_motion_cpp_FUN_005035c0();
  fStack_20 = (float)*(int *)(iVar2 + 100);
  core_charactr_cpp_FUN_0042a7a0((CCharacter *)param_1,param_2);
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0((CCharacter *)param_1,param_2);
  if (iVar2 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&param_1[1].field_0x30);
    return;
  }
  if ((*(int *)(param_1 + 1) == 2) && (0.0 <= *(float *)&param_1[1].field_0x4c)) {
    *(float *)&param_1[1].field_0x4c = *(float *)&param_1[1].field_0x4c - param_2;
  }
  fStack_24 = param_2 * *(float *)&param_1->field_0x10a60;
  *(uint *)&param_1->field_0x2510 = 0;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
  while (0.0 < fStack_24) {
    iVar2 = core_motion_cpp_CMotionController_advance_FUN_005030c0
                      ((CMotionController *)&param_1->field_0x2b4,&fStack_24);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)param_1,iVar2);
  }
  *(uint *)&param_1->field_0x2594 = *(uint *)&param_1->field_0x2510;
  core_charactr_cpp_FUN_0042b2a0(param_1);
  if (*(int *)(param_1 + 1) == 2) {
    *(float *)&param_1->field_0x2598 = *(float *)&param_1->field_0x2598 * (float)_DAT_005e6635;
  }
  iVar2 = core_charactr_cpp_FUN_004287f0((CCharacter *)param_1,param_2);
  if (iVar2 != 0) {
    uVar1 = *(uint *)&param_1->field_0x27ac;
    if (uVar1 < 2) {
      if (uVar1 == 1) {
        iVar4 = 5;
        iVar2 = 1;
      }
      else {
LAB_0053cbd1:
        fStack_14 = core_motion_cpp_FUN_00503e60((CMotionController *)&param_1->field_0x2b4);
        if (fStack_14 <= (float)_DAT_005e6675) goto LAB_0053c6de;
        iVar2 = 1;
        iVar4 = core_actor_cpp_FUN_0040cfc0(0,4);
      }
LAB_0053c6d5:
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&param_1->field_0x2b4,iVar4,iVar2);
    }
    else if (uVar1 < 3) {
      fStack_14 = core_motion_cpp_FUN_00503e60((CMotionController *)&param_1->field_0x2b4);
      if ((float)_DAT_005e6675 < fStack_14) {
        iVar2 = 1;
        iVar4 = core_actor_cpp_FUN_0040cfc0(0,1);
        iVar4 = iVar4 + 0xb;
        goto LAB_0053c6d5;
      }
    }
    else {
      if (uVar1 != 3) goto LAB_0053cbd1;
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&param_1->field_0x2b4,0,1);
      engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s confused while walking to scriptDest!\n");
    }
LAB_0053c6de:
    *(uint *)&param_1->field_0x2510 = 0;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
    goto LAB_0053c710;
  }
  switch(iStack_1c) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    goto switchD_0053dec8_caseD_0;
  case 5:
  case 0xb:
  case 0xc:
    if (*(int *)&param_1[1].field_0x64 != 0) {
      fVar17 = *(float *)&param_1[1].field_0x6c - param_2;
      *(float *)&param_1[1].field_0x6c = fVar17;
      if (0.0 < fVar17) {
        core_charactr_cpp_FUN_00428260
                  (param_1,*(uint *)&param_1[1].field_0x64,0x3f800000,0x3f800000);
        uVar1 = *(uint *)&param_1[1].field_0x68;
        if (uVar1 == 0) {
LAB_0053d90f:
          iVar4 = 1;
          iVar2 = core_actor_cpp_FUN_0040cfc0(0,4);
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&param_1->field_0x2b4,iVar2,iVar4);
          *(uint *)&param_1[1].field_0x64 = 0;
        }
        else {
          if (uVar1 < 2) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)&param_1->field_0x2b4,5,1);
          }
          else {
            if (uVar1 != 2) goto LAB_0053d90f;
            fStack_14 = core_motion_cpp_FUN_00503e60((CMotionController *)&param_1->field_0x2b4);
            if ((float)_DAT_005e666d < fStack_14) {
              *(int *)&param_1[1].field_0x74 = *(int *)&param_1[1].field_0x74 + 1;
            }
            if (2 < *(int *)&param_1[1].field_0x74) {
              fStack_14 = core_motion_cpp_FUN_00503e60((CMotionController *)&param_1->field_0x2b4);
              if ((float)_DAT_005e6675 < fStack_14) {
                iVar4 = 1;
                iVar2 = core_actor_cpp_FUN_0040cfc0(0,1);
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          ((CMotionController *)&param_1->field_0x2b4,iVar2 + 0xb,iVar4);
                *(uint *)&param_1[1].field_0x74 = 0;
              }
            }
          }
          if (*(int *)&param_1[1].field_0x64 != 0) break;
        }
      }
      else {
        *(uint *)&param_1[1].field_0x64 = 0;
        *(uint *)&param_1[1].field_0x6c = 0;
      }
    }
    (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))(param_1);
    iVar2 = *(int *)&param_1->field_0x10a78;
    puVar9 = &param_1->field_0x2b4;
    if (iVar2 == 0) {
      fStack_14 = core_motion_cpp_FUN_00503e60((CMotionController *)puVar9);
      if ((float)_DAT_005e6675 < fStack_14) {
        iVar4 = 1;
        iVar2 = core_actor_cpp_FUN_0040cfc0(0,4);
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)puVar9,iVar2,iVar4);
      }
    }
    else {
      if (*(int *)&param_1[1].field_0x34 != 0) {
        afStack_a4[2] = *(float *)(iVar2 + 0x20) - *(float *)&param_1->field_0x20;
        afStack_a4[3] = *(float *)(iVar2 + 0x24) - *(float *)&param_1->field_0x24;
        fStack_94 = *(float *)(iVar2 + 0x28) - *(float *)&param_1->field_0x28;
        fStack_210 = afStack_a4[2];
        afStack_224[(uint)bVar11 * -2 + 6] = afStack_a4[(uint)bVar11 * -2 + 3];
        afStack_224[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
             afStack_a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
        if (*(float *)&param_1->field_0x10a70 <
            SQRT(fStack_208 * fStack_208 + fStack_210 * fStack_210 + fStack_20c * fStack_20c)) {
          *(uint *)&param_1->field_0x10a78 = 0;
          fStack_14 = core_motion_cpp_FUN_00503e60((CMotionController *)puVar9);
          if ((float)_DAT_005e6675 < fStack_14) {
            iVar4 = 1;
            iVar2 = core_actor_cpp_FUN_0040cfc0(0,4);
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)puVar9,iVar2,iVar4);
          }
          break;
        }
      }
      iVar2 = core_actor_cpp_castToClassHash_FUN_0040c8f0(*(uint *)&param_1[1].field_0x34);
      if (iVar2 == 0) {
        iVar2 = *(int *)&param_1->field_0x10a78;
        if (*(int *)(param_1 + 1) == 2) {
          if ((*(int *)&param_1[1].field_0x3c == 0) || (*(int *)&param_1[1].field_0x40 == 0)) {
            _DAT_01d046a0 = "..\\core\\shadow.cpp";
            _DAT_01d046a4 = 0x20a;
            core_main_c_FUN_004e4500();
          }
          engine_console_cpp_FUN_00436710
                    (g_CConsolePtr,"Phase: %d, Timer: %f\n",*(uint *)&param_1[1].field_0x48,
                     (double)*(float *)&param_1[1].field_0x4c);
          if ((*(int *)&param_1[1].field_0x48 == 1) || (*(int *)&param_1[1].field_0x48 == 3)) {
            core_actor_cpp_FUN_00408de0(*(uint *)&param_1->field_0x10a78);
            uStack_228 = uStack_1f8;
            afStack_224[(uint)bVar11 * -2] = afStack_224[(uint)bVar11 * -2 + 0xc];
            afStack_224[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
                 afStack_224[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
            if (0.0 <= afStack_224[1]) {
              core_actor_cpp_FUN_00408de0(*(uint *)&param_1->field_0x10a78);
              uStack_1d4 = afStack_290[2];
              afStack_224[(uint)bVar11 * -2 + 0x15] = afStack_290[(uint)bVar11 * -2 + 3];
              afStack_224[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x16] =
                   afStack_290[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
              if (0.0 <= fStack_1cc) {
                iVar4 = *(int *)&param_1->field_0x10a78;
                iVar6 = *(int *)&param_1[1].field_0x3c;
                fStack_d8 = *(float *)(iVar4 + 0x20) - *(float *)(iVar6 + 0x20);
                fStack_d4 = *(float *)(iVar4 + 0x24) - *(float *)(iVar6 + 0x24);
                fStack_d0 = *(float *)(iVar4 + 0x28) - *(float *)(iVar6 + 0x28);
                fStack_cc = fStack_d8;
                afStack_f8[(uint)bVar11 * -2 + 0xc] = afStack_f8[(uint)bVar11 * -2 + 9];
                afStack_f8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
                     afStack_f8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
                fVar17 = fStack_cc * fStack_cc;
                iVar2 = *(int *)&param_1[1].field_0x40;
                fStack_258 = *(float *)(iVar4 + 0x20) - *(float *)(iVar2 + 0x20);
                afStack_254[0] = *(float *)(iVar4 + 0x24) - *(float *)(iVar2 + 0x24);
                afStack_254[1] = *(float *)(iVar4 + 0x28) - *(float *)(iVar2 + 0x28);
                fStack_240 = fStack_258;
                afStack_254[(uint)bVar11 * -2 + 6] = afStack_254[(uint)bVar11 * -2];
                afStack_254[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
                     afStack_254[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
                if (SQRT(fStack_238 * fStack_238 + fStack_240 * fStack_240 + fStack_23c * fStack_23c
                        ) < SQRT(fStack_c4 * fStack_c4 + fVar17 + fStack_c8 * fStack_c8)) {
                  iVar2 = iVar6;
                }
              }
              else {
                iVar2 = *(int *)&param_1[1].field_0x40;
              }
            }
            else {
              iVar2 = *(int *)&param_1[1].field_0x3c;
            }
          }
          if ((*(int *)&param_1[1].field_0x48 == 1) || (*(int *)&param_1[1].field_0x48 == 3)) {
            fStack_78 = *(float *)(iVar2 + 0x20) - *(float *)&param_1->field_0x20;
            fStack_74 = *(float *)(iVar2 + 0x24) - *(float *)&param_1->field_0x24;
            fStack_70 = *(float *)(iVar2 + 0x28) - *(float *)&param_1->field_0x28;
            fStack_168 = fStack_78;
            afStack_194[(uint)bVar11 * -2 + 0xc] = afStack_a4[(uint)bVar11 * -2 + 0xc];
            afStack_194[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
                 afStack_a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
            if (SQRT(fStack_160 * fStack_160 + fStack_168 * fStack_168 + fStack_164 * fStack_164) <
                (float)_DAT_005e667d) {
              iVar4 = *(int *)&param_1[1].field_0x48 + 1;
              *(int *)&param_1[1].field_0x48 = iVar4;
              if (3 < iVar4) {
                *(uint *)&param_1[1].field_0x48 = 0;
              }
              *(uint *)&param_1[1].field_0x4c = 0x41200000;
            }
          }
          else if ((*(float *)&param_1[1].field_0x4c <= 0.0) &&
                  (iVar4 = *(int *)&param_1[1].field_0x48 + 1,
                  *(int *)&param_1[1].field_0x48 = iVar4, 3 < iVar4)) {
            *(uint *)&param_1[1].field_0x48 = 0;
          }
        }
        auStack_264._8_4_ = 0x40400000;
        fStack_18 = 0x40400000;
        *(uint *)&param_1->field_0x2510 = 0;
        *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
        *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
        fVar19 = 0.17453292;
        fVar17 = 0.5;
        pCVar16 = (CVector3f *)auStack_264;
        auStack_264._0_4_ = 0;
        auStack_264._4_4_ = 0;
        path_map = (CPathMap *)(**(code **)(*(int *)(iVar2 + 0x2b0) + 0xcc))(iVar2);
        iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                          ((CCharacter *)param_1,(CVector3f *)(iVar2 + 0x20),path_map,pCVar16,fVar17
                           ,fVar19);
        if (iVar4 < 0) {
          engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s gave up chase - I'm confused\n");
          fStack_14 = core_motion_cpp_FUN_00503e60((CMotionController *)&param_1->field_0x2b4);
          if ((float)_DAT_005e6675 < fStack_14) {
            iVar4 = 1;
            iVar2 = core_actor_cpp_FUN_0040cfc0(0,4);
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)&param_1->field_0x2b4,iVar2,iVar4);
          }
        }
        else if (iVar4 < 1) {
          iVar4 = core_actor_cpp_castToClassHash_FUN_0040c8f0(*(uint *)&param_1[1].field_0x34)
          ;
          if (iVar4 == 0) {
            fStack_c0 = *(float *)(iVar2 + 0x20) - *(float *)&param_1->field_0x20;
            fStack_bc = *(float *)(iVar2 + 0x24) - *(float *)&param_1->field_0x24;
            fStack_b8 = *(float *)(iVar2 + 0x28) - *(float *)&param_1->field_0x28;
            fStack_180 = fStack_c0;
            afStack_194[(uint)bVar11 * -2 + 6] = afStack_f8[(uint)bVar11 * -2 + 0xf];
            afStack_194[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
                 afStack_f8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10];
            if (afStack_224 + 0x1a != afStack_194 + 5) {
              fStack_1bc = fStack_180;
              fStack_1b8 = fStack_17c;
              fStack_1b4 = fStack_178;
            }
            fStack_34 = SQRT(fStack_1b4 * fStack_1b4 +
                             fStack_1bc * fStack_1bc + fStack_1b8 * fStack_1b8);
            fStack_28 = 20.0;
            if (*(int *)(param_1 + 1) == 1) {
              fStack_28 = 10.0;
            }
            if (*(int *)(param_1 + 1) == 2) {
              fStack_28 = 10.0;
            }
            puVar9 = &param_1->field_0x2b4;
            if (fStack_28 < fStack_34) {
              core_vecdir_cpp_FUN_005838f0();
              uStack_198 = afStack_194[2];
              afStack_194[(uint)bVar11 * -2] = afStack_194[(uint)bVar11 * -2 + 3];
              afStack_194[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
                   afStack_194[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
              fStack_14 = (float)core_actor_cpp_FUN_0040d0c0();
              if (ABS(fStack_14) < (float)_DAT_005e6685) {
                fStack_14 = core_motion_cpp_FUN_00503e60((CMotionController *)puVar9);
                if ((float)_DAT_005e6675 < fStack_14) {
                  iVar4 = 1;
                  iVar2 = core_actor_cpp_FUN_0040cfc0(0,1);
                  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                            ((CMotionController *)puVar9,iVar2 + 0xb,iVar4);
                }
                iVar2 = core_actor_cpp_FUN_0040d060(0.15);
                if (iVar2 != 0) {
                  core_shadow_cpp_FUN_0053df80();
                }
                iVar2 = 0;
                iVar4 = 0;
                while (iVar4 < *(int *)&g_CDemonSetPtr->field_0x150fec) {
                  pCVar3 = (CEnemy *)
                           core_actor_cpp_castToClassHash_FUN_0040c8f0
                                     (*(uint *)(&g_CDemonSetPtr->field_0x150ff0 + iVar2));
                  if ((pCVar3 == (CEnemy *)0x0) || (pCVar3 == param_1)) {
                    iVar4 = iVar4 + 1;
                    iVar2 = iVar2 + 4;
                  }
                  else {
                    iVar6 = core_motion_cpp_FUN_005035c0();
                    if ((*(int *)(iVar6 + 0x24) == 0xb) ||
                       (iVar6 = core_motion_cpp_FUN_005035c0(), *(int *)(iVar6 + 0x24) == 0xc)) {
                      iVar2 = core_actor_cpp_FUN_0040cfc0(0,2);
                      if (iVar2 == 1) {
                        *(float *)&param_1->field_0x34 =
                             *(float *)&param_1->field_0x34 + _DAT_005e6695;
                      }
                      if (iVar2 == 2) {
                        *(float *)&param_1->field_0x34 =
                             *(float *)&param_1->field_0x34 + _DAT_005e6699;
                      }
                      break;
                    }
                    iVar4 = iVar4 + 1;
                    iVar2 = iVar2 + 4;
                  }
                }
              }
            }
            else if (fStack_34 < 0x40400000 * _DAT_005e6659) {
              if ((iStack_1c == 5) &&
                 (fStack_14 = core_motion_cpp_FUN_00503e60((CMotionController *)puVar9),
                 (float)_DAT_005e6675 < fStack_14)) {
                iVar4 = 1;
                iVar2 = core_actor_cpp_FUN_0040cfc0(0,4);
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          ((CMotionController *)puVar9,iVar2,iVar4);
              }
              if ((iStack_1c == 0xb) || (iStack_1c == 0xc)) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          ((CMotionController *)&param_1->field_0x2b4,5,1);
              }
            }
          }
        }
        else {
          if ((*(int *)(param_1 + 1) == 2) &&
             ((*(int *)&param_1[1].field_0x48 == 1 || (*(int *)&param_1[1].field_0x48 == 3))))
          break;
          if (*(float *)&param_1->field_0x10a74 <= 0.0) {
            iVar4 = 1;
            iVar2 = core_actor_cpp_FUN_0040cfc0(0,3);
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)&param_1->field_0x2b4,iVar2 + 6,iVar4);
            iVar2 = core_charactr_cpp_FUN_0042b300(param_1);
            *(int *)&param_1[1].field_0x64 = iVar2;
            if (iVar2 != 0) {
              fStack_14 = (float)core_actor_cpp_FUN_0040cf60(0x40800000);
              *(float *)&param_1[1].field_0x6c = fStack_14;
            }
            iVar2 = core_actor_cpp_FUN_0040d060(0.8);
            if (iVar2 != 0) {
              core_shadow_cpp_FUN_0053df80();
            }
          }
        }
        fVar17 = *(float *)&param_1[1].field_0x28 - param_2;
        *(float *)&param_1[1].field_0x28 = fVar17;
        if (fVar17 < 0.0) {
          core_shadow_cpp_FUN_0053df80();
        }
      }
      else {
        iVar4 = 1;
        iVar2 = core_actor_cpp_FUN_0040cfc0(0,4);
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&param_1->field_0x2b4,iVar2,iVar4);
      }
    }
    break;
  case 6:
  case 7:
  case 8:
  case 9:
    core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_330);
    fStack_32c = (float)core_actor_cpp_FUN_0040cf60(0x40e00000);
    pCStack_2fc = param_1;
    pCStack_2f8 = param_1;
    pSVar18 = aSStack_330;
    fVar17 = 0.4;
    fStack_14 = fStack_32c;
    core_xform_cpp_FUN_00591530
              (&DAT_0265370c,&param_1->field_0x1134 + *(int *)&param_1[1].field_0xc * 0x30);
    afStack_12c[0] = (float)uStack_15c;
    afStack_140[(uint)bVar11 * -2 + 6] = afStack_194[(uint)bVar11 * -2 + 0xf];
    afStack_140[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
         afStack_194[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10];
    core_actor_cpp_FUN_00408d70(param_1,afStack_140 + 5);
    CStack_120._0_4_ = CStack_b4._0_4_;
    *(uint *)((int)&CStack_120 + (uint)bVar11 * -8 + 4) =
         *(uint *)((int)&CStack_b4 + (uint)bVar11 * -8 + 4);
    *(uint *)((int)&CStack_120 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
         *(uint *)((int)&CStack_b4 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    core_enemy_cpp_FUN_00488110(param_1,&CStack_120,fVar17,pSVar18);
    fStack_32c = (float)core_actor_cpp_FUN_0040cf60(0x40e00000);
    pCStack_2fc = param_1;
    pCStack_2f8 = param_1;
    pSVar18 = aSStack_330;
    fVar17 = 0.4;
    fStack_14 = fStack_32c;
    core_xform_cpp_FUN_00591530
              (&DAT_0265370c,&param_1->field_0x1134 + *(int *)&param_1[1].field_0x8 * 0x30);
    puVar15 = &uStack_114;
    uStack_114 = uStack_1b0;
    auStack_110[(uint)bVar11 * -2] = auStack_1ac[(uint)bVar11 * -2];
    auStack_110[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         auStack_1ac[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    core_actor_cpp_FUN_00408d70(param_1,puVar15);
    pCVar16 = &CStack_108;
    CStack_108._0_4_ = CStack_270._0_4_;
    *(uint *)((int)&CStack_108 + (uint)bVar11 * -8 + 4) =
         *(uint *)(auStack_264 + (uint)bVar11 * -8 + -8);
    pCVar3 = param_1;
    *(uint *)((int)&CStack_108 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
         *(uint *)(auStack_264 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + -4);
    core_enemy_cpp_FUN_00488110(pCVar3,pCVar16,fVar17,pSVar18);
    if ((*(int *)&param_1->field_0x10a78 != 0) &&
       (iVar2 = (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0x114))(),
       iVar2 != 0)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&param_1->field_0x2b4,10,1);
    }
    core_shadow_cpp_FUN_0053dfc0();
    break;
  default:
    *(uint *)&param_1[1].field_0x78 = 1;
    *(uint *)&param_1[1].field_0x80 = 65000;
switchD_0053dec8_caseD_0:
    *(uint *)&param_1[1].field_0x78 = 1;
    *(uint *)&param_1[1].field_0x80 = 65000;
    iVar2 = core_enemy_cpp_FUN_00488970(param_1,param_2);
    if (iVar2 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&param_1->field_0x2b4,5,1);
      break;
    }
    if (*(int *)&param_1[1].field_0x64 != 0) {
      fVar17 = *(float *)&param_1[1].field_0x6c - param_2;
      *(float *)&param_1[1].field_0x6c = fVar17;
      if (0.0 < fVar17) {
        core_charactr_cpp_FUN_00428260
                  (param_1,*(uint *)&param_1[1].field_0x64,0x3f800000,0x3f800000);
        uVar1 = *(uint *)&param_1[1].field_0x68;
        if (uVar1 == 0) {
LAB_0053d2f5:
          *(uint *)&param_1[1].field_0x64 = 0;
        }
        else {
          if (uVar1 < 2) {
            iVar2 = 5;
            iVar4 = 1;
          }
          else {
            if (uVar1 != 2) goto LAB_0053d2f5;
            iVar4 = 1;
            iVar2 = core_actor_cpp_FUN_0040cfc0(0,1);
            iVar2 = iVar2 + 0xb;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&param_1->field_0x2b4,iVar2,iVar4);
          if (*(int *)&param_1[1].field_0x64 != 0) break;
        }
      }
      else {
        *(uint *)&param_1[1].field_0x64 = 0;
        *(uint *)&param_1[1].field_0x6c = 0;
      }
    }
    (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))(param_1);
    iVar2 = *(int *)&param_1->field_0x10a78;
    if (iVar2 != 0) {
      if (*(int *)&param_1[1].field_0x34 != 0) {
        afStack_140[2] = *(float *)(iVar2 + 0x20) - *(float *)&param_1->field_0x20;
        afStack_140[3] = *(float *)(iVar2 + 0x24) - *(float *)&param_1->field_0x24;
        fStack_130 = *(float *)(iVar2 + 0x28) - *(float *)&param_1->field_0x28;
        afStack_254[2] = afStack_140[2];
        afStack_254[(uint)bVar11 * -2 + 3] = afStack_140[(uint)bVar11 * -2 + 3];
        afStack_254[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
             afStack_140[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
        fStack_30 = SQRT(fStack_244 * fStack_244 +
                         afStack_254[2] * afStack_254[2] + afStack_254[3] * afStack_254[3]);
        if ((*(float *)&param_1->field_0x10a70 < fStack_30) || ((float)_DAT_005e668d < fStack_30)) {
          *(uint *)&param_1->field_0x10a78 = 0;
          break;
        }
      }
      puVar9 = &param_1->field_0x2b4;
      iVar2 = core_actor_cpp_castToClassHash_FUN_0040c8f0(*(uint *)&param_1[1].field_0x34);
      if (iVar2 == 0) {
        if (*(int *)&param_1->field_0x10a78 == 0) {
          fStack_14 = core_motion_cpp_FUN_00503e60((CMotionController *)puVar9);
          if ((float)_DAT_005e6675 < fStack_14) {
            iVar4 = 1;
            iVar2 = core_actor_cpp_FUN_0040cfc0(0,4);
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)puVar9,iVar2,iVar4);
          }
        }
        else {
          iVar2 = core_actor_cpp_FUN_0040d060(0.4);
          if (iVar2 != 0) {
            core_shadow_cpp_FUN_0053df80();
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&param_1->field_0x2b4,5,1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)puVar9,0,1);
      }
    }
    break;
  case 0xd:
  case 0xe:
    fVar12 = (((float10)fStack_20 - (float10)fStack_2c) * (float10)_DAT_005e663d) /
             (float10)fStack_20;
    *(uint *)&param_1[1].field_0x78 = 0;
    uVar14 = round();
    iVar2 = (int)uVar14;
    *(int *)(iVar2 + 0x10b78) = (int)ROUND(fVar12);
    fVar12 = (float10)*(float *)((int)((ulonglong)uVar14 >> 0x20) + 0x284) * (float10)_DAT_005e6645
             + (float10)*(float *)(iVar2 + 0x10b3c);
    *(float *)(iVar2 + 0x10b3c) = (float)fVar12;
    fVar13 = (float10)fsin(fVar12);
    fVar12 = (float10)fcos(fVar12);
    fStack_38 = (float)fVar13;
    fStack_40 = (float)fVar12;
    (**(code **)(*(int *)&param_1->field_0x2b0 + 0x24))();
    pfVar8 = afStack_2ac;
    pfVar10 = &fStack_2c4;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar10 = *pfVar8;
      pfVar8 = pfVar8 + (uint)bVar11 * -2 + 1;
      pfVar10 = pfVar10 + (uint)bVar11 * -2 + 1;
    }
    fVar17 = (fStack_2b0 - fStack_2bc) * fStack_40;
    fVar19 = (fStack_2b8 - fStack_2c4) * fStack_38 * (float)_DAT_005e664d;
    fStack_90 = fStack_2c4 + fStack_2b8;
    fStack_8c = fStack_2c0 + fStack_2b4;
    fStack_88 = fStack_2bc + fStack_2b0;
    afStack_f8[2] = fStack_2c4 + fStack_2b8;
    afStack_f8[(uint)bVar11 * -2 + 3] = afStack_a4[(uint)bVar11 * -2 + 6];
    afStack_f8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
         afStack_a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
    auStack_234._0_4_ = fVar19;
    fStack_22c = fVar17 * (float)_DAT_005e664d;
    fStack_1ec = afStack_f8[2] * _DAT_005e6655;
    fStack_1e8 = afStack_f8[3] * _DAT_005e6655;
    fStack_1e4 = fStack_e8 * _DAT_005e6655;
    afStack_224[2] = afStack_f8[2] * _DAT_005e6655;
    afStack_224[(uint)bVar11 * -2 + 3] = afStack_224[(uint)bVar11 * -2 + 0xf];
    afStack_224[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
         afStack_224[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10];
    auStack_234._4_4_ = afStack_224[3];
    fStack_174 = fVar19 + *(float *)&param_1->field_0x20;
    fStack_170 = afStack_224[3] + *(float *)&param_1->field_0x24;
    fStack_16c = fStack_22c + *(float *)&param_1->field_0x28;
    fStack_204 = fStack_174;
    afStack_224[(uint)bVar11 * -2 + 9] = afStack_194[(uint)bVar11 * -2 + 9];
    afStack_224[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
         afStack_194[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
    if ((float *)auStack_234 != afStack_224 + 8) {
      auStack_234._0_4_ = fStack_204;
      auStack_234._4_4_ = fStack_200;
      fStack_22c = fStack_1fc;
    }
    core_dglobe_cpp_CDemonGlobe_setPosition_FUN_00448810
              ((CDemonGlobe *)0x20b1924,(CVector3f *)auStack_234);
    _DAT_020b1960 = 60000;
    DAT_020b1940 = 0x3a;
    core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00448860((CDemonGlobe *)0x20b1924,6.0);
    _DAT_020b1944 = 0;
    core_set_cpp_CDemonSet_addCoronaGlobe_FUN_005306b0(g_CDemonSetPtr,(CDemonGlobe *)0x20b1924);
    puVar9 = &param_1->field_0x2b4;
    *(uint *)&param_1[1].field_0x84 = 1;
    pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                       ((CDeformableModelInstance *)puVar9);
    fStack_14 = core_motion_cpp_FUN_00503e60((CMotionController *)puVar9);
    fVar12 = (float10)_DAT_005e665d;
    pow();
    fVar13 = (float10)_DAT_005e6665;
    pow();
    *(float *)&param_1[1].field_0x7c = (float)((float10)1 + fVar12 / fVar13);
    iVar2 = 0;
    if (0 < *(int *)&pCVar5->field_0x1d1f8) {
      do {
        iVar2 = iVar2 + 1;
        *(uint *)(puVar9 + 0x514) = *(uint *)&param_1[1].field_0x7c;
        puVar9 = puVar9 + 4;
      } while (iVar2 < *(int *)&pCVar5->field_0x1d1f8);
    }
    break;
  case 0xf:
    *(uint *)&param_1[1].field_0x80 = 0;
    *(uint *)&param_1[1].field_0x7c = 0x3f800000;
    *(uint *)&param_1->field_0x70 = 2;
    return;
  case 0x14:
    fVar12 = ((float10)fStack_2c * (float10)_DAT_005e663d) / (float10)fStack_20;
    *(uint *)&param_1[1].field_0x78 = 0;
    iVar2 = round();
    *(int *)(iVar2 + 0x10b78) = (int)ROUND(fVar12);
  }
LAB_0053c710:
  *(uint *)&param_1->field_0x3434 = 0x40000000;
  if (0.0 < *(float *)&param_1->field_0x10a74) {
    *(float *)&param_1->field_0x10a74 = *(float *)&param_1->field_0x10a74 - param_2;
  }
  iVar2 = core_motion_cpp_FUN_005035c0();
  iVar2 = *(int *)(iVar2 + 0x24);
  if ((((((iVar2 != 0xf) && (iVar2 != 0)) && (iVar2 != 1)) && ((iVar2 != 2 && (iVar2 != 3)))) &&
      (iVar2 != 4)) || (*(int *)&param_1->field_0xdc != 0)) {
    if ((*(int *)&param_1->field_0x10a78 != 0) &&
       (pCVar3 = (CEnemy *)(**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0xfc))()
       , pCVar3 == param_1)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0x10a78);
    }
    core_charactr_cpp_FUN_00423a10(param_1);
    fStack_27c = *(float *)&param_1->field_0x2588 * param_2;
    fStack_278 = *(float *)&param_1->field_0x258c * param_2;
    fStack_274 = *(float *)&param_1->field_0x2590 * param_2;
    fStack_1c8 = fStack_27c;
    afStack_224[(uint)bVar11 * -2 + 0x18] = afStack_290[(uint)bVar11 * -2 + 6];
    afStack_224[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x19] =
         afStack_290[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
    fStack_1e0 = fStack_1c8 + *(float *)&param_1->field_0x2508;
    fStack_1dc = fStack_1c4 + *(float *)&param_1->field_0x250c;
    fStack_1d8 = fStack_1c0 + *(float *)&param_1->field_0x2510;
    fStack_144 = fStack_1e0;
    afStack_140[(uint)bVar11 * -2] = afStack_224[(uint)bVar11 * -2 + 0x12];
    afStack_140[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         afStack_224[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13];
    fStack_e4 = fStack_144 + *(float *)&param_1->field_0x257c;
    fStack_e0 = afStack_140[0] + *(float *)&param_1->field_0x2580;
    fStack_dc = afStack_140[1] + *(float *)&param_1->field_0x2584;
    fStack_60 = fStack_e4;
    afStack_5c[(uint)bVar11 * -2] = afStack_f8[(uint)bVar11 * -2 + 6];
    afStack_5c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         afStack_f8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
    *(uint *)&param_1->field_0x2510 = 0;
    *(uint *)&param_1->field_0x2584 = 0;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
    *(uint *)&param_1->field_0x2580 = *(uint *)&param_1->field_0x2584;
    *(uint *)&param_1->field_0x257c = *(uint *)&param_1->field_0x2580;
    core_charactr_cpp_FUN_00423a60((CCharacter *)param_1,(CVector3f *)&fStack_60);
  }
  core_charactr_cpp_FUN_00424470((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            ((CDeformableModelInstance *)&param_1->field_0x2b4);
  core_charactr_cpp_FUN_00429e90((CCharacter *)param_1,param_2);
  core_shadow_cpp_FUN_0053ece0();
  if ((0.0 <= *(float *)&param_1[1].field_0x70) &&
     (param_2 = *(float *)&param_1[1].field_0x70 - param_2,
     *(float *)&param_1[1].field_0x70 = param_2, param_2 <= 0.0)) {
    fStack_14 = (float)core_actor_cpp_FUN_0040cf60(0x3f800000);
    *(float *)&param_1[1].field_0x70 = fStack_14;
    (**(code **)(*(int *)&param_1->field_0x2b0 + 0x24))();
    pfVar8 = afStack_2f4;
    pfVar10 = &fStack_2dc;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar10 = *pfVar8;
      pfVar8 = pfVar8 + (uint)bVar11 * -2 + 1;
      pfVar10 = pfVar10 + (uint)bVar11 * -2 + 1;
    }
    fStack_6c = fStack_2dc + fStack_2d0;
    fStack_68 = fStack_2d8 + fStack_2cc;
    fStack_64 = fStack_2d4 + fStack_2c8;
    fStack_84 = fStack_2dc + fStack_2d0;
    afStack_a4[(uint)bVar11 * -2 + 9] = afStack_a4[(uint)bVar11 * -2 + 0xf];
    afStack_a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
         afStack_a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10];
    fStack_294 = fStack_84 * _DAT_005e6655;
    afStack_290[0] = fStack_80 * _DAT_005e6655;
    afStack_290[1] = fStack_7c * _DAT_005e6655;
    afStack_5c[2] = fStack_84 * _DAT_005e6655;
    afStack_5c[(uint)bVar11 * -2 + 3] = afStack_290[(uint)bVar11 * -2];
    afStack_5c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
         afStack_290[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    core_actor_cpp_FUN_00408d70(param_1);
    fStack_fc = fStack_a8;
    afStack_f8[(uint)bVar11 * -2] = afStack_a4[(uint)bVar11 * -2];
    afStack_f8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         afStack_a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    if (afStack_194 + 0x11 != &fStack_fc) {
      fStack_150 = fStack_fc;
      fStack_14c = afStack_f8[0];
      fStack_148 = afStack_f8[1];
    }
    iStack_1a4 = (int)ROUND(fStack_150 * _DAT_005fb3e0);
    iStack_1a0 = (int)ROUND(fStack_14c * _DAT_005fb3e0);
    iStack_19c = (int)ROUND(fStack_148 * _DAT_005fb3e0);
    fStack_14 = (float)core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_005311e0
                                 (g_CDemonSetPtr,(CVector3i *)&iStack_1a4,(CVector3i *)0x0);
    if (_DAT_005fb40c * (float)_DAT_005e669d <= (float)(int)fStack_14) {
      iVar4 = 1;
      iVar2 = core_actor_cpp_FUN_0040cfc0(0,4);
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&param_1->field_0x2b4,iVar2,iVar4);
      iVar2 = core_charactr_cpp_FUN_0042b300(param_1,&DAT_005e662e);
      *(int *)&param_1[1].field_0x64 = iVar2;
      if (iVar2 != 0) {
        uVar7 = core_actor_cpp_FUN_0040cf60(0x40400000,0x40c00000);
        *(uint *)&param_1[1].field_0x6c = uVar7;
      }
      *(float *)&param_1[1].field_0x70 = *(float *)&param_1[1].field_0x70 + _DAT_005e66a5;
      return;
    }
  }
  return;
}
