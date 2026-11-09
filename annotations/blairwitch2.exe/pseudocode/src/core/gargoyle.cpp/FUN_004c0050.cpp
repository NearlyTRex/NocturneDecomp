// Name: core_gargoyle.cpp_FUN_004c0050
// Address: 004c0050
// Address Range: [[004c0050, 004c0b2f]]
// Convention: unknown
// Signature: void core_gargoyle_cpp_FUN_004c0050(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_gargoyle_cpp_FUN_004c0050(CEnemy *param_1,float param_2)

{
  byte *this_ptr;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  CPathMap *pCVar5;
  byte bVar6;
  float afStackY_1128 [997];
  CEnemy *this_ptr_00;
  float *pfVar7;
  CVector3f *pCVar8;
  float fVar9;
  float fVar10;
  SDamageInfo *damage_info;
  float max_distance;
  SDamageInfo aSStack_17c [4];
  float fStack_178;
  CEnemy *pCStack_148;
  CEnemy *pCStack_144;
  float fStack_140;
  float afStack_13c [5];
  CVector3f CStack_128;
  float fStack_11c;
  float afStack_118 [4];
  float fStack_108;
  CVector3f CStack_104;
  uint uStack_f8;
  float afStack_f4 [4];
  float fStack_e4;
  CVector3f CStack_e0;
  float fStack_d4;
  float afStack_d0 [4];
  float fStack_c0;
  uint uStack_bc;
  uint uStack_b0;
  float fStack_ac;
  float fStack_a4;
  float afStack_a0 [4];
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  byte auStack_80 [12];
  float fStack_74;
  float afStack_70 [5];
  uint uStack_5c;
  float fStack_50;
  uint uStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  int iStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  CMotionController *pCStack_1c;
  CMotionController *pCStack_18;
  float fStack_14;
  
  bVar6 = 0;
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0((CCharacter *)param_1,param_2);
  if (iVar2 == 0) {
    iVar2 = core_motion_cpp_FUN_005035c0(&param_1->field_0x2b4);
    if (*(int *)(iVar2 + 0x24) == 8) {
      return;
    }
    if (*(int *)(iVar2 + 0x24) == 5) {
      return;
    }
  }
  *(uint *)&param_1->field_0x2510 = 0;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
  fStack_34 = param_2 * *(float *)&param_1->field_0x10a60;
  pCStack_18 = (CMotionController *)&param_1->field_0x2b4;
  while (0.0 < fStack_34) {
    iVar2 = core_motion_cpp_CMotionController_advance_FUN_005030c0(pCStack_18,afStack_70 + 0xf);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)param_1,iVar2);
  }
  *(uint *)&param_1->field_0x2594 = *(uint *)&param_1->field_0x2510;
  core_charactr_cpp_FUN_0042b2a0(param_1,param_2 * *(float *)&param_1->field_0x10a60);
  iVar2 = core_motion_cpp_FUN_005035c0(pCStack_18);
  iVar2 = *(int *)(iVar2 + 0x24);
  iStack_2c = iVar2;
  iVar3 = core_charactr_cpp_FUN_004287f0((CCharacter *)param_1,param_2);
  if (iVar3 == 0) {
    switch(iVar2) {
    case 0:
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))(param_1,param_2);
      iVar2 = core_gargoyle_cpp_FUN_004bfea0(param_1);
      if (iVar2 == 0) {
        fStack_14 = (float)core_actor_cpp_FUN_0040cf60(0,0x3f800000);
        *(float *)&param_1[1].field_0x58 = fStack_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_18,5,1);
        iVar2 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1[1].field_0x44);
        if (iVar2 == 0) {
          uVar4 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))
                            (param_1,"gargoyle-stone.wav");
          *(uint *)&param_1[1].field_0x44 = uVar4;
        }
      }
      else if (*(int *)&param_1[1].field_0x54 == 0) {
        iVar2 = *(int *)&param_1->field_0x10a78;
        if (iVar2 == 0) {
          iVar2 = core_enemy_cpp_FUN_00488970(param_1,param_2);
          if (iVar2 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_18,1,1);
          }
        }
        else {
          afStack_118[2] = *(float *)(iVar2 + 0x20) - *(float *)&param_1->field_0x20;
          afStack_118[3] = *(float *)(iVar2 + 0x24) - *(float *)&param_1->field_0x24;
          fStack_108 = *(float *)(iVar2 + 0x28) - *(float *)&param_1->field_0x28;
          fStack_44 = afStack_118[2];
          afStack_70[(uint)bVar6 * -2 + 0xc] = afStack_118[(uint)bVar6 * -2 + 3];
          afStack_70[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
               afStack_118[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
          fStack_38 = SQRT(fStack_3c * fStack_3c + fStack_44 * fStack_44 + fStack_40 * fStack_40);
          fStack_28 = fStack_38;
          if (fStack_38 < 0x40400000) {
            core_vecdir_cpp_FUN_005838f0(afStack_70 + 0xb);
            uStack_b0 = uStack_bc;
            afStack_d0[(uint)bVar6 * -2 + 9] = afStack_d0[(uint)bVar6 * -2 + 6];
            afStack_d0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
                 afStack_d0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
            fStack_14 = (float)core_actor_cpp_FUN_0040d0c0
                                         (fStack_ac - *(float *)&param_1->field_0x34);
            if (ABS(fStack_14) < (float)_DAT_005d8dd2) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_18,3,1);
            }
          }
          if (fStack_28 < *(float *)&param_1->field_0x10a70) {
            this_ptr = &param_1->field_0x2b4;
            if (_DAT_005f75e8 <= fStack_28) {
              iVar2 = core_actor_cpp_FUN_0040d060(0.1);
              if (iVar2 == 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          ((CMotionController *)this_ptr,2,1);
              }
              else {
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          ((CMotionController *)this_ptr,4,1);
              }
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)this_ptr,1,1);
            }
          }
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_18,1,1);
      }
      break;
    case 1:
    case 2:
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))(param_1,param_2);
      iVar2 = core_gargoyle_cpp_FUN_004bfea0(param_1);
      fVar9 = 0x40400000;
      pCStack_1c = (CMotionController *)&param_1->field_0x2b4;
      if (iVar2 == 0) {
        fStack_14 = (float)core_actor_cpp_FUN_0040cf60(0,0x3f800000);
        *(float *)&param_1[1].field_0x58 = fStack_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,5,1);
        iVar2 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1[1].field_0x44);
        if (iVar2 == 0) {
          uVar4 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))
                            (param_1,"gargoyle-stone.wav");
          *(uint *)&param_1[1].field_0x44 = uVar4;
        }
      }
      else if (*(int *)&param_1[1].field_0x54 == 0) {
        if (*(int *)&param_1->field_0x10a78 == 0) {
          iVar2 = core_enemy_cpp_FUN_00488970(param_1,param_2);
          if (iVar2 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,0,1);
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,1,1);
          }
        }
        else {
          max_distance = 0.17453292;
          fVar10 = 0.5;
          *(uint *)&param_1->field_0x2510 = 0;
          *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
          *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
          pCVar8 = (CVector3f *)auStack_80;
          auStack_80._0_4_ = 0;
          auStack_80._4_4_ = 0;
          auStack_80._8_4_ = fVar9;
          fStack_20 = fVar9;
          pCVar5 = (CPathMap *)
                   (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0xcc))
                             (*(int *)&param_1->field_0x10a78);
          iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                            ((CCharacter *)param_1,
                             (CVector3f *)(*(int *)&param_1->field_0x10a78 + 0x20),pCVar5,pCVar8,
                             fVar10,max_distance);
          if (-1 < iVar2) {
            iVar2 = *(int *)&param_1->field_0x10a78;
            fStack_d4 = *(float *)&param_1->field_0x20 - *(float *)(iVar2 + 0x20);
            afStack_d0[0] = *(float *)&param_1->field_0x24 - *(float *)(iVar2 + 0x24);
            afStack_d0[1] = *(float *)&param_1->field_0x28 - *(float *)(iVar2 + 0x28);
            fStack_50 = fStack_d4;
            afStack_70[(uint)bVar6 * -2 + 9] = afStack_d0[(uint)bVar6 * -2];
            afStack_70[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
                 afStack_d0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
            uStack_4c = 0;
            fStack_30 = SQRT(fStack_48 * fStack_48 + fStack_50 * fStack_50);
            fStack_24 = fStack_30;
            if (_DAT_005f75e8 < fStack_30) {
              iVar2 = core_actor_cpp_FUN_0040d060(0.1);
              if (iVar2 == 0) {
                iVar2 = 2;
              }
              else {
                iVar2 = 4;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,iVar2,1);
            }
            if ((fStack_24 <= fStack_20) && (*(float *)&param_1->field_0x10a74 <= 0.0)) {
              iVar2 = *(int *)&param_1->field_0x10a78;
              fStack_140 = *(float *)(iVar2 + 0x20) - *(float *)&param_1->field_0x20;
              afStack_13c[0] = *(float *)(iVar2 + 0x24) - *(float *)&param_1->field_0x24;
              afStack_13c[1] = *(float *)(iVar2 + 0x28) - *(float *)&param_1->field_0x28;
              fStack_74 = fStack_140;
              afStack_70[(uint)bVar6 * -2] = afStack_13c[(uint)bVar6 * -2];
              afStack_70[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
                   afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
              core_vecdir_cpp_FUN_005838f0(&fStack_74);
              afStack_70[2] = (float)uStack_5c;
              afStack_70[(uint)bVar6 * -2 + 3] = afStack_70[(uint)bVar6 * -2 + 6];
              afStack_70[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
                   afStack_70[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
              fStack_14 = (float)core_actor_cpp_FUN_0040d0c0
                                           (afStack_70[3] - *(float *)&param_1->field_0x34);
              if (ABS(fStack_14) < (float)_DAT_005d8dd2) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          ((CMotionController *)&param_1->field_0x2b4,3,1);
                *(uint *)&param_1->field_0x10a74 = 0x3f800000;
              }
            }
            if (*(float *)&param_1->field_0x10a70 < fStack_24) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)&param_1->field_0x2b4,0,1);
            }
          }
        }
      }
      else {
        *(uint *)&param_1->field_0x2510 = 0;
        *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
        *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
        fVar10 = 0.17453292;
        CStack_104._0_4_ = 0;
        CStack_104._4_4_ = 0;
        CStack_104._8_4_ = 0;
        pCVar8 = &CStack_104;
        fVar9 = 0.5;
        pCVar5 = (CPathMap *)
                 (**(code **)(*(int *)(*(int *)&param_1[1].field_0x3c + 0x2b0) + 0xcc))
                           (*(int *)&param_1[1].field_0x3c);
        core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                  ((CCharacter *)param_1,(CVector3f *)(*(int *)&param_1[1].field_0x3c + 0x20),pCVar5
                   ,pCVar8,fVar9,fVar10);
      }
      break;
    case 3:
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_17c);
      fStack_178 = (float)core_actor_cpp_FUN_0040cf60(0x40400000,0x40a00000);
      damage_info = aSStack_17c;
      pCStack_148 = param_1;
      pCStack_144 = param_1;
      fVar9 = 0.4;
      fStack_14 = fStack_178;
      core_xform_cpp_FUN_00591530(&DAT_0265370c,&param_1->field_0x1134 + _DAT_01cb8128 * 0x30);
      pfVar7 = afStack_13c + 2;
      afStack_13c[2] = (float)uStack_f8;
      afStack_13c[(uint)bVar6 * -2 + 3] = afStack_f4[(uint)bVar6 * -2];
      afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
           afStack_f4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      core_actor_cpp_FUN_00408d70(param_1,pfVar7);
      pCVar8 = &CStack_128;
      CStack_128._0_4_ = CStack_e0._0_4_;
      *(uint *)((int)&CStack_128 + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&CStack_e0 + (uint)bVar6 * -8 + 4);
      this_ptr_00 = param_1;
      *(uint *)((int)&CStack_128 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           *(uint *)((int)&CStack_e0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      core_enemy_cpp_FUN_00488110(this_ptr_00,pCVar8,fVar9,damage_info);
      break;
    case 5:
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))(param_1,param_2);
      iVar2 = core_gargoyle_cpp_FUN_004bfea0(param_1);
      if ((iVar2 != 0) &&
         (fVar9 = *(float *)&param_1[1].field_0x58 - param_2,
         *(float *)&param_1[1].field_0x58 = fVar9, fVar9 < 0.0)) {
        *(uint *)&param_1[1].field_0x58 = 0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_18,0,1);
        iVar2 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1[1].field_0x44);
        if (iVar2 == 0) {
          uVar4 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))
                            (param_1,"gargoyle-alive?.wav");
          *(uint *)&param_1[1].field_0x44 = uVar4;
        }
      }
    }
    goto switchD_004c0a6d_caseD_4;
  }
  uVar1 = *(uint *)&param_1->field_0x27ac;
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_004c015c:
      iVar2 = 1;
    }
    else {
LAB_004c03df:
      iVar2 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&param_1->field_0x2b4,iVar2,1);
  }
  else {
    if (uVar1 < 3) goto LAB_004c015c;
    if (uVar1 != 3) goto LAB_004c03df;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_18,0,1);
    engine_console_cpp_FUN_00436710(g_CConsolePtr,">%s confused while walking to scriptDest!\n" + 1,param_1);
  }
  *(uint *)&param_1->field_0x2510 = 0;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
