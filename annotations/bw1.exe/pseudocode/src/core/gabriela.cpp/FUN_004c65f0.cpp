// Name: core_gabriela.cpp_FUN_004c65f0
// Address: 004c65f0
// Address Range: [[004c65f0, 004c7a95]]
// Convention: unknown
// Signature: void core_gabriela_cpp_FUN_004c65f0(CGabriella *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_gabriela_cpp_FUN_004c65f0(CGabriella *param_1,float param_2)

{
  byte *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  int iVar6;
  uint *puVar7;
  CAmmoBox *this_ptr;
  SMotion *pSVar8;
  float *pfVar9;
  float *pfVar10;
  bool bVar11;
  byte bVar12;
  float afStackY_1294 [990];
  CMotionController *pCVar13;
  CGabriella *pCVar14;
  char *pcVar15;
  CVector3f *pCVar16;
  CMatrix3x3f aCStack_304 [40];
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float afStack_2c4 [6];
  float fStack_2ac;
  float afStack_2a8 [2];
  byte auStack_2a0 [4];
  float afStack_29c [5];
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float afStack_278 [5];
  uint uStack_264;
  float afStack_258 [3];
  float fStack_24c;
  uint uStack_240;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  uint uStack_210;
  uint uStack_204;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  CVector3f CStack_1ec;
  float fStack_1e0;
  float afStack_1dc [5];
  float afStack_1c8 [3];
  float afStack_1bc [3];
  float fStack_1b0;
  float afStack_1ac [4];
  float fStack_19c;
  float afStack_198 [3];
  uint uStack_18c;
  uint uStack_188;
  CVector3f CStack_180;
  uint uStack_174;
  uint uStack_168;
  uint uStack_15c;
  uint uStack_150;
  float afStack_144 [3];
  float afStack_138 [3];
  uint uStack_12c;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  uint uStack_114;
  float fStack_110;
  uint uStack_108;
  float fStack_fc;
  uint uStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float afStack_d8 [4];
  float afStack_c8 [5];
  uint uStack_b4;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  CVector3f CStack_9c;
  float fStack_90;
  float afStack_8c [2];
  CVector3f CStack_84;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  double dStack_6c;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  float fStack_50;
  CBoxActor *pCStack_4c;
  uint *puStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  CMotionController *pCStack_34;
  float fStack_30;
  uint *puStack_2c;
  uint *puStack_28;
  float fStack_24;
  float fStack_20;
  uint uStack_1c;
  float fStack_18;
  uint *puStack_14;
  
  bVar12 = 0;
  iVar6 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0((CCharacter *)param_1,param_2);
  if (iVar6 == 0) {
    return;
  }
  if (*(int *)&param_1->field_0xc1d4 == 2) {
    core_gabriela_cpp_FUN_004c7aa0(param_1,param_2);
  }
  fVar5 = *(float *)&param_1->field_0xc1d0 - param_2;
  *(float *)&param_1->field_0xc1d0 = fVar5;
  if (fVar5 < 0.0) {
    *(uint *)&param_1->field_0xc1d0 = 0;
  }
  core_gabriela_cpp_FUN_004c8900(param_1);
  pfVar9 = afStack_1ac + 0x1d;
  afStack_138[0] = (float)uStack_264;
  afStack_1ac[(uint)bVar12 * -2 + 0x1e] = afStack_278[(uint)bVar12 * -2 + 6];
  afStack_1ac[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x1f] =
       afStack_278[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7];
  core_actor_cpp_FUN_00408b40(param_1,pfVar9);
  fStack_27c = fStack_228;
  afStack_278[(uint)bVar12 * -2] = afStack_278[(uint)bVar12 * -2 + 0x15];
  afStack_278[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
       afStack_278[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x16];
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  core_gabriela_cpp_FUN_004c83b0(param_1,param_2);
  uStack_1c = (uint)(*(float *)&param_1->field_0x2538 <= 0.0);
  if (*(int *)&param_1->field_0x26fc != 0) {
    uStack_1c = 1;
  }
  if (*(int *)&param_1->field_0x1ff7c != 0) {
    uStack_1c = 1;
  }
  if (*(int *)&param_1->field_0x1ff84 != 0) {
    uStack_1c = 1;
  }
  puStack_14 = (uint *)core_motion_cpp_FUN_00524a40(&param_1->field_0x158,8);
  if (0.0 < (float)puStack_14) {
    uStack_1c = 1;
  }
  puStack_14 = (uint *)core_motion_cpp_FUN_00524a40(&param_1->field_0x158,0xb);
  if (0.0 < (float)puStack_14) {
    uStack_1c = 1;
  }
  puStack_14 = (uint *)core_motion_cpp_FUN_00524a40(&param_1->field_0x158,0xc);
  if (0.0 < (float)puStack_14) {
    uStack_1c = 1;
  }
  puStack_14 = (uint *)core_motion_cpp_FUN_00524a40(&param_1->field_0x158,0x12);
  if (0.0 < (float)puStack_14) {
    uStack_1c = 1;
  }
  *(uint *)&param_1->field_0x2528 = 0;
  *(uint *)&param_1->field_0x2524 = 0;
  fStack_24 = 0.0;
  if (*(int *)&param_1->field_0x2500 != 0) {
    puVar1 = &param_1->field_0x158;
    puStack_14 = (uint *)core_motion_cpp_FUN_00524a40(puVar1,1);
    *(float *)&param_1->field_0x2524 =
         (float)puStack_14 * _DAT_01cc90c8 + *(float *)&param_1->field_0x2524;
    puStack_14 = (uint *)core_motion_cpp_FUN_00524a40(puVar1,2);
    *(float *)&param_1->field_0x2524 =
         (float)puStack_14 * _DAT_01cc90cc + *(float *)&param_1->field_0x2524;
    puStack_14 = (uint *)core_motion_cpp_FUN_00524a40(puVar1,3);
    *(float *)&param_1->field_0x2524 =
         *(float *)&param_1->field_0x2524 - (float)puStack_14 * _DAT_01cc90d0;
    puStack_14 = (uint *)core_motion_cpp_FUN_00524a40(puVar1,0x14);
    fStack_24 = 0.0 - (float)puStack_14 * _DAT_00600d88;
    puStack_14 = (uint *)core_motion_cpp_FUN_00524a40(puVar1,0x15);
    fStack_24 = (float)puStack_14 * _DAT_00600d88 + fStack_24;
    core_charactr_cpp_FUN_00435320(param_1,param_2);
  }
  fStack_24 = fStack_24 * param_2;
  iVar6 = *(int *)&param_1->field_0x1ff84;
  *(float *)&param_1->field_0x2524 = *(float *)&param_1->field_0x2524 * param_2;
  if (iVar6 == 0) {
    if (*(int *)&param_1->field_0x26fc != 0) {
      if (*(int *)&param_1->field_0x2700 == 0) {
        core_actor_cpp_FUN_00408bb0(param_1,*(int *)&param_1->field_0x26fc + 0x20);
        afStack_258[0] = (float)uStack_240;
        afStack_278[(uint)bVar12 * -2 + 9] = afStack_278[(uint)bVar12 * -2 + 0xf];
        afStack_278[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10] =
             afStack_278[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x10];
        core_vecdir_cpp_FUN_005a7520(afStack_278 + 8);
        afStack_278[2] = (float)uStack_174;
        afStack_278[(uint)bVar12 * -2 + 3] = afStack_1ac[(uint)bVar12 * -2 + 0xf];
        afStack_278[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
             afStack_1ac[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x10];
        puStack_14 = (uint *)core_actor_cpp_FUN_0040cd60(afStack_278[3]);
        fStack_20 = (float)puStack_14;
        if ((float)puStack_14 < _DAT_005e1000) {
          fStack_20 = (float)puStack_14 + _DAT_005e0ffc;
        }
        if (_DAT_005e1004 < fStack_20) {
          fStack_20 = fStack_20 + _DAT_005e1008;
        }
        fStack_30 = param_2 * _DAT_005e0ffc;
        fStack_44 = -fStack_30;
        if (fStack_20 < fStack_44) {
          fStack_20 = fStack_44;
        }
        if (fStack_30 < fStack_20) {
          fStack_20 = fStack_30;
        }
        *(float *)&param_1->field_0x34 = *(float *)&param_1->field_0x34 + fStack_20;
        core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0((CDemonActor *)param_1);
      }
      iStack_5c = *(int *)&param_1->field_0x26fc;
      puStack_14 = *(uint **)(iStack_5c + 0x154);
      pCStack_34 = (CMotionController *)&param_1->field_0x158;
      core_skeleton_cpp_FUN_00569130(pCStack_34,0);
      puVar7 = puStack_14;
      iVar6 = iStack_5c;
      pfVar9 = afStack_29c + 2;
      afStack_29c[2] = (float)uStack_b4;
      afStack_29c[(uint)bVar12 * -2 + 3] = afStack_c8[(uint)bVar12 * -2 + 6];
      pCVar14 = param_1;
      afStack_29c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
           afStack_c8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7];
      iVar6 = (*(code *)puVar7[0x44])(iVar6,pCVar14,pfVar9);
      if (iVar6 == 0) {
        *(uint *)&param_1->field_0x26fc = 0;
      }
      else if (*(int *)&param_1->field_0x26fc != 0) {
        if (*(int *)&param_1->field_0xc1e4 != 0) {
          iVar6 = 7;
          pCVar13 = pCStack_34;
          goto LAB_004c698f;
        }
        goto LAB_004c6997;
      }
      goto LAB_004c6988;
    }
    iVar3 = *(int *)&param_1->field_0x1ff7c;
    if (iVar3 == 0) {
      iVar6 = core_charactr_cpp_FUN_00432240((CCharacter *)param_1,param_2);
      pCVar13 = (CMotionController *)&param_1->field_0x158;
      if (iVar6 == 0) {
        if (uStack_1c == 0) {
          pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(pCVar13);
          uVar4 = *(uint *)(pSVar8 + 0x24);
          if (uVar4 < 0xe) {
            if ((((uVar4 == 0) || (uVar4 < 2)) || (uVar4 < 3)) || (uVar4 == 3)) goto LAB_004c73cb;
          }
          else if (uVar4 < 0xf) {
            this_ptr = (CAmmoBox *)
                       core_actor_cpp_castToClassHash_FUN_0040c600
                                 (*(uint *)&param_1->field_0x1ff78,
                                  g_CAmmoBoxClassInfo.name_hash);
            if (this_ptr != (CAmmoBox *)0x0) {
              puStack_14 = (uint *)core_motion_cpp_FUN_00525020(pCVar13);
              core_ammobox_cpp_FUN_0040e1a0(this_ptr,(float)puStack_14);
            }
          }
          else if (uVar4 < 0x11) {
            if (uVar4 == 0x10) {
LAB_004c73cb:
              if (*(int *)&param_1->field_0x2500 != 0) {
                iVar6 = 0;
                if (*(int *)&param_1->field_0xc1d8 != 0) {
                  if (*(int *)&param_1->field_0xc1e0 == 0) {
                    iVar6 = 1;
                  }
                  else {
                    iVar6 = 2;
                  }
                }
                if (*(int *)&param_1->field_0xc1dc != 0) {
                  iVar6 = 3;
                }
                *(float *)&param_1->field_0x2508 =
                     *(float *)&param_1->field_0xc200 * *(float *)&param_1->field_0x2528;
                *(float *)&param_1->field_0x2514 =
                     *(float *)&param_1->field_0x2524 + *(float *)&param_1->field_0x2514;
                *(float *)&param_1->field_0x250c = *(float *)&param_1->field_0x250c + fStack_24;
                pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                                   ((CMotionController *)&param_1->field_0x158);
                if (iVar6 != *(int *)(pSVar8 + 0x24)) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                            ((CMotionController *)&param_1->field_0x158,iVar6,1);
                }
                if ((*(int *)&param_1->field_0xc1e8 != 0) &&
                   (iVar6 = core_gabriela_cpp_FUN_004c9500(param_1), iVar6 == 0)) {
                  core_gabriela_cpp_FUN_004c9eb0(param_1);
                }
              }
            }
          }
          else if ((uVar4 < 0x12) || ((0x13 < uVar4 && ((uVar4 < 0x15 || (uVar4 == 0x15))))))
          goto LAB_004c73cb;
        }
        goto LAB_004c6997;
      }
      uVar4 = *(uint *)&param_1->field_0x273c;
      if (uVar4 < 2) {
        if (uVar4 != 1) goto LAB_004c6988;
        iVar6 = 1;
      }
      else {
        if (2 < uVar4) {
          if (uVar4 == 3) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCVar13,0,1);
            engine_console_cpp_FUN_00445430
                      (g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
            goto LAB_004c6997;
          }
          goto LAB_004c6988;
        }
        iVar6 = 2;
      }
      goto LAB_004c698f;
    }
    iStack_54 = iVar6;
    if (*(int *)&param_1->field_0xc1e4 != 0) {
      (**(code **)(*(int *)(iVar3 + 0x154) + 0x1c))(iVar3);
      pfVar9 = afStack_2c4;
      pfVar10 = &fStack_2dc;
      for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
        *pfVar10 = *pfVar9;
        pfVar9 = pfVar9 + (uint)bVar12 * -2 + 1;
        pfVar10 = pfVar10 + (uint)bVar12 * -2 + 1;
      }
      fStack_f0 = fStack_2dc + fStack_2d0;
      fStack_ec = fStack_2d8 + fStack_2cc;
      fStack_e8 = fStack_2d4 + fStack_2c8;
      fStack_e4 = fStack_2dc + fStack_2d0;
      afStack_1ac[(uint)bVar12 * -2 + 0x33] = afStack_1ac[(uint)bVar12 * -2 + 0x30];
      afStack_1ac[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x34] =
           afStack_1ac[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x31];
      fStack_1f8 = fStack_e4 * _DAT_005e0fe0;
      fStack_1f4 = fStack_e0 * _DAT_005e0fe0;
      fStack_1f0 = fStack_dc * _DAT_005e0fe0;
      afStack_1c8[0] = fStack_e4 * _DAT_005e0fe0;
      afStack_1dc[(uint)bVar12 * -2 + 6] = afStack_278[(uint)bVar12 * -2 + 0x21];
      afStack_1dc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7] =
           afStack_278[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x22];
      core_actor_cpp_FUN_00408b40(*(uint *)&param_1->field_0x1ff7c,afStack_1dc + 5);
      pfVar9 = afStack_1dc + 2;
      afStack_1dc[2] = (float)uStack_168;
      afStack_1dc[(uint)bVar12 * -2 + 3] = afStack_1ac[(uint)bVar12 * -2 + 0x12];
      afStack_1dc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
           afStack_1ac[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x13];
      core_actor_cpp_FUN_00408bb0(param_1,pfVar9);
      afStack_1ac[2] = (float)uStack_210;
      afStack_1ac[(uint)bVar12 * -2 + 3] = afStack_278[(uint)bVar12 * -2 + 0x1b];
      afStack_1ac[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
           afStack_278[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x1c];
      core_vecdir_cpp_FUN_005a7520(afStack_1ac + 2);
      uStack_18c = uStack_204;
      afStack_1ac[(uint)bVar12 * -2 + 9] = afStack_278[(uint)bVar12 * -2 + 0x1e];
      afStack_1ac[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10] =
           afStack_278[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x1f];
      puVar7 = (uint *)core_actor_cpp_FUN_0040cd60(uStack_188);
      fStack_a8 = fStack_2d0 - fStack_2dc;
      fStack_a4 = fStack_2cc - fStack_2d8;
      fStack_a0 = fStack_2c8 - fStack_2d4;
      fStack_90 = fStack_2d0 - fStack_2dc;
      afStack_8c[(uint)bVar12 * -2] = afStack_c8[(uint)bVar12 * -2 + 9];
      afStack_8c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
           afStack_c8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10];
      fStack_120 = fStack_90 * _DAT_005e0fe0;
      fStack_11c = afStack_8c[0] * _DAT_005e0fe0;
      fStack_118 = afStack_8c[1] * _DAT_005e0fe0;
      fStack_fc = fStack_90 * _DAT_005e0fe0;
      afStack_1ac[(uint)bVar12 * -2 + 0x2d] = afStack_1ac[(uint)bVar12 * -2 + 0x24];
      afStack_1ac[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x2e] =
           afStack_1ac[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x25];
      uStack_f8 = 0;
      puStack_28 = puVar7;
      puStack_14 = puVar7;
      if ((((fStack_19c - SQRT(fStack_f4 * fStack_f4 + fStack_fc * fStack_fc) < (float)_DAT_005e0fe4
            ) && (dStack_6c = (double)afStack_1ac[3], 1.0 < dStack_6c)) &&
          (dStack_6c < _DAT_005e0fec)) && (ABS((float)puVar7) < (float)_DAT_005e0ff4)) {
        puStack_2c = (uint *)(param_2 * _DAT_005e0ffc);
        if ((float)puVar7 < -(float)puStack_2c) {
          puStack_28 = (uint *)-(float)puStack_2c;
        }
        if ((float)puStack_2c < (float)puStack_28) {
          puStack_28 = puStack_2c;
        }
        *(float *)&param_1->field_0x34 = *(float *)&param_1->field_0x34 + (float)puStack_28;
        goto LAB_004c6997;
      }
    }
    if (iStack_54 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)&param_1->field_0x158,0,1);
      core_hero_cpp_FUN_004ebbe0((CHero *)param_1);
    }
  }
  else {
    core_actor_cpp_FUN_00408b40(iVar6,iVar6 + 0x2d4);
    uStack_114 = uStack_150;
    afStack_1ac[(uint)bVar12 * -2 + 0x27] = afStack_1ac[(uint)bVar12 * -2 + 0x18];
    afStack_1ac[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x28] =
         afStack_1ac[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x19];
    if (*(float *)&param_1->field_0x24 <= fStack_110) goto LAB_004c6997;
    *(uint *)&param_1->field_0x1ff84 = 0;
    afStack_d8[0] = 0.0;
    afStack_d8[2] = 4.0;
    afStack_d8[1] = 0.5;
    core_actor_cpp_FUN_00408ac0(param_1,afStack_1ac + 0x35);
    fStack_21c = afStack_c8[2];
    afStack_278[(uint)bVar12 * -2 + 0x18] = afStack_c8[(uint)bVar12 * -2 + 3];
    afStack_278[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x19] =
         afStack_c8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
    *(float *)&param_1->field_0x20 = fStack_21c + *(float *)&param_1->field_0x20;
    *(float *)&param_1->field_0x24 = fStack_218 + *(float *)&param_1->field_0x24;
    *(float *)&param_1->field_0x28 = fStack_214 + *(float *)&param_1->field_0x28;
    puStack_14 = (uint *)
                 (**(code **)(*(int *)&param_1->field_0x154 + 0x40))
                           (param_1,*(uint *)&param_1->field_0x2fec,0);
    *(uint **)&param_1->field_0x2504 = puStack_14;
    *(uint *)&param_1->field_0x2500 =
         (uint)(*(float *)&param_1->field_0x24 <
               *(float *)&param_1->field_0x2504 + (float)_DAT_005e100c);
LAB_004c6988:
    iVar6 = 0;
    pCVar13 = (CMotionController *)&param_1->field_0x158;
LAB_004c698f:
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCVar13,iVar6,1);
  }
