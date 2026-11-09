// Name: core_cow.cpp_FUN_004392b0
// Address: 004392b0
// Address Range: [[004392b0, 00439820]]
// Convention: unknown
// Signature: void core_cow_cpp_FUN_004392b0(CEnemy *param_1,float param_2)

#include "nocturne.h"

void core_cow_cpp_FUN_004392b0(CEnemy *param_1,float param_2)

{
  byte *this_ptr;
  uint uVar1;
  int iVar2;
  CEnemy *pCVar3;
  uint uVar4;
  CPathMap *path_map;
  byte bVar5;
  float afStackY_10b8 [997];
  uint *puVar6;
  CVector3f *pCVar7;
  float fVar8;
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
  
  bVar5 = 0;
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0((CCharacter *)param_1,param_2);
  if (iVar2 == 0) {
    return;
  }
  *(uint *)&param_1->field_0x2510 = 0;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
  afStack_24[2] = param_2 * *(float *)&param_1->field_0x10a60;
  this_ptr = &param_1->field_0x2b4;
  while (0.0 < afStack_24[2]) {
    iVar2 = core_motion_cpp_CMotionController_advance_FUN_005030c0
                      ((CMotionController *)this_ptr,afStack_24 + 2);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)param_1,iVar2);
  }
  *(uint *)&param_1->field_0x2594 = *(uint *)&param_1->field_0x2510;
  core_charactr_cpp_FUN_0042b2a0(param_1,param_2 * *(float *)&param_1->field_0x10a60);
  iVar2 = core_motion_cpp_FUN_005035c0(this_ptr);
  uVar4 = *(uint *)(iVar2 + 0x24);
  iVar2 = core_charactr_cpp_FUN_004287f0((CCharacter *)param_1,param_2);
  if (iVar2 == 0) {
    switch(uVar4) {
    case 0:
      iVar2 = core_enemy_cpp_FUN_00488970(param_1,param_2);
      if (iVar2 == 0) {
        (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))(param_1,param_2);
        if (*(int *)&param_1->field_0x10a78 != 0) {
          iVar2 = core_sound_cpp_FUN_0055af70(0x0264B290,*(uint *)&param_1[1].field_0x8);
          if (iVar2 == 0) {
            uVar4 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1,"cow?.wav");
            *(uint *)&param_1[1].field_0x8 = uVar4;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&param_1->field_0x2b4,1,1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)this_ptr,1,1);
      }
      break;
    case 1:
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))(param_1,param_2);
      uVar4 = 0x40900000;
      if (*(int *)&param_1->field_0x10a78 == 0) {
        iVar2 = core_enemy_cpp_FUN_00488970(param_1,param_2);
        if (iVar2 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)this_ptr,0,1);
        }
      }
      else {
        afStack_24[3] = (float)0x40900000;
        *(uint *)&param_1->field_0x2510 = 0;
        *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
        *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
        CStack_88._0_4_ = 0;
        CStack_88._4_4_ = 0;
        max_distance = 0.17453292;
        CStack_88._8_4_ = uVar4;
        pCVar7 = &CStack_88;
        fVar8 = 0.5;
        path_map = (CPathMap *)
                   (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0xcc))
                             (*(int *)&param_1->field_0x10a78);
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
          *(uint *)&param_1->field_0x10a74 = 0x40200000;
        }
      }
      break;
    case 2:
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_10c);
      uStack_108 = core_actor_cpp_FUN_0040cf60(0x40e00000,0x41700000);
      pCStack_d8 = param_1;
      pCStack_d4 = param_1;
      damage_info = aSStack_10c;
      fVar8 = 0.7;
      uStack_14 = uStack_108;
      core_xform_cpp_FUN_00591530
                (&DAT_0265370c,&param_1->field_0x1134 + *(int *)&param_1[1].field_0x4 * 0x30);
      puVar6 = &uStack_4c;
      uStack_4c = uStack_d0;
      afStack_48[(uint)bVar5 * -2] = afStack_cc[(uint)bVar5 * -2];
      afStack_48[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      core_actor_cpp_FUN_00408d70(param_1,puVar6);
      pCVar7 = &CStack_ac;
      CStack_ac._0_4_ = CStack_64._0_4_;
      *(uint *)((int)&CStack_ac + (uint)bVar5 * -8 + 4) =
           *(uint *)((int)&CStack_64 + (uint)bVar5 * -8 + 4);
      pCVar3 = param_1;
      *(uint *)((int)&CStack_ac + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           *(uint *)((int)&CStack_64 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      core_enemy_cpp_FUN_00488110(pCVar3,pCVar7,fVar8,damage_info);
      break;
    case 5:
      if ((*(int *)&param_1->field_0x10a64 == 0) && (*(int *)&param_1->field_0xdc == 0)) {
        core_skeleton_cpp_FUN_005469a0(this_ptr,0);
        puVar6 = &uStack_7c;
        uStack_7c = afStack_48[2];
        afStack_78[(uint)bVar5 * -2] = afStack_48[(uint)bVar5 * -2 + 3];
        afStack_78[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
             afStack_48[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
        core_actor_cpp_FUN_00408d70(param_1,puVar6);
        blood_type = BLOOD_TYPE_RED;
        CStack_58._0_4_ = CStack_34._0_4_;
        *(uint *)((int)&CStack_58 + (uint)bVar5 * -8 + 4) =
             *(uint *)((int)&CStack_34 + (uint)bVar5 * -8 + 4);
        *(uint *)((int)&CStack_58 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
             *(uint *)((int)&CStack_34 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
        core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(g_CGorePtr,&CStack_58,blood_type);
        *(uint *)&param_1->field_0x10a64 = 1;
      }
    }
    goto switchD_0043981a_caseD_3;
  }
  uVar1 = *(uint *)&param_1->field_0x27ac;
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_0043937b:
      iVar2 = 1;
    }
    else {
LAB_00439560:
      iVar2 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&param_1->field_0x2b4,iVar2,1);
  }
  else {
    if (uVar1 < 3) goto LAB_0043937b;
    if (uVar1 != 3) goto LAB_00439560;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)this_ptr,0,1);
    engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)&param_1->field_0x2510 = 0;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
switchD_0043981a_caseD_3:
  if (0.0 < *(float *)&param_1->field_0x10a74) {
    *(float *)&param_1->field_0x10a74 = *(float *)&param_1->field_0x10a74 - param_2;
  }
  iVar2 = core_charactr_cpp_FUN_00424430((CCharacter *)param_1);
  if (iVar2 != 0) {
    iVar2 = *(int *)&param_1->field_0x10a78;
    if ((iVar2 != 0) &&
       (pCVar3 = (CEnemy *)(**(code **)(*(int *)(iVar2 + 0x2b0) + 0xfc))(iVar2), pCVar3 == param_1))
    {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0x10a78);
    }
    core_charactr_cpp_FUN_00423a10(param_1,param_2);
    afStack_cc[2] = *(float *)&param_1->field_0x2588 * param_2;
    afStack_cc[3] = *(float *)&param_1->field_0x258c * param_2;
    fStack_bc = *(float *)&param_1->field_0x2590 * param_2;
    afStack_9c[2] = afStack_cc[2];
    afStack_9c[(uint)bVar5 * -2 + 3] = afStack_cc[(uint)bVar5 * -2 + 3];
    afStack_9c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
         afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
    fStack_a0 = afStack_9c[2] + *(float *)&param_1->field_0x257c;
    afStack_9c[0] = afStack_9c[3] + *(float *)&param_1->field_0x2580;
    afStack_9c[1] = fStack_8c + *(float *)&param_1->field_0x2584;
    afStack_78[2] = fStack_a0;
    afStack_78[(uint)bVar5 * -2 + 3] = afStack_9c[(uint)bVar5 * -2];
    afStack_78[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
         afStack_9c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    fStack_b8 = afStack_78[2] + *(float *)&param_1->field_0x2508;
    fStack_b4 = afStack_78[3] + *(float *)&param_1->field_0x250c;
    fStack_b0 = fStack_68 + *(float *)&param_1->field_0x2510;
    fStack_28 = fStack_b8;
    afStack_24[(uint)bVar5 * -2] = afStack_cc[(uint)bVar5 * -2 + 6];
    afStack_24[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
    *(uint *)&param_1->field_0x2584 = 0;
    *(uint *)&param_1->field_0x2580 = *(uint *)&param_1->field_0x2584;
    *(uint *)&param_1->field_0x257c = *(uint *)&param_1->field_0x2580;
    *(uint *)&param_1->field_0x2510 = 0;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
    core_charactr_cpp_FUN_00423a60((CCharacter *)param_1,(CVector3f *)&fStack_28);
  }
  core_charactr_cpp_FUN_00424470((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            ((CDeformableModelInstance *)&param_1->field_0x2b4);
  core_charactr_cpp_FUN_00429e90((CCharacter *)param_1,param_2);
  return;
}
