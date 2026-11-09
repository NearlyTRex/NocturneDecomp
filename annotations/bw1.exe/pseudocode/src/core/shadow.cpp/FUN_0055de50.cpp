// Name: core_shadow.cpp_FUN_0055de50
// Address: 0055de50
// Address Range: [[0055de50, 0055f3c2]]
// Convention: unknown
// Signature: void core_shadow_cpp_FUN_0055de50(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_shadow_cpp_FUN_0055de50(CEnemy *param_1,float param_2)

{
  uint uVar1;
  SMotion *pSVar2;
  int iVar3;
  CEnemy *pCVar4;
  CSkeleton *pCVar5;
  CPathMap *path_map;
  uint uVar6;
  byte *puVar7;
  float *pfVar8;
  float *pfVar9;
  byte bVar10;
  float10 fVar11;
  float10 fVar12;
  ulonglong uVar13;
  float afStackY_121c [973];
  CVector3f *pCVar14;
  int iVar15;
  float fVar16;
  SDamageInfo *pSVar17;
  float fVar18;
  SDamageInfo aSStack_2d0 [4];
  float fStack_2cc;
  uint uStack_2a0;
  CEnemy *pCStack_29c;
  CEnemy *pCStack_298;
  float afStack_294 [6];
  float afStack_27c [6];
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  CVector3f CStack_234;
  float fStack_228;
  float afStack_224 [5];
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  int iStack_204;
  int iStack_200;
  int iStack_1fc;
  uint uStack_1f8;
  float afStack_1f4 [4];
  float fStack_1e4;
  CVector3f CStack_1e0;
  float fStack_1d4;
  float afStack_1d0 [4];
  float fStack_1c0;
  uint uStack_1bc;
  CVector3f CStack_1b0;
  CVector3f CStack_1a4;
  float fStack_198;
  float afStack_194 [4];
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  CVector3f CStack_174;
  float fStack_168;
  float afStack_164 [5];
  float afStack_150 [3];
  CVector3f CStack_144;
  float fStack_138;
  float afStack_134 [5];
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  byte auStack_114 [8];
  float fStack_10c;
  float fStack_108;
  float afStack_104 [4];
  float fStack_f4;
  float afStack_f0 [3];
  uint uStack_e4;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float afStack_cc [3];
  CVector3f CStack_c0;
  float fStack_b4;
  float afStack_b0 [4];
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float afStack_84 [3];
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  uint uStack_60;
  float fStack_54;
  float afStack_50 [4];
  float fStack_40;
  float afStack_34 [2];
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar10 = 0;
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)&param_1->field_0x158);
  fStack_28 = *(float *)&param_1->field_0x160;
  uVar6 = *(uint *)(pSVar2 + 0x24);
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)&param_1->field_0x158);
  fStack_1c = (float)*(int *)(pSVar2 + 100);
  core_charactr_cpp_FUN_00434790(param_1,param_2);
  iVar3 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0((CCharacter *)param_1,param_2);
  if (iVar3 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&param_1[1].field_0x4c);
    return;
  }
  if ((*(int *)(param_1 + 1) == 2) && (0.0 <= *(float *)&param_1[1].field_0x68)) {
    *(float *)&param_1[1].field_0x68 = *(float *)&param_1[1].field_0x68 - param_2;
  }
  afStack_34[0] = param_2 * *(float *)&param_1->field_0xc1d0 * *(float *)&param_1[1].field_0xa8;
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  while (0.0 < afStack_34[0]) {
    iVar3 = core_motion_cpp_CMotionController_advance_FUN_00524270
                      ((CMotionController *)&param_1->field_0x158,afStack_34);
    core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)param_1,iVar3);
  }
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  core_charactr_cpp_FUN_00435320(param_1,param_2 * *(float *)&param_1->field_0xc1d0);
  if (*(int *)(param_1 + 1) == 2) {
    *(float *)&param_1->field_0x2528 = *(float *)&param_1->field_0x2528 * (float)_DAT_005f15e5;
  }
  iVar3 = core_charactr_cpp_FUN_00432240((CCharacter *)param_1,param_2);
  if (iVar3 != 0) {
    uVar1 = *(uint *)&param_1->field_0x273c;
    if (uVar1 < 2) {
      if (uVar1 == 1) {
        iVar15 = 5;
        iVar3 = 1;
      }
      else {
LAB_0055e58a:
        iVar3 = 1;
        iVar15 = core_actor_cpp_FUN_0040cc60(0,4);
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)&param_1->field_0x158,iVar15,iVar3);
    }
    else if (uVar1 < 3) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)&param_1->field_0x158,0xb,1);
      iVar3 = core_actor_cpp_FUN_0040cd00(0.5);
      if (iVar3 != 0) {
        iVar3 = core_actor_cpp_FUN_0040cd00(0.5);
        if (iVar3 == 0) {
          uVar6 = *(uint *)&param_1[1].field_0x18;
        }
        else {
          uVar6 = *(uint *)&param_1[1].field_0x14;
        }
        core_skeleton_cpp_FUN_00569040(&param_1->field_0x158,uVar6);
        uVar6 = 0x3dcccccd;
        afStack_224[2] = afStack_164[2];
        afStack_224[(uint)bVar10 * -2 + 3] = afStack_164[(uint)bVar10 * -2 + 3];
        afStack_224[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
             afStack_164[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
        (**(code **)(*(int *)&param_1->field_0x154 + 0x24))(param_1,afStack_224 + 2,uVar6);
      }
    }
    else {
      if (uVar1 != 3) goto LAB_0055e58a;
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)&param_1->field_0x158,0,1);
      engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
    }
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
    goto LAB_0055e060;
  }
  switch(uVar6) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    goto switchD_0055f381_caseD_0;
  case 5:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
    iVar3 = core_actor_cpp_FUN_0040cd00(0.2);
    if (iVar3 != 0) {
      iVar3 = core_actor_cpp_FUN_0040cd00(0.5);
      if (iVar3 == 0) {
        uVar6 = *(uint *)&param_1[1].field_0x18;
      }
      else {
        uVar6 = *(uint *)&param_1[1].field_0x14;
      }
      core_skeleton_cpp_FUN_00569040(&param_1->field_0x158,uVar6);
      uVar6 = 0x3dcccccd;
      afStack_150[0] = (float)uStack_60;
      afStack_164[(uint)bVar10 * -2 + 6] = afStack_b0[(uint)bVar10 * -2 + 0x15];
      afStack_164[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
           afStack_b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x16];
      (**(code **)(*(int *)&param_1->field_0x154 + 0x24))(param_1,afStack_164 + 5,uVar6);
    }
    if (*(int *)&param_1[1].field_0x80 != 0) {
      fVar16 = *(float *)&param_1[1].field_0x88 - param_2;
      *(float *)&param_1[1].field_0x88 = fVar16;
      if (0.0 < fVar16) {
        core_charactr_cpp_FUN_00431cc0
                  (param_1,*(uint *)&param_1[1].field_0x80,0x3f800000,0x3f800000,
                   &param_1[1].field_0x84);
        uVar1 = *(uint *)&param_1[1].field_0x84;
        if (uVar1 == 0) {
LAB_0055f251:
          iVar15 = 1;
          iVar3 = core_actor_cpp_FUN_0040cc60(0,4);
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&param_1->field_0x158,iVar3,iVar15);
          *(uint *)&param_1[1].field_0x80 = 0;
        }
        else {
          if (uVar1 < 2) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)&param_1->field_0x158,5,1);
          }
          else {
            if (uVar1 != 2) goto LAB_0055f251;
            fStack_14 = core_motion_cpp_FUN_00525020((CMotionController *)&param_1->field_0x158);
            if ((float)_DAT_005f161d < fStack_14) {
              *(int *)&param_1[1].field_0x90 = *(int *)&param_1[1].field_0x90 + 1;
            }
            if (2 < *(int *)&param_1[1].field_0x90) {
              fStack_14 = core_motion_cpp_FUN_00525020((CMotionController *)&param_1->field_0x158);
              if ((float)_DAT_005f1625 < fStack_14) {
                iVar15 = 1;
                iVar3 = core_actor_cpp_FUN_0040cc60(0,3);
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                          ((CMotionController *)&param_1->field_0x158,iVar3 + 0xb,iVar15);
                *(uint *)&param_1[1].field_0x90 = 0;
              }
            }
          }
          if (*(int *)&param_1[1].field_0x80 != 0) break;
        }
      }
      else {
        *(uint *)&param_1[1].field_0x80 = 0;
        *(uint *)&param_1[1].field_0x88 = 0;
      }
    }
    (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
    iVar3 = *(int *)&param_1->field_0xc1e8;
    puVar7 = &param_1->field_0x158;
    if (iVar3 == 0) {
      iVar15 = 1;
      iVar3 = core_actor_cpp_FUN_0040cc60(0,4);
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)puVar7,iVar3,iVar15);
    }
    else {
      afStack_50[2] = *(float *)(iVar3 + 0x20) - *(float *)&param_1->field_0x20;
      afStack_50[3] = *(float *)(iVar3 + 0x24) - *(float *)&param_1->field_0x24;
      fStack_40 = *(float *)(iVar3 + 0x28) - *(float *)&param_1->field_0x28;
      afStack_104[2] = afStack_50[2];
      afStack_104[(uint)bVar10 * -2 + 3] = afStack_50[(uint)bVar10 * -2 + 3];
      afStack_104[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
           afStack_50[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
      fStack_20 = SQRT(fStack_f4 * fStack_f4 +
                       afStack_104[2] * afStack_104[2] + afStack_104[3] * afStack_104[3]);
      if (*(float *)&param_1->field_0xc1e0 < fStack_20) {
        iVar15 = 1;
        *(uint *)&param_1->field_0xc1e8 = 0;
        iVar3 = core_actor_cpp_FUN_0040cc60(0,4);
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)puVar7,iVar3,iVar15);
      }
      else if ((((fStack_20 <= _DAT_0060518c + _DAT_005f162d) || (_DAT_0060518c + 1.0 <= fStack_20))
               || (*(int *)&param_1[1].field_0x6c != 1)) ||
              (iVar3 = core_actor_cpp_FUN_0040cc60(0,3), iVar3 == 1)) {
        CStack_174._8_4_ = 0x40400000;
        afStack_34[1] = (float)0x40400000;
        iVar3 = *(int *)&param_1->field_0xc1e8;
        *(uint *)&param_1->field_0x24a4 = 0;
        fVar18 = 0.17453292;
        *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
        *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
        fVar16 = 0.5;
        pCVar14 = &CStack_174;
        CStack_174._0_4_ = 0;
        CStack_174._4_4_ = 0;
        path_map = (CPathMap *)(**(code **)(*(int *)(iVar3 + 0x154) + 0xc4))(iVar3);
        iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                          ((CCharacter *)param_1,(CVector3f *)(iVar3 + 0x20),path_map,pCVar14,fVar16
                           ,fVar18);
        if (iVar3 < 0) {
          engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s gave up chase - I'm confused\n",param_1)
          ;
          iVar15 = 1;
          iVar3 = core_actor_cpp_FUN_0040cc60(0,4);
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&param_1->field_0x158,iVar3,iVar15);
        }
        else if ((0 < iVar3) && (*(float *)&param_1->field_0xc1e4 <= 0.0)) {
          if (*(int *)&param_1[1].field_0x6c == 1) {
            iVar15 = 6;
            iVar3 = 1;
          }
          else {
            iVar3 = 1;
            iVar15 = core_actor_cpp_FUN_0040cc60(0,3);
            iVar15 = iVar15 + 6;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&param_1->field_0x158,iVar15,iVar3);
          iVar3 = core_charactr_cpp_FUN_00435380(param_1,&DAT_005f15da);
          *(int *)&param_1[1].field_0x80 = iVar3;
          if (iVar3 != 0) {
            fStack_14 = (float)core_actor_cpp_FUN_0040cc00(0x40800000,0x41400000);
            *(float *)&param_1[1].field_0x88 = fStack_14;
          }
          iVar3 = core_actor_cpp_FUN_0040cd00(0.8);
          if (iVar3 != 0) {
            core_shadow_cpp_FUN_0055f4a0(param_1);
          }
        }
        fVar16 = *(float *)&param_1[1].field_0x30 - param_2;
        *(float *)&param_1[1].field_0x30 = fVar16;
        if ((fVar16 < 0.0) && (iVar3 = core_actor_cpp_FUN_0040cd00(0.5), iVar3 != 0)) {
          core_shadow_cpp_FUN_0055f450(param_1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)puVar7,7,1);
        iVar3 = core_charactr_cpp_FUN_00435380(param_1,&DAT_005f15b7);
        *(int *)&param_1[1].field_0x80 = iVar3;
        if (iVar3 != 0) {
          fStack_14 = (float)core_actor_cpp_FUN_0040cc00(0x40800000,0x41400000);
          *(float *)&param_1[1].field_0x88 = fStack_14;
        }
      }
    }
    break;
  case 6:
  case 7:
  case 8:
  case 9:
    if (*(int *)&param_1[1].field_0x6c == 1) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_2d0);
      fStack_14 = (float)core_actor_cpp_FUN_0040cc00(0x40e00000,0x41700000);
      fStack_2cc = fStack_14 * *(float *)&param_1[1].field_0xa8;
      pCStack_29c = param_1;
      pCStack_298 = param_1;
      uStack_2a0 = 0x6d;
      pSVar17 = aSStack_2d0;
      fVar16 = 1.0;
      core_xform_cpp_FUN_005b5080
                (&DAT_02c8af28,&param_1->field_0xfd8 + *(int *)&param_1[1].field_0xc * 0x30);
      pfVar8 = afStack_b0 + 0xb;
      afStack_84[0] = (float)uStack_1bc;
      afStack_b0[(uint)bVar10 * -2 + 0xc] = afStack_1d0[(uint)bVar10 * -2 + 6];
      afStack_b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
           afStack_1d0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
      core_actor_cpp_FUN_00408b40(param_1,pfVar8);
      pCVar14 = &CStack_1b0;
      CStack_1b0._0_4_ = CStack_144._0_4_;
      *(uint *)((int)&CStack_1b0 + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&CStack_144 + (uint)bVar10 * -8 + 4);
      pCVar4 = param_1;
      *(uint *)((int)&CStack_1b0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           *(uint *)((int)&CStack_144 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      core_enemy_cpp_FUN_004a0770(pCVar4,pCVar14,fVar16,pSVar17);
      fStack_14 = (float)core_actor_cpp_FUN_0040cc00(0x40e00000,0x41700000);
      fStack_2cc = fStack_14 * *(float *)&param_1[1].field_0xa8;
      pCStack_29c = param_1;
      pCStack_298 = param_1;
      pSVar17 = aSStack_2d0;
      fVar16 = 1.0;
      core_xform_cpp_FUN_005b5080
                (&DAT_02c8af28,&param_1->field_0xfd8 + *(int *)&param_1[1].field_0x8 * 0x30);
      pfVar8 = afStack_104 + 0xe;
      afStack_cc[0] = (float)uStack_1f8;
      afStack_104[(uint)bVar10 * -2 + 0xf] = afStack_1f4[(uint)bVar10 * -2];
      afStack_104[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10] =
           afStack_1f4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      core_actor_cpp_FUN_00408b40(param_1,pfVar8);
      CStack_c0._0_4_ = CStack_1e0._0_4_;
      *(uint *)((int)&CStack_c0 + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&CStack_1e0 + (uint)bVar10 * -8 + 4);
      *(uint *)((int)&CStack_c0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           *(uint *)((int)&CStack_1e0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      core_enemy_cpp_FUN_004a0770(param_1,&CStack_c0,fVar16,pSVar17);
      fStack_14 = (float)core_actor_cpp_FUN_0040cc00(0x40e00000,0x41700000);
      fStack_2cc = fStack_14 * *(float *)&param_1[1].field_0xa8;
      pCStack_29c = param_1;
      pCStack_298 = param_1;
      pSVar17 = aSStack_2d0;
      fVar16 = 1.0;
      core_xform_cpp_FUN_005b5080
                (&DAT_02c8af28,&param_1->field_0xfd8 + *(int *)&param_1[1].field_0x10 * 0x30);
      afStack_f0[0] = (float)uStack_e4;
      afStack_104[(uint)bVar10 * -2 + 6] = afStack_104[(uint)bVar10 * -2 + 9];
      afStack_104[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
           afStack_104[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
      core_actor_cpp_FUN_00408b40(param_1,afStack_104 + 5);
      pCVar14 = &CStack_234;
      CStack_234._0_4_ = CStack_1a4._0_4_;
      *(uint *)((int)&CStack_234 + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&CStack_1a4 + (uint)bVar10 * -8 + 4);
      pCVar4 = param_1;
      *(uint *)((int)&CStack_234 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           *(uint *)((int)&CStack_1a4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      core_enemy_cpp_FUN_004a0770(pCVar4,pCVar14,fVar16,pSVar17);
      iVar3 = *(int *)&param_1->field_0xc1e8;
      if ((iVar3 != 0) &&
         (iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10c))(iVar3), iVar3 != 0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&param_1->field_0x158,10,1);
      }
    }
    core_shadow_cpp_FUN_0055f4a0(param_1);
    break;
  case 10:
    core_shadow_cpp_FUN_0055f590(param_1);
    break;
  case 0xf:
  case 0x10:
    fVar11 = (((float10)fStack_1c - (float10)fStack_28) * (float10)_DAT_005f15ed) /
             (float10)fStack_1c;
    *(uint *)&param_1[1].field_0x94 = 0;
    uVar13 = round();
    iVar3 = (int)uVar13;
    *(int *)(iVar3 + 0xc304) = (int)ROUND(fVar11);
    fVar11 = (float10)*(float *)((int)((ulonglong)uVar13 >> 0x20) + 0x294) * (float10)_DAT_005f15f5
             + (float10)*(float *)(iVar3 + 0xc2c8);
    *(float *)(iVar3 + 0xc2c8) = (float)fVar11;
    fVar12 = (float10)fsin(fVar11);
    fVar11 = (float10)fcos(fVar11);
    fStack_2c = (float)fVar12;
    fStack_18 = (float)fVar11;
    (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1);
    pfVar8 = afStack_294;
    pfVar9 = &fStack_24c;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar9 = *pfVar8;
      pfVar8 = pfVar8 + (uint)bVar10 * -2 + 1;
      pfVar9 = pfVar9 + (uint)bVar10 * -2 + 1;
    }
    fVar16 = (fStack_238 - fStack_244) * fStack_18;
    fVar18 = (fStack_240 - fStack_24c) * fStack_2c * (float)_DAT_005f15fd;
    afStack_194[2] = fStack_24c + fStack_240;
    afStack_194[3] = fStack_248 + fStack_23c;
    fStack_184 = fStack_244 + fStack_238;
    fStack_90 = fStack_24c + fStack_240;
    afStack_b0[(uint)bVar10 * -2 + 9] = afStack_194[(uint)bVar10 * -2 + 3];
    afStack_b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
         afStack_194[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
    auStack_114._0_4_ = fVar18;
    fStack_10c = fVar16 * (float)_DAT_005f15fd;
    fStack_120 = fStack_90 * _DAT_005f1605;
    fStack_11c = fStack_8c * _DAT_005f1605;
    fStack_118 = fStack_88 * _DAT_005f1605;
    fStack_168 = fStack_90 * _DAT_005f1605;
    afStack_164[(uint)bVar10 * -2] = afStack_134[(uint)bVar10 * -2 + 6];
    afStack_164[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         afStack_134[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
    auStack_114._4_4_ = afStack_164[0];
    fStack_138 = fVar18 + *(float *)&param_1->field_0x20;
    afStack_134[0] = afStack_164[0] + *(float *)&param_1->field_0x24;
    afStack_134[1] = fStack_10c + *(float *)&param_1->field_0x28;
    fStack_d8 = fStack_138;
    afStack_104[(uint)bVar10 * -2 + 0xc] = afStack_134[(uint)bVar10 * -2];
    afStack_104[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
         afStack_134[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    if ((float *)auStack_114 != afStack_104 + 0xb) {
      auStack_114._0_4_ = fStack_d8;
      auStack_114._4_4_ = fStack_d4;
      fStack_10c = fStack_d0;
    }
    core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045e970
              ((CDemonGlobe *)0x269cbb0,(CVector3f *)auStack_114);
    _DAT_0269cbec = 60000;
    DAT_0269cbcc = 0x3a;
    core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0045e9c0((CDemonGlobe *)0x269cbb0,6.0);
    _DAT_0269cbd0 = 0;
    core_set_cpp_CDemonSet_addCoronaGlobe_FUN_00551960(g_CDemonSetPtr,(CDemonGlobe *)0x269cbb0);
    puVar7 = &param_1->field_0x158;
    *(uint *)&param_1[1].field_0xa0 = 1;
    pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                       ((CDeformableModelInstance *)puVar7);
    fStack_14 = core_motion_cpp_FUN_00525020((CMotionController *)puVar7);
    fVar11 = (float10)_DAT_005f160d;
    pow();
    fVar12 = (float10)_DAT_005f1615;
    pow();
    *(float *)&param_1[1].field_0x98 = (float)((float10)1 + fVar11 / fVar12);
    iVar3 = 0;
    if (0 < *(int *)&pCVar5->field_0x1de78) {
      do {
        iVar3 = iVar3 + 1;
        *(uint *)(puVar7 + 0x514) = *(uint *)&param_1[1].field_0x98;
        puVar7 = puVar7 + 4;
      } while (iVar3 < *(int *)&pCVar5->field_0x1de78);
    }
    break;
  case 0x11:
    *(uint *)&param_1[1].field_0x9c = 0;
    *(uint *)&param_1[1].field_0x98 = 0x3f800000;
    *(uint *)&param_1->field_0x70 = 2;
    return;
  default:
    *(uint *)&param_1[1].field_0x94 = 1;
    *(uint *)&param_1[1].field_0x9c = 65000;
switchD_0055f381_caseD_0:
    *(uint *)&param_1[1].field_0x94 = 1;
    *(uint *)&param_1[1].field_0x9c = 65000;
    iVar3 = core_enemy_cpp_FUN_004a0fe0(param_1,param_2);
    if (iVar3 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)&param_1->field_0x158,5,1);
      break;
    }
    if (*(int *)&param_1[1].field_0x80 != 0) {
      fVar16 = *(float *)&param_1[1].field_0x88 - param_2;
      *(float *)&param_1[1].field_0x88 = fVar16;
      if (0.0 < fVar16) {
        core_charactr_cpp_FUN_00431cc0
                  (param_1,*(uint *)&param_1[1].field_0x80,0x3f800000,0x3f800000,
                   &param_1[1].field_0x84);
        uVar1 = *(uint *)&param_1[1].field_0x84;
        if (uVar1 == 0) {
LAB_0055ed64:
          *(uint *)&param_1[1].field_0x80 = 0;
        }
        else {
          if (uVar1 < 2) {
            iVar15 = 1;
            iVar3 = 5;
          }
          else {
            if (uVar1 != 2) goto LAB_0055ed64;
            iVar15 = 1;
            iVar3 = core_actor_cpp_FUN_0040cc60(0,3);
            iVar3 = iVar3 + 0xb;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&param_1->field_0x158,iVar3,iVar15);
          if (*(int *)&param_1[1].field_0x80 != 0) break;
        }
      }
      else {
        *(uint *)&param_1[1].field_0x80 = 0;
        *(uint *)&param_1[1].field_0x88 = 0;
      }
    }
    (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
    iVar3 = *(int *)&param_1->field_0xc1e8;
    if (iVar3 != 0) {
      if (*(int *)&param_1[1].field_0x50 != 0) {
        fStack_108 = *(float *)(iVar3 + 0x20) - *(float *)&param_1->field_0x20;
        afStack_104[0] = *(float *)(iVar3 + 0x24) - *(float *)&param_1->field_0x24;
        afStack_104[1] = *(float *)(iVar3 + 0x28) - *(float *)&param_1->field_0x28;
        fStack_b4 = fStack_108;
        afStack_b0[(uint)bVar10 * -2] = afStack_104[(uint)bVar10 * -2];
        afStack_b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             afStack_104[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        fStack_24 = SQRT(afStack_b0[1] * afStack_b0[1] +
                         fStack_b4 * fStack_b4 + afStack_b0[0] * afStack_b0[0]);
        if ((*(float *)&param_1->field_0xc1e0 < fStack_24) || ((float)_DAT_005f1635 < fStack_24)) {
          *(uint *)&param_1->field_0xc1e8 = 0;
          break;
        }
      }
      if (*(int *)&param_1->field_0xc1e8 == 0) {
        fStack_14 = core_motion_cpp_FUN_00525020((CMotionController *)&param_1->field_0x158);
        if ((float)_DAT_005f1625 < fStack_14) {
          iVar15 = 1;
          iVar3 = core_actor_cpp_FUN_0040cc60(0,4);
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&param_1->field_0x158,iVar3,iVar15);
        }
      }
      else {
        iVar3 = core_actor_cpp_FUN_0040cd00(0.4);
        if (iVar3 != 0) {
          core_shadow_cpp_FUN_0055f450(param_1);
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&param_1->field_0x158,5,1);
      }
    }
    break;
  case 0x16:
    fVar11 = ((float10)fStack_28 * (float10)_DAT_005f15ed) / (float10)fStack_1c;
    *(uint *)&param_1[1].field_0x94 = 0;
    iVar3 = round(param_1);
    *(int *)(iVar3 + 0xc304) = (int)ROUND(fVar11);
    core_shadow_cpp_FUN_0055f5e0();
  }
LAB_0055e060:
  *(uint *)&param_1->field_0x2ff0 = 0x40000000;
  if (0.0 < *(float *)&param_1->field_0xc1e4) {
    *(float *)&param_1->field_0xc1e4 = *(float *)&param_1->field_0xc1e4 - param_2;
  }
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)&param_1->field_0x158);
  iVar3 = *(int *)(pSVar2 + 0x24);
  if (((((iVar3 != 0x11) && (iVar3 != 0)) && (iVar3 != 1)) &&
      (((iVar3 != 2 && (iVar3 != 3)) && (iVar3 != 4)))) || (*(int *)&param_1->field_0xdc != 0)) {
    iVar3 = *(int *)&param_1->field_0xc1e8;
    if ((iVar3 != 0) &&
       (pCVar4 = (CEnemy *)(**(code **)(*(int *)(iVar3 + 0x154) + 0xf4))(iVar3), pCVar4 == param_1))
    {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0xc1e8);
    }
    core_charactr_cpp_FUN_0042d700(param_1,param_2);
    fStack_1d4 = *(float *)&param_1->field_0x2518 * param_2;
    afStack_1d0[0] = *(float *)&param_1->field_0x251c * param_2;
    afStack_1d0[1] = *(float *)&param_1->field_0x2520 * param_2;
    fStack_9c = fStack_1d4;
    afStack_b0[(uint)bVar10 * -2 + 6] = afStack_1d0[(uint)bVar10 * -2];
    afStack_b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
         afStack_1d0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    fStack_6c = fStack_9c + *(float *)&param_1->field_0x249c;
    fStack_68 = fStack_98 + *(float *)&param_1->field_0x24a0;
    fStack_64 = fStack_94 + *(float *)&param_1->field_0x24a4;
    fStack_228 = fStack_6c;
    afStack_224[(uint)bVar10 * -2] = afStack_b0[(uint)bVar10 * -2 + 0x12];
    afStack_224[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         afStack_b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13];
    fStack_210 = fStack_228 + *(float *)&param_1->field_0x250c;
    fStack_20c = afStack_224[0] + *(float *)&param_1->field_0x2510;
    fStack_208 = afStack_224[1] + *(float *)&param_1->field_0x2514;
    fStack_54 = fStack_210;
    afStack_50[(uint)bVar10 * -2] = afStack_224[(uint)bVar10 * -2 + 6];
    afStack_50[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         afStack_224[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x2514 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
    *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    core_charactr_cpp_FUN_0042d750((CCharacter *)param_1,(CVector3f *)&fStack_54);
  }
  core_charactr_cpp_FUN_0042e160((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            ((CDeformableModelInstance *)&param_1->field_0x158);
  core_charactr_cpp_FUN_00433e80((CCharacter *)param_1,param_2);
  if ((0.0 <= *(float *)&param_1[1].field_0x8c) &&
     (param_2 = *(float *)&param_1[1].field_0x8c - param_2,
     *(float *)&param_1[1].field_0x8c = param_2, param_2 <= 0.0)) {
    fStack_14 = (float)core_actor_cpp_FUN_0040cc00(0x3f800000,0x40000000);
    iVar3 = *(int *)&param_1->field_0x154;
    *(float *)&param_1[1].field_0x8c = fStack_14;
    (**(code **)(iVar3 + 0x1c))(param_1);
    pfVar8 = afStack_27c;
    pfVar9 = &fStack_264;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar9 = *pfVar8;
      pfVar8 = pfVar8 + (uint)bVar10 * -2 + 1;
      pfVar9 = pfVar9 + (uint)bVar10 * -2 + 1;
    }
    afStack_1d0[2] = fStack_264 + fStack_258;
    afStack_1d0[3] = fStack_260 + fStack_254;
    fStack_1c0 = fStack_25c + fStack_250;
    fStack_78 = fStack_264 + fStack_258;
    afStack_b0[(uint)bVar10 * -2 + 0xf] = afStack_1d0[(uint)bVar10 * -2 + 3];
    afStack_b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10] =
         afStack_1d0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
    pfVar8 = &fStack_198;
    afStack_b0[2] = fStack_78 * _DAT_005f1605;
    afStack_b0[3] = fStack_74 * _DAT_005f1605;
    fStack_a0 = fStack_70 * _DAT_005f1605;
    fStack_198 = fStack_78 * _DAT_005f1605;
    afStack_194[(uint)bVar10 * -2] = afStack_b0[(uint)bVar10 * -2 + 3];
    afStack_194[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         afStack_b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
    core_actor_cpp_FUN_00408b40(param_1,pfVar8);
    fStack_180 = afStack_134[2];
    afStack_194[(uint)bVar10 * -2 + 6] = afStack_134[(uint)bVar10 * -2 + 3];
    afStack_194[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
         afStack_134[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
    if (afStack_1f4 + 2 != afStack_194 + 5) {
      afStack_1f4[2] = fStack_180;
      afStack_1f4[3] = fStack_17c;
      fStack_1e4 = fStack_178;
    }
    iStack_204 = (int)ROUND(afStack_1f4[2] * _DAT_00605170);
    iStack_200 = (int)ROUND(afStack_1f4[3] * _DAT_00605170);
    iStack_1fc = (int)ROUND(fStack_1e4 * _DAT_00605170);
    fStack_14 = (float)core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_00552490
                                 (g_CDemonSetPtr,(CVector3i *)&iStack_204,(CVector3i *)0x0);
    if ((*(int *)&param_1[1].field_0xa4 != 0) &&
       (_DAT_006051a0 * (float)_DAT_005f163d <= (float)(int)fStack_14)) {
      iVar15 = 1;
      iVar3 = core_actor_cpp_FUN_0040cc60(0,4);
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)&param_1->field_0x158,iVar3,iVar15);
      iVar3 = core_charactr_cpp_FUN_00435380(param_1,&DAT_005f15dc);
      *(int *)&param_1[1].field_0x80 = iVar3;
      if (iVar3 != 0) {
        uVar6 = core_actor_cpp_FUN_0040cc00(0x40400000,0x40c00000);
        *(uint *)&param_1[1].field_0x88 = uVar6;
      }
      *(float *)&param_1[1].field_0x8c = *(float *)&param_1[1].field_0x8c + _DAT_005f1645;
      return;
    }
  }
  return;
}
