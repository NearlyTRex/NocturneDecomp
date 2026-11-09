// Name: core_drone.cpp_FUN_0046d870
// Address: 0046d870
// Address Range: [[0046d870, 0046df64]]
// Convention: unknown
// Signature: void core_drone_cpp_FUN_0046d870(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_drone_cpp_FUN_0046d870(CEnemy *param_1,float param_2)

{
  byte *this_ptr;
  uint uVar1;
  int iVar2;
  int iVar3;
  CEnemy *pCVar4;
  CPathMap *path_map;
  uint uVar5;
  byte bVar6;
  float afStackY_10f0 [996];
  CVector3f *pCVar7;
  CGore *this_ptr_00;
  float fVar8;
  SDamageInfo *pSVar9;
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
  
  bVar6 = 0;
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0((CCharacter *)param_1,param_2);
  if (iVar2 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&param_1[1].field_0x10);
    return;
  }
  *(uint *)&param_1->field_0x2510 = 0;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
  fStack_24 = param_2 * *(float *)&param_1->field_0x10a60;
  this_ptr = &param_1->field_0x2b4;
  while (0.0 < fStack_24) {
    iVar2 = core_motion_cpp_CMotionController_advance_FUN_005030c0
                      ((CMotionController *)this_ptr,afStack_44 + 8);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)param_1,iVar2);
  }
  *(float *)&param_1->field_0x2594 = *(float *)&param_1->field_0x2510 * (float)_DAT_005d18a1;
  core_charactr_cpp_FUN_0042b2a0();
  iVar2 = core_motion_cpp_FUN_005035c0(this_ptr);
  iVar2 = *(int *)(iVar2 + 0x24);
  iStack_18 = iVar2;
  iVar3 = core_charactr_cpp_FUN_004287f0((CCharacter *)param_1,param_2);
  if (iVar3 == 0) {
    switch(iVar2) {
    case 0:
      iVar2 = core_enemy_cpp_FUN_00488970(param_1,param_2);
      if (iVar2 == 0) {
        (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))();
        if (*(int *)&param_1->field_0x10a78 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)this_ptr,1,1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)this_ptr,1,1);
      }
      break;
    case 1:
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))();
      uVar5 = 0x40400000;
      if (*(int *)&param_1->field_0x10a78 == 0) {
        iVar2 = core_enemy_cpp_FUN_00488970(param_1,param_2);
        if (iVar2 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)this_ptr,0,1);
        }
      }
      else {
        uStack_1c = 0x40400000;
        *(uint *)&param_1->field_0x2510 = 0;
        *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
        *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
        CStack_cc._0_4_ = 0;
        CStack_cc._4_4_ = 0;
        max_distance = 0.17453292;
        CStack_cc._8_4_ = uVar5;
        pCVar7 = &CStack_cc;
        fVar8 = 0.5;
        path_map = (CPathMap *)
                   (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0xcc))();
        iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                          ((CCharacter *)param_1,
                           (CVector3f *)(*(int *)&param_1->field_0x10a78 + 0x20),path_map,pCVar7,
                           fVar8,max_distance);
        if (iVar2 < 0) {
          engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s gave up chase - I'm confused\n",param_1)
          ;
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)this_ptr,0,1);
        }
        else if ((0 < iVar2) && (*(float *)&param_1->field_0x10a74 <= 0.0)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)this_ptr,2,1);
          uVar1 = *(uint *)&param_1[1].field_0x14;
          *(uint *)&param_1->field_0x10a74 = 0x3f800000;
          iVar2 = sound_sndmain_cpp_FUN_00550b70(uVar1);
          if (iVar2 == 0) {
            uVar5 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))();
            *(uint *)&param_1[1].field_0x14 = uVar5;
          }
        }
      }
      break;
    case 2:
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_144);
      fStack_140 = (float)core_actor_cpp_FUN_0040cf60();
      pCStack_110 = param_1;
      pCStack_10c = param_1;
      pSVar9 = aSStack_144;
      puStack_20 = &param_1->field_0x1134;
      fVar8 = 0.4;
      fStack_14 = fStack_140;
      core_xform_cpp_FUN_00591530();
      uStack_48 = uStack_b4;
      afStack_44[(uint)bVar6 * -2] = afStack_b0[(uint)bVar6 * -2];
      afStack_44[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           afStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      core_actor_cpp_FUN_00408d70();
      pCVar7 = &CStack_c0;
      CStack_c0._0_4_ = CStack_9c._0_4_;
      *(uint *)((int)&CStack_c0 + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&CStack_9c + (uint)bVar6 * -8 + 4);
      pCVar4 = param_1;
      *(uint *)((int)&CStack_c0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           *(uint *)((int)&CStack_9c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      core_enemy_cpp_FUN_00488110(pCVar4,pCVar7,fVar8,pSVar9);
      fStack_140 = (float)core_actor_cpp_FUN_0040cf60();
      pCStack_110 = param_1;
      pCStack_10c = param_1;
      pSVar9 = aSStack_144;
      fVar8 = 0.4;
      fStack_14 = fStack_140;
      core_xform_cpp_FUN_00591530();
      afStack_f8[2] = afStack_7c[1];
      afStack_f8[(uint)bVar6 * -2 + 3] = afStack_7c[(uint)bVar6 * -2 + 2];
      afStack_f8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
           afStack_7c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 3];
      core_actor_cpp_FUN_00408d70();
      pCVar7 = &CStack_e4;
      CStack_e4._0_4_ = CStack_60._0_4_;
      *(uint *)((int)&CStack_e4 + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&CStack_60 + (uint)bVar6 * -8 + 4);
      pCVar4 = param_1;
      *(uint *)((int)&CStack_e4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           *(uint *)((int)&CStack_60 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      core_enemy_cpp_FUN_00488110(pCVar4,pCVar7,fVar8,pSVar9);
      break;
    case 8:
      if ((*(int *)&param_1->field_0x10a64 == 0) && (*(int *)&param_1->field_0xdc == 0)) {
        core_skeleton_cpp_FUN_005469a0();
        uStack_30 = afStack_44[2];
        afStack_44[(uint)bVar6 * -2 + 6] = afStack_44[(uint)bVar6 * -2 + 3];
        afStack_44[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
             afStack_44[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
        core_actor_cpp_FUN_00408d70();
        blood_type = BLOOD_TYPE_ICHOR;
        pCVar7 = &CStack_54;
        CStack_54._0_4_ = CStack_108._0_4_;
        *(uint *)((int)&CStack_54 + (uint)bVar6 * -8 + 4) =
             *(uint *)((int)&CStack_108 + (uint)bVar6 * -8 + 4);
        this_ptr_00 = g_CGorePtr;
        *(uint *)((int)&CStack_54 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
             *(uint *)((int)&CStack_108 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
        core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(this_ptr_00,pCVar7,blood_type);
        *(uint *)&param_1->field_0x10a64 = 1;
      }
      break;
    case 9:
      if (*(int *)&param_1->field_0x2570 != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)this_ptr,10,1);
      }
    }
    goto switchD_0046defe_caseD_3;
  }
  uVar1 = *(uint *)&param_1->field_0x27ac;
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_0046d946:
      iVar2 = 1;
    }
    else {
LAB_0046db93:
      iVar2 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&param_1->field_0x2b4,iVar2,1);
  }
  else {
    if (uVar1 < 3) goto LAB_0046d946;
    if (uVar1 != 3) goto LAB_0046db93;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)this_ptr,0,1);
    engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)&param_1->field_0x2510 = 0;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