LAB_004c6997:
  if (*(int *)&param_1->field_0x1ff84 == 0) {
    if (((uStack_1c == 0) ||
        (pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                            ((CMotionController *)&param_1->field_0x158),
        *(int *)(pSVar8 + 0x24) == 0xd)) || (*(int *)&param_1->field_0xdc != 0)) {
      pCVar13 = (CMotionController *)&param_1->field_0x158;
      pfVar9 = (float *)((int)param_1 + (uint)bVar12 * -8 + 0x2510);
      auStack_2a0 = *(byte (*) [4])&param_1->field_0x250c;
      afStack_29c[(uint)bVar12 * -2] = *pfVar9;
      afStack_29c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] = pfVar9[(uint)bVar12 * -2 + 1];
      pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(pCVar13);
      uVar4 = *(uint *)(pSVar8 + 0x24);
      if (uVar4 < 3) {
        if (uVar4 == 0) {
          bVar11 = true;
LAB_004c7567:
          if (!bVar11) {
LAB_004c7569:
            auStack_2a0 = (byte  [4])((float)auStack_2a0 + *(float *)&param_1->field_0x249c);
            afStack_29c[0] = afStack_29c[0] + *(float *)&param_1->field_0x24a0;
            afStack_29c[1] = afStack_29c[1] + *(float *)&param_1->field_0x24a4;
          }
        }
      }
      else if (3 < uVar4) {
        if (uVar4 < 0x11) {
          bVar11 = uVar4 == 0x10;
          goto LAB_004c7567;
        }
        if (0x11 < uVar4) {
          if (uVar4 < 0x14) goto LAB_004c7569;
          if (0x14 < uVar4) {
            bVar11 = uVar4 == 0x15;
            goto LAB_004c7567;
          }
        }
      }
      core_charactr_cpp_FUN_0042d700(param_1,param_2);
      fStack_288 = *(float *)&param_1->field_0x2518 * param_2;
      pCVar16 = (CVector3f *)auStack_2a0;
      fStack_284 = *(float *)&param_1->field_0x251c * param_2;
      fStack_280 = *(float *)&param_1->field_0x2520 * param_2;
      fStack_78 = fStack_288;
      afStack_8c[(uint)bVar12 * -2 + 6] = afStack_29c[(uint)bVar12 * -2 + 6];
      afStack_8c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7] =
           afStack_29c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7];
      auStack_2a0 = (byte  [4])((float)auStack_2a0 + fStack_78);
      afStack_29c[0] = afStack_29c[0] + fStack_74;
      afStack_29c[1] = afStack_29c[1] + fStack_70;
      core_charactr_cpp_FUN_0042d750((CCharacter *)param_1,pCVar16);
    }
  }
  else {
    puStack_14 = (uint *)&param_1->field_0x249c;
    core_actor_cpp_FUN_00408ac0(param_1,puStack_14);
    fStack_1e0 = fStack_1b0;
    afStack_1dc[(uint)bVar12 * -2] = afStack_1ac[(uint)bVar12 * -2];
    afStack_1dc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
         afStack_1ac[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
    *(float *)&param_1->field_0x20 = *(float *)&param_1->field_0x20 + fStack_1e0;
    *(float *)&param_1->field_0x24 = *(float *)&param_1->field_0x24 + afStack_1dc[0];
    *(float *)&param_1->field_0x28 = *(float *)&param_1->field_0x28 + afStack_1dc[1];
    puStack_14[2] = 0;
    puStack_14[1] = puStack_14[2];
    *puStack_14 = puStack_14[1];
  }
  uVar4 = uStack_1c;
  core_charactr_cpp_FUN_0042e160((CCharacter *)param_1);
  if (((uVar4 == 0) && (*(int *)&param_1->field_0xc1f0 != 0)) &&
     (*(int *)&param_1->field_0x1fe20 != 0)) {
    bVar2 = param_1->field_0x1ffac;
    if ((bVar2 & 3) == 0) {
      param_1->field_0x1ffac = bVar2 | 2;
    }
    else {
      param_1->field_0x1ffac = bVar2 & 0xfc;
    }
  }
  iVar6 = core_actor_cpp_castToClassHash_FUN_0040c600
                    (*(uint *)&param_1->field_0x25b0,DAT_007c5330);
  if (iVar6 != 0) {
    if (((*(int *)&param_1->field_0xc1ec != 0) && (uStack_1c == 0)) &&
       (*(uint *)(iVar6 + 0x2330) = (uint)(*(int *)(iVar6 + 0x2330) == 0),
       *(int *)(iVar6 + 0x678) == 1)) {
      (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"flashlit.wav");
    }
    if (*(int *)(iVar6 + 0x2330) != 0) {
      *(float *)&param_1->field_0x1ffc0 =
           *(float *)&param_1->field_0xc204 * _DAT_005e0ffc * (float)_DAT_005e1014 * param_2 +
           *(float *)&param_1->field_0x1ffc0;
      fStack_3c = (float)core_gabriela_cpp_FUN_004c88a0(param_1);
      puStack_14 = (uint *)fStack_3c;
      puStack_48 = (uint *)core_gabriela_cpp_FUN_004c88f0(param_1);
      if (*(float *)&param_1->field_0x1ffc0 < fStack_3c) {
        *(float *)&param_1->field_0x1ffc0 = fStack_3c;
      }
      puStack_14 = puStack_48;
      if ((float)puStack_48 < *(float *)&param_1->field_0x1ffc0) {
        *(uint **)&param_1->field_0x1ffc0 = puStack_48;
      }
    }
  }
  if ((param_1->field_0x1ffac & 1) == 0) {
    fVar5 = *(float *)&param_1->field_0x1ffb0 - param_2 / _DAT_00600d4c;
    *(float *)&param_1->field_0x1ffb0 = fVar5;
    if (fVar5 < 0.0) {
      *(uint *)&param_1->field_0x1ffb0 = 0;
    }
  }
  else {
    fVar5 = param_2 / _DAT_00600d48 + *(float *)&param_1->field_0x1ffb0;
    *(float *)&param_1->field_0x1ffb0 = fVar5;
    if (1.0 < fVar5) {
      *(uint *)&param_1->field_0x1ffb0 = 0x3f800000;
    }
  }
  if ((param_1->field_0x1ffac & 2) == 0) {
    fStack_38 = *(float *)&param_1->field_0x1ffb4;
    fVar5 = fStack_38 - param_2 / _DAT_00600d4c;
    *(float *)&param_1->field_0x1ffb4 = fVar5;
    if (fVar5 < 0.0) {
      *(uint *)&param_1->field_0x1ffb4 = 0;
    }
    fStack_18 = _DAT_00600d54 + (float)_DAT_005e101c;
    if ((fStack_18 <= fStack_38) && (*(float *)&param_1->field_0x1ffb4 < fStack_18)) {
      pcVar15 = "undraw-s.wav @ .7";
      goto LAB_004c6b92;
    }
  }
  else {
    fStack_40 = *(float *)&param_1->field_0x1ffb4;
    fVar5 = param_2 / _DAT_00600d48 + fStack_40;
    *(float *)&param_1->field_0x1ffb4 = fVar5;
    if (1.0 < fVar5) {
      *(uint *)&param_1->field_0x1ffb4 = 0x3f800000;
    }
    fStack_50 = _DAT_00600d54 + (float)_DAT_005e1024;
    if ((fStack_40 <= fStack_50) && (fStack_50 < *(float *)&param_1->field_0x1ffb4)) {
      core_game_cpp_FUN_004d6300(g_CGamePtr);
      pcVar15 = "draw-f.wav @ 1.5";
LAB_004c6b92:
      (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,pcVar15);
    }
  }
  if ((param_1->field_0x1ffac & 3) == 0) {
    fVar5 = *(float *)&param_1->field_0x1ffb8 - param_2 / _DAT_00600d4c;
    *(float *)&param_1->field_0x1ffb8 = fVar5;
    if (fVar5 < 0.0) {
      *(uint *)&param_1->field_0x1ffb8 = 0;
    }
  }
  else {
    fVar5 = param_2 / _DAT_00600d48 + *(float *)&param_1->field_0x1ffb8;
    *(float *)&param_1->field_0x1ffb8 = fVar5;
    if (1.0 < fVar5) {
      *(uint *)&param_1->field_0x1ffb8 = 0x3f800000;
    }
  }
  if (uStack_1c == 0) {
    if (((iVar6 == 0) || (*(int *)(iVar6 + 0x2330) == 0)) ||
       (pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                           ((CMotionController *)&param_1->field_0x158),
       *(int *)(pSVar8 + 0x24) == 5)) {
      fVar5 = param_2 / _DAT_00600d4c;
      goto LAB_004c6bf3;
    }
    fVar5 = param_2 / _DAT_00600d48 + *(float *)&param_1->field_0x1ffbc;
  }
  else {
    fVar5 = (param_2 / _DAT_00600d4c) * (float)_DAT_005e0fe4;
LAB_004c6bf3:
    fVar5 = *(float *)&param_1->field_0x1ffbc - fVar5;
  }
  uVar4 = uStack_1c;
  *(float *)&param_1->field_0x1ffbc = fVar5;
  if (*(float *)&param_1->field_0x1ffbc < 0.0) {
    *(uint *)&param_1->field_0x1ffbc = 0;
  }
  if ((float)_DAT_005e102c < *(float *)&param_1->field_0x1ffbc) {
    *(uint *)&param_1->field_0x1ffbc = 0x3f666666;
  }
  core_gabriela_cpp_FUN_004ca450(param_1,param_2,uStack_1c);
  fVar5 = *(float *)&param_1->field_0x1ffe4 - param_2 / _DAT_00600d5c;
  *(float *)&param_1->field_0x1ffe4 = fVar5;
  if (((fVar5 <= 0.0) && (*(uint *)&param_1->field_0x1ffe4 = 0, uVar4 == 0)) &&
     ((*(int *)&param_1->field_0xc1e4 != 0 && (*(int *)&param_1->field_0x1ffc4 == 0)))) {
    if (*(int *)&param_1->field_0x1ffac == 0) {
      if ((*(float *)&param_1->field_0x1ffb4 <= 0.0) &&
         (iVar6 = core_hero_cpp_CHero_tryInteract_FUN_004eb090((CHero *)param_1), iVar6 == 0)) {
        iVar6 = core_hero_cpp_FUN_004eb3e0(param_1,0);
        switch(iVar6) {
        case 0:
        case 1:
          break;
        case 2:
        case 3:
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&param_1->field_0x158,0x12,1);
          break;
        default:
          core_hero_cpp_FUN_004eb5e0((CHero *)param_1);
        }
        if ((iVar6 == 0) &&
           (iVar6 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004eb240((CHero *)param_1),
           iVar6 == 0)) {
          iVar6 = core_hero_cpp_FUN_004eb890(param_1);
          if (iVar6 == 0) {
            iVar6 = core_hero_cpp_FUN_004eb660((CHero *)param_1);
            if (iVar6 == 0) {
              core_gabriela_cpp_FUN_004c99e0(param_1);
            }
            else {
              core_hero_cpp_FUN_004eb7f0(param_1);
            }
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)&param_1->field_0x158,0xd,1);
          }
        }
      }
    }
    else {
      *(uint *)&param_1->field_0x1ffc4 = 3;
    }
  }
  uVar4 = uStack_1c;
  core_gabriela_cpp_FUN_004c89c0(param_1);
  core_gabriela_cpp_FUN_004cad20(param_1,param_2,(uint)(uVar4 == 0));
  core_charactr_cpp_FUN_00433e80((CCharacter *)param_1,param_2);
  puStack_14 = (uint *)core_motion_cpp_FUN_00524a40(&param_1->field_0x158,0xd);
  if ((float)puStack_14 <= 0.0) {
    core_hero_cpp_FUN_004ebbe0((CHero *)param_1);
  }
  else {
    puStack_14 = (uint *)
                 core_motion_cpp_FUN_00525020((CMotionController *)&param_1->field_0x158);
    if ((1.0 < (float)puStack_14) &&
       (pCStack_4c = (CBoxActor *)
                     core_actor_cpp_castToClassHash_FUN_0040c600
                               (*(uint *)&param_1->field_0x1ff7c,
                                g_CBoxActorClassInfo.name_hash), pCStack_4c != (CBoxActor *)0x0)) {
      core_gabriela_cpp_FUN_004c8900(param_1);
      pfVar9 = afStack_1ac + 0x1a;
      afStack_144[0] = (float)uStack_108;
      afStack_1ac[(uint)bVar12 * -2 + 0x1b] = afStack_1ac[(uint)bVar12 * -2 + 0x2a];
      afStack_1ac[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x1c] =
           afStack_1ac[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x2b];
      core_actor_cpp_FUN_00408b40(param_1,pfVar9);
      pCVar16 = &CStack_9c;
      fStack_234 = fStack_24c;
      afStack_278[(uint)bVar12 * -2 + 0x12] = afStack_278[(uint)bVar12 * -2 + 0xc];
      afStack_278[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x13] =
           afStack_278[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd];
      fStack_2ac = fStack_234 - fStack_27c;
      afStack_2a8[0] = fStack_230 - afStack_278[0];
      afStack_2a8[1] = fStack_22c - afStack_278[1];
      CStack_9c._0_4_ = fStack_234 - fStack_27c;
      *(float *)((int)&CStack_9c + ((uint)bVar12 * -2 + 1) * 4) = afStack_2a8[(uint)bVar12 * -2];
      *(float *)((int)&CStack_9c + ((uint)bVar12 * -2 + (uint)bVar12 * -2 + 2) * 4) =
           afStack_2a8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
      CStack_9c._4_4_ = 0;
      core_actor_cpp_FUN_00408b00(param_1,pCVar16);
      afStack_d8[3] = (float)uStack_15c;
      afStack_c8[(uint)bVar12 * -2] = afStack_1ac[(uint)bVar12 * -2 + 0x15];
      afStack_c8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
           afStack_1ac[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x16];
      if (0.0 < afStack_c8[1]) {
        core_boxactor_cpp_FUN_00422ab0(pCStack_4c,(CVector3f *)&fStack_27c,&CStack_9c);
      }
    }
  }
  core_gabriela_cpp_FUN_004c91b0(param_1,param_2);
  if (*(int *)&param_1->field_0x1ffc4 == 3) {
    iStack_58 = core_actor_cpp_castToClassHash_FUN_0040c600
                          (*(uint *)&param_1->field_0x1fe20,g_CDynamiteClassInfo.name_hash);
    if (iStack_58 != 0) {
      if (*(int *)&param_1->field_0xc1e4 == 0) {
        *(uint *)&param_1->field_0x1ffc4 = 2;
      }
      else {
        fVar5 = param_2 * (float)_DAT_005e1034 + *(float *)&param_1->field_0x5ab1c;
        *(float *)&param_1->field_0x5ab1c = fVar5;
        if (0x42700000 < fVar5) {
          *(uint *)&param_1->field_0xc1e4 = 0;
          *(uint *)&param_1->field_0x1ffc4 = 2;
          *(float *)&param_1->field_0x5ab1c = 0x42700000;
        }
      }
      CStack_1ec._0_4_ = *(uint *)&param_1->field_0x1ffdc;
      CStack_1ec._8_4_ = 0;
      CStack_1ec._4_4_ = 0;
      core_dirmat_cpp_FUN_0045f3e0(aCStack_304,&CStack_1ec);
      afStack_1bc[2] = *(float *)&param_1->field_0x5ab1c;
      afStack_1bc[0] = 0.0;
      afStack_1bc[1] = 0.0;
      core_dirmat_cpp_FUN_0045f690(aCStack_304,afStack_1dc + 8);
      pfVar9 = afStack_1ac + 5;
      afStack_198[0] = (float)uStack_12c;
      afStack_1ac[(uint)bVar12 * -2 + 6] = afStack_1ac[(uint)bVar12 * -2 + 0x21];
      afStack_1ac[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7] =
           afStack_1ac[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x22];
      core_actor_cpp_FUN_00408ac0(param_1,pfVar9);
      CStack_84._0_4_ = CStack_180._0_4_;
      afStack_8c[(uint)bVar12 * -2 + 3] = afStack_1ac[(uint)bVar12 * -2 + 0xc];
      afStack_8c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
           afStack_1ac[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd];
      if ((CVector3f *)(iStack_58 + 0x57c) != &CStack_84) {
        *(uint *)(iStack_58 + 0x57c) = CStack_84._0_4_;
        *(uint *)(iStack_58 + 0x580) = CStack_84._4_4_;
        *(uint *)(iStack_58 + 0x584) = CStack_84._8_4_;
      }
      goto LAB_004c7a4b;
    }
    *(uint *)&param_1->field_0x1ffc4 = 2;
LAB_004c6e2d:
    *(uint *)&param_1->field_0x5ab1c = _DAT_00600d8c;
    iVar6 = core_gabriela_cpp_FUN_004c9dd0(param_1);
    if (iVar6 == 0) goto LAB_004c7a58;
    *(uint *)&param_1->field_0x1ffc4 = 1;
  }
  else {
LAB_004c7a4b:
    if (*(int *)&param_1->field_0x1ffc4 == 2) goto LAB_004c6e2d;
LAB_004c7a58:
    if (*(int *)&param_1->field_0x1ffc4 != 1) goto LAB_004c6e81;
  }
  *(uint *)&param_1->field_0x1ffc4 = 0;
  core_gabriela_cpp_FUN_004c9e40(param_1);
  if (*(int *)(*(int *)&param_1->field_0x1fe20 + 0x2ec) == 0) {
    *(uint *)&param_1->field_0xc1e4 = 0;
  }
LAB_004c6e81:
  iVar6 = (**(code **)(*(int *)&param_1->field_0x154 + 0x10c))(param_1);
  if (iVar6 != 2) {
    core_cloth_cpp_CCloth_process_FUN_00440610
              ((CCloth *)&param_1->field_0x1ffec,(CVector3f *)&param_1->field_0x20,
               (CVector3f *)&param_1->field_0x30,param_2,*(float *)&param_1->field_0x2504,
               (CDeformableModelInstance *)&param_1->field_0x158);
  }
  (**(code **)(*(int *)(*(int *)&param_1->field_0x1fe20 + 0x154) + 0xc))
            (*(int *)&param_1->field_0x1fe20,param_2);
  if (*(int *)(*(int *)&param_1->field_0x1fe20 + 0xfc) == 0) {
    return;
  }
  *(uint *)&param_1->field_0xfc = 1;
  return;
}
