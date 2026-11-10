// Name: core_shadow.cpp_CShadow_process_FUN_0055de50
// Address: 0055de50
// Address Range: [[0055de50, 0055f3c2]]
// Convention: __cdecl
// Signature: void __cdecl core_shadow_cpp_CShadow_process_FUN_0055de50(CShadow *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_shadow_cpp_CShadow_process_FUN_0055de50(CShadow *this_ptr,float delta_time)

{
  uint uVar1;
  SMotion *pSVar2;
  int iVar3;
  CShadow *pCVar4;
  CSkeleton *pCVar5;
  CPathMap *path_map;
  float fVar6;
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
  uint uVar16;
  SDamageInfo *pSVar17;
  float fVar18;
  SDamageInfo aSStack_2d0 [4];
  float fStack_2cc;
  uint uStack_2a0;
  CShadow *pCStack_29c;
  CShadow *pCStack_298;
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
  CVector3i CStack_204;
  uint uStack_1f8;
  float afStack_1f4 [4];
  float fStack_1e4;
  float fStack_1e0;
  float afStack_1dc [4];
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  uint uStack_1bc;
  CVector3f CStack_1b0;
  float fStack_1a4;
  float afStack_1a0 [5];
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  CVector3f CStack_174;
  float fStack_168;
  float afStack_164 [5];
  float afStack_150 [3];
  float fStack_144;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  CVector3f CStack_114;
  float fStack_108;
  float afStack_104 [4];
  float fStack_f4;
  float afStack_f0 [3];
  uint uStack_e4;
  CVector3f CStack_d8;
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
  CVector3f CStack_54;
  float fStack_48;
  float afStack_44 [4];
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar10 = 0;
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)&this_ptr->field_0x158);
  fStack_28 = *(float *)&this_ptr->field_0x160;
  uVar16 = *(uint *)(pSVar2 + 0x24);
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)&this_ptr->field_0x158);
  fStack_1c = (float)*(int *)(pSVar2 + 100);
  core_charactr_cpp_FUN_00434790(this_ptr,delta_time);
  iVar3 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar3 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&this_ptr->field_0xc2b4);
    return;
  }
  if ((*(int *)&this_ptr->field_0xc268 == 2) && (0.0 <= *(float *)&this_ptr->field_0xc2d0)) {
    *(float *)&this_ptr->field_0xc2d0 = *(float *)&this_ptr->field_0xc2d0 - delta_time;
  }
  fStack_34 = delta_time * *(float *)&this_ptr->field_0xc1d0 * *(float *)&this_ptr->field_0xc310;
  *(uint *)&this_ptr->field_0x24a4 = 0;
  *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
  *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
  while (0.0 < fStack_34) {
    iVar3 = core_motion_cpp_CMotionController_advance_FUN_00524270
                      ((CMotionController *)&this_ptr->field_0x158,afStack_44 + 4);
    core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,iVar3);
  }
  *(uint *)&this_ptr->field_0x2524 = *(uint *)&this_ptr->field_0x24a4;
  core_charactr_cpp_FUN_00435320(this_ptr,delta_time * *(float *)&this_ptr->field_0xc1d0);
  if (*(int *)&this_ptr->field_0xc268 == 2) {
    *(float *)&this_ptr->field_0x2528 = *(float *)&this_ptr->field_0x2528 * (float)_DAT_005f15e5;
  }
  iVar3 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar3 != 0) {
    uVar1 = *(uint *)&this_ptr->field_0x273c;
    if (uVar1 < 2) {
      if (uVar1 == 1) {
        iVar15 = 5;
        iVar3 = 1;
      }
      else {
LAB_0055e58a:
        iVar3 = 1;
        iVar15 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,4);
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)&this_ptr->field_0x158,iVar15,iVar3);
    }
    else if (uVar1 < 3) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)&this_ptr->field_0x158,0xb,1);
      iVar3 = core_actor_cpp_randomChance_FUN_0040cd00(0.5);
      if (iVar3 != 0) {
        iVar3 = core_actor_cpp_randomChance_FUN_0040cd00(0.5);
        if (iVar3 == 0) {
          uVar16 = *(uint *)&this_ptr->field_0xc280;
        }
        else {
          uVar16 = *(uint *)&this_ptr->field_0xc27c;
        }
        core_skeleton_cpp_FUN_00569040(&this_ptr->field_0x158,uVar16);
        uVar16 = 0x3dcccccd;
        afStack_224[2] = afStack_164[2];
        afStack_224[(uint)bVar10 * -2 + 3] = afStack_164[(uint)bVar10 * -2 + 3];
        afStack_224[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
             afStack_164[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
        (**(code **)(*(int *)&this_ptr->field_0x154 + 0x24))(this_ptr,afStack_224 + 2,uVar16);
      }
    }
    else {
      if (uVar1 != 3) goto LAB_0055e58a;
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)&this_ptr->field_0x158,0,1);
      engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
    }
    *(uint *)&this_ptr->field_0x24a4 = 0;
    *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
    *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
    goto LAB_0055e060;
  }
  switch(uVar16) {
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
    iVar3 = core_actor_cpp_randomChance_FUN_0040cd00(0.2);
    if (iVar3 != 0) {
      iVar3 = core_actor_cpp_randomChance_FUN_0040cd00(0.5);
      if (iVar3 == 0) {
        uVar16 = *(uint *)&this_ptr->field_0xc280;
      }
      else {
        uVar16 = *(uint *)&this_ptr->field_0xc27c;
      }
      core_skeleton_cpp_FUN_00569040(&this_ptr->field_0x158,uVar16);
      uVar16 = 0x3dcccccd;
      afStack_150[0] = (float)uStack_60;
      afStack_164[(uint)bVar10 * -2 + 6] = afStack_b0[(uint)bVar10 * -2 + 0x15];
      afStack_164[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
           afStack_b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x16];
      (**(code **)(*(int *)&this_ptr->field_0x154 + 0x24))(this_ptr,afStack_164 + 5,uVar16);
    }
    if (*(int *)&this_ptr->field_0xc2e8 != 0) {
      fVar6 = *(float *)&this_ptr->field_0xc2f0 - delta_time;
      *(float *)&this_ptr->field_0xc2f0 = fVar6;
      if (0.0 < fVar6) {
        core_charactr_cpp_FUN_00431cc0
                  (this_ptr,*(uint *)&this_ptr->field_0xc2e8,0x3f800000,0x3f800000,
                   &this_ptr->field_0xc2ec);
        uVar1 = *(uint *)&this_ptr->field_0xc2ec;
        if (uVar1 == 0) {
LAB_0055f251:
          iVar15 = 1;
          iVar3 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,4);
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&this_ptr->field_0x158,iVar3,iVar15);
          *(uint *)&this_ptr->field_0xc2e8 = 0;
        }
        else {
          if (uVar1 < 2) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)&this_ptr->field_0x158,5,1);
          }
          else {
            if (uVar1 != 2) goto LAB_0055f251;
            fStack_14 = core_motion_cpp_FUN_00525020((CMotionController *)&this_ptr->field_0x158);
            if ((float)_DAT_005f161d < fStack_14) {
              *(int *)&this_ptr->field_0xc2f8 = *(int *)&this_ptr->field_0xc2f8 + 1;
            }
            if (2 < *(int *)&this_ptr->field_0xc2f8) {
              fStack_14 = core_motion_cpp_FUN_00525020((CMotionController *)&this_ptr->field_0x158);
              if ((float)_DAT_005f1625 < fStack_14) {
                iVar15 = 1;
                iVar3 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,3);
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                          ((CMotionController *)&this_ptr->field_0x158,iVar3 + 0xb,iVar15);
                *(uint *)&this_ptr->field_0xc2f8 = 0;
              }
            }
          }
          if (*(int *)&this_ptr->field_0xc2e8 != 0) break;
        }
      }
      else {
        *(uint *)&this_ptr->field_0xc2e8 = 0;
        *(uint *)&this_ptr->field_0xc2f0 = 0;
      }
    }
    (**(code **)(*(int *)&this_ptr->field_0x154 + 0x144))(this_ptr,delta_time);
    iVar3 = *(int *)&this_ptr->field_0xc1e8;
    puVar7 = &this_ptr->field_0x158;
    if (iVar3 == 0) {
      iVar15 = 1;
      iVar3 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,4);
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)puVar7,iVar3,iVar15);
    }
    else {
      fStack_48 = *(float *)(iVar3 + 0x20) - *(float *)&this_ptr->field_0x20;
      afStack_44[0] = *(float *)(iVar3 + 0x24) - *(float *)&this_ptr->field_0x24;
      afStack_44[1] = *(float *)(iVar3 + 0x28) - *(float *)&this_ptr->field_0x28;
      afStack_104[2] = fStack_48;
      afStack_104[(uint)bVar10 * -2 + 3] = afStack_44[(uint)bVar10 * -2];
      afStack_104[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
           afStack_44[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      fStack_20 = SQRT(fStack_f4 * fStack_f4 +
                       afStack_104[2] * afStack_104[2] + afStack_104[3] * afStack_104[3]);
      if (*(float *)&this_ptr->field_0xc1e0 < fStack_20) {
        iVar15 = 1;
        *(uint *)&this_ptr->field_0xc1e8 = 0;
        iVar3 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,4);
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)puVar7,iVar3,iVar15);
      }
      else if ((((fStack_20 <= _DAT_0060518c + _DAT_005f162d) || (_DAT_0060518c + 1.0 <= fStack_20))
               || (*(int *)&this_ptr->field_0xc2d4 != 1)) ||
              (iVar3 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,3), iVar3 == 1)) {
        CStack_174.z = 0x40400000;
        fStack_30 = 0x40400000;
        iVar3 = *(int *)&this_ptr->field_0xc1e8;
        *(uint *)&this_ptr->field_0x24a4 = 0;
        fVar18 = 0.17453292;
        *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
        *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
        fVar6 = 0.5;
        pCVar14 = &CStack_174;
        CStack_174.x = 0.0;
        CStack_174.y = 0.0;
        path_map = (CPathMap *)(**(code **)(*(int *)(iVar3 + 0x154) + 0xc4))(iVar3);
        iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                          ((CCharacter *)this_ptr,(CVector3f *)(iVar3 + 0x20),path_map,pCVar14,fVar6
                           ,fVar18);
        if (iVar3 < 0) {
          engine_console_cpp_FUN_00445430
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n",this_ptr);
          iVar15 = 1;
          iVar3 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,4);
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&this_ptr->field_0x158,iVar3,iVar15);
        }
        else if ((0 < iVar3) && (*(float *)&this_ptr->field_0xc1e4 <= 0.0)) {
          if (*(int *)&this_ptr->field_0xc2d4 == 1) {
            iVar15 = 6;
            iVar3 = 1;
          }
          else {
            iVar3 = 1;
            iVar15 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,3);
            iVar15 = iVar15 + 6;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&this_ptr->field_0x158,iVar15,iVar3);
          iVar3 = core_charactr_cpp_FUN_00435380(this_ptr,&DAT_005f15da);
          *(int *)&this_ptr->field_0xc2e8 = iVar3;
          if (iVar3 != 0) {
            fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(4.0,12.0);
            *(float *)&this_ptr->field_0xc2f0 = fStack_14;
          }
          iVar3 = core_actor_cpp_randomChance_FUN_0040cd00(0.8);
          if (iVar3 != 0) {
            core_shadow_cpp_FUN_0055f4a0(this_ptr);
          }
        }
        fVar6 = *(float *)&this_ptr->field_0xc298 - delta_time;
        *(float *)&this_ptr->field_0xc298 = fVar6;
        if ((fVar6 < 0.0) && (iVar3 = core_actor_cpp_randomChance_FUN_0040cd00(0.5), iVar3 != 0)) {
          core_shadow_cpp_FUN_0055f450(this_ptr);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)puVar7,7,1);
        iVar3 = core_charactr_cpp_FUN_00435380(this_ptr,&DAT_005f15b7);
        *(int *)&this_ptr->field_0xc2e8 = iVar3;
        if (iVar3 != 0) {
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(4.0,12.0);
          *(float *)&this_ptr->field_0xc2f0 = fStack_14;
        }
      }
    }
    break;
  case 6:
  case 7:
  case 8:
  case 9:
    if (*(int *)&this_ptr->field_0xc2d4 == 1) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_2d0);
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(7.0,15.0);
      fStack_2cc = fStack_14 * *(float *)&this_ptr->field_0xc310;
      pCStack_29c = this_ptr;
      pCStack_298 = this_ptr;
      uStack_2a0 = 0x6d;
      pSVar17 = aSStack_2d0;
      fVar6 = 1.0;
      core_xform_cpp_FUN_005b5080
                (&DAT_02c8af28,&this_ptr->field_0xfd8 + *(int *)&this_ptr->field_0xc274 * 0x30);
      pfVar8 = afStack_b0 + 0xb;
      afStack_84[0] = (float)uStack_1bc;
      afStack_b0[(uint)bVar10 * -2 + 0xc] = afStack_1dc[(uint)bVar10 * -2 + 9];
      afStack_b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
           afStack_1dc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
      core_actor_cpp_FUN_00408b40(this_ptr,pfVar8);
      pCVar14 = &CStack_1b0;
      CStack_1b0.x = fStack_144;
      *(float *)((int)&CStack_1b0 + (uint)bVar10 * -8 + 4) = afStack_164[(uint)bVar10 * -2 + 9];
      pCVar4 = this_ptr;
      *(float *)((int)&CStack_1b0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           afStack_164[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770((CEnemy *)pCVar4,pCVar14,fVar6,pSVar17);
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(7.0,15.0);
      fStack_2cc = fStack_14 * *(float *)&this_ptr->field_0xc310;
      pCStack_29c = this_ptr;
      pCStack_298 = this_ptr;
      pSVar17 = aSStack_2d0;
      fVar6 = 1.0;
      core_xform_cpp_FUN_005b5080
                (&DAT_02c8af28,&this_ptr->field_0xfd8 + *(int *)&this_ptr->field_0xc270 * 0x30);
      pfVar8 = afStack_104 + 0xe;
      afStack_cc[0] = (float)uStack_1f8;
      afStack_104[(uint)bVar10 * -2 + 0xf] = afStack_1f4[(uint)bVar10 * -2];
      afStack_104[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10] =
           afStack_1f4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      core_actor_cpp_FUN_00408b40(this_ptr,pfVar8);
      CStack_c0.x = fStack_1e0;
      *(float *)((int)&CStack_c0 + (uint)bVar10 * -8 + 4) = afStack_1dc[(uint)bVar10 * -2];
      *(float *)((int)&CStack_c0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           afStack_1dc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770
                ((CEnemy *)this_ptr,&CStack_c0,fVar6,pSVar17);
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(7.0,15.0);
      fStack_2cc = fStack_14 * *(float *)&this_ptr->field_0xc310;
      pCStack_29c = this_ptr;
      pCStack_298 = this_ptr;
      pSVar17 = aSStack_2d0;
      fVar6 = 1.0;
      core_xform_cpp_FUN_005b5080
                (&DAT_02c8af28,&this_ptr->field_0xfd8 + *(int *)&this_ptr->field_0xc278 * 0x30);
      afStack_f0[0] = (float)uStack_e4;
      afStack_104[(uint)bVar10 * -2 + 6] = afStack_104[(uint)bVar10 * -2 + 9];
      afStack_104[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
           afStack_104[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
      core_actor_cpp_FUN_00408b40(this_ptr,afStack_104 + 5);
      pCVar14 = &CStack_234;
      CStack_234.x = fStack_1a4;
      *(float *)((int)&CStack_234 + (uint)bVar10 * -8 + 4) = afStack_1a0[(uint)bVar10 * -2];
      pCVar4 = this_ptr;
      *(float *)((int)&CStack_234 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           afStack_1a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770((CEnemy *)pCVar4,pCVar14,fVar6,pSVar17);
      iVar3 = *(int *)&this_ptr->field_0xc1e8;
      if ((iVar3 != 0) &&
         (iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10c))(iVar3), iVar3 != 0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&this_ptr->field_0x158,10,1);
      }
    }
    core_shadow_cpp_FUN_0055f4a0(this_ptr);
    break;
  case 10:
    core_shadow_cpp_FUN_0055f590(this_ptr);
    break;
  case 0xf:
  case 0x10:
    fVar11 = (((float10)fStack_1c - (float10)fStack_28) * (float10)_DAT_005f15ed) /
             (float10)fStack_1c;
    *(uint *)&this_ptr->field_0xc2fc = 0;
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
    (**(code **)(*(int *)&this_ptr->field_0x154 + 0x1c))(this_ptr);
    pfVar8 = afStack_294;
    pfVar9 = &fStack_24c;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar9 = *pfVar8;
      pfVar8 = pfVar8 + (uint)bVar10 * -2 + 1;
      pfVar9 = pfVar9 + (uint)bVar10 * -2 + 1;
    }
    fVar6 = (fStack_238 - fStack_244) * fStack_18;
    fVar18 = (fStack_240 - fStack_24c) * fStack_2c * (float)_DAT_005f15fd;
    fStack_18c = fStack_24c + fStack_240;
    fStack_188 = fStack_248 + fStack_23c;
    fStack_184 = fStack_244 + fStack_238;
    fStack_90 = fStack_24c + fStack_240;
    afStack_b0[(uint)bVar10 * -2 + 9] = afStack_1a0[(uint)bVar10 * -2 + 6];
    afStack_b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
         afStack_1a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
    CStack_114.x = fVar18;
    CStack_114.z = fVar6 * (float)_DAT_005f15fd;
    fStack_120 = fStack_90 * _DAT_005f1605;
    fStack_11c = fStack_8c * _DAT_005f1605;
    fStack_118 = fStack_88 * _DAT_005f1605;
    fStack_168 = fStack_90 * _DAT_005f1605;
    afStack_164[(uint)bVar10 * -2] = afStack_164[(uint)bVar10 * -2 + 0x12];
    afStack_164[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         afStack_164[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13];
    CStack_114.y = afStack_164[0];
    fStack_138 = fVar18 + *(float *)&this_ptr->field_0x20;
    fStack_134 = afStack_164[0] + *(float *)&this_ptr->field_0x24;
    fStack_130 = CStack_114.z + *(float *)&this_ptr->field_0x28;
    CStack_d8.x = fStack_138;
    afStack_104[(uint)bVar10 * -2 + 0xc] = afStack_164[(uint)bVar10 * -2 + 0xc];
    afStack_104[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
         afStack_164[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd];
    if (&CStack_114 != (CVector3f *)(afStack_104 + 0xb)) {
      CStack_114.x = CStack_d8.x;
      CStack_114.y = CStack_d8.y;
      CStack_114.z = CStack_d8.z;
    }
    core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045e970((CDemonGlobe *)0x269cbb0,&CStack_114);
    _DAT_0269cbec = 60000;
    DAT_0269cbcc = 0x3a;
    core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0045e9c0((CDemonGlobe *)0x269cbb0,6.0);
    _DAT_0269cbd0 = 0;
    core_set_cpp_CDemonSet_addCoronaGlobe_FUN_00551960(g_CDemonSetPtr,(CDemonGlobe *)0x269cbb0);
    puVar7 = &this_ptr->field_0x158;
    *(uint *)&this_ptr->field_0xc308 = 1;
    pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                       ((CDeformableModelInstance *)puVar7);
    fStack_14 = core_motion_cpp_FUN_00525020((CMotionController *)puVar7);
    fVar11 = (float10)_DAT_005f160d;
    pow();
    fVar12 = (float10)_DAT_005f1615;
    pow();
    *(float *)&this_ptr->field_0xc300 = (float)((float10)1 + fVar11 / fVar12);
    iVar3 = 0;
    if (0 < pCVar5->bone_count) {
      do {
        iVar3 = iVar3 + 1;
        *(uint *)(puVar7 + 0x514) = *(uint *)&this_ptr->field_0xc300;
        puVar7 = puVar7 + 4;
      } while (iVar3 < pCVar5->bone_count);
    }
    break;
  case 0x11:
    *(uint *)&this_ptr->field_0xc304 = 0;
    *(uint *)&this_ptr->field_0xc300 = 0x3f800000;
    *(uint *)&this_ptr->field_0x70 = 2;
    return;
  default:
    *(uint *)&this_ptr->field_0xc2fc = 1;
    *(uint *)&this_ptr->field_0xc304 = 65000;
switchD_0055f381_caseD_0:
    *(uint *)&this_ptr->field_0xc2fc = 1;
    *(uint *)&this_ptr->field_0xc304 = 65000;
    iVar3 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0((CEnemy *)this_ptr,delta_time);
    if (iVar3 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)&this_ptr->field_0x158,5,1);
      break;
    }
    if (*(int *)&this_ptr->field_0xc2e8 != 0) {
      fVar6 = *(float *)&this_ptr->field_0xc2f0 - delta_time;
      *(float *)&this_ptr->field_0xc2f0 = fVar6;
      if (0.0 < fVar6) {
        core_charactr_cpp_FUN_00431cc0
                  (this_ptr,*(uint *)&this_ptr->field_0xc2e8,0x3f800000,0x3f800000,
                   &this_ptr->field_0xc2ec);
        uVar1 = *(uint *)&this_ptr->field_0xc2ec;
        if (uVar1 == 0) {
LAB_0055ed64:
          *(uint *)&this_ptr->field_0xc2e8 = 0;
        }
        else {
          if (uVar1 < 2) {
            iVar15 = 1;
            iVar3 = 5;
          }
          else {
            if (uVar1 != 2) goto LAB_0055ed64;
            iVar15 = 1;
            iVar3 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,3);
            iVar3 = iVar3 + 0xb;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&this_ptr->field_0x158,iVar3,iVar15);
          if (*(int *)&this_ptr->field_0xc2e8 != 0) break;
        }
      }
      else {
        *(uint *)&this_ptr->field_0xc2e8 = 0;
        *(uint *)&this_ptr->field_0xc2f0 = 0;
      }
    }
    (**(code **)(*(int *)&this_ptr->field_0x154 + 0x144))(this_ptr,delta_time);
    iVar3 = *(int *)&this_ptr->field_0xc1e8;
    if (iVar3 != 0) {
      if (*(int *)&this_ptr->field_0xc2b8 != 0) {
        fStack_108 = *(float *)(iVar3 + 0x20) - *(float *)&this_ptr->field_0x20;
        afStack_104[0] = *(float *)(iVar3 + 0x24) - *(float *)&this_ptr->field_0x24;
        afStack_104[1] = *(float *)(iVar3 + 0x28) - *(float *)&this_ptr->field_0x28;
        fStack_b4 = fStack_108;
        afStack_b0[(uint)bVar10 * -2] = afStack_104[(uint)bVar10 * -2];
        afStack_b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             afStack_104[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        fStack_24 = SQRT(afStack_b0[1] * afStack_b0[1] +
                         fStack_b4 * fStack_b4 + afStack_b0[0] * afStack_b0[0]);
        if ((*(float *)&this_ptr->field_0xc1e0 < fStack_24) || ((float)_DAT_005f1635 < fStack_24)) {
          *(uint *)&this_ptr->field_0xc1e8 = 0;
          break;
        }
      }
      if (*(int *)&this_ptr->field_0xc1e8 == 0) {
        fStack_14 = core_motion_cpp_FUN_00525020((CMotionController *)&this_ptr->field_0x158);
        if ((float)_DAT_005f1625 < fStack_14) {
          iVar15 = 1;
          iVar3 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,4);
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&this_ptr->field_0x158,iVar3,iVar15);
        }
      }
      else {
        iVar3 = core_actor_cpp_randomChance_FUN_0040cd00(0.4);
        if (iVar3 != 0) {
          core_shadow_cpp_FUN_0055f450(this_ptr);
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&this_ptr->field_0x158,5,1);
      }
    }
    break;
  case 0x16:
    fVar11 = ((float10)fStack_28 * (float10)_DAT_005f15ed) / (float10)fStack_1c;
    *(uint *)&this_ptr->field_0xc2fc = 0;
    iVar3 = round(this_ptr);
    *(int *)(iVar3 + 0xc304) = (int)ROUND(fVar11);
    core_shadow_cpp_FUN_0055f5e0();
  }
