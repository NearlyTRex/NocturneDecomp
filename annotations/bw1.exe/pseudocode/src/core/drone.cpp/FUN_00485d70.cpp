// Name: core_drone.cpp_FUN_00485d70
// Address: 00485d70
// Address Range: [[00485d70, 00486464]]
// Convention: unknown
// Signature: void core_drone_cpp_FUN_00485d70(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_drone_cpp_FUN_00485d70(CEnemy *param_1,float param_2)

{
  byte *this_ptr;
  uint uVar1;
  int iVar2;
  SMotion *pSVar3;
  int iVar4;
  CEnemy *pCVar5;
  CPathMap *path_map;
  uint uVar6;
  byte bVar7;
  float afStackY_10f0 [996];
  CVector3f *pCVar8;
  CGore *this_ptr_00;
  float fVar9;
  SDamageInfo *pSVar10;
  EBloodType blood_type;
  float max_distance;
  SDamageInfo aSStack_144 [4];
  float fStack_140;
  CEnemy *pCStack_110;
  CEnemy *pCStack_10c;
  CVector3f CStack_108;
  float fStack_fc;
  float afStack_f8 [5];
  CVector3f CStack_e4;
  float fStack_d8;
  float afStack_d4 [2];
  CVector3f CStack_cc;
  CVector3f CStack_c0;
  uint uStack_b4;
  float afStack_b0 [4];
  float fStack_a0;
  CVector3f CStack_9c;
  float fStack_90;
  float afStack_8c [2];
  byte auStack_84 [8];
  float afStack_7c [4];
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  CVector3f CStack_60;
  CVector3f CStack_54;
  uint uStack_48;
  float afStack_44 [5];
  uint uStack_30;
  float fStack_24;
  byte *puStack_20;
  uint uStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar7 = 0;
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0((CCharacter *)param_1,param_2);
  if (iVar2 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&param_1[1].field_0x10);
    return;
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  fStack_24 = param_2 * *(float *)&param_1->field_0xc1d0;
  this_ptr = &param_1->field_0x158;
  while (0.0 < fStack_24) {
    iVar2 = core_motion_cpp_CMotionController_advance_FUN_00524270
                      ((CMotionController *)this_ptr,afStack_44 + 8);
    core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)param_1,iVar2);
  }
  *(float *)&param_1->field_0x2524 = *(float *)&param_1->field_0x24a4 * (float)_DAT_005db69a;
  core_charactr_cpp_FUN_00435320();
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)this_ptr);
  iVar2 = *(int *)(pSVar3 + 0x24);
  iStack_18 = iVar2;
  iVar4 = core_charactr_cpp_FUN_00432240((CCharacter *)param_1,param_2);
  if (iVar4 == 0) {
    switch(iVar2) {
    case 0:
      iVar2 = core_enemy_cpp_FUN_004a0fe0(param_1,param_2);
      if (iVar2 == 0) {
        (**(code **)(*(int *)&param_1->field_0x154 + 0x144))();
        if (*(int *)&param_1->field_0xc1e8 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)this_ptr,1,1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)this_ptr,1,1);
      }
      break;
    case 1:
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))();
      uVar6 = 0x40400000;
      if (*(int *)&param_1->field_0xc1e8 == 0) {
        iVar2 = core_enemy_cpp_FUN_004a0fe0(param_1,param_2);
        if (iVar2 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)this_ptr,0,1);
        }
      }
      else {
        uStack_1c = 0x40400000;
        *(uint *)&param_1->field_0x24a4 = 0;
        *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
        *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
        CStack_cc._0_4_ = 0;
        CStack_cc._4_4_ = 0;
        max_distance = 0.17453292;
        CStack_cc._8_4_ = uVar6;
        pCVar8 = &CStack_cc;
        fVar9 = 0.5;
        path_map = (CPathMap *)
                   (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xc4))();
        iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                          ((CCharacter *)param_1,
                           (CVector3f *)(*(int *)&param_1->field_0xc1e8 + 0x20),path_map,pCVar8,
                           fVar9,max_distance);
        if (iVar2 < 0) {
          engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s gave up chase - I'm confused\n",param_1)
          ;
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)this_ptr,0,1);
        }
        else if ((0 < iVar2) && (*(float *)&param_1->field_0xc1e4 <= 0.0)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)this_ptr,2,1);
          uVar1 = *(uint *)&param_1[1].field_0x14;
          *(uint *)&param_1->field_0xc1e4 = 0x3f800000;
          iVar2 = sound_sndmain_cpp_FUN_005735a0(uVar1);
          if (iVar2 == 0) {
            uVar6 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))();
            *(uint *)&param_1[1].field_0x14 = uVar6;
          }
        }
      }
      break;
    case 2:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_144);
      fStack_140 = (float)core_actor_cpp_FUN_0040cc00();
      pCStack_110 = param_1;
      pCStack_10c = param_1;
      pSVar10 = aSStack_144;
      puStack_20 = &param_1->field_0xfd8;
      fVar9 = 0.4;
      fStack_14 = fStack_140;
      core_xform_cpp_FUN_005b5080();
      uStack_48 = uStack_b4;
      afStack_44[(uint)bVar7 * -2] = afStack_b0[(uint)bVar7 * -2];
      afStack_44[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           afStack_b0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      core_actor_cpp_FUN_00408b40();
      pCVar8 = &CStack_c0;
      CStack_c0._0_4_ = CStack_9c._0_4_;
      *(uint *)((int)&CStack_c0 + (uint)bVar7 * -8 + 4) =
           *(uint *)((int)&CStack_9c + (uint)bVar7 * -8 + 4);
      pCVar5 = param_1;
      *(uint *)((int)&CStack_c0 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           *(uint *)((int)&CStack_9c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      core_enemy_cpp_FUN_004a0770(pCVar5,pCVar8,fVar9,pSVar10);
      fStack_140 = (float)core_actor_cpp_FUN_0040cc00();
      pCStack_110 = param_1;
      pCStack_10c = param_1;
      pSVar10 = aSStack_144;
      fVar9 = 0.4;
      fStack_14 = fStack_140;
      core_xform_cpp_FUN_005b5080();
      afStack_f8[2] = afStack_7c[1];
      afStack_f8[(uint)bVar7 * -2 + 3] = afStack_7c[(uint)bVar7 * -2 + 2];
      afStack_f8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           afStack_7c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 3];
      core_actor_cpp_FUN_00408b40();
      pCVar8 = &CStack_e4;
      CStack_e4._0_4_ = CStack_60._0_4_;
      *(uint *)((int)&CStack_e4 + (uint)bVar7 * -8 + 4) =
           *(uint *)((int)&CStack_60 + (uint)bVar7 * -8 + 4);
      pCVar5 = param_1;
      *(uint *)((int)&CStack_e4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           *(uint *)((int)&CStack_60 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      core_enemy_cpp_FUN_004a0770(pCVar5,pCVar8,fVar9,pSVar10);
      break;
    case 8:
      if ((*(int *)&param_1->field_0xc1d4 == 0) && (*(int *)&param_1->field_0xdc == 0)) {
        core_skeleton_cpp_FUN_00569040();
        uStack_30 = afStack_44[2];
        afStack_44[(uint)bVar7 * -2 + 6] = afStack_44[(uint)bVar7 * -2 + 3];
        afStack_44[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
             afStack_44[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
        core_actor_cpp_FUN_00408b40();
        blood_type = BLOOD_TYPE_ICHOR;
        pCVar8 = &CStack_54;
        CStack_54._0_4_ = CStack_108._0_4_;
        *(uint *)((int)&CStack_54 + (uint)bVar7 * -8 + 4) =
             *(uint *)((int)&CStack_108 + (uint)bVar7 * -8 + 4);
        this_ptr_00 = g_CGorePtr;
        *(uint *)((int)&CStack_54 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
             *(uint *)((int)&CStack_108 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
        core_gore_cpp_CGore_createBloodPool_FUN_004e62e0(this_ptr_00,pCVar8,blood_type);
        *(uint *)&param_1->field_0xc1d4 = 1;
      }
      break;
    case 9:
      if (*(int *)&param_1->field_0x2500 != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)this_ptr,10,1);
      }
    }
    goto switchD_004863fe_caseD_3;
  }
  uVar1 = *(uint *)&param_1->field_0x273c;
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_00485e46:
      iVar2 = 1;
    }
    else {
LAB_00486093:
      iVar2 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&param_1->field_0x158,iVar2,1);
  }
  else {
    if (uVar1 < 3) goto LAB_00485e46;
    if (uVar1 != 3) goto LAB_00486093;
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)this_ptr,0,1);
    engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
switchD_004863fe_caseD_3:
  if (0.0 < *(float *)&param_1->field_0xc1e4) {
    *(float *)&param_1->field_0xc1e4 = *(float *)&param_1->field_0xc1e4 - param_2;
  }
  if ((iStack_18 == 1) &&
     (iVar2 = sound_sndmain_cpp_FUN_00574010
                        ((double)*(float *)&param_1->field_0x20,
                         (double)*(float *)&param_1->field_0x24,
                         (double)*(float *)&param_1->field_0x28,0x42480000), iVar2 != 0)) {
    iVar2 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1[1].field_0x10);
    if (iVar2 == 0) {
      sound_sndmain_cpp_FUN_00572ac0();
      iVar2 = 2;
      fStack_14 = (float)core_actor_cpp_FUN_0040cc00(0,0x3f800000);
      sound_sndmain_cpp_FUN_00572a50((double)fStack_14,iVar2);
      uVar6 = (**(code **)(*(int *)&param_1->field_0x154 + 0x30))();
      *(uint *)&param_1[1].field_0x10 = uVar6;
      sound_sndmain_cpp_FUN_00572b40();
    }
  }
  else {
    sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&param_1[1].field_0x10);
  }
  iVar2 = core_charactr_cpp_FUN_0042e120((CCharacter *)param_1);
  if (iVar2 != 0) {
    iVar2 = *(int *)&param_1->field_0xc1e8;
    if ((iVar2 != 0) &&
       (pCVar5 = (CEnemy *)(**(code **)(*(int *)(iVar2 + 0x154) + 0xf4))(iVar2), pCVar5 == param_1))
    {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0xc1e8);
    }
    core_charactr_cpp_FUN_0042d700();
    fStack_fc = *(float *)&param_1->field_0x2518 * param_2;
    afStack_f8[0] = *(float *)&param_1->field_0x251c * param_2;
    afStack_f8[1] = *(float *)&param_1->field_0x2520 * param_2;
    fStack_90 = fStack_fc;
    afStack_8c[(uint)bVar7 * -2] = afStack_f8[(uint)bVar7 * -2];
    afStack_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_f8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    fStack_6c = fStack_90 + *(float *)&param_1->field_0x250c;
    fStack_68 = afStack_8c[0] + *(float *)&param_1->field_0x2510;
    fStack_64 = afStack_8c[1] + *(float *)&param_1->field_0x2514;
    afStack_b0[2] = fStack_6c;
    afStack_b0[(uint)bVar7 * -2 + 3] = afStack_7c[(uint)bVar7 * -2 + 5];
    afStack_b0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
         afStack_7c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 6];
    fStack_d8 = afStack_b0[2] + *(float *)&param_1->field_0x249c;
    afStack_d4[0] = afStack_b0[3] + *(float *)&param_1->field_0x24a0;
    afStack_d4[1] = fStack_a0 + *(float *)&param_1->field_0x24a4;
    auStack_84._0_4_ = fStack_d8;
    *(float *)(auStack_84 + (uint)bVar7 * -8 + 4) = afStack_d4[(uint)bVar7 * -2];
    *(float *)(auStack_84 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
         afStack_d4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    *(uint *)&param_1->field_0x2514 = 0;
    *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
    core_charactr_cpp_FUN_0042d750((CCharacter *)param_1,(CVector3f *)auStack_84);
  }
  core_charactr_cpp_FUN_0042e160((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            ((CDeformableModelInstance *)&param_1->field_0x158);
  core_charactr_cpp_FUN_00433e80((CCharacter *)param_1,param_2);
  return;
}
