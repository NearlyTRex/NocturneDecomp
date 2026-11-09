// Name: core_hotdemon.cpp_FUN_004d3a70
// Address: 004d3a70
// Address Range: [[004d3a70, 004d42ce]]
// Convention: unknown
// Signature: void core_hotdemon_cpp_FUN_004d3a70(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_hotdemon_cpp_FUN_004d3a70(CEnemy *param_1,float param_2)

{
  byte *this_ptr;
  uint uVar1;
  int iVar2;
  int iVar3;
  CPathMap *path_map;
  uint uVar4;
  byte bVar5;
  float afStackY_114c [997];
  CEnemy *this_ptr_00;
  float *pfVar6;
  CVector3f *pCVar7;
  float fVar8;
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
  
  bVar5 = 0;
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0((CCharacter *)param_1,param_2);
  if (iVar2 == 0) {
    return;
  }
  *(uint *)&param_1->field_0x2510 = 0;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
  fStack_34 = param_2 * *(float *)&param_1->field_0x10a60;
  this_ptr = &param_1->field_0x2b4;
  while (0.0 < fStack_34) {
    iVar2 = core_motion_cpp_CMotionController_advance_FUN_005030c0
                      ((CMotionController *)this_ptr,afStack_88 + 0x15);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)param_1,iVar2);
  }
  *(uint *)&param_1->field_0x2594 = *(uint *)&param_1->field_0x2510;
  core_charactr_cpp_FUN_0042b2a0(param_1,param_2 * *(float *)&param_1->field_0x10a60);
  iVar2 = core_motion_cpp_FUN_005035c0(this_ptr);
  iVar2 = *(int *)(iVar2 + 0x24);
  iStack_1c = iVar2;
  iVar3 = core_charactr_cpp_FUN_004287f0((CCharacter *)param_1,param_2);
  if (iVar3 == 0) {
    switch(iVar2) {
    case 0:
    case 6:
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))(param_1,param_2);
      iVar2 = *(int *)&param_1->field_0x10a78;
      pCStack_24 = (CMotionController *)&param_1->field_0x2b4;
      if (iVar2 == 0) {
        iVar2 = core_enemy_cpp_FUN_00488970(param_1,param_2);
        if (iVar2 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_24,1,1);
        }
      }
      else {
        fStack_50 = *(float *)(iVar2 + 0x20) - *(float *)&param_1->field_0x20;
        fStack_4c = *(float *)(iVar2 + 0x24) - *(float *)&param_1->field_0x24;
        fStack_48 = *(float *)(iVar2 + 0x28) - *(float *)&param_1->field_0x28;
        fStack_128 = fStack_50;
        afStack_124[(uint)bVar5 * -2] = afStack_88[(uint)bVar5 * -2 + 0xf];
        afStack_124[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
             afStack_88[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10];
        fStack_38 = SQRT(afStack_124[1] * afStack_124[1] +
                         fStack_128 * fStack_128 + afStack_124[0] * afStack_124[0]);
        fStack_2c = fStack_38;
        if (fStack_38 < 0x40000000) {
          core_vecdir_cpp_FUN_005838f0(&fStack_128);
          uStack_8c = afStack_88[2];
          afStack_88[(uint)bVar5 * -2] = afStack_88[(uint)bVar5 * -2 + 3];
          afStack_88[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
               afStack_88[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
          fStack_14 = (float)core_actor_cpp_FUN_0040d0c0
                                       (afStack_88[0] - *(float *)&param_1->field_0x34);
          if (ABS(fStack_14) < (float)_DAT_005da661) {
            if (iStack_1c == 0) {
              iVar2 = 2;
            }
            else {
              iVar2 = 8;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_24,iVar2,1);
            iVar2 = sound_sndmain_cpp_FUN_00550b70(*(uint *)(param_1 + 1));
            if (iVar2 == 0) {
              uVar4 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))
                                (param_1,"hotdemon-attack.wav");
              *(uint *)(param_1 + 1) = uVar4;
            }
          }
        }
        if (fStack_2c < *(float *)&param_1->field_0x10a70) {
          if (_DAT_005f8868 <= fStack_2c) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)&param_1->field_0x2b4,7,1);
            *(uint *)&param_1->field_0x10a74 = 0;
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)&param_1->field_0x2b4,1,1);
            *(uint *)&param_1->field_0x10a74 = 0;
          }
        }
      }
      break;
    case 1:
    case 7:
    case 0xf:
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))(param_1,param_2);
      fVar8 = 0x40000000;
      pCStack_20 = (CMotionController *)&param_1->field_0x2b4;
      if (*(int *)&param_1->field_0x10a78 == 0) {
        iVar2 = core_enemy_cpp_FUN_00488970(param_1,param_2);
        if (iVar2 == 0) {
          if (iStack_1c == 1) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_20,0,1);
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_20,6,1);
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_20,1,1);
        }
      }
      else {
        fStack_28 = 0x40000000;
        *(uint *)&param_1->field_0x2510 = 0;
        *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
        *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
        auStack_134._0_4_ = 0;
        auStack_134._4_4_ = 0;
        max_distance = 0.17453292;
        auStack_134._8_4_ = fVar8;
        pCVar7 = (CVector3f *)auStack_134;
        fVar8 = 0.5;
        path_map = (CPathMap *)
                   (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0xcc))
                             (*(int *)&param_1->field_0x10a78);
        iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                          ((CCharacter *)param_1,
                           (CVector3f *)(*(int *)&param_1->field_0x10a78 + 0x20),path_map,pCVar7,
                           fVar8,max_distance);
        if (-1 < iVar2) {
          iVar2 = *(int *)&param_1->field_0x10a78;
          afStack_124[2] = *(float *)&param_1->field_0x20 - *(float *)(iVar2 + 0x20);
          afStack_124[3] = *(float *)&param_1->field_0x24 - *(float *)(iVar2 + 0x24);
          fStack_114 = *(float *)&param_1->field_0x28 - *(float *)(iVar2 + 0x28);
          fStack_140 = afStack_124[2];
          afStack_13c[(uint)bVar5 * -2] = afStack_124[(uint)bVar5 * -2 + 3];
          afStack_13c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
               afStack_124[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
          fStack_18 = SQRT(afStack_13c[1] * afStack_13c[1] + fStack_140 * fStack_140);
          afStack_13c[0] = 0.0;
          fStack_30 = fStack_18;
          if ((_DAT_005f8868 < fStack_18) && (iStack_1c != 7)) {
            *(uint *)&param_1->field_0x10a74 = 0;
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_20,7,1);
          }
          if ((fStack_30 <= fStack_28) && (*(float *)&param_1->field_0x10a74 <= 0.0)) {
            iVar2 = *(int *)&param_1->field_0x10a78;
            fStack_74 = *(float *)(iVar2 + 0x20) - *(float *)&param_1->field_0x20;
            fStack_70 = *(float *)(iVar2 + 0x24) - *(float *)&param_1->field_0x24;
            fStack_6c = *(float *)(iVar2 + 0x28) - *(float *)&param_1->field_0x28;
            fStack_ec = fStack_74;
            afStack_e8[(uint)bVar5 * -2] = afStack_88[(uint)bVar5 * -2 + 6];
            afStack_e8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
                 afStack_88[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
            core_vecdir_cpp_FUN_005838f0(&fStack_ec);
            uStack_68 = uStack_44;
            afStack_88[(uint)bVar5 * -2 + 9] = afStack_88[(uint)bVar5 * -2 + 0x12];
            afStack_88[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
                 afStack_88[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13];
            fStack_14 = (float)core_actor_cpp_FUN_0040d0c0
                                         (fStack_64 - *(float *)&param_1->field_0x34);
            if (ABS(fStack_14) < (float)_DAT_005da661) {
              if (iStack_1c == 7) {
                iVar2 = 8;
              }
              else {
                iVar2 = 2;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)&param_1->field_0x2b4,iVar2,1);
              iVar2 = sound_sndmain_cpp_FUN_00550b70(*(uint *)(param_1 + 1));
              if (iVar2 == 0) {
                uVar4 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))
                                  (param_1,"hotdemon-attack.wav");
                *(uint *)(param_1 + 1) = uVar4;
              }
              *(uint *)&param_1->field_0x10a74 = 0x40000000;
            }
          }
          if (*(float *)&param_1->field_0x10a70 < fStack_30) {
            if (iStack_1c == 7) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)&param_1->field_0x2b4,6,1);
              *(uint *)&param_1->field_0x10a74 = 0;
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)&param_1->field_0x2b4,0,1);
              *(uint *)&param_1->field_0x10a74 = 0;
            }
          }
        }
      }
      break;
    case 2:
    case 8:
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_1a0);
      fStack_19c = (float)core_actor_cpp_FUN_0040cf60(0x40e00000,0x41700000);
      damage_info = aSStack_1a0;
      pCStack_16c = param_1;
      pCStack_168 = param_1;
      fVar8 = 0.4;
      fStack_14 = fStack_19c;
      core_xform_cpp_FUN_00591530(&DAT_0265370c,&param_1->field_0x1134 + _DAT_01cee014 * 0x30);
      pfVar6 = afStack_124 + 8;
      afStack_104[0] = (float)uStack_110;
      afStack_124[(uint)bVar5 * -2 + 9] = afStack_124[(uint)bVar5 * -2 + 6];
      afStack_124[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
           afStack_124[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
      core_actor_cpp_FUN_00408d70(param_1,pfVar6);
      pCVar7 = &CStack_f8;
      CStack_f8._0_4_ = CStack_14c._0_4_;
      *(uint *)((int)&CStack_f8 + (uint)bVar5 * -8 + 4) =
           *(uint *)((int)&CStack_14c + (uint)bVar5 * -8 + 4);
      this_ptr_00 = param_1;
      *(uint *)((int)&CStack_f8 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           *(uint *)((int)&CStack_14c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      core_enemy_cpp_FUN_00488110(this_ptr_00,pCVar7,fVar8,damage_info);
      break;
    case 5:
    case 0xb:
      if ((*(int *)&param_1->field_0x10a64 == 0) && (*(int *)&param_1->field_0xdc == 0)) {
        core_skeleton_cpp_FUN_005469a0(&param_1->field_0x2b4,0);
        pfVar6 = afStack_c4 + 2;
        afStack_c4[2] = (float)uStack_a4;
        afStack_c4[(uint)bVar5 * -2 + 3] = afStack_c4[(uint)bVar5 * -2 + 9];
        afStack_c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
             afStack_c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
        core_actor_cpp_FUN_00408d70(param_1,pfVar6);
        blood_type = BLOOD_TYPE_RED;
        CStack_164._0_4_ = CStack_98._0_4_;
        *(uint *)((int)&CStack_164 + (uint)bVar5 * -8 + 4) =
             *(uint *)((int)&CStack_98 + (uint)bVar5 * -8 + 4);
        *(uint *)((int)&CStack_164 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
             *(uint *)((int)&CStack_98 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
        core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(g_CGorePtr,&CStack_164,blood_type);
        *(uint *)&param_1->field_0x10a64 = 1;
      }
    }
    goto switchD_004d42c8_caseD_3;
  }
  uVar1 = *(uint *)&param_1->field_0x27ac;
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_004d3b3e:
      iVar2 = 1;
    }
    else {
LAB_004d3cfb:
      iVar2 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&param_1->field_0x2b4,iVar2,1);
  }
  else {
    if (uVar1 < 3) goto LAB_004d3b3e;
    if (uVar1 != 3) goto LAB_004d3cfb;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)this_ptr,0,1);
    engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)&param_1->field_0x2510 = 0;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
