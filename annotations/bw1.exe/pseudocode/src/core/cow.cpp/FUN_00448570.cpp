// Name: core_cow.cpp_FUN_00448570
// Address: 00448570
// Address Range: [[00448570, 00448ae0]]
// Convention: unknown
// Signature: void core_cow_cpp_FUN_00448570(CEnemy *param_1,float param_2)

#include "nocturne.h"

void core_cow_cpp_FUN_00448570(CEnemy *param_1,float param_2)

{
  byte *this_ptr;
  uint uVar1;
  int iVar2;
  SMotion *pSVar3;
  CEnemy *pCVar4;
  uint uVar5;
  CPathMap *path_map;
  byte bVar6;
  float afStackY_10b8 [997];
  uint *puVar7;
  CVector3f *pCVar8;
  float fVar9;
  SDamageInfo *damage_info;
  EBloodType blood_type;
  float max_distance;
  SDamageInfo aSStack_10c [4];
  uint uStack_108;
  CEnemy *pCStack_d8;
  CEnemy *pCStack_d4;
  uint uStack_d0;
  float afStack_cc [4];
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  CVector3f CStack_ac;
  float fStack_a0;
  float afStack_9c [4];
  float fStack_8c;
  CVector3f CStack_88;
  uint uStack_7c;
  float afStack_78 [4];
  float fStack_68;
  CVector3f CStack_64;
  CVector3f CStack_58;
  uint uStack_4c;
  float afStack_48 [5];
  CVector3f CStack_34;
  float fStack_28;
  float afStack_24 [4];
  uint uStack_14;
  
  bVar6 = 0;
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0((CCharacter *)param_1,param_2);
  if (iVar2 == 0) {
    return;
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  afStack_24[2] = param_2 * *(float *)&param_1->field_0xc1d0;
  this_ptr = &param_1->field_0x158;
  while (0.0 < afStack_24[2]) {
    iVar2 = core_motion_cpp_CMotionController_advance_FUN_00524270
                      ((CMotionController *)this_ptr,afStack_24 + 2);
    core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)param_1,iVar2);
  }
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  core_charactr_cpp_FUN_00435320(param_1,param_2 * *(float *)&param_1->field_0xc1d0);
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)this_ptr);
  uVar5 = *(uint *)(pSVar3 + 0x24);
  iVar2 = core_charactr_cpp_FUN_00432240((CCharacter *)param_1,param_2);
  if (iVar2 == 0) {
    switch(uVar5) {
    case 0:
      iVar2 = core_enemy_cpp_FUN_004a0fe0(param_1,param_2);
      if (iVar2 == 0) {
        (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
        if (*(int *)&param_1->field_0xc1e8 != 0) {
          iVar2 = core_sound_cpp_FUN_0057d9c0(0x02C82A60,*(uint *)&param_1[1].field_0x8);
          if (iVar2 == 0) {
            uVar5 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"cow?.wav");
            *(uint *)&param_1[1].field_0x8 = uVar5;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&param_1->field_0x158,1,1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)this_ptr,1,1);
      }
      break;
    case 1:
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
      uVar5 = 0x40900000;
      if (*(int *)&param_1->field_0xc1e8 == 0) {
        iVar2 = core_enemy_cpp_FUN_004a0fe0(param_1,param_2);
        if (iVar2 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)this_ptr,0,1);
        }
      }
      else {
        afStack_24[3] = (float)0x40900000;
        *(uint *)&param_1->field_0x24a4 = 0;
        *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
        *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
        CStack_88._0_4_ = 0;
        CStack_88._4_4_ = 0;
        max_distance = 0.17453292;
        CStack_88._8_4_ = uVar5;
        pCVar8 = &CStack_88;
        fVar9 = 0.5;
        path_map = (CPathMap *)
                   (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xc4))
                             (*(int *)&param_1->field_0xc1e8);
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
          *(uint *)&param_1->field_0xc1e4 = 0x40200000;
        }
      }
      break;
    case 2:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_10c);
      uStack_108 = core_actor_cpp_FUN_0040cc00(0x40e00000,0x41700000);
      pCStack_d8 = param_1;
      pCStack_d4 = param_1;
      damage_info = aSStack_10c;
      fVar9 = 0.7;
      uStack_14 = uStack_108;
      core_xform_cpp_FUN_005b5080
                (&DAT_02c8af28,&param_1->field_0xfd8 + *(int *)&param_1[1].field_0x4 * 0x30);
      puVar7 = &uStack_4c;
      uStack_4c = uStack_d0;
      afStack_48[(uint)bVar6 * -2] = afStack_cc[(uint)bVar6 * -2];
      afStack_48[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           afStack_cc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      core_actor_cpp_FUN_00408b40(param_1,puVar7);
      pCVar8 = &CStack_ac;
      CStack_ac._0_4_ = CStack_64._0_4_;
      *(uint *)((int)&CStack_ac + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&CStack_64 + (uint)bVar6 * -8 + 4);
      pCVar4 = param_1;
      *(uint *)((int)&CStack_ac + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           *(uint *)((int)&CStack_64 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      core_enemy_cpp_FUN_004a0770(pCVar4,pCVar8,fVar9,damage_info);
      break;
    case 5:
      if ((*(int *)&param_1->field_0xc1d4 == 0) && (*(int *)&param_1->field_0xdc == 0)) {
        core_skeleton_cpp_FUN_00569040(this_ptr,0);
        puVar7 = &uStack_7c;
        uStack_7c = afStack_48[2];
        afStack_78[(uint)bVar6 * -2] = afStack_48[(uint)bVar6 * -2 + 3];
        afStack_78[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             afStack_48[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
        core_actor_cpp_FUN_00408b40(param_1,puVar7);
        blood_type = BLOOD_TYPE_RED;
        CStack_58._0_4_ = CStack_34._0_4_;
        *(uint *)((int)&CStack_58 + (uint)bVar6 * -8 + 4) =
             *(uint *)((int)&CStack_34 + (uint)bVar6 * -8 + 4);
        *(uint *)((int)&CStack_58 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
             *(uint *)((int)&CStack_34 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
        core_gore_cpp_CGore_createBloodPool_FUN_004e62e0(g_CGorePtr,&CStack_58,blood_type);
        *(uint *)&param_1->field_0xc1d4 = 1;
      }
    }
    goto switchD_00448ada_caseD_3;
  }
  uVar1 = *(uint *)&param_1->field_0x273c;
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_0044863b:
      iVar2 = 1;
    }
    else {
LAB_00448820:
      iVar2 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&param_1->field_0x158,iVar2,1);
  }
  else {
    if (uVar1 < 3) goto LAB_0044863b;
    if (uVar1 != 3) goto LAB_00448820;
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)this_ptr,0,1);
    engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
switchD_00448ada_caseD_3:
  if (0.0 < *(float *)&param_1->field_0xc1e4) {
    *(float *)&param_1->field_0xc1e4 = *(float *)&param_1->field_0xc1e4 - param_2;
  }
  iVar2 = core_charactr_cpp_FUN_0042e120((CCharacter *)param_1);
  if (iVar2 != 0) {
    iVar2 = *(int *)&param_1->field_0xc1e8;
    if ((iVar2 != 0) &&
       (pCVar4 = (CEnemy *)(**(code **)(*(int *)(iVar2 + 0x154) + 0xf4))(iVar2), pCVar4 == param_1))
    {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0xc1e8);
    }
    core_charactr_cpp_FUN_0042d700(param_1,param_2);
    afStack_cc[2] = *(float *)&param_1->field_0x2518 * param_2;
    afStack_cc[3] = *(float *)&param_1->field_0x251c * param_2;
    fStack_bc = *(float *)&param_1->field_0x2520 * param_2;
    afStack_9c[2] = afStack_cc[2];
    afStack_9c[(uint)bVar6 * -2 + 3] = afStack_cc[(uint)bVar6 * -2 + 3];
    afStack_9c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
         afStack_cc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
    fStack_a0 = afStack_9c[2] + *(float *)&param_1->field_0x250c;
    afStack_9c[0] = afStack_9c[3] + *(float *)&param_1->field_0x2510;
    afStack_9c[1] = fStack_8c + *(float *)&param_1->field_0x2514;
    afStack_78[2] = fStack_a0;
    afStack_78[(uint)bVar6 * -2 + 3] = afStack_9c[(uint)bVar6 * -2];
    afStack_78[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
         afStack_9c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    fStack_b8 = afStack_78[2] + *(float *)&param_1->field_0x249c;
    fStack_b4 = afStack_78[3] + *(float *)&param_1->field_0x24a0;
    fStack_b0 = fStack_68 + *(float *)&param_1->field_0x24a4;
    fStack_28 = fStack_b8;
    afStack_24[(uint)bVar6 * -2] = afStack_cc[(uint)bVar6 * -2 + 6];
    afStack_24[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         afStack_cc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
    *(uint *)&param_1->field_0x2514 = 0;
    *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
    core_charactr_cpp_FUN_0042d750((CCharacter *)param_1,(CVector3f *)&fStack_28);
  }
  core_charactr_cpp_FUN_0042e160((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            ((CDeformableModelInstance *)&param_1->field_0x158);
  core_charactr_cpp_FUN_00433e80((CCharacter *)param_1,param_2);
  return;
}
