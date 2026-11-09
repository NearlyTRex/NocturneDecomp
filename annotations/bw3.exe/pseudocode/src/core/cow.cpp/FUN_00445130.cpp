// Name: core_cow.cpp_FUN_00445130
// Address: 00445130
// Address Range: [[00445130, 004456a9]]
// Convention: unknown
// Signature: void core_cow_cpp_FUN_00445130(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void core_cow_cpp_FUN_00445130(CEnemy *param_1,float param_2)

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
  float *pfVar8;
  CVector3f *direction;
  float min_distance;
  EBloodType blood_type;
  float max_distance;
  SDamageInfo aSStack_10c [4];
  uint uStack_108;
  CEnemy *pCStack_d8;
  CEnemy *pCStack_d4;
  uint uStack_d0;
  float afStack_cc [4];
  float fStack_bc;
  CVector3f CStack_b8;
  float fStack_ac;
  float afStack_a8 [5];
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  uint uStack_88;
  float fStack_7c;
  float afStack_78 [4];
  float fStack_68;
  CVector3f CStack_64;
  uint uStack_58;
  float afStack_54 [2];
  CVector3f CStack_4c;
  uint uStack_40;
  float afStack_3c [5];
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float afStack_1c [2];
  uint uStack_14;
  
  bVar6 = 0;
  iVar2 = (**(code **)(*(int *)&param_1->field_0x154 + 0x148))(param_1,param_2);
  if (iVar2 == 0) {
    return;
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  afStack_1c[0] = param_2 * *(float *)&param_1->field_0xcdcc;
  this_ptr = &param_1->field_0x158;
  while (0.0 < afStack_1c[0]) {
    iVar2 = core_motion_cpp_CMotionController_advance_FUN_004fbb70
                      ((CMotionController *)this_ptr,afStack_3c + 8);
    core_charactr_cpp_FUN_00433fb0((CCharacter *)param_1,iVar2);
  }
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  core_charactr_cpp_FUN_00434850(param_1,param_2 * *(float *)&param_1->field_0xcdcc);
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)this_ptr);
  uVar5 = *(uint *)(pSVar3 + 0x24);
  iVar2 = core_charactr_cpp_FUN_00431660((CCharacter *)param_1,param_2);
  if (iVar2 == 0) {
    switch(uVar5) {
    case 0:
      iVar2 = core_enemy_cpp_FUN_00489ff0(param_1,param_2);
      if (iVar2 == 0) {
        (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
        if (*(int *)&param_1->field_0xcde4 != 0) {
          iVar2 = core_sound_cpp_FUN_00560af0(0x02CF5680,*(uint *)&param_1[1].field_0x8);
          if (iVar2 == 0) {
            uVar5 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"cow?.wav");
            *(uint *)&param_1[1].field_0x8 = uVar5;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)&param_1->field_0x158,1,1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)this_ptr,1,1);
      }
      break;
    case 1:
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
      uVar5 = 0x40900000;
      if (*(int *)&param_1->field_0xcde4 == 0) {
        iVar2 = core_enemy_cpp_FUN_00489ff0(param_1,param_2);
        if (iVar2 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)this_ptr,0,1);
        }
      }
      else {
        afStack_1c[1] = (float)0x40900000;
        *(uint *)&param_1->field_0x24a4 = 0;
        *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
        *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
        CStack_64._0_4_ = 0;
        CStack_64._4_4_ = 0;
        max_distance = 0.17453292;
        CStack_64._8_4_ = uVar5;
        direction = &CStack_64;
        min_distance = 0.5;
        path_map = (CPathMap *)
                   (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xc4))
                             (*(int *)&param_1->field_0xcde4);
        iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                          ((CCharacter *)param_1,
                           (CVector3f *)(*(int *)&param_1->field_0xcde4 + 0x20),path_map,direction,
                           min_distance,max_distance);
        if (iVar2 < 0) {
          engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s gave up chase - I'm confused\n",param_1)
          ;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)this_ptr,0,1);
        }
        else if ((0 < iVar2) && (*(float *)&param_1->field_0xcde0 <= 0.0)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)this_ptr,2,1);
          *(uint *)&param_1->field_0xcde0 = 0x40200000;
        }
      }
      break;
    case 2:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_10c);
      uStack_108 = core_actor_cpp_FUN_0040ce40(0x40e00000,0x41700000);
      pCStack_d8 = param_1;
      pCStack_d4 = param_1;
      uStack_14 = uStack_108;
      core_xform_cpp_FUN_00583260
                (&DAT_02cfd900,&param_1->field_0xfd8 + *(int *)&param_1[1].field_0x4 * 0x30,
                 0x3f333333,aSStack_10c);
      puVar7 = &uStack_58;
      uStack_58 = uStack_d0;
      afStack_54[(uint)bVar6 * -2] = afStack_cc[(uint)bVar6 * -2];
      afStack_54[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           afStack_cc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      core_actor_cpp_FUN_00408b80(param_1,puVar7);
      pfVar8 = afStack_a8 + 2;
      afStack_a8[2] = (float)uStack_88;
      afStack_a8[(uint)bVar6 * -2 + 3] = afStack_a8[(uint)bVar6 * -2 + 9];
      pCVar4 = param_1;
      afStack_a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
           afStack_a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
      core_enemy_cpp_FUN_004893f0(pCVar4,pfVar8);
      break;
    case 5:
      if ((*(int *)&param_1->field_0xcdd0 == 0) && (*(int *)&param_1->field_0xdc == 0)) {
        core_skeleton_cpp_FUN_0054dbd0(this_ptr,0);
        puVar7 = &uStack_40;
        uStack_40 = afStack_3c[2];
        afStack_3c[(uint)bVar6 * -2] = afStack_3c[(uint)bVar6 * -2 + 3];
        afStack_3c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             afStack_3c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
        core_actor_cpp_FUN_00408b80(param_1,puVar7);
        blood_type = BLOOD_TYPE_RED;
        CStack_4c._0_4_ = CStack_b8._0_4_;
        *(uint *)((int)&CStack_4c + (uint)bVar6 * -8 + 4) =
             *(uint *)((int)&CStack_b8 + (uint)bVar6 * -8 + 4);
        *(uint *)((int)&CStack_4c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
             *(uint *)((int)&CStack_b8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
        core_gore_cpp_FUN_004cec40(g_CGorePtr,&CStack_4c,blood_type);
        *(uint *)&param_1->field_0xcdd0 = 1;
      }
    }
    goto switchD_004456a3_caseD_3;
  }
  uVar1 = *(uint *)&param_1->field_0x273c;
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_00445202:
      iVar2 = 1;
    }
    else {
LAB_004453e7:
      iVar2 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              ((CMotionController *)&param_1->field_0x158,iVar2,1);
  }
  else {
    if (uVar1 < 3) goto LAB_00445202;
    if (uVar1 != 3) goto LAB_004453e7;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              ((CMotionController *)this_ptr,0,1);
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
switchD_004456a3_caseD_3:
  if (0.0 < *(float *)&param_1->field_0xcde0) {
    *(float *)&param_1->field_0xcde0 = *(float *)&param_1->field_0xcde0 - param_2;
  }
  iVar2 = core_charactr_cpp_FUN_0042ccf0((CCharacter *)param_1);
  if (iVar2 != 0) {
    iVar2 = *(int *)&param_1->field_0xcde4;
    if ((iVar2 != 0) &&
       (pCVar4 = (CEnemy *)(**(code **)(*(int *)(iVar2 + 0x154) + 0xf4))(iVar2), pCVar4 == param_1))
    {
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0xcde4);
    }
    core_charactr_cpp_FUN_0042c1e0(param_1,param_2);
    afStack_cc[2] = *(float *)&param_1->field_0x2518 * param_2;
    afStack_cc[3] = *(float *)&param_1->field_0x251c * param_2;
    fStack_bc = *(float *)&param_1->field_0x2520 * param_2;
    afStack_78[2] = afStack_cc[2];
    afStack_78[(uint)bVar6 * -2 + 3] = afStack_cc[(uint)bVar6 * -2 + 3];
    afStack_78[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
         afStack_cc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
    fStack_94 = afStack_78[2] + *(float *)&param_1->field_0x250c;
    fStack_90 = afStack_78[3] + *(float *)&param_1->field_0x2510;
    fStack_8c = fStack_68 + *(float *)&param_1->field_0x2514;
    fStack_28 = fStack_94;
    afStack_3c[(uint)bVar6 * -2 + 6] = afStack_a8[(uint)bVar6 * -2 + 6];
    afStack_3c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
         afStack_a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
    fStack_ac = fStack_28 + *(float *)&param_1->field_0x249c;
    afStack_a8[0] = fStack_24 + *(float *)&param_1->field_0x24a0;
    afStack_a8[1] = fStack_20 + *(float *)&param_1->field_0x24a4;
    fStack_7c = fStack_ac;
    afStack_78[(uint)bVar6 * -2] = afStack_a8[(uint)bVar6 * -2];
    afStack_78[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         afStack_a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    *(uint *)&param_1->field_0x2514 = 0;
    *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
    core_charactr_cpp_FUN_0042c230((CCharacter *)param_1,(CVector3f *)&fStack_7c);
  }
  core_charactr_cpp_FUN_0042cd30((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            ((CDeformableModelInstance *)&param_1->field_0x158);
  core_charactr_cpp_FUN_00433350((CCharacter *)param_1,param_2);
  return;
}
