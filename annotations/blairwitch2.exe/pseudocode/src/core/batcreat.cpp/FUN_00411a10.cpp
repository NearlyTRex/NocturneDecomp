// Name: core_batcreat.cpp_FUN_00411a10
// Address: 00411a10
// Address Range: [[00411a10, 00412497]]
// Convention: unknown
// Signature: void core_batcreat_cpp_FUN_00411a10(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_batcreat_cpp_FUN_00411a10(CEnemy *param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  CPathMap *path_map;
  uint uVar3;
  byte bVar4;
  float afStackY_11ac [997];
  CEnemy *this_ptr;
  CGore *this_ptr_00;
  float *pfVar5;
  CVector3f *pCVar6;
  float fVar7;
  float min_distance;
  uint *puVar8;
  EBloodType blood_type;
  SDamageInfo *damage_info;
  float max_distance;
  SDamageInfo aSStack_200 [4];
  float fStack_1fc;
  CEnemy *pCStack_1cc;
  CEnemy *pCStack_1c8;
  CVector3f CStack_1c4;
  float fStack_1b8;
  float afStack_1b4 [4];
  float fStack_1a4;
  uint uStack_1a0;
  float fStack_19c;
  float afStack_194 [3];
  byte auStack_188 [12];
  float fStack_17c;
  float afStack_178 [5];
  float afStack_164 [3];
  uint uStack_158;
  float fStack_154;
  uint uStack_14c;
  float fStack_148;
  uint uStack_140;
  uint uStack_134;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  uint uStack_11c;
  CVector3f CStack_110;
  uint uStack_104;
  float afStack_100 [5];
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  uint uStack_e0;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  CVector3f CStack_c8;
  float fStack_bc;
  float afStack_b8 [4];
  float fStack_a8;
  CVector3f CStack_a4;
  uint uStack_98;
  float afStack_94 [5];
  float fStack_80;
  uint uStack_7c;
  float fStack_78;
  float fStack_74;
  float afStack_70 [4];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  int iStack_28;
  CMotionController *pCStack_24;
  CMotionController *pCStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar4 = 0;
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0((CCharacter *)param_1,param_2);
  if (iVar2 == 0) {
    return;
  }
  *(uint *)&param_1->field_0x2510 = 0;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
  fStack_38 = param_2 * *(float *)&param_1->field_0x10a60;
  while (0.0 < fStack_38) {
    iVar2 = core_motion_cpp_CMotionController_advance_FUN_005030c0
                      ((CMotionController *)&param_1->field_0x2b4,&fStack_38);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)param_1,iVar2);
  }
  *(uint *)&param_1->field_0x2594 = *(uint *)&param_1->field_0x2510;
  core_charactr_cpp_FUN_0042b2a0(param_1,param_2 * *(float *)&param_1->field_0x10a60);
  pCStack_20 = (CMotionController *)&param_1->field_0x2b4;
  iVar2 = core_motion_cpp_FUN_005035c0(pCStack_20);
  iStack_28 = *(int *)(iVar2 + 0x24);
  iVar2 = core_charactr_cpp_FUN_004287f0((CCharacter *)param_1,param_2);
  if (iVar2 == 0) {
    switch(iStack_28) {
    case 0:
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))(param_1,param_2);
      iVar2 = *(int *)&param_1->field_0x10a78;
      if (iVar2 == 0) {
        iVar2 = core_enemy_cpp_FUN_00488970(param_1,param_2);
        if (iVar2 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_20,1,1);
        }
      }
      else {
        afStack_1b4[2] = *(float *)(iVar2 + 0x20) - *(float *)&param_1->field_0x20;
        afStack_1b4[3] = *(float *)(iVar2 + 0x24) - *(float *)&param_1->field_0x24;
        fStack_1a4 = *(float *)(iVar2 + 0x28) - *(float *)&param_1->field_0x28;
        fStack_5c = afStack_1b4[2];
        afStack_70[(uint)bVar4 * -2 + 6] = afStack_1b4[(uint)bVar4 * -2 + 3];
        afStack_70[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
             afStack_1b4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
        fStack_34 = SQRT(fStack_54 * fStack_54 + fStack_5c * fStack_5c + fStack_58 * fStack_58);
        fStack_2c = fStack_34;
        if (fStack_34 < 0x40600000) {
          core_vecdir_cpp_FUN_005838f0(afStack_70 + 5);
          uStack_158 = uStack_140;
          afStack_178[(uint)bVar4 * -2 + 9] = afStack_178[(uint)bVar4 * -2 + 0xf];
          afStack_178[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
               afStack_178[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10];
          fStack_14 = (float)core_actor_cpp_FUN_0040d0c0
                                       (fStack_154 - *(float *)&param_1->field_0x34);
          if (ABS(fStack_14) < (float)_DAT_005cb8f6) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_20,3,1);
            iVar2 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1[1].field_0x3c);
            if ((iVar2 == 0) &&
               (iVar2 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1[1].field_0x40), iVar2 == 0)
               ) {
              uVar3 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))
                                (param_1,"batman-attack?.wav");
              *(uint *)&param_1[1].field_0x40 = uVar3;
            }
          }
        }
        if (fStack_34 < *(float *)&param_1->field_0x10a70) {
          pCStack_24 = (CMotionController *)&param_1->field_0x2b4;
          if (fStack_34 < _DAT_005f2ee8) {
            iVar2 = 1;
            *(uint *)&param_1->field_0x10a74 = 0;
          }
          else {
            *(uint *)&param_1->field_0x10a74 = 0;
            iVar2 = core_actor_cpp_FUN_0040d060(0.1);
            if (iVar2 == 0) {
              iVar2 = 1;
            }
            else {
              iVar2 = *(int *)&param_1->field_0x10a78;
              fStack_ec = *(float *)(iVar2 + 0x20) - *(float *)&param_1->field_0x20;
              fStack_e8 = *(float *)(iVar2 + 0x24) - *(float *)&param_1->field_0x24;
              fStack_e4 = *(float *)(iVar2 + 0x28) - *(float *)&param_1->field_0x28;
              fStack_bc = fStack_ec;
              afStack_b8[(uint)bVar4 * -2] = afStack_100[(uint)bVar4 * -2 + 6];
              afStack_b8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
                   afStack_100[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
              core_vecdir_cpp_FUN_005838f0(&fStack_bc);
              uStack_1a0 = afStack_178[2];
              afStack_1b4[(uint)bVar4 * -2 + 6] = afStack_178[(uint)bVar4 * -2 + 3];
              afStack_1b4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
                   afStack_178[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
              fStack_14 = (float)core_actor_cpp_FUN_0040d0c0
                                           (fStack_19c - *(float *)&param_1->field_0x34);
              if ((float)_DAT_005cb8f6 <= ABS(fStack_14)) {
                iVar2 = 1;
              }
              else if ((float)_DAT_005cb8fe <=
                       ABS(*(float *)(*(int *)&param_1->field_0x10a78 + 0x24) -
                           *(float *)&param_1->field_0x24)) {
                iVar2 = 1;
              }
              else {
                iVar2 = 2;
              }
            }
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_24,iVar2,1);
          if ((((*(int *)&param_1[1].field_0x44 == 0) &&
               (iVar2 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1[1].field_0x3c), iVar2 == 0)
               ) && (iVar2 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1[1].field_0x40),
                    iVar2 == 0)) &&
             (iVar2 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1[1].field_0x38), iVar2 == 0))
          {
            uVar3 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))
                              (param_1,"batman-alert.wav");
            *(uint *)&param_1[1].field_0x44 = 1;
            *(uint *)&param_1[1].field_0x38 = uVar3;
          }
        }
      }
      break;
    case 1:
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))(param_1,param_2);
      fVar7 = 0x40600000;
      if (*(int *)&param_1->field_0x10a78 == 0) {
        iVar2 = core_enemy_cpp_FUN_00488970(param_1,param_2);
        if (iVar2 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_20,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_20,1,1);
        }
      }
      else {
        max_distance = 0.17453292;
        fStack_18 = 0x40600000;
        min_distance = 0.5;
        *(uint *)&param_1->field_0x2510 = 0;
        *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
        *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
        auStack_188._0_4_ = 0;
        auStack_188._8_4_ = fVar7;
        pCVar6 = (CVector3f *)auStack_188;
        auStack_188._4_4_ = 0;
        path_map = (CPathMap *)
                   (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0xcc))
                             (*(int *)&param_1->field_0x10a78);
        iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                          ((CCharacter *)param_1,
                           (CVector3f *)(*(int *)&param_1->field_0x10a78 + 0x20),path_map,pCVar6,
                           min_distance,max_distance);
        if (-1 < iVar2) {
          iVar2 = *(int *)&param_1->field_0x10a78;
          fStack_50 = *(float *)&param_1->field_0x20 - *(float *)(iVar2 + 0x20);
          fStack_4c = *(float *)&param_1->field_0x24 - *(float *)(iVar2 + 0x24);
          fStack_48 = *(float *)&param_1->field_0x28 - *(float *)(iVar2 + 0x28);
          fStack_80 = fStack_50;
          afStack_94[(uint)bVar4 * -2 + 6] = afStack_70[(uint)bVar4 * -2 + 9];
          afStack_94[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
               afStack_70[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
          uStack_7c = 0;
          fStack_1c = SQRT(fStack_78 * fStack_78 + fStack_80 * fStack_80);
          fStack_30 = fStack_1c;
          if ((_DAT_005f2ee8 < fStack_1c) &&
             (*(uint *)&param_1->field_0x10a74 = 0, iStack_28 == 1)) {
            iVar2 = *(int *)&param_1->field_0x10a78;
            fStack_44 = *(float *)(iVar2 + 0x20) - *(float *)&param_1->field_0x20;
            fStack_40 = *(float *)(iVar2 + 0x24) - *(float *)&param_1->field_0x24;
            fStack_3c = *(float *)(iVar2 + 0x28) - *(float *)&param_1->field_0x28;
            afStack_94[2] = fStack_44;
            afStack_94[(uint)bVar4 * -2 + 3] = afStack_70[(uint)bVar4 * -2 + 0xc];
            afStack_94[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
                 afStack_70[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
            core_vecdir_cpp_FUN_005838f0(afStack_94 + 2);
            uStack_98 = uStack_134;
            afStack_94[(uint)bVar4 * -2] = afStack_178[(uint)bVar4 * -2 + 0x12];
            afStack_94[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
                 afStack_178[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x13];
            fStack_14 = (float)core_actor_cpp_FUN_0040d0c0
                                         (afStack_94[0] - *(float *)&param_1->field_0x34);
            if ((ABS(fStack_14) < (float)_DAT_005cb8f6) &&
               (ABS(*(float *)(*(int *)&param_1->field_0x10a78 + 0x24) -
                    *(float *)&param_1->field_0x24) < (float)_DAT_005cb8fe)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_20,2,1);
              uVar1 = *(uint *)&param_1[1].field_0x3c;
              *(uint *)&param_1->field_0x10a74 = 0;
              iVar2 = sound_sndmain_cpp_FUN_00550b70(uVar1);
              if ((iVar2 == 0) &&
                 (iVar2 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1[1].field_0x40),
                 iVar2 == 0)) {
                uVar3 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))
                                  (param_1,"batman-attack?.wav");
                *(uint *)&param_1[1].field_0x40 = uVar3;
              }
            }
          }
          if ((fStack_30 <= fStack_18) && (*(float *)&param_1->field_0x10a74 <= 0.0)) {
            iVar2 = *(int *)&param_1->field_0x10a78;
            fStack_d4 = *(float *)(iVar2 + 0x20) - *(float *)&param_1->field_0x20;
            fStack_d0 = *(float *)(iVar2 + 0x24) - *(float *)&param_1->field_0x24;
            fStack_cc = *(float *)(iVar2 + 0x28) - *(float *)&param_1->field_0x28;
            afStack_164[0] = fStack_d4;
            afStack_178[(uint)bVar4 * -2 + 6] = afStack_100[(uint)bVar4 * -2 + 0xc];
            afStack_178[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
                 afStack_100[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
            core_vecdir_cpp_FUN_005838f0(afStack_178 + 5);
            uStack_14c = uStack_11c;
            afStack_178[(uint)bVar4 * -2 + 0xc] = afStack_178[(uint)bVar4 * -2 + 0x18];
            afStack_178[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd] =
                 afStack_178[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x19];
            fStack_14 = (float)core_actor_cpp_FUN_0040d0c0
                                         (fStack_148 - *(float *)&param_1->field_0x34);
            if (ABS(fStack_14) < (float)_DAT_005cb8f6) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)&param_1->field_0x2b4,3,1);
              uVar1 = *(uint *)&param_1[1].field_0x3c;
              *(uint *)&param_1->field_0x10a74 = 0x3f800000;
              iVar2 = sound_sndmain_cpp_FUN_00550b70(uVar1);
              if ((iVar2 == 0) &&
                 (iVar2 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1[1].field_0x40),
                 iVar2 == 0)) {
                uVar3 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))
                                  (param_1,"batman-attack?.wav");
                *(uint *)&param_1[1].field_0x40 = uVar3;
              }
            }
          }
          if (*(float *)&param_1->field_0x10a70 < fStack_30) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)&param_1->field_0x2b4,0,1);
          }
        }
      }
      break;
    case 3:
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_200);
      fStack_1fc = (float)core_actor_cpp_FUN_0040cf60(0x40e00000,0x41700000);
      damage_info = aSStack_200;
      pCStack_1cc = param_1;
      pCStack_1c8 = param_1;
      fVar7 = 0.4;
      fStack_14 = fStack_1fc;
      core_xform_cpp_FUN_00591530(&DAT_0265370c,&param_1->field_0x1134 + DAT_007bc754 * 0x30);
      pfVar5 = afStack_1b4 + 8;
      afStack_194[0] = (float)uStack_e0;
      afStack_1b4[(uint)bVar4 * -2 + 9] = afStack_100[(uint)bVar4 * -2 + 9];
      afStack_1b4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
           afStack_100[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
      core_actor_cpp_FUN_00408d70(param_1,pfVar5);
      pCVar6 = &CStack_a4;
      CStack_a4._0_4_ = CStack_c8._0_4_;
      *(uint *)((int)&CStack_a4 + (uint)bVar4 * -8 + 4) =
           *(uint *)((int)&CStack_c8 + (uint)bVar4 * -8 + 4);
      this_ptr = param_1;
      *(uint *)((int)&CStack_a4 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
           *(uint *)((int)&CStack_c8 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
      core_enemy_cpp_FUN_00488110(this_ptr,pCVar6,fVar7,damage_info);
      break;
    case 8:
      if ((*(int *)&param_1->field_0x10a64 == 0) && (*(int *)&param_1->field_0xdc == 0)) {
        core_skeleton_cpp_FUN_005469a0(pCStack_20,0);
        puVar8 = &uStack_104;
        uStack_104 = afStack_100[2];
        afStack_100[(uint)bVar4 * -2] = afStack_100[(uint)bVar4 * -2 + 3];
        afStack_100[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
             afStack_100[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
        core_actor_cpp_FUN_00408d70(param_1,puVar8);
        blood_type = BLOOD_TYPE_RED;
        pCVar6 = &CStack_110;
        CStack_110._0_4_ = CStack_1c4._0_4_;
        *(uint *)((int)&CStack_110 + (uint)bVar4 * -8 + 4) =
             *(uint *)((int)&CStack_1c4 + (uint)bVar4 * -8 + 4);
        this_ptr_00 = g_CGorePtr;
        *(uint *)((int)&CStack_110 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
             *(uint *)((int)&CStack_1c4 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
        core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(this_ptr_00,pCVar6,blood_type);
        *(uint *)&param_1->field_0x10a64 = 1;
      }
    }
    goto switchD_00412491_caseD_2;
  }
  uVar1 = *(uint *)&param_1->field_0x27ac;
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_00411ae7:
      iVar2 = 1;
    }
    else {
LAB_00411cc3:
      iVar2 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&param_1->field_0x2b4,iVar2,1);
  }
  else {
    if (uVar1 < 3) goto LAB_00411ae7;
    if (uVar1 != 3) goto LAB_00411cc3;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&param_1->field_0x2b4,0,1);
    engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)&param_1->field_0x2510 = 0;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
switchD_00412491_caseD_2:
  if (0.0 < *(float *)&param_1->field_0x10a74) {
    *(float *)&param_1->field_0x10a74 = *(float *)&param_1->field_0x10a74 - param_2;
  }
  iVar2 = core_charactr_cpp_FUN_00424430((CCharacter *)param_1);
  if (iVar2 != 0) {
    core_charactr_cpp_FUN_00423a10(param_1,param_2);
    fStack_17c = *(float *)&param_1->field_0x2588 * param_2;
    afStack_178[0] = *(float *)&param_1->field_0x258c * param_2;
    afStack_178[1] = *(float *)&param_1->field_0x2590 * param_2;
    fStack_128 = fStack_17c;
    afStack_178[(uint)bVar4 * -2 + 0x15] = afStack_178[(uint)bVar4 * -2];
    afStack_178[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x16] =
         afStack_178[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    fStack_1b8 = fStack_128 + *(float *)&param_1->field_0x257c;
    afStack_1b4[0] = fStack_124 + *(float *)&param_1->field_0x2580;
    afStack_1b4[1] = fStack_120 + *(float *)&param_1->field_0x2584;
    afStack_70[2] = fStack_1b8;
    afStack_70[(uint)bVar4 * -2 + 3] = afStack_1b4[(uint)bVar4 * -2];
    afStack_70[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         afStack_1b4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    afStack_b8[2] = afStack_70[2] + *(float *)&param_1->field_0x2508;
    afStack_b8[3] = afStack_70[3] + *(float *)&param_1->field_0x250c;
    fStack_a8 = fStack_60 + *(float *)&param_1->field_0x2510;
    fStack_74 = afStack_b8[2];
    afStack_70[(uint)bVar4 * -2] = afStack_b8[(uint)bVar4 * -2 + 3];
    afStack_70[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         afStack_b8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
    *(uint *)&param_1->field_0x2584 = 0;
    *(uint *)&param_1->field_0x2580 = *(uint *)&param_1->field_0x2584;
    *(uint *)&param_1->field_0x257c = *(uint *)&param_1->field_0x2580;
    *(uint *)&param_1->field_0x2510 = 0;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
    core_charactr_cpp_FUN_00423a60((CCharacter *)param_1,(CVector3f *)&fStack_74);
  }
  core_charactr_cpp_FUN_00424470((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            ((CDeformableModelInstance *)&param_1->field_0x2b4);
  core_charactr_cpp_FUN_00429e90((CCharacter *)param_1,param_2);
  return;
}
