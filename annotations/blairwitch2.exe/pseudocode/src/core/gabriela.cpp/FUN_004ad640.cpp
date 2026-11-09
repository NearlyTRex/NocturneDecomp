// Name: core_gabriela.cpp_FUN_004ad640
// Address: 004ad640
// Address Range: [[004ad640, 004aeaff]]
// Convention: unknown
// Signature: void core_gabriela_cpp_FUN_004ad640(CGabriella *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_gabriela_cpp_FUN_004ad640(CGabriella *param_1,float param_2)

{
  byte bVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  CAmmoBox *this_ptr;
  float *pfVar7;
  float *pfVar8;
  bool bVar9;
  byte bVar10;
  float afStackY_1294 [990];
  CMotionController *this_ptr_00;
  CGabriella *pCVar11;
  char *pcVar12;
  CVector3f *pCVar13;
  byte *puVar14;
  CMatrix3x3f aCStack_304 [40];
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float afStack_2c4 [6];
  float fStack_2ac;
  float afStack_2a8 [5];
  float fStack_294;
  float afStack_290 [5];
  uint uStack_27c;
  uint uStack_278;
  uint uStack_270;
  uint uStack_264;
  float fStack_258;
  uint uStack_24c;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  uint uStack_234;
  uint uStack_228;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  uint uStack_210;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float afStack_1e0 [3];
  float afStack_1d4 [3];
  CVector3f CStack_1c8;
  uint uStack_1bc;
  float afStack_1b8 [5];
  uint uStack_1a4;
  float afStack_1a0 [5];
  float fStack_18c;
  uint uStack_188;
  uint uStack_184;
  uint uStack_180;
  uint uStack_174;
  float fStack_16c;
  uint uStack_168;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float afStack_144 [3];
  float fStack_138;
  float fStack_134;
  float fStack_130;
  uint uStack_12c;
  uint uStack_120;
  float fStack_11c;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  CVector3f CStack_f0;
  uint uStack_e4;
  float afStack_e0 [2];
  CVector3f CStack_d8;
  float fStack_cc;
  float afStack_c8 [5];
  float fStack_b4;
  uint uStack_a8;
  float fStack_9c;
  uint uStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float afStack_84 [3];
  float fStack_78;
  double dStack_6c;
  int iStack_5c;
  int iStack_58;
  CMotionController *pCStack_54;
  float fStack_50;
  float fStack_4c;
  uint *puStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  CBoxActor *pCStack_38;
  float fStack_34;
  int iStack_30;
  float fStack_2c;
  uint *puStack_28;
  uint *puStack_24;
  float fStack_20;
  float fStack_1c;
  uint uStack_18;
  uint *puStack_14;
  
  bVar10 = 0;
  iVar4 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0((CCharacter *)param_1,param_2);
  if (iVar4 == 0) {
    return;
  }
  if (*(int *)&param_1->field_0x10a64 == 2) {
    core_gabriela_cpp_FUN_004aeb00(param_1,param_2);
  }
  fVar3 = *(float *)&param_1->field_0x10a60 - param_2;
  *(float *)&param_1->field_0x10a60 = fVar3;
  if (fVar3 < 0.0) {
    *(uint *)&param_1->field_0x10a60 = 0;
  }
  core_gabriela_cpp_FUN_004af960(param_1);
  pfVar7 = afStack_290 + 2;
  afStack_290[2] = (float)uStack_234;
  afStack_290[(uint)bVar10 * -2 + 3] = afStack_290[(uint)bVar10 * -2 + 0x18];
  afStack_290[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
       afStack_290[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x19];
  core_actor_cpp_FUN_00408d70(param_1,pfVar7);
  fStack_294 = fStack_258;
  afStack_290[(uint)bVar10 * -2] = afStack_290[(uint)bVar10 * -2 + 0xf];
  afStack_290[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
       afStack_290[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10];
  *(uint *)&param_1->field_0x2510 = 0;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
  core_gabriela_cpp_FUN_004af410(param_1,param_2);
  uStack_18 = (uint)(*(float *)&param_1->field_0x25a8 <= 0.0);
  if (*(int *)&param_1->field_0x276c != 0) {
    uStack_18 = 1;
  }
  if (*(int *)&param_1->field_0x2560c != 0) {
    uStack_18 = 1;
  }
  if (*(int *)&param_1->field_0x25614 != 0) {
    uStack_18 = 1;
  }
  puStack_14 = (uint *)core_motion_cpp_FUN_005038a0(&param_1->field_0x2b4,8);
  if (0.0 < (float)puStack_14) {
    uStack_18 = 1;
  }
  puStack_14 = (uint *)core_motion_cpp_FUN_005038a0(&param_1->field_0x2b4,0xb);
  if (0.0 < (float)puStack_14) {
    uStack_18 = 1;
  }
  puStack_14 = (uint *)core_motion_cpp_FUN_005038a0(&param_1->field_0x2b4,0xc);
  if (0.0 < (float)puStack_14) {
    uStack_18 = 1;
  }
  puStack_14 = (uint *)core_motion_cpp_FUN_005038a0(&param_1->field_0x2b4,0x12);
  if (0.0 < (float)puStack_14) {
    uStack_18 = 1;
  }
  *(uint *)&param_1->field_0x2598 = 0;
  *(uint *)&param_1->field_0x2594 = 0;
  fStack_20 = 0.0;
  if (*(int *)&param_1->field_0x2570 != 0) {
    puVar14 = &param_1->field_0x2b4;
    puStack_14 = (uint *)core_motion_cpp_FUN_005038a0(puVar14,1);
    *(float *)&param_1->field_0x2594 =
         (float)puStack_14 * _DAT_01cb0638 + *(float *)&param_1->field_0x2594;
    puStack_14 = (uint *)core_motion_cpp_FUN_005038a0(puVar14,2);
    *(float *)&param_1->field_0x2594 =
         (float)puStack_14 * _DAT_01cb063c + *(float *)&param_1->field_0x2594;
    puStack_14 = (uint *)core_motion_cpp_FUN_005038a0(puVar14,3);
    *(float *)&param_1->field_0x2594 =
         *(float *)&param_1->field_0x2594 - (float)puStack_14 * _DAT_01cb0640;
    puStack_14 = (uint *)core_motion_cpp_FUN_005038a0(puVar14,0x14);
    fStack_20 = 0.0 - (float)puStack_14 * _DAT_005f7368;
    puStack_14 = (uint *)core_motion_cpp_FUN_005038a0(puVar14,0x15);
    fStack_20 = (float)puStack_14 * _DAT_005f7368 + fStack_20;
    core_charactr_cpp_FUN_0042b2a0(param_1,param_2);
  }
  fStack_20 = fStack_20 * param_2;
  iVar4 = *(int *)&param_1->field_0x25614;
  *(float *)&param_1->field_0x2594 = *(float *)&param_1->field_0x2594 * param_2;
  if (iVar4 == 0) {
    if (*(int *)&param_1->field_0x276c != 0) {
      if (*(int *)&param_1->field_0x2770 == 0) {
        core_actor_cpp_FUN_00408de0(param_1,*(int *)&param_1->field_0x276c + 0x20);
        afStack_84[0] = (float)uStack_24c;
        afStack_c8[(uint)bVar10 * -2 + 0x12] = afStack_290[(uint)bVar10 * -2 + 0x12];
        afStack_c8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13] =
             afStack_290[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13];
        core_vecdir_cpp_FUN_005838f0(afStack_c8 + 0x11);
        uStack_27c = uStack_180;
        afStack_290[(uint)bVar10 * -2 + 6] = afStack_1a0[(uint)bVar10 * -2 + 9];
        afStack_290[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
             afStack_1a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
        puStack_14 = (uint *)core_actor_cpp_FUN_0040d0c0(uStack_278);
        fStack_1c = (float)puStack_14;
        if ((float)puStack_14 < _DAT_005d6f87) {
          fStack_1c = (float)puStack_14 + _DAT_005d6f83;
        }
        if (_DAT_005d6f8b < fStack_1c) {
          fStack_1c = fStack_1c + _DAT_005d6f8f;
        }
        fStack_2c = param_2 * _DAT_005d6f83;
        fStack_4c = -fStack_2c;
        if (fStack_1c < fStack_4c) {
          fStack_1c = fStack_4c;
        }
        if (fStack_2c < fStack_1c) {
          fStack_1c = fStack_2c;
        }
        *(float *)&param_1->field_0x34 = *(float *)&param_1->field_0x34 + fStack_1c;
        core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0((CDemonActor *)param_1);
      }
      iStack_30 = *(int *)&param_1->field_0x276c;
      puStack_14 = *(uint **)(iStack_30 + 0x2b0);
      pCStack_54 = (CMotionController *)&param_1->field_0x2b4;
      core_skeleton_cpp_FUN_00546a90(pCStack_54,0);
      puVar5 = puStack_14;
      iVar4 = iStack_30;
      pfVar7 = afStack_1a0 + 0x17;
      afStack_144[0] = (float)uStack_210;
      afStack_1a0[(uint)bVar10 * -2 + 0x18] = afStack_290[(uint)bVar10 * -2 + 0x21];
      pCVar11 = param_1;
      afStack_1a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x19] =
           afStack_290[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x22];
      iVar4 = (*(code *)puVar5[0x46])(iVar4,pCVar11,pfVar7);
      if (iVar4 == 0) {
        *(uint *)&param_1->field_0x276c = 0;
      }
      else if (*(int *)&param_1->field_0x276c != 0) {
        if (*(int *)&param_1->field_0x10a74 != 0) {
          iVar4 = 7;
          this_ptr_00 = pCStack_54;
          goto LAB_004ad9df;
        }
        goto LAB_004ad9e7;
      }
      goto LAB_004ad9d8;
    }
    iVar6 = *(int *)&param_1->field_0x2560c;
    if (iVar6 == 0) {
      iVar4 = core_charactr_cpp_FUN_004287f0((CCharacter *)param_1,param_2);
      this_ptr_00 = (CMotionController *)&param_1->field_0x2b4;
      if (iVar4 == 0) {
        if (uStack_18 == 0) {
          iVar4 = core_motion_cpp_FUN_005035c0(this_ptr_00);
          uVar2 = *(uint *)(iVar4 + 0x24);
          if (uVar2 < 0xe) {
            if ((((uVar2 == 0) || (uVar2 < 2)) || (uVar2 < 3)) || (uVar2 == 3)) goto LAB_004ae449;
          }
          else if (uVar2 < 0xf) {
            this_ptr = (CAmmoBox *)
                       core_actor_cpp_castToClassHash_FUN_0040c8f0
                                 (*(uint *)&param_1->field_0x25608,
                                  g_CAmmoBoxClassInfo.name_hash);
            if (this_ptr != (CAmmoBox *)0x0) {
              puStack_14 = (uint *)core_motion_cpp_FUN_00503e60(this_ptr_00);
              core_ammobox_cpp_FUN_0040e600(this_ptr,(float)puStack_14);
            }
          }
          else if (uVar2 < 0x11) {
            if (uVar2 == 0x10) {
LAB_004ae449:
              if (*(int *)&param_1->field_0x2570 != 0) {
                iVar4 = 0;
                if (*(int *)&param_1->field_0x10a68 != 0) {
                  if (*(int *)&param_1->field_0x10a70 == 0) {
                    iVar4 = 1;
                  }
                  else {
                    iVar4 = 2;
                  }
                }
                if (*(int *)&param_1->field_0x10a6c != 0) {
                  iVar4 = 3;
                }
                *(float *)&param_1->field_0x2578 =
                     *(float *)&param_1->field_0x10a90 * *(float *)&param_1->field_0x2598;
                *(float *)&param_1->field_0x2584 =
                     *(float *)&param_1->field_0x2594 + *(float *)&param_1->field_0x2584;
                *(float *)&param_1->field_0x257c = *(float *)&param_1->field_0x257c + fStack_20;
                iVar6 = core_motion_cpp_FUN_005035c0(&param_1->field_0x2b4);
                if (iVar4 != *(int *)(iVar6 + 0x24)) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                            ((CMotionController *)&param_1->field_0x2b4,iVar4,1);
                }
                if ((*(int *)&param_1->field_0x10a78 != 0) &&
                   (iVar4 = core_gabriela_cpp_FUN_004b05b0(param_1), iVar4 == 0)) {
                  core_gabriela_cpp_FUN_004b0f70(param_1);
                }
              }
            }
          }
          else if ((uVar2 < 0x12) || ((0x13 < uVar2 && ((uVar2 < 0x15 || (uVar2 == 0x15))))))
          goto LAB_004ae449;
        }
        goto LAB_004ad9e7;
      }
      uVar2 = *(uint *)&param_1->field_0x27ac;
      if (uVar2 < 2) {
        if (uVar2 != 1) goto LAB_004ad9d8;
        iVar4 = 1;
      }
      else {
        if (2 < uVar2) {
          if (uVar2 == 3) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(this_ptr_00,0,1);
            engine_console_cpp_FUN_00436710
                      (g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
            goto LAB_004ad9e7;
          }
          goto LAB_004ad9d8;
        }
        iVar4 = 2;
      }
      goto LAB_004ad9df;
    }
    iStack_58 = iVar4;
    if (*(int *)&param_1->field_0x10a74 != 0) {
      (**(code **)(*(int *)(iVar6 + 0x2b0) + 0x24))(iVar6);
      pfVar7 = afStack_2c4;
      pfVar8 = &fStack_2dc;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pfVar8 = *pfVar7;
        pfVar7 = pfVar7 + (uint)bVar10 * -2 + 1;
        pfVar8 = pfVar8 + (uint)bVar10 * -2 + 1;
      }
      fStack_204 = fStack_2dc + fStack_2d0;
      fStack_200 = fStack_2d8 + fStack_2cc;
      fStack_1fc = fStack_2d4 + fStack_2c8;
      fStack_90 = fStack_2dc + fStack_2d0;
      afStack_c8[(uint)bVar10 * -2 + 0xf] = afStack_290[(uint)bVar10 * -2 + 0x24];
      afStack_c8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10] =
           afStack_290[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x25];
      fStack_240 = fStack_90 * _DAT_005d6f67;
      fStack_23c = fStack_8c * _DAT_005d6f67;
      fStack_238 = fStack_88 * _DAT_005d6f67;
      afStack_1d4[0] = fStack_90 * _DAT_005d6f67;
      afStack_290[(uint)bVar10 * -2 + 0x30] = afStack_290[(uint)bVar10 * -2 + 0x15];
      afStack_290[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x31] =
           afStack_290[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x16];
      core_actor_cpp_FUN_00408d70(*(uint *)&param_1->field_0x2560c,afStack_290 + 0x2f);
      pfVar7 = afStack_290 + 0x2c;
      afStack_1e0[0] = (float)uStack_228;
      afStack_290[(uint)bVar10 * -2 + 0x2d] = afStack_290[(uint)bVar10 * -2 + 0x1b];
      afStack_290[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x2e] =
           afStack_290[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1c];
      core_actor_cpp_FUN_00408de0(param_1,pfVar7);
      uStack_1bc = uStack_168;
      afStack_1b8[(uint)bVar10 * -2] = afStack_1a0[(uint)bVar10 * -2 + 0xf];
      afStack_1b8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           afStack_1a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10];
      core_vecdir_cpp_FUN_005838f0(&uStack_1bc);
      afStack_1a0[2] = (float)uStack_264;
      afStack_1a0[(uint)bVar10 * -2 + 3] = afStack_290[(uint)bVar10 * -2 + 0xc];
      afStack_1a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
           afStack_290[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd];
      puVar5 = (uint *)core_actor_cpp_FUN_0040d0c0(afStack_1a0[3]);
      fStack_1f8 = fStack_2d0 - fStack_2dc;
      fStack_1f4 = fStack_2cc - fStack_2d8;
      fStack_1f0 = fStack_2c8 - fStack_2d4;
      fStack_fc = fStack_2d0 - fStack_2dc;
      afStack_1a0[(uint)bVar10 * -2 + 0x2a] = afStack_290[(uint)bVar10 * -2 + 0x27];
      afStack_1a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x2b] =
           afStack_290[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x28];
      fStack_21c = fStack_fc * _DAT_005d6f67;
      fStack_218 = fStack_f8 * _DAT_005d6f67;
      fStack_214 = fStack_f4 * _DAT_005d6f67;
      fStack_9c = fStack_fc * _DAT_005d6f67;
      afStack_c8[(uint)bVar10 * -2 + 0xc] = afStack_290[(uint)bVar10 * -2 + 0x1e];
      afStack_c8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
           afStack_290[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1f];
      uStack_98 = 0;
      puStack_24 = puVar5;
      puStack_14 = puVar5;
      if ((((afStack_1b8[1] - SQRT(fStack_94 * fStack_94 + fStack_9c * fStack_9c) <
             (float)_DAT_005d6f6b) && (dStack_6c = (double)afStack_1b8[0], 1.0 < dStack_6c)) &&
          (dStack_6c < _DAT_005d6f73)) && (ABS((float)puVar5) < (float)_DAT_005d6f7b)) {
        puStack_28 = (uint *)(param_2 * _DAT_005d6f83);
        if ((float)puVar5 < -(float)puStack_28) {
          puStack_24 = (uint *)-(float)puStack_28;
        }
        if ((float)puStack_28 < (float)puStack_24) {
          puStack_24 = puStack_28;
        }
        *(float *)&param_1->field_0x34 = *(float *)&param_1->field_0x34 + (float)puStack_24;
        goto LAB_004ad9e7;
      }
    }
    if (iStack_58 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&param_1->field_0x2b4,0,1);
      core_hero_cpp_FUN_004cf830((CHero *)param_1);
    }
  }
  else {
    core_actor_cpp_FUN_00408d70(iVar4,iVar4 + 0x430);
    uStack_120 = uStack_1a4;
    afStack_1a0[(uint)bVar10 * -2 + 0x21] = afStack_1a0[(uint)bVar10 * -2];
    afStack_1a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x22] =
         afStack_1a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    if (*(float *)&param_1->field_0x24 <= fStack_11c) goto LAB_004ad9e7;
    *(uint *)&param_1->field_0x25614 = 0;
    CStack_d8._0_4_ = 0;
    CStack_d8._8_4_ = 0x40800000;
    CStack_d8._4_4_ = 0x3f000000;
    core_actor_cpp_FUN_00408cf0(param_1,&CStack_d8);
    fStack_114 = afStack_c8[2];
    afStack_1a0[(uint)bVar10 * -2 + 0x24] = afStack_c8[(uint)bVar10 * -2 + 3];
    afStack_1a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x25] =
         afStack_c8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
    *(float *)&param_1->field_0x20 = fStack_114 + *(float *)&param_1->field_0x20;
    *(float *)&param_1->field_0x24 = fStack_110 + *(float *)&param_1->field_0x24;
    *(float *)&param_1->field_0x28 = fStack_10c + *(float *)&param_1->field_0x28;
    puStack_14 = (uint *)
                 (**(code **)(*(int *)&param_1->field_0x2b0 + 0x48))
                           (param_1,*(uint *)&param_1->field_0x3430,0);
    *(uint **)&param_1->field_0x2574 = puStack_14;
    *(uint *)&param_1->field_0x2570 =
         (uint)(*(float *)&param_1->field_0x24 <
               *(float *)&param_1->field_0x2574 + (float)_DAT_005d6f93);