switchD_0046defe_caseD_3:
  if (0.0 < *(float *)&param_1->field_0x10a74) {
    *(float *)&param_1->field_0x10a74 = *(float *)&param_1->field_0x10a74 - param_2;
  }
  if ((iStack_18 == 1) &&
     (iVar2 = sound_sndmain_cpp_FUN_005515e0
                        ((double)*(float *)&param_1->field_0x20,
                         (double)*(float *)&param_1->field_0x24,
                         (double)*(float *)&param_1->field_0x28,0x42480000), iVar2 != 0)) {
    iVar2 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1[1].field_0x10);
    if (iVar2 == 0) {
      sound_sndmain_cpp_FUN_00550450();
      iVar2 = 2;
      fStack_14 = (float)core_actor_cpp_FUN_0040cf60(0,0x3f800000);
      sound_sndmain_cpp_FUN_005503e0((double)fStack_14,iVar2);
      uVar5 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x38))();
      *(uint *)&param_1[1].field_0x10 = uVar5;
      sound_sndmain_cpp_FUN_005504d0();
    }
  }
  else {
    sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&param_1[1].field_0x10);
  }
  iVar2 = core_charactr_cpp_FUN_00424430((CCharacter *)param_1);
  if (iVar2 != 0) {
    iVar2 = *(int *)&param_1->field_0x10a78;
    if ((iVar2 != 0) &&
       (pCVar4 = (CEnemy *)(**(code **)(*(int *)(iVar2 + 0x2b0) + 0xfc))(iVar2), pCVar4 == param_1))
    {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0x10a78);
    }
    core_charactr_cpp_FUN_00423a10();
    fStack_fc = *(float *)&param_1->field_0x2588 * param_2;
    afStack_f8[0] = *(float *)&param_1->field_0x258c * param_2;
    afStack_f8[1] = *(float *)&param_1->field_0x2590 * param_2;
    fStack_90 = fStack_fc;
    afStack_8c[(uint)bVar6 * -2] = afStack_f8[(uint)bVar6 * -2];
    afStack_8c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         afStack_f8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    fStack_6c = fStack_90 + *(float *)&param_1->field_0x257c;
    fStack_68 = afStack_8c[0] + *(float *)&param_1->field_0x2580;
    fStack_64 = afStack_8c[1] + *(float *)&param_1->field_0x2584;
    afStack_b0[2] = fStack_6c;
    afStack_b0[(uint)bVar6 * -2 + 3] = afStack_7c[(uint)bVar6 * -2 + 5];
    afStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
         afStack_7c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 6];
    fStack_d8 = afStack_b0[2] + *(float *)&param_1->field_0x2508;
    afStack_d4[0] = afStack_b0[3] + *(float *)&param_1->field_0x250c;
    afStack_d4[1] = fStack_a0 + *(float *)&param_1->field_0x2510;
    auStack_84._0_4_ = fStack_d8;
    *(float *)(auStack_84 + (uint)bVar6 * -8 + 4) = afStack_d4[(uint)bVar6 * -2];
    *(float *)(auStack_84 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
         afStack_d4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    *(uint *)&param_1->field_0x2584 = 0;
    *(uint *)&param_1->field_0x2580 = *(uint *)&param_1->field_0x2584;
    *(uint *)&param_1->field_0x257c = *(uint *)&param_1->field_0x2580;
    *(uint *)&param_1->field_0x2510 = 0;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
    core_charactr_cpp_FUN_00423a60((CCharacter *)param_1,(CVector3f *)auStack_84);
  }
  core_charactr_cpp_FUN_00424470((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            ((CDeformableModelInstance *)&param_1->field_0x2b4);
  core_charactr_cpp_FUN_00429e90((CCharacter *)param_1,param_2);
  return;
}