LAB_0055e060:
  *(uint *)&this_ptr->field_0x2ff0 = 0x40000000;
  if (0.0 < *(float *)&this_ptr->field_0xc1e4) {
    *(float *)&this_ptr->field_0xc1e4 = *(float *)&this_ptr->field_0xc1e4 - delta_time;
  }
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)&this_ptr->field_0x158);
  iVar3 = *(int *)(pSVar2 + 0x24);
  if (((((iVar3 != 0x11) && (iVar3 != 0)) && (iVar3 != 1)) &&
      (((iVar3 != 2 && (iVar3 != 3)) && (iVar3 != 4)))) || (*(int *)&this_ptr->field_0xdc != 0)) {
    iVar3 = *(int *)&this_ptr->field_0xc1e8;
    if ((iVar3 != 0) &&
       (pCVar4 = (CShadow *)(**(code **)(*(int *)(iVar3 + 0x154) + 0xf4))(iVar3), pCVar4 == this_ptr
       )) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                (g_CDemonSetPtr,*(CDemonActor **)&this_ptr->field_0xc1e8);
    }
    core_charactr_cpp_FUN_0042d700(this_ptr,delta_time);
    afStack_1dc[2] = *(float *)&this_ptr->field_0x2518 * delta_time;
    afStack_1dc[3] = *(float *)&this_ptr->field_0x251c * delta_time;
    fStack_1cc = *(float *)&this_ptr->field_0x2520 * delta_time;
    fStack_9c = afStack_1dc[2];
    afStack_b0[(uint)bVar10 * -2 + 6] = afStack_1dc[(uint)bVar10 * -2 + 3];
    afStack_b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
         afStack_1dc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
    fStack_6c = fStack_9c + *(float *)&this_ptr->field_0x249c;
    fStack_68 = fStack_98 + *(float *)&this_ptr->field_0x24a0;
    fStack_64 = fStack_94 + *(float *)&this_ptr->field_0x24a4;
    fStack_228 = fStack_6c;
    afStack_224[(uint)bVar10 * -2] = afStack_b0[(uint)bVar10 * -2 + 0x12];
    afStack_224[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         afStack_b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13];
    fStack_210 = fStack_228 + *(float *)&this_ptr->field_0x250c;
    fStack_20c = afStack_224[0] + *(float *)&this_ptr->field_0x2510;
    fStack_208 = afStack_224[1] + *(float *)&this_ptr->field_0x2514;
    CStack_54.x = fStack_210;
    *(float *)((int)&CStack_54 + (uint)bVar10 * -8 + 4) = afStack_224[(uint)bVar10 * -2 + 6];
    *(float *)((int)&CStack_54 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         afStack_224[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
    *(uint *)&this_ptr->field_0x24a4 = 0;
    *(uint *)&this_ptr->field_0x2514 = 0;
    *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
    *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
    *(uint *)&this_ptr->field_0x2510 = *(uint *)&this_ptr->field_0x2514;
    *(uint *)&this_ptr->field_0x250c = *(uint *)&this_ptr->field_0x2510;
    core_charactr_cpp_FUN_0042d750((CCharacter *)this_ptr,&CStack_54);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            ((CDeformableModelInstance *)&this_ptr->field_0x158);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  if ((0.0 <= *(float *)&this_ptr->field_0xc2f4) &&
     (fVar6 = *(float *)&this_ptr->field_0xc2f4 - delta_time,
     *(float *)&this_ptr->field_0xc2f4 = fVar6, fVar6 <= 0.0)) {
    fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(1.0,2.0);
    *(float *)&this_ptr->field_0xc2f4 = fStack_14;
    (**(code **)(*(int *)&this_ptr->field_0x154 + 0x1c))(this_ptr);
    pfVar8 = afStack_27c;
    pfVar9 = &fStack_264;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar9 = *pfVar8;
      pfVar8 = pfVar8 + (uint)bVar10 * -2 + 1;
      pfVar9 = pfVar9 + (uint)bVar10 * -2 + 1;
    }
    fStack_1c8 = fStack_264 + fStack_258;
    fStack_1c4 = fStack_260 + fStack_254;
    fStack_1c0 = fStack_25c + fStack_250;
    fStack_78 = fStack_264 + fStack_258;
    afStack_b0[(uint)bVar10 * -2 + 0xf] = afStack_1dc[(uint)bVar10 * -2 + 6];
    afStack_b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10] =
         afStack_1dc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
    pfVar8 = afStack_1a0 + 2;
    afStack_b0[2] = fStack_78 * _DAT_005f1605;
    afStack_b0[3] = fStack_74 * _DAT_005f1605;
    fStack_a0 = fStack_70 * _DAT_005f1605;
    afStack_1a0[2] = fStack_78 * _DAT_005f1605;
    afStack_1a0[(uint)bVar10 * -2 + 3] = afStack_b0[(uint)bVar10 * -2 + 3];
    afStack_1a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
         afStack_b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
    core_actor_cpp_FUN_00408b40(this_ptr,pfVar8);
    fStack_180 = fStack_12c;
    afStack_1a0[(uint)bVar10 * -2 + 9] = afStack_164[(uint)bVar10 * -2 + 0xf];
    afStack_1a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
         afStack_164[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10];
    if (afStack_1f4 + 2 != afStack_1a0 + 8) {
      afStack_1f4[2] = fStack_180;
      afStack_1f4[3] = fStack_17c;
      fStack_1e4 = fStack_178;
    }
    CStack_204.x = (int)ROUND(afStack_1f4[2] * _DAT_00605170);
    CStack_204.y = (int)ROUND(afStack_1f4[3] * _DAT_00605170);
    CStack_204.z = (int)ROUND(fStack_1e4 * _DAT_00605170);
    fStack_14 = (float)core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_00552490
                                 (g_CDemonSetPtr,&CStack_204,(CVector3i *)0x0);
    if ((*(int *)&this_ptr->field_0xc30c != 0) &&
       (_DAT_006051a0 * (float)_DAT_005f163d <= (float)(int)fStack_14)) {
      iVar15 = 1;
      iVar3 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,4);
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)&this_ptr->field_0x158,iVar3,iVar15);
      iVar3 = core_charactr_cpp_FUN_00435380(this_ptr,&DAT_005f15dc);
      *(int *)&this_ptr->field_0xc2e8 = iVar3;
      if (iVar3 != 0) {
        fVar6 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(3.0,6.0);
        *(float *)&this_ptr->field_0xc2f0 = fVar6;
      }
      *(float *)&this_ptr->field_0xc2f4 = *(float *)&this_ptr->field_0xc2f4 + _DAT_005f1645;
      return;
    }
  }
  return;
}