switchD_004d42c8_caseD_3:
  if (0.0 < *(float *)&param_1->field_0x10a74) {
    *(float *)&param_1->field_0x10a74 = *(float *)&param_1->field_0x10a74 - param_2;
  }
  iVar2 = core_charactr_cpp_FUN_00424430((CCharacter *)param_1);
  if (iVar2 != 0) {
    core_charactr_cpp_FUN_00423a10(param_1,param_2);
    fStack_5c = *(float *)&param_1->field_0x2588 * param_2;
    fStack_58 = *(float *)&param_1->field_0x258c * param_2;
    fStack_54 = *(float *)&param_1->field_0x2590 * param_2;
    fStack_b0 = fStack_5c;
    afStack_c4[(uint)bVar5 * -2 + 6] = afStack_88[(uint)bVar5 * -2 + 0xc];
    afStack_c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
         afStack_88[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
    fStack_158 = fStack_b0 + *(float *)&param_1->field_0x257c;
    afStack_154[0] = fStack_ac + *(float *)&param_1->field_0x2580;
    afStack_154[1] = fStack_a8 + *(float *)&param_1->field_0x2584;
    fStack_d4 = fStack_158;
    afStack_e8[(uint)bVar5 * -2 + 6] = afStack_154[(uint)bVar5 * -2];
    afStack_e8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
         afStack_154[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    afStack_e8[2] = fStack_d4 + *(float *)&param_1->field_0x2508;
    afStack_e8[3] = fStack_d0 + *(float *)&param_1->field_0x250c;
    fStack_d8 = fStack_cc + *(float *)&param_1->field_0x2510;
    fStack_c8 = afStack_e8[2];
    afStack_c4[(uint)bVar5 * -2] = afStack_e8[(uint)bVar5 * -2 + 3];
    afStack_c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_e8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
    *(uint *)&param_1->field_0x2584 = 0;
    *(uint *)&param_1->field_0x2580 = *(uint *)&param_1->field_0x2584;
    *(uint *)&param_1->field_0x257c = *(uint *)&param_1->field_0x2580;
    *(uint *)&param_1->field_0x2510 = 0;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
    core_charactr_cpp_FUN_00423a60((CCharacter *)param_1,(CVector3f *)&fStack_c8);
  }
  core_charactr_cpp_FUN_00424470((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            ((CDeformableModelInstance *)&param_1->field_0x2b4);
  core_charactr_cpp_FUN_00429e90((CCharacter *)param_1,param_2);
  return;
}