LAB_004ad9d8:
    iVar4 = 0;
    this_ptr_00 = (CMotionController *)&param_1->field_0x2b4;
LAB_004ad9df:
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(this_ptr_00,iVar4,1);
  }
LAB_004ad9e7:
  if (*(int *)&param_1->field_0x25614 == 0) {
    if (((uStack_18 == 0) ||
        (iVar4 = core_motion_cpp_FUN_005035c0(&param_1->field_0x2b4), *(int *)(iVar4 + 0x24) == 0xd)
        ) || (*(int *)&param_1->field_0xdc != 0)) {
      puVar14 = &param_1->field_0x2b4;
      pfVar7 = (float *)((int)param_1 + (uint)bVar10 * -8 + 0x2580);
      fStack_cc = *(float *)&param_1->field_0x257c;
      afStack_c8[(uint)bVar10 * -2] = *pfVar7;
      afStack_c8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] = pfVar7[(uint)bVar10 * -2 + 1];
      iVar4 = core_motion_cpp_FUN_005035c0(puVar14);
      uVar2 = *(uint *)(iVar4 + 0x24);
      if (uVar2 < 3) {
        if (uVar2 == 0) {
          bVar9 = true;
LAB_004ae5e2:
          if (!bVar9) {
LAB_004ae5e4:
            fStack_cc = fStack_cc + *(float *)&param_1->field_0x2508;
            afStack_c8[0] = afStack_c8[0] + *(float *)&param_1->field_0x250c;
            afStack_c8[1] = afStack_c8[1] + *(float *)&param_1->field_0x2510;
          }
        }
      }
      else if (3 < uVar2) {
        if (uVar2 < 0x11) {
          bVar9 = uVar2 == 0x10;
          goto LAB_004ae5e2;
        }
        if (0x11 < uVar2) {
          if (uVar2 < 0x14) goto LAB_004ae5e4;
          if (0x14 < uVar2) {
            bVar9 = uVar2 == 0x15;
            goto LAB_004ae5e2;
          }
        }
      }
      core_charactr_cpp_FUN_00423a10(param_1,param_2);
      fStack_2ac = *(float *)&param_1->field_0x2588 * param_2;
      pCVar13 = (CVector3f *)&fStack_cc;
      afStack_2a8[0] = *(float *)&param_1->field_0x258c * param_2;
      afStack_2a8[1] = *(float *)&param_1->field_0x2590 * param_2;
      fStack_138 = fStack_2ac;
      afStack_1a0[(uint)bVar10 * -2 + 0x1b] = afStack_2a8[(uint)bVar10 * -2];
      afStack_1a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1c] =
           afStack_2a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      fStack_cc = fStack_cc + fStack_138;
      afStack_c8[0] = afStack_c8[0] + fStack_134;
      afStack_c8[1] = afStack_c8[1] + fStack_130;
      core_charactr_cpp_FUN_00423a60((CCharacter *)param_1,pCVar13);
    }
  }
  else {
    puStack_14 = (uint *)&param_1->field_0x2508;
    core_actor_cpp_FUN_00408cf0(param_1,puStack_14);
    fStack_15c = fStack_b4;
    afStack_1a0[(uint)bVar10 * -2 + 0x12] = afStack_c8[(uint)bVar10 * -2 + 6];
    afStack_1a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13] =
         afStack_c8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
    *(float *)&param_1->field_0x20 = *(float *)&param_1->field_0x20 + fStack_15c;
    *(float *)&param_1->field_0x24 = *(float *)&param_1->field_0x24 + fStack_158;
    *(float *)&param_1->field_0x28 = *(float *)&param_1->field_0x28 + fStack_154;
    puStack_14[2] = 0;
    puStack_14[1] = puStack_14[2];
    *puStack_14 = puStack_14[1];
  }
  uVar2 = uStack_18;
  core_charactr_cpp_FUN_00424470((CCharacter *)param_1);
  if (((uVar2 == 0) && (*(int *)&param_1->field_0x10a80 != 0)) &&
     (*(int *)(&param_1->field_0x2498c + *(int *)&param_1->field_0x247e4 * 4) != 0)) {
    bVar1 = param_1->field_0x25640;
    if ((bVar1 & 3) == 0) {
      param_1->field_0x25640 = bVar1 | 2;
    }
    else {
      param_1->field_0x25640 = bVar1 & 0xfc;
    }
  }
  iVar4 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                    (*(uint *)&param_1->field_0x2620,DAT_007bcc84);
  if (iVar4 != 0) {
    if (((*(int *)&param_1->field_0x10a7c != 0) && (uStack_18 == 0)) &&
       (*(uint *)(iVar4 + 0x248c) = (uint)(*(int *)(iVar4 + 0x248c) == 0),
       *(int *)(iVar4 + 0x7d4) == 1)) {
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1,"flashlit.wav");
    }
    if (*(int *)(iVar4 + 0x248c) != 0) {
      *(float *)&param_1->field_0x25654 =
           *(float *)&param_1->field_0x10a94 * _DAT_005d6f83 * (float)_DAT_005d6f9b * param_2 +
           *(float *)&param_1->field_0x25654;
      fStack_44 = (float)core_gabriela_cpp_FUN_004af900(param_1);
      puStack_14 = (uint *)fStack_44;
      puStack_48 = (uint *)core_gabriela_cpp_FUN_004af950(param_1);
      if (*(float *)&param_1->field_0x25654 < fStack_44) {
        *(float *)&param_1->field_0x25654 = fStack_44;
      }
      puStack_14 = puStack_48;
      if ((float)puStack_48 < *(float *)&param_1->field_0x25654) {
        *(uint **)&param_1->field_0x25654 = puStack_48;
      }
    }
  }
  if ((param_1->field_0x25640 & 1) == 0) {
    fVar3 = *(float *)&param_1->field_0x25644 - param_2 / _DAT_005f732c;
    *(float *)&param_1->field_0x25644 = fVar3;
    if (fVar3 < 0.0) {
      *(uint *)&param_1->field_0x25644 = 0;
    }
  }
  else {
    fVar3 = param_2 / _DAT_005f7328 + *(float *)&param_1->field_0x25644;
    *(float *)&param_1->field_0x25644 = fVar3;
    if (1.0 < fVar3) {
      *(uint *)&param_1->field_0x25644 = 0x3f800000;
    }
  }
  if ((param_1->field_0x25640 & 2) == 0) {
    fStack_34 = *(float *)&param_1->field_0x25648;
    fVar3 = fStack_34 - param_2 / _DAT_005f732c;
    *(float *)&param_1->field_0x25648 = fVar3;
    if (fVar3 < 0.0) {
      *(uint *)&param_1->field_0x25648 = 0;
    }
    fStack_40 = _DAT_005f7334 + (float)_DAT_005d6fa3;
    if ((fStack_40 <= fStack_34) && (*(float *)&param_1->field_0x25648 < fStack_40)) {
      pcVar12 = "undraw-s.wav @ .7";
      goto LAB_004adbdc;
    }
  }
  else {
    fStack_3c = *(float *)&param_1->field_0x25648;
    fVar3 = param_2 / _DAT_005f7328 + fStack_3c;
    *(float *)&param_1->field_0x25648 = fVar3;
    if (1.0 < fVar3) {
      *(uint *)&param_1->field_0x25648 = 0x3f800000;
    }
    fStack_50 = _DAT_005f7334 + (float)_DAT_005d6fab;
    if ((fStack_3c <= fStack_50) && (fStack_50 < *(float *)&param_1->field_0x25648)) {
      core_game_cpp_FUN_004bb890(g_CGamePtr);
      pcVar12 = "draw-f.wav @ 1.5";
LAB_004adbdc:
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1,pcVar12);
    }
  }
  if ((param_1->field_0x25640 & 3) == 0) {
    fVar3 = *(float *)&param_1->field_0x2564c - param_2 / _DAT_005f732c;
    *(float *)&param_1->field_0x2564c = fVar3;
    if (fVar3 < 0.0) {
      *(uint *)&param_1->field_0x2564c = 0;
    }
  }
  else {
    fVar3 = param_2 / _DAT_005f7328 + *(float *)&param_1->field_0x2564c;
    *(float *)&param_1->field_0x2564c = fVar3;
    if (1.0 < fVar3) {
      *(uint *)&param_1->field_0x2564c = 0x3f800000;
    }
  }
  if (uStack_18 == 0) {
    if (((iVar4 == 0) || (*(int *)(iVar4 + 0x248c) == 0)) ||
       (iVar4 = core_motion_cpp_FUN_005035c0(&param_1->field_0x2b4), *(int *)(iVar4 + 0x24) == 5)) {
      fVar3 = param_2 / _DAT_005f732c;
      goto LAB_004adc3d;
    }
    fVar3 = param_2 / _DAT_005f7328 + *(float *)&param_1->field_0x25650;
  }
  else {
    fVar3 = (param_2 / _DAT_005f732c) * (float)_DAT_005d6f6b;
LAB_004adc3d:
    fVar3 = *(float *)&param_1->field_0x25650 - fVar3;
  }
  uVar2 = uStack_18;
  *(float *)&param_1->field_0x25650 = fVar3;
  if (*(float *)&param_1->field_0x25650 < 0.0) {
    *(uint *)&param_1->field_0x25650 = 0;
  }
  if ((float)_DAT_005d6fb3 < *(float *)&param_1->field_0x25650) {
    *(uint *)&param_1->field_0x25650 = 0x3f666666;
  }
  core_gabriela_cpp_FUN_004b1530(param_1,param_2,uStack_18);
  fVar3 = *(float *)&param_1->field_0x25678 - param_2 / _DAT_005f733c;
  *(float *)&param_1->field_0x25678 = fVar3;
  if (((fVar3 <= 0.0) && (*(uint *)&param_1->field_0x25678 = 0, uVar2 == 0)) &&
     ((*(int *)&param_1->field_0x10a74 != 0 && (*(int *)&param_1->field_0x25658 == 0)))) {
    if (*(int *)&param_1->field_0x25640 == 0) {
      if ((*(float *)&param_1->field_0x25648 <= 0.0) &&
         (iVar4 = core_hero_cpp_FUN_004cec50(param_1), iVar4 == 0)) {
        iVar4 = core_hero_cpp_FUN_004cf030(param_1,0);
        switch(iVar4) {
        case 0:
        case 1:
          break;
        case 2:
        case 3:
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&param_1->field_0x2b4,0x12,1);
          break;
        default:
          core_hero_cpp_FUN_004cf230((CHero *)param_1);
        }
        if ((iVar4 == 0) &&
           (iVar4 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004cee90((CHero *)param_1),
           iVar4 == 0)) {
          iVar4 = core_hero_cpp_FUN_004cf4e0(param_1);
          if (iVar4 == 0) {
            iVar4 = core_hero_cpp_FUN_004cf2b0((CHero *)param_1);
            if (iVar4 == 0) {
              core_gabriela_cpp_FUN_004b0a90(param_1);
            }
            else {
              core_hero_cpp_FUN_004cf440(param_1);
            }
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)&param_1->field_0x2b4,0xd,1);
          }
        }
      }
    }
    else {
      *(uint *)&param_1->field_0x25658 = 3;
    }
  }
  uVar2 = uStack_18;
  core_gabriela_cpp_FUN_004afa20(param_1);
  core_gabriela_cpp_FUN_004b1e00(param_1,param_2,(uint)(uVar2 == 0));
  core_charactr_cpp_FUN_00429e90((CCharacter *)param_1,param_2);
  puStack_14 = (uint *)core_motion_cpp_FUN_005038a0(&param_1->field_0x2b4,0xd);
  if ((float)puStack_14 <= 0.0) {
    core_hero_cpp_FUN_004cf830((CHero *)param_1);
  }
  else {
    puStack_14 = (uint *)
                 core_motion_cpp_FUN_00503e60((CMotionController *)&param_1->field_0x2b4);
    if ((1.0 < (float)puStack_14) &&
       (pCStack_38 = (CBoxActor *)
                     core_actor_cpp_castToClassHash_FUN_0040c8f0
                               (*(uint *)&param_1->field_0x2560c,
                                g_CBoxActorClassInfo.name_hash), pCStack_38 != (CBoxActor *)0x0)) {
      core_gabriela_cpp_FUN_004af960(param_1);
      pfVar7 = afStack_2a8 + 2;
      afStack_2a8[2] = (float)uStack_270;
      afStack_2a8[(uint)bVar10 * -2 + 3] = afStack_290[(uint)bVar10 * -2 + 9];
      afStack_2a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
           afStack_290[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
      core_actor_cpp_FUN_00408d70(param_1,pfVar7);
      pCVar13 = &CStack_f0;
      fStack_1ec = fStack_108;
      afStack_290[(uint)bVar10 * -2 + 0x2a] = afStack_1a0[(uint)bVar10 * -2 + 0x27];
      afStack_290[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x2b] =
           afStack_1a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x28];
      fStack_150 = fStack_1ec - fStack_294;
      fStack_14c = fStack_1e8 - afStack_290[0];
      fStack_148 = fStack_1e4 - afStack_290[1];
      CStack_f0._0_4_ = fStack_1ec - fStack_294;
      *(float *)((int)&CStack_f0 + ((uint)bVar10 * -2 + 1) * 4) =
           afStack_1a0[(uint)bVar10 * -2 + 0x15];
      *(float *)((int)&CStack_f0 + ((uint)bVar10 * -2 + (uint)bVar10 * -2 + 2) * 4) =
           afStack_1a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x16];
      CStack_f0._4_4_ = 0;
      core_actor_cpp_FUN_00408d30(param_1,pCVar13);
      uStack_174 = uStack_a8;
      afStack_1a0[(uint)bVar10 * -2 + 0xc] = afStack_c8[(uint)bVar10 * -2 + 9];
      afStack_1a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
           afStack_c8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
      if (0.0 < fStack_16c) {
        core_boxactor_cpp_FUN_0041cb40(pCStack_38,(CVector3f *)&fStack_294,&CStack_f0);
      }
    }
  }
  core_gabriela_cpp_FUN_004b0210(param_1,param_2);
  if (*(int *)&param_1->field_0x25658 == 3) {
    iStack_5c = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          (*(uint *)
                            (&param_1->field_0x2498c + *(int *)&param_1->field_0x247e4 * 4),
                           g_CDynamiteClassInfo.name_hash);
    if (iStack_5c != 0) {
      if (*(int *)&param_1->field_0x10a74 == 0) {
        *(uint *)&param_1->field_0x25658 = 2;
      }
      else {
        fVar3 = param_2 * (float)_DAT_005d6fbb + *(float *)&param_1->field_0x601b0;
        *(float *)&param_1->field_0x601b0 = fVar3;
        if (0x42700000 < fVar3) {
          *(uint *)&param_1->field_0x10a74 = 0;
          *(uint *)&param_1->field_0x25658 = 2;
          *(float *)&param_1->field_0x601b0 = 0x42700000;
        }
      }
      CStack_1c8._0_4_ = *(uint *)&param_1->field_0x25670;
      CStack_1c8._8_4_ = 0;
      CStack_1c8._4_4_ = 0;
      core_dirmat_cpp_FUN_00449280(aCStack_304,&CStack_1c8);
      afStack_1b8[4] = *(float *)&param_1->field_0x601b0;
      afStack_1b8[2] = 0.0;
      afStack_1b8[3] = 0.0;
      core_dirmat_cpp_FUN_00449530(aCStack_304,afStack_1b8 + 2);
      puVar5 = &uStack_e4;
      uStack_e4 = uStack_12c;
      *(float *)((int)afStack_e0 + (uint)bVar10 * -8) = afStack_1a0[(uint)bVar10 * -2 + 0x1e];
      *(float *)((int)afStack_e0 + ((uint)bVar10 * -2 + (uint)bVar10 * -2 + 1) * 4) =
           afStack_1a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1f];
      core_actor_cpp_FUN_00408cf0(param_1,puVar5);
      fStack_18c = fStack_78;
      afStack_1a0[(uint)bVar10 * -2 + 6] = afStack_c8[(uint)bVar10 * -2 + 0x15];
      afStack_1a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
           afStack_c8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x16];
      if ((float *)(iStack_5c + 0x6d8) != afStack_1a0 + 5) {
        *(float *)(iStack_5c + 0x6d8) = fStack_18c;
        *(uint *)(iStack_5c + 0x6dc) = uStack_188;
        *(uint *)(iStack_5c + 0x6e0) = uStack_184;
      }
      goto LAB_004aeab5;
    }
    *(uint *)&param_1->field_0x25658 = 2;
