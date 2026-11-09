// Name: core_hotdemon.cpp_FUN_004efc90
// Address: 004efc90
// Address Range: [[004efc90, 004f04ee]]
// Convention: unknown
// Signature: void core_hotdemon_cpp_FUN_004efc90(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_hotdemon_cpp_FUN_004efc90(CEnemy *param_1,float param_2)

{
  byte *this_ptr;
  uint uVar1;
  int iVar2;
  SMotion *pSVar3;
  int iVar4;
  CPathMap *path_map;
  uint uVar5;
  byte bVar6;
  float afStackY_114c [997];
  CEnemy *this_ptr_00;
  float *pfVar7;
  CVector3f *pCVar8;
  float fVar9;
  EBloodType blood_type;
  SDamageInfo *damage_info;
  float max_distance;
  SDamageInfo aSStack_1a0 [4];
  float fStack_19c;
  CEnemy *pCStack_16c;
  CEnemy *pCStack_168;
  CVector3f CStack_164;
  float fStack_158;
  float afStack_154 [2];
  CVector3f CStack_14c;
  float fStack_140;
  float afStack_13c [2];
  byte auStack_134 [12];
  float fStack_128;
  float afStack_124 [4];
  float fStack_114;
  uint uStack_110;
  float afStack_104 [3];
  CVector3f CStack_f8;
  float fStack_ec;
  float afStack_e8 [4];
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float afStack_c4 [5];
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  uint uStack_a4;
  CVector3f CStack_98;
  uint uStack_8c;
  float afStack_88 [5];
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  uint uStack_68;
  float fStack_64;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  uint uStack_44;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  CMotionController *pCStack_24;
  CMotionController *pCStack_20;
  int iStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar6 = 0;
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0((CCharacter *)param_1,param_2);
  if (iVar2 == 0) {
    return;
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  fStack_34 = param_2 * *(float *)&param_1->field_0xc1d0;
  this_ptr = &param_1->field_0x158;
  while (0.0 < fStack_34) {
    iVar2 = core_motion_cpp_CMotionController_advance_FUN_00524270
                      ((CMotionController *)this_ptr,afStack_88 + 0x15);
    core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)param_1,iVar2);
  }
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  core_charactr_cpp_FUN_00435320(param_1,param_2 * *(float *)&param_1->field_0xc1d0);
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)this_ptr);
  iVar2 = *(int *)(pSVar3 + 0x24);
  iStack_1c = iVar2;
  iVar4 = core_charactr_cpp_FUN_00432240((CCharacter *)param_1,param_2);
  if (iVar4 == 0) {
    switch(iVar2) {
    case 0:
    case 6:
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
      iVar2 = *(int *)&param_1->field_0xc1e8;
      pCStack_24 = (CMotionController *)&param_1->field_0x158;
      if (iVar2 == 0) {
        iVar2 = core_enemy_cpp_FUN_004a0fe0(param_1,param_2);
        if (iVar2 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_24,1,1);
        }
      }
      else {
        fStack_50 = *(float *)(iVar2 + 0x20) - *(float *)&param_1->field_0x20;
        fStack_4c = *(float *)(iVar2 + 0x24) - *(float *)&param_1->field_0x24;
        fStack_48 = *(float *)(iVar2 + 0x28) - *(float *)&param_1->field_0x28;
        fStack_128 = fStack_50;
        afStack_124[(uint)bVar6 * -2] = afStack_88[(uint)bVar6 * -2 + 0xf];
        afStack_124[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             afStack_88[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
        fStack_38 = SQRT(afStack_124[1] * afStack_124[1] +
                         fStack_128 * fStack_128 + afStack_124[0] * afStack_124[0]);
        fStack_2c = fStack_38;
        if (fStack_38 < 0x40000000) {
          core_vecdir_cpp_FUN_005a7520(&fStack_128);
          uStack_8c = afStack_88[2];
          afStack_88[(uint)bVar6 * -2] = afStack_88[(uint)bVar6 * -2 + 3];
          afStack_88[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
               afStack_88[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
          fStack_14 = (float)core_actor_cpp_FUN_0040cd60
                                       (afStack_88[0] - *(float *)&param_1->field_0x34);
          if (ABS(fStack_14) < (float)_DAT_005e51c2) {
            if (iStack_1c == 0) {
              iVar2 = 2;
            }
            else {
              iVar2 = 8;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_24,iVar2,1);
            iVar2 = sound_sndmain_cpp_FUN_005735a0(*(uint *)(param_1 + 1));
            if (iVar2 == 0) {
              uVar5 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                                (param_1,"hotdemon-attack.wav");
              *(uint *)(param_1 + 1) = uVar5;
            }
          }
        }
        if (fStack_2c < *(float *)&param_1->field_0xc1e0) {
          if (_DAT_00602308 <= fStack_2c) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)&param_1->field_0x158,7,1);
            *(uint *)&param_1->field_0xc1e4 = 0;
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)&param_1->field_0x158,1,1);
            *(uint *)&param_1->field_0xc1e4 = 0;
          }
        }
      }
      break;
    case 1:
    case 7:
    case 0xf:
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
      fVar9 = 0x40000000;
      pCStack_20 = (CMotionController *)&param_1->field_0x158;
      if (*(int *)&param_1->field_0xc1e8 == 0) {
        iVar2 = core_enemy_cpp_FUN_004a0fe0(param_1,param_2);
        if (iVar2 == 0) {
          if (iStack_1c == 1) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_20,0,1);
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_20,6,1);
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_20,1,1);
        }
      }
      else {
        fStack_28 = 0x40000000;
        *(uint *)&param_1->field_0x24a4 = 0;
        *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
        *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
        auStack_134._0_4_ = 0;
        auStack_134._4_4_ = 0;
        max_distance = 0.17453292;
        auStack_134._8_4_ = fVar9;
        pCVar8 = (CVector3f *)auStack_134;
        fVar9 = 0.5;
        path_map = (CPathMap *)
                   (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xc4))
                             (*(int *)&param_1->field_0xc1e8);
        iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                          ((CCharacter *)param_1,
                           (CVector3f *)(*(int *)&param_1->field_0xc1e8 + 0x20),path_map,pCVar8,
                           fVar9,max_distance);
        if (-1 < iVar2) {
          iVar2 = *(int *)&param_1->field_0xc1e8;
          afStack_124[2] = *(float *)&param_1->field_0x20 - *(float *)(iVar2 + 0x20);
          afStack_124[3] = *(float *)&param_1->field_0x24 - *(float *)(iVar2 + 0x24);
          fStack_114 = *(float *)&param_1->field_0x28 - *(float *)(iVar2 + 0x28);
          fStack_140 = afStack_124[2];
          afStack_13c[(uint)bVar6 * -2] = afStack_124[(uint)bVar6 * -2 + 3];
          afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
               afStack_124[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
          fStack_18 = SQRT(afStack_13c[1] * afStack_13c[1] + fStack_140 * fStack_140);
          afStack_13c[0] = 0.0;
          fStack_30 = fStack_18;
          if ((_DAT_00602308 < fStack_18) && (iStack_1c != 7)) {
            *(uint *)&param_1->field_0xc1e4 = 0;
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_20,7,1);
          }
          if ((fStack_30 <= fStack_28) && (*(float *)&param_1->field_0xc1e4 <= 0.0)) {
            iVar2 = *(int *)&param_1->field_0xc1e8;
            fStack_74 = *(float *)(iVar2 + 0x20) - *(float *)&param_1->field_0x20;
            fStack_70 = *(float *)(iVar2 + 0x24) - *(float *)&param_1->field_0x24;
            fStack_6c = *(float *)(iVar2 + 0x28) - *(float *)&param_1->field_0x28;
            fStack_ec = fStack_74;
            afStack_e8[(uint)bVar6 * -2] = afStack_88[(uint)bVar6 * -2 + 6];
            afStack_e8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
                 afStack_88[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
            core_vecdir_cpp_FUN_005a7520(&fStack_ec);
            uStack_68 = uStack_44;
            afStack_88[(uint)bVar6 * -2 + 9] = afStack_88[(uint)bVar6 * -2 + 0x12];
            afStack_88[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
                 afStack_88[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13];
            fStack_14 = (float)core_actor_cpp_FUN_0040cd60
                                         (fStack_64 - *(float *)&param_1->field_0x34);
            if (ABS(fStack_14) < (float)_DAT_005e51c2) {
              if (iStack_1c == 7) {
                iVar2 = 8;
              }
              else {
                iVar2 = 2;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        ((CMotionController *)&param_1->field_0x158,iVar2,1);
              iVar2 = sound_sndmain_cpp_FUN_005735a0(*(uint *)(param_1 + 1));
              if (iVar2 == 0) {
                uVar5 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                                  (param_1,"hotdemon-attack.wav");
                *(uint *)(param_1 + 1) = uVar5;
              }
              *(uint *)&param_1->field_0xc1e4 = 0x40000000;
            }
          }
          if (*(float *)&param_1->field_0xc1e0 < fStack_30) {
            if (iStack_1c == 7) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        ((CMotionController *)&param_1->field_0x158,6,1);
              *(uint *)&param_1->field_0xc1e4 = 0;
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        ((CMotionController *)&param_1->field_0x158,0,1);
              *(uint *)&param_1->field_0xc1e4 = 0;
            }
          }
        }
      }
      break;
    case 2:
    case 8:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_1a0);
      fStack_19c = (float)core_actor_cpp_FUN_0040cc00(0x40e00000,0x41700000);
      damage_info = aSStack_1a0;
      pCStack_16c = param_1;
      pCStack_168 = param_1;
      fVar9 = 0.4;
      fStack_14 = fStack_19c;
      core_xform_cpp_FUN_005b5080(&DAT_02c8af28,&param_1->field_0xfd8 + _DAT_01d06bd4 * 0x30);
      pfVar7 = afStack_124 + 8;
      afStack_104[0] = (float)uStack_110;
      afStack_124[(uint)bVar6 * -2 + 9] = afStack_124[(uint)bVar6 * -2 + 6];
      afStack_124[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
           afStack_124[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
      core_actor_cpp_FUN_00408b40(param_1,pfVar7);
      pCVar8 = &CStack_f8;
      CStack_f8._0_4_ = CStack_14c._0_4_;
      *(uint *)((int)&CStack_f8 + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&CStack_14c + (uint)bVar6 * -8 + 4);
      this_ptr_00 = param_1;
      *(uint *)((int)&CStack_f8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           *(uint *)((int)&CStack_14c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      core_enemy_cpp_FUN_004a0770(this_ptr_00,pCVar8,fVar9,damage_info);
      break;
    case 5:
    case 0xb:
      if ((*(int *)&param_1->field_0xc1d4 == 0) && (*(int *)&param_1->field_0xdc == 0)) {
        core_skeleton_cpp_FUN_00569040(&param_1->field_0x158,0);
        pfVar7 = afStack_c4 + 2;
        afStack_c4[2] = (float)uStack_a4;
        afStack_c4[(uint)bVar6 * -2 + 3] = afStack_c4[(uint)bVar6 * -2 + 9];
        afStack_c4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
             afStack_c4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
        core_actor_cpp_FUN_00408b40(param_1,pfVar7);
        blood_type = BLOOD_TYPE_RED;
        CStack_164._0_4_ = CStack_98._0_4_;
        *(uint *)((int)&CStack_164 + (uint)bVar6 * -8 + 4) =
             *(uint *)((int)&CStack_98 + (uint)bVar6 * -8 + 4);
        *(uint *)((int)&CStack_164 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
             *(uint *)((int)&CStack_98 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
        core_gore_cpp_CGore_createBloodPool_FUN_004e62e0(g_CGorePtr,&CStack_164,blood_type);
        *(uint *)&param_1->field_0xc1d4 = 1;
      }
    }
    goto switchD_004f04e8_caseD_3;
  }
  uVar1 = *(uint *)&param_1->field_0x273c;
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_004efd5e:
      iVar2 = 1;
    }
    else {
LAB_004eff1b:
      iVar2 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&param_1->field_0x158,iVar2,1);
  }
  else {
    if (uVar1 < 3) goto LAB_004efd5e;
    if (uVar1 != 3) goto LAB_004eff1b;
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)this_ptr,0,1);
    engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
switchD_004f04e8_caseD_3:
  if (0.0 < *(float *)&param_1->field_0xc1e4) {
    *(float *)&param_1->field_0xc1e4 = *(float *)&param_1->field_0xc1e4 - param_2;
  }
  iVar2 = core_charactr_cpp_FUN_0042e120((CCharacter *)param_1);
  if (iVar2 != 0) {
    core_charactr_cpp_FUN_0042d700(param_1,param_2);
    fStack_5c = *(float *)&param_1->field_0x2518 * param_2;
    fStack_58 = *(float *)&param_1->field_0x251c * param_2;
    fStack_54 = *(float *)&param_1->field_0x2520 * param_2;
    fStack_b0 = fStack_5c;
    afStack_c4[(uint)bVar6 * -2 + 6] = afStack_88[(uint)bVar6 * -2 + 0xc];
    afStack_c4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
         afStack_88[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
    fStack_158 = fStack_b0 + *(float *)&param_1->field_0x250c;
    afStack_154[0] = fStack_ac + *(float *)&param_1->field_0x2510;
    afStack_154[1] = fStack_a8 + *(float *)&param_1->field_0x2514;
    fStack_d4 = fStack_158;
    afStack_e8[(uint)bVar6 * -2 + 6] = afStack_154[(uint)bVar6 * -2];
    afStack_e8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
         afStack_154[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    afStack_e8[2] = fStack_d4 + *(float *)&param_1->field_0x249c;
    afStack_e8[3] = fStack_d0 + *(float *)&param_1->field_0x24a0;
    fStack_d8 = fStack_cc + *(float *)&param_1->field_0x24a4;
    fStack_c8 = afStack_e8[2];
    afStack_c4[(uint)bVar6 * -2] = afStack_e8[(uint)bVar6 * -2 + 3];
    afStack_c4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         afStack_e8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
    *(uint *)&param_1->field_0x2514 = 0;
    *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
    core_charactr_cpp_FUN_0042d750((CCharacter *)param_1,(CVector3f *)&fStack_c8);
  }
  core_charactr_cpp_FUN_0042e160((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            ((CDeformableModelInstance *)&param_1->field_0x158);
  core_charactr_cpp_FUN_00433e80((CCharacter *)param_1,param_2);
  return;
}
