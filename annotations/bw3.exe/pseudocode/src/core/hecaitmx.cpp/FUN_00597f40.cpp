// Name: core_hecaitmx.cpp_FUN_00597f40
// Address: 00597f40
// Address Range: [[00597f40, 00598477]]
// Convention: unknown
// Signature: void core_hecaitmx_cpp_FUN_00597f40(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_hecaitmx_cpp_FUN_00597f40(CEnemy *param_1,float param_2)

{
  byte *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  SMotion *pSVar5;
  CPathMap *path_map;
  byte bVar6;
  float afStackY_1080 [1012];
  CVector3f *direction;
  float min_distance;
  uint *puVar7;
  float max_distance;
  byte auStack_98 [8];
  float afStack_90 [4];
  CVector3f CStack_80;
  uint uStack_74;
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
  uint uStack_38;
  double dStack_20;
  float fStack_18;
  float fStack_14;
  
  bVar6 = 0;
  iVar4 = (**(code **)(*(int *)&param_1->field_0x154 + 0x148))(param_1,param_2);
  if (iVar4 == 0) {
    return;
  }
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)&param_1->field_0x158);
  uVar2 = *(uint *)(pSVar5 + 0x24);
  core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
            ((CMotionController *)&param_1->field_0x158);
  core_charactr_cpp_FUN_00433c60(param_1,param_2);
  core_charactr_cpp_FUN_00432330(param_1,param_2,*(int *)&param_1->field_0xcdd0 == 1);
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  fStack_18 = param_2 * *(float *)&param_1->field_0xcdcc * *(float *)&param_1[1].field_0x14;
  while (0.0 < fStack_18) {
    iVar4 = core_motion_cpp_CMotionController_advance_FUN_004fbb70
                      ((CMotionController *)&param_1->field_0x158,&fStack_18);
    core_charactr_cpp_FUN_00433fb0((CCharacter *)param_1,iVar4);
  }
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  core_charactr_cpp_FUN_00434850(param_1,param_2 * *(float *)&param_1->field_0xcdcc);
  iVar4 = core_charactr_cpp_FUN_00431660((CCharacter *)param_1,param_2);
  if (iVar4 != 0) {
    uVar3 = *(uint *)&param_1->field_0x273c;
    puVar1 = &param_1->field_0x158;
    if (uVar3 < 2) {
      if (uVar3 == 1) {
        fStack_14 = core_motion_cpp_FUN_004fc930((CMotionController *)puVar1);
        if ((float)_DAT_005d97af < fStack_14) {
          iVar4 = 2;
LAB_0059809b:
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)&param_1->field_0x158,iVar4,1);
        }
      }
      else {
LAB_00598246:
        fStack_14 = core_motion_cpp_FUN_004fc930((CMotionController *)&param_1->field_0x158);
        if ((float)_DAT_005d97af < fStack_14) {
          iVar4 = 1;
          goto LAB_0059809b;
        }
      }
    }
    else if (uVar3 < 3) {
      fStack_14 = core_motion_cpp_FUN_004fc930((CMotionController *)puVar1);
      if ((float)_DAT_005d97af < fStack_14) {
        iVar4 = 2;
        goto LAB_0059809b;
      }
    }
    else {
      if (uVar3 != 3) goto LAB_00598246;
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)puVar1,1,1);
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
    }
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
    goto switchD_00598471_caseD_1;
  }
  switch(uVar2) {
  default:
    goto switchD_00598471_caseD_1;
  case 2:
    (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
    puVar1 = &param_1->field_0x158;
    if (*(int *)&param_1->field_0xcde4 != 0) {
      max_distance = 0.17453292;
      min_distance = 0.2;
      *(uint *)&param_1->field_0x24a4 = 0;
      *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
      *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
      CStack_80._0_4_ = 0;
      CStack_80._8_4_ = 0x41400000;
      direction = &CStack_80;
      CStack_80._4_4_ = 0;
      path_map = (CPathMap *)
                 (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xc4))
                           (*(int *)&param_1->field_0xcde4);
      iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                        ((CCharacter *)param_1,(CVector3f *)(*(int *)&param_1->field_0xcde4 + 0x20),
                         path_map,direction,min_distance,max_distance);
      if (iVar4 < 0) {
        engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s gave up chase - I'm confused\n",param_1);
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)puVar1,1,1);
      }
      else if ((0 < iVar4) && (*(float *)&param_1->field_0xcde0 <= 0.0)) {
        iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
        if (iVar4 < 0x4b) {
          iVar4 = 3;
        }
        else {
          iVar4 = 5;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)puVar1,iVar4,1);
        *(uint *)&param_1->field_0xcde0 = 0x40200000;
      }
      goto switchD_00598471_caseD_1;
    }
    iVar4 = core_enemy_cpp_FUN_00489ff0(param_1,param_2);
    if (iVar4 != 0) {
      fStack_14 = core_motion_cpp_FUN_004fc930((CMotionController *)puVar1);
      if ((float)_DAT_005d97af < fStack_14) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)puVar1,2,1);
      }
      goto switchD_00598471_caseD_1;
    }
    break;
  case 3:
  case 4:
  case 5:
    fStack_14 = core_motion_cpp_FUN_004fc930((CMotionController *)&param_1->field_0x158);
    dStack_20 = (double)fStack_14;
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"Zone: %f\n",dStack_20);
    if (dStack_20 <= _DAT_005d97a7) goto switchD_00598471_caseD_1;
    break;
  case 7:
    if ((*(int *)&param_1->field_0xcdd0 == 0) && (*(int *)&param_1->field_0xdc == 0)) {
      core_skeleton_cpp_FUN_0054dbd0(&param_1->field_0x158,0);
      puVar7 = &uStack_74;
      uStack_74 = uStack_38;
      afStack_70[(uint)bVar6 * -2] = afStack_70[(uint)bVar6 * -2 + 0xf];
      afStack_70[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           afStack_70[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
      core_actor_cpp_FUN_00408b80(param_1,puVar7);
      *(uint *)&param_1->field_0xcdd0 = 1;
    }
    goto switchD_00598471_caseD_1;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
            ((CMotionController *)&param_1->field_0x158,1,1);
switchD_00598471_caseD_1:
  if (0.0 < *(float *)&param_1->field_0xcde0) {
    *(float *)&param_1->field_0xcde0 = *(float *)&param_1->field_0xcde0 - param_2;
  }
  iVar4 = core_charactr_cpp_FUN_0042ccf0((CCharacter *)param_1);
  if (iVar4 != 0) {
    core_charactr_cpp_FUN_0042c1e0(param_1,param_2);
    fStack_50 = *(float *)&param_1->field_0x2518 * param_2;
    fStack_4c = *(float *)&param_1->field_0x251c * param_2;
    fStack_48 = *(float *)&param_1->field_0x2520 * param_2;
    fStack_44 = fStack_50;
    afStack_70[(uint)bVar6 * -2 + 0xc] = afStack_70[(uint)bVar6 * -2 + 9];
    afStack_70[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
         afStack_70[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
    afStack_90[1] = fStack_44 + *(float *)&param_1->field_0x250c;
    afStack_90[2] = fStack_40 + *(float *)&param_1->field_0x2510;
    afStack_90[3] = fStack_3c + *(float *)&param_1->field_0x2514;
    fStack_5c = afStack_90[1];
    afStack_70[(uint)bVar6 * -2 + 6] = afStack_90[(uint)bVar6 * -2 + 2];
    afStack_70[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
         afStack_90[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 3];
    afStack_70[2] = fStack_5c + *(float *)&param_1->field_0x249c;
    afStack_70[3] = fStack_58 + *(float *)&param_1->field_0x24a0;
    fStack_60 = fStack_54 + *(float *)&param_1->field_0x24a4;
    auStack_98._0_4_ = afStack_70[2];
    *(float *)(auStack_98 + (uint)bVar6 * -8 + 4) = afStack_70[(uint)bVar6 * -2 + 3];
    *(float *)(auStack_98 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
         afStack_70[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
    *(uint *)&param_1->field_0x2514 = 0;
    *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a4;
    core_charactr_cpp_FUN_0042c230((CCharacter *)param_1,(CVector3f *)auStack_98);
  }
  core_charactr_cpp_FUN_0042cd30((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            ((CDeformableModelInstance *)&param_1->field_0x158);
  core_charactr_cpp_FUN_00433350((CCharacter *)param_1,param_2);
  return;
}