switchD_004c0a6d_caseD_4:
  if (0.0 < *(float *)&param_1->field_0x10a74) {
    *(float *)&param_1->field_0x10a74 = *(float *)&param_1->field_0x10a74 - param_2;
  }
  iVar2 = core_charactr_cpp_FUN_00424430((CCharacter *)param_1);
  if (iVar2 != 0) {
    core_charactr_cpp_FUN_00423a10(param_1,param_2);
    fStack_11c = *(float *)&param_1->field_0x2588 * param_2;
    afStack_118[0] = *(float *)&param_1->field_0x258c * param_2;
    afStack_118[1] = *(float *)&param_1->field_0x2590 * param_2;
    afStack_f4[2] = fStack_11c;
    afStack_f4[(uint)bVar6 * -2 + 3] = afStack_118[(uint)bVar6 * -2];
    afStack_f4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
         afStack_118[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    fStack_8c = afStack_f4[2] + *(float *)&param_1->field_0x257c;
    fStack_88 = afStack_f4[3] + *(float *)&param_1->field_0x2580;
    fStack_84 = fStack_e4 + *(float *)&param_1->field_0x2584;
    afStack_d0[2] = fStack_8c;
    afStack_d0[(uint)bVar6 * -2 + 3] = afStack_a0[(uint)bVar6 * -2 + 6];
    afStack_d0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
         afStack_a0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
    afStack_a0[2] = afStack_d0[2] + *(float *)&param_1->field_0x2508;
    afStack_a0[3] = afStack_d0[3] + *(float *)&param_1->field_0x250c;
    fStack_90 = fStack_c0 + *(float *)&param_1->field_0x2510;
    fStack_a4 = afStack_a0[2];
    afStack_a0[(uint)bVar6 * -2] = afStack_a0[(uint)bVar6 * -2 + 3];
    afStack_a0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         afStack_a0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
    *(uint *)&param_1->field_0x2584 = 0;
    *(uint *)&param_1->field_0x2580 = *(uint *)&param_1->field_0x2584;
    *(uint *)&param_1->field_0x257c = *(uint *)&param_1->field_0x2580;
    *(uint *)&param_1->field_0x2510 = 0;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x2510;
    core_charactr_cpp_FUN_00423a60((CCharacter *)param_1,(CVector3f *)&fStack_a4);
  }
  core_charactr_cpp_FUN_00424470((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            ((CDeformableModelInstance *)&param_1->field_0x2b4);
  core_charactr_cpp_FUN_00429e90((CCharacter *)param_1,param_2);
  if (iStack_2c == 5) {
    *(int *)&param_1[1].field_0x48 = *(int *)&param_1[1].field_0x30 << 8;
    *(int *)&param_1[1].field_0x4c = *(int *)&param_1[1].field_0x34 << 8;
    *(int *)&param_1[1].field_0x50 = *(int *)&param_1[1].field_0x38 << 8;
  }
  else {
    *(uint *)&param_1[1].field_0x4c = 0xffff;
    *(uint *)&param_1[1].field_0x50 = 0xffff;
    *(uint *)&param_1[1].field_0x48 = 0xffff;
  }
  if (*(int *)&param_1->field_0x108 < *(int *)&param_1[1].field_0x48) {
    iVar3 = *(int *)&param_1->field_0x108 + _DAT_01c2a370;
    iVar2 = *(int *)&param_1[1].field_0x48;
    *(int *)&param_1->field_0x108 = iVar3;
    if (iVar2 < iVar3) {
      *(int *)&param_1->field_0x108 = iVar2;
    }
  }
  else if (*(int *)&param_1[1].field_0x48 < *(int *)&param_1->field_0x108) {
    iVar3 = *(int *)&param_1->field_0x108 - _DAT_01c2a370;
    iVar2 = *(int *)&param_1[1].field_0x48;
    *(int *)&param_1->field_0x108 = iVar3;
    if (iVar3 < iVar2) {
      *(int *)&param_1->field_0x108 = iVar2;
    }
  }
  if (*(int *)&param_1->field_0x10c < *(int *)&param_1[1].field_0x4c) {
    iVar3 = *(int *)&param_1->field_0x10c + _DAT_01c2a370;
    iVar2 = *(int *)&param_1[1].field_0x4c;
    *(int *)&param_1->field_0x10c = iVar3;
    if (iVar2 < iVar3) {
      *(int *)&param_1->field_0x10c = iVar2;
    }
  }
  else if (*(int *)&param_1[1].field_0x4c < *(int *)&param_1->field_0x10c) {
    iVar3 = *(int *)&param_1->field_0x10c - _DAT_01c2a370;
    iVar2 = *(int *)&param_1[1].field_0x4c;
    *(int *)&param_1->field_0x10c = iVar3;
    if (iVar3 < iVar2) {
      *(int *)&param_1->field_0x10c = iVar2;
    }
  }
  if (*(int *)&param_1->field_0x110 < *(int *)&param_1[1].field_0x50) {
    iVar3 = *(int *)&param_1->field_0x110 + _DAT_01c2a370;
    iVar2 = *(int *)&param_1[1].field_0x50;
    *(int *)&param_1->field_0x110 = iVar3;
    if (iVar2 < iVar3) {
      *(int *)&param_1->field_0x110 = iVar2;
      return;
    }
  }
  else if (*(int *)&param_1[1].field_0x50 < *(int *)&param_1->field_0x110) {
    iVar3 = *(int *)&param_1->field_0x110 - _DAT_01c2a370;
    iVar2 = *(int *)&param_1[1].field_0x50;
    *(int *)&param_1->field_0x110 = iVar3;
    if (iVar3 < iVar2) {
      *(int *)&param_1->field_0x110 = iVar2;
      return;
    }
  }
  return;
}
