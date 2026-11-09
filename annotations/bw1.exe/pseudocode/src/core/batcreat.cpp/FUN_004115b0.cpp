// Name: core_batcreat.cpp_FUN_004115b0
// Address: 004115b0
// Address Range: [[004115b0, 00412100]]
// Convention: unknown
// Signature: void core_batcreat_cpp_FUN_004115b0(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_batcreat_cpp_FUN_004115b0(CEnemy *param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  SMotion *pSVar3;
  CPathMap *path_map;
  uint uVar4;
  byte bVar5;
  float afStackY_11ac [982];
  CEnemy *this_ptr;
  CGore *this_ptr_00;
  float *pfVar6;
  CVector3f *pCVar7;
  float fVar8;
  float min_distance;
  EBloodType blood_type;
  SDamageInfo *damage_info;
  float max_distance;
  SDamageInfo aSStack_23c [4];
  float fStack_238;
  CEnemy *pCStack_208;
  CEnemy *pCStack_204;
  SDamageInfo aSStack_200 [4];
  uint uStack_1fc;
  CEnemy *pCStack_1cc;
  CEnemy *pCStack_1c8;
  float fStack_1c4;
  float afStack_1c0 [2];
  CVector3f CStack_1b8;
  float fStack_1ac;
  float afStack_1a8 [4];
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  uint uStack_188;
  float afStack_17c [3];
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  CVector3f CStack_164;
  float fStack_158;
  float afStack_154 [4];
  float fStack_144;
  float afStack_140 [3];
  byte auStack_134 [12];
  uint uStack_128;
  float afStack_124 [4];
  float fStack_114;
  CVector3f CStack_110;
  uint uStack_104;
  float afStack_100 [4];
  float fStack_f0;
  uint uStack_ec;
  float fStack_e8;
  uint uStack_e0;
  float afStack_d4 [3];
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float afStack_b0 [3];
  CVector3f CStack_a4;
  uint uStack_98;
  float afStack_94 [5];
  uint uStack_80;
  float afStack_74 [3];
  float fStack_68;
  float afStack_64 [5];
  uint uStack_50;
  uint uStack_44;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  int iStack_28;
  float fStack_24;
  CMotionController *pCStack_20;
  CMotionController *pCStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar5 = 0;
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0((CCharacter *)param_1,param_2);
  if (iVar2 == 0) {
    return;
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  fStack_38 = param_2 * *(float *)&param_1->field_0xc1d0;
  while (0.0 < fStack_38) {
    iVar2 = core_motion_cpp_CMotionController_advance_FUN_00524270
                      ((CMotionController *)&param_1->field_0x158,&fStack_38);
    core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)param_1,iVar2);
  }
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  core_charactr_cpp_FUN_00435320(param_1,param_2 * *(float *)&param_1->field_0xc1d0);
  if ((((*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0x30 * 4) == 0) &&
       (*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0x28 * 4) == 0)) ||
      (*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0x4 * 4) == 0)) &&
     ((0.0 <= *(float *)(param_1 + 1) &&
      (fVar8 = *(float *)(param_1 + 1), *(float *)(param_1 + 1) = fVar8 + param_2,
      (float)_DAT_005d3861 <= fVar8 + param_2)))) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_200);
    uStack_1fc = 0x461c3f9a;
    pCStack_1cc = param_1;
    pCStack_1c8 = param_1;
    (**(code **)(*(int *)&param_1->field_0x154 + 0x108))(param_1,aSStack_200);
    *(uint *)(param_1 + 1) = 0xbf800000;
  }
  pCStack_1c = (CMotionController *)&param_1->field_0x158;
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(pCStack_1c);
  iStack_28 = *(int *)(pSVar3 + 0x24);
  iVar2 = core_charactr_cpp_FUN_00432240((CCharacter *)param_1,param_2);
  if (iVar2 == 0) {
    switch(iStack_28) {
    case 0:
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
      iVar2 = *(int *)&param_1->field_0xc1e8;
      if (iVar2 == 0) {
        iVar2 = core_enemy_cpp_FUN_004a0fe0(param_1,param_2);
        if (iVar2 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_1c,1,1);
        }
      }
      else {
        fStack_170 = *(float *)(iVar2 + 0x20) - *(float *)&param_1->field_0x20;
        fStack_16c = *(float *)(iVar2 + 0x24) - *(float *)&param_1->field_0x24;
        fStack_168 = *(float *)(iVar2 + 0x28) - *(float *)&param_1->field_0x28;
        fStack_194 = fStack_170;
        afStack_1a8[(uint)bVar5 * -2 + 6] = afStack_1a8[(uint)bVar5 * -2 + 0xf];
        afStack_1a8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
             afStack_1a8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10];
        fStack_34 = SQRT(fStack_18c * fStack_18c + fStack_194 * fStack_194 + fStack_190 * fStack_190
                        );
        fStack_24 = fStack_34;
        if (fStack_34 < 0x40600000) {
          core_vecdir_cpp_FUN_005a7520(afStack_1a8 + 5);
          uStack_ec = uStack_e0;
          afStack_100[(uint)bVar5 * -2 + 6] = afStack_100[(uint)bVar5 * -2 + 9];
          afStack_100[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
               afStack_100[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
          fStack_14 = (float)core_actor_cpp_FUN_0040cd60(fStack_e8 - *(float *)&param_1->field_0x34)
          ;
          if (ABS(fStack_14) < (float)_DAT_005d3869) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_1c,3,1);
            iVar2 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1[1].field_0x40);
            if ((iVar2 == 0) &&
               (iVar2 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1[1].field_0x44), iVar2 == 0)
               ) {
              uVar4 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                                (param_1,"batman-attack?.wav");
              *(uint *)&param_1[1].field_0x44 = uVar4;
            }
          }
        }
        if (fStack_34 < *(float *)&param_1->field_0xc1e0) {
          pCStack_20 = (CMotionController *)&param_1->field_0x158;
          if (fStack_34 < _DAT_005fbfd8) {
            iVar2 = 1;
            *(uint *)&param_1->field_0xc1e4 = 0;
          }
          else {
            *(uint *)&param_1->field_0xc1e4 = 0;
            iVar2 = core_actor_cpp_FUN_0040cd00(0.1);
            if (iVar2 == 0) {
              iVar2 = 1;
            }
            else {
              iVar2 = *(int *)&param_1->field_0xc1e8;
              fStack_1c4 = *(float *)(iVar2 + 0x20) - *(float *)&param_1->field_0x20;
              afStack_1c0[0] = *(float *)(iVar2 + 0x24) - *(float *)&param_1->field_0x24;
              afStack_1c0[1] = *(float *)(iVar2 + 0x28) - *(float *)&param_1->field_0x28;
              afStack_140[0] = fStack_1c4;
              afStack_154[(uint)bVar5 * -2 + 6] = afStack_1c0[(uint)bVar5 * -2];
              afStack_154[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
                   afStack_1c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
              core_vecdir_cpp_FUN_005a7520(afStack_154 + 5);
              afStack_94[2] = (float)uStack_98;
              afStack_94[(uint)bVar5 * -2 + 3] = afStack_94[(uint)bVar5 * -2];
              afStack_94[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
                   afStack_94[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
              fStack_14 = (float)core_actor_cpp_FUN_0040cd60
                                           (afStack_94[3] - *(float *)&param_1->field_0x34);
              if ((float)_DAT_005d3869 <= ABS(fStack_14)) {
                iVar2 = 1;
              }
              else if ((float)_DAT_005d3871 <=
                       ABS(*(float *)(*(int *)&param_1->field_0xc1e8 + 0x24) -
                           *(float *)&param_1->field_0x24)) {
                iVar2 = 1;
              }
              else {
                iVar2 = 2;
              }
            }
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_20,iVar2,1);
          if ((((*(int *)&param_1[1].field_0x48 == 0) &&
               (iVar2 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1[1].field_0x40), iVar2 == 0)
               ) && (iVar2 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1[1].field_0x44),
                    iVar2 == 0)) &&
             (iVar2 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1[1].field_0x3c), iVar2 == 0))
          {
            uVar4 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                              (param_1,"batman-alert.wav");
            *(uint *)&param_1[1].field_0x48 = 1;
            *(uint *)&param_1[1].field_0x3c = uVar4;
          }
        }
      }
      break;
    case 1:
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
      fVar8 = 0x40600000;
      if (*(int *)&param_1->field_0xc1e8 == 0) {
        iVar2 = core_enemy_cpp_FUN_004a0fe0(param_1,param_2);
        if (iVar2 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_1c,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_1c,1,1);
        }
      }
      else {
        max_distance = 0.17453292;
        fStack_30 = 0x40600000;
        min_distance = 0.5;
        *(uint *)&param_1->field_0x24a4 = 0;
        *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
        *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
        auStack_134._0_4_ = 0;
        auStack_134._8_4_ = fVar8;
        pCVar7 = (CVector3f *)auStack_134;
        auStack_134._4_4_ = 0;
        path_map = (CPathMap *)
                   (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xc4))
                             (*(int *)&param_1->field_0xc1e8);
        iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                          ((CCharacter *)param_1,
                           (CVector3f *)(*(int *)&param_1->field_0xc1e8 + 0x20),path_map,pCVar7,
                           min_distance,max_distance);
        if (-1 < iVar2) {
          iVar2 = *(int *)&param_1->field_0xc1e8;
          afStack_154[2] = *(float *)&param_1->field_0x20 - *(float *)(iVar2 + 0x20);
          afStack_154[3] = *(float *)&param_1->field_0x24 - *(float *)(iVar2 + 0x24);
          fStack_144 = *(float *)&param_1->field_0x28 - *(float *)(iVar2 + 0x28);
          afStack_64[2] = afStack_154[2];
          afStack_64[(uint)bVar5 * -2 + 3] = afStack_154[(uint)bVar5 * -2 + 3];
          afStack_64[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
               afStack_154[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
          fStack_18 = SQRT(afStack_64[4] * afStack_64[4] + afStack_64[2] * afStack_64[2]);
          afStack_64[3] = 0.0;
          fStack_2c = fStack_18;
          if ((_DAT_005fbfd8 < fStack_18) &&
             (*(uint *)&param_1->field_0xc1e4 = 0, iStack_28 == 1)) {
            iVar2 = *(int *)&param_1->field_0xc1e8;
            fStack_1ac = *(float *)(iVar2 + 0x20) - *(float *)&param_1->field_0x20;
            afStack_1a8[0] = *(float *)(iVar2 + 0x24) - *(float *)&param_1->field_0x24;
            afStack_1a8[1] = *(float *)(iVar2 + 0x28) - *(float *)&param_1->field_0x28;
            afStack_d4[0] = fStack_1ac;
            afStack_100[(uint)bVar5 * -2 + 0xc] = afStack_1a8[(uint)bVar5 * -2];
            afStack_100[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
                 afStack_1a8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
            core_vecdir_cpp_FUN_005a7520(afStack_100 + 0xb);
            uStack_104 = uStack_50;
            afStack_100[(uint)bVar5 * -2] = afStack_64[(uint)bVar5 * -2 + 6];
            afStack_100[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
                 afStack_64[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
            fStack_14 = (float)core_actor_cpp_FUN_0040cd60
                                         (afStack_100[0] - *(float *)&param_1->field_0x34);
            if ((ABS(fStack_14) < (float)_DAT_005d3869) &&
               (ABS(*(float *)(*(int *)&param_1->field_0xc1e8 + 0x24) -
                    *(float *)&param_1->field_0x24) < (float)_DAT_005d3871)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_1c,2,1);
              uVar1 = *(uint *)&param_1[1].field_0x40;
              *(uint *)&param_1->field_0xc1e4 = 0;
              iVar2 = sound_sndmain_cpp_FUN_005735a0(uVar1);
              if ((iVar2 == 0) &&
                 (iVar2 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1[1].field_0x44),
                 iVar2 == 0)) {
                uVar4 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                                  (param_1,"batman-attack?.wav");
                *(uint *)&param_1[1].field_0x44 = uVar4;
              }
            }
          }
          if ((fStack_2c <= fStack_30) && (*(float *)&param_1->field_0xc1e4 <= 0.0)) {
            iVar2 = *(int *)&param_1->field_0xc1e8;
            fStack_bc = *(float *)(iVar2 + 0x20) - *(float *)&param_1->field_0x20;
            fStack_b8 = *(float *)(iVar2 + 0x24) - *(float *)&param_1->field_0x24;
            fStack_b4 = *(float *)(iVar2 + 0x28) - *(float *)&param_1->field_0x28;
            afStack_74[0] = fStack_bc;
            afStack_94[(uint)bVar5 * -2 + 9] = afStack_100[(uint)bVar5 * -2 + 0x12];
            afStack_94[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
                 afStack_100[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13];
            core_vecdir_cpp_FUN_005a7520(afStack_94 + 8);
            uStack_128 = uStack_44;
            afStack_124[(uint)bVar5 * -2] = afStack_64[(uint)bVar5 * -2 + 9];
            afStack_124[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
                 afStack_64[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
            fStack_14 = (float)core_actor_cpp_FUN_0040cd60
                                         (afStack_124[0] - *(float *)&param_1->field_0x34);
            if (ABS(fStack_14) < (float)_DAT_005d3869) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        ((CMotionController *)&param_1->field_0x158,3,1);
              uVar1 = *(uint *)&param_1[1].field_0x40;
              *(uint *)&param_1->field_0xc1e4 = 0x3f800000;
              iVar2 = sound_sndmain_cpp_FUN_005735a0(uVar1);
              if ((iVar2 == 0) &&
                 (iVar2 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1[1].field_0x44),
                 iVar2 == 0)) {
                uVar4 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                                  (param_1,"batman-attack?.wav");
                *(uint *)&param_1[1].field_0x44 = uVar4;
              }
            }
          }
          if (*(float *)&param_1->field_0xc1e0 < fStack_2c) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)&param_1->field_0x158,0,1);
          }
        }
      }
      break;
    case 3:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_23c);
      fStack_238 = (float)core_actor_cpp_FUN_0040cc00(0x40e00000,0x41700000);
      damage_info = aSStack_23c;
      pCStack_208 = param_1;
      pCStack_204 = param_1;
      fVar8 = 0.4;
      fStack_14 = fStack_238;
      core_xform_cpp_FUN_005b5080(&DAT_02c8af28,&param_1->field_0xfd8 + DAT_007c3754 * 0x30);
      pfVar6 = afStack_100 + 0x14;
      afStack_b0[0] = (float)uStack_188;
      afStack_100[(uint)bVar5 * -2 + 0x15] = afStack_1a8[(uint)bVar5 * -2 + 9];
      afStack_100[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x16] =
           afStack_1a8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
      core_actor_cpp_FUN_00408b40(param_1,pfVar6);
      pCVar7 = &CStack_a4;
      CStack_a4._0_4_ = CStack_1b8._0_4_;
      *(uint *)((int)&CStack_a4 + (uint)bVar5 * -8 + 4) =
           *(uint *)((int)&CStack_1b8 + (uint)bVar5 * -8 + 4);
      this_ptr = param_1;
      *(uint *)((int)&CStack_a4 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           *(uint *)((int)&CStack_1b8 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      core_enemy_cpp_FUN_004a0770(this_ptr,pCVar7,fVar8,damage_info);
      break;
    case 8:
      if ((*(int *)&param_1->field_0xc1d4 == 0) && (*(int *)&param_1->field_0xdc == 0)) {
        core_skeleton_cpp_FUN_00569040(pCStack_1c,0);
        pfVar6 = afStack_1a8 + 0xb;
        afStack_17c[0] = (float)uStack_80;
        afStack_1a8[(uint)bVar5 * -2 + 0xc] = afStack_94[(uint)bVar5 * -2 + 6];
        afStack_1a8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
             afStack_94[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
        core_actor_cpp_FUN_00408b40(param_1,pfVar6);
        blood_type = BLOOD_TYPE_RED;
        pCVar7 = &CStack_110;
        CStack_110._0_4_ = CStack_164._0_4_;
        *(uint *)((int)&CStack_110 + (uint)bVar5 * -8 + 4) =
             *(uint *)((int)&CStack_164 + (uint)bVar5 * -8 + 4);
        this_ptr_00 = g_CGorePtr;
        *(uint *)((int)&CStack_110 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
             *(uint *)((int)&CStack_164 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
        core_gore_cpp_CGore_createBloodPool_FUN_004e62e0(this_ptr_00,pCVar7,blood_type);
        *(uint *)&param_1->field_0xc1d4 = 1;
      }
    }
    goto switchD_004120fa_caseD_2;
  }
  uVar1 = *(uint *)&param_1->field_0x273c;
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_004116b0:
      iVar2 = 1;
    }
    else {
LAB_0041191c:
      iVar2 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&param_1->field_0x158,iVar2,1);
  }
  else {
    if (uVar1 < 3) goto LAB_004116b0;
    if (uVar1 != 3) goto LAB_0041191c;
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_1c,0,1);
    engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
switchD_004120fa_caseD_2:
  if (0.0 < *(float *)&param_1->field_0xc1e4) {
    *(float *)&param_1->field_0xc1e4 = *(float *)&param_1->field_0xc1e4 - param_2;
  }
  iVar2 = core_charactr_cpp_FUN_0042e120((CCharacter *)param_1);
  if (iVar2 != 0) {
    core_charactr_cpp_FUN_0042d700(param_1,param_2);
    fStack_c8 = *(float *)&param_1->field_0x2518 * param_2;
    fStack_c4 = *(float *)&param_1->field_0x251c * param_2;
    fStack_c0 = *(float *)&param_1->field_0x2520 * param_2;
    fStack_158 = fStack_c8;
    afStack_154[(uint)bVar5 * -2] = afStack_100[(uint)bVar5 * -2 + 0xf];
    afStack_154[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_100[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10];
    afStack_124[2] = fStack_158 + *(float *)&param_1->field_0x250c;
    afStack_124[3] = afStack_154[0] + *(float *)&param_1->field_0x2510;
    fStack_114 = afStack_154[1] + *(float *)&param_1->field_0x2514;
    afStack_100[2] = afStack_124[2];
    afStack_100[(uint)bVar5 * -2 + 3] = afStack_124[(uint)bVar5 * -2 + 3];
    afStack_100[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
         afStack_124[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
    afStack_1a8[2] = afStack_100[2] + *(float *)&param_1->field_0x249c;
    afStack_1a8[3] = afStack_100[3] + *(float *)&param_1->field_0x24a0;
    fStack_198 = fStack_f0 + *(float *)&param_1->field_0x24a4;
    fStack_68 = afStack_1a8[2];
    afStack_64[(uint)bVar5 * -2] = afStack_1a8[(uint)bVar5 * -2 + 3];
    afStack_64[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_1a8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
    *(uint *)&param_1->field_0x2514 = 0;
    *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
    core_charactr_cpp_FUN_0042d750((CCharacter *)param_1,(CVector3f *)&fStack_68);
  }
  core_charactr_cpp_FUN_0042e160((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            ((CDeformableModelInstance *)&param_1->field_0x158);
  core_charactr_cpp_FUN_00433e80((CCharacter *)param_1,param_2);
  return;
}