LAB_004ade7e:
    *(uint *)&param_1->field_0x601b0 = _DAT_005f736c;
    iVar4 = core_gabriela_cpp_FUN_004b0e80(param_1);
    if (iVar4 == 0) goto LAB_004aeac2;
    *(uint *)&param_1->field_0x25658 = 1;
  }
  else {
LAB_004aeab5:
    if (*(int *)&param_1->field_0x25658 == 2) goto LAB_004ade7e;
LAB_004aeac2:
    if (*(int *)&param_1->field_0x25658 != 1) goto LAB_004aded9;
  }
  *(uint *)&param_1->field_0x25658 = 0;
  core_gabriela_cpp_FUN_004b0ef0(param_1);
  if (*(int *)(*(int *)(&param_1->field_0x2498c + *(int *)&param_1->field_0x247e4 * 4) + 0x448) == 0
     ) {
    *(uint *)&param_1->field_0x10a74 = 0;
  }
LAB_004aded9:
  iVar4 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x114))(param_1);
  if (iVar4 != 2) {
    core_cloth_cpp_CCloth_process_FUN_005afdf0
              ((CCloth *)&param_1->field_0x25680,(CVector3f *)&param_1->field_0x20,
               (CVector3f *)&param_1->field_0x30,param_2,*(float *)&param_1->field_0x2574,
               (CDeformableModelInstance *)&param_1->field_0x2b4);
  }
  (**(code **)(*(int *)(*(int *)(&param_1->field_0x2498c + *(int *)&param_1->field_0x247e4 * 4) +
                       0x2b0) + 0x14))
            (*(int *)(&param_1->field_0x2498c + *(int *)&param_1->field_0x247e4 * 4),param_2);
  if (*(int *)(*(int *)(&param_1->field_0x2498c + *(int *)&param_1->field_0x247e4 * 4) + 0xfc) == 0)
  {
    return;
  }
  *(uint *)&param_1->field_0xfc = 1;
  return;
}
