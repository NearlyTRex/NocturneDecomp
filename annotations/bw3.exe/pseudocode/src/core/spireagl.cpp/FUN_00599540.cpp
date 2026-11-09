// Name: core_spireagl.cpp_FUN_00599540
// Address: 00599540
// Address Range: [[00599540, 00599a30]]
// Convention: unknown
// Signature: void core_spireagl_cpp_FUN_00599540(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_spireagl_cpp_FUN_00599540(CCharacter *param_1,float param_2)

{
  byte *puVar1;
  uint uVar2;
  float fVar3;
  CDemonMission *pCVar4;
  int iVar5;
  SMotion *pSVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  float afStackY_106c [1012];
  char *pcVar10;
  uint *puVar11;
  EBloodType blood_type;
  CVector3f CStack_84;
  CVector3f CStack_78;
  float fStack_6c;
  float afStack_68 [4];
  float fStack_58;
  CVector3f CStack_54;
  uint uStack_48;
  uint auStack_44 [5];
  CVector3f CStack_30;
  float fStack_1c;
  uint uStack_18;
  int iStack_14;
  
  bVar9 = 0;
  core_charactr_cpp_FUN_00433c60(param_1,param_2);
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  uStack_18 = 1;
  fStack_1c = param_2;
  while (0.0 < fStack_1c) {
    iVar5 = core_motion_cpp_CMotionController_advance_FUN_004fbb70
                      ((CMotionController *)&param_1->field_0x158,&fStack_1c);
    core_charactr_cpp_FUN_00433fb0(param_1,iVar5);
  }
  iVar5 = (**(code **)(*(int *)&param_1->field_0x154 + 0x10c))(param_1);
  if ((((1 < iVar5) && (*(int *)&param_1->field_0x70 == 1)) &&
      (*(int *)&param_1[2].field_0x6cd0 == 0)) && (*(int *)&param_1->field_0xdc == 0)) {
    core_skeleton_cpp_FUN_0054dbd0(&param_1->field_0x158,0);
    puVar11 = &uStack_48;
    uStack_48 = auStack_44[2];
    auStack_44[(uint)bVar9 * -2] = auStack_44[(uint)bVar9 * -2 + 3];
    auStack_44[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         auStack_44[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
    core_actor_cpp_FUN_00408b80(param_1,puVar11);
    blood_type = BLOOD_TYPE_RED;
    CStack_54._0_4_ = CStack_84._0_4_;
    *(uint *)((int)&CStack_54 + (uint)bVar9 * -8 + 4) =
         *(uint *)((int)&CStack_84 + (uint)bVar9 * -8 + 4);
    *(uint *)((int)&CStack_54 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         *(uint *)((int)&CStack_84 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    core_gore_cpp_FUN_004cec40(g_CGorePtr,&CStack_54,blood_type);
    uStack_18 = 1;
    *(uint *)&param_1[2].field_0x6cd0 = 1;
  }
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  core_charactr_cpp_FUN_00434850(param_1,param_2);
  iVar5 = core_charactr_cpp_FUN_00431660(param_1,param_2);
  if (iVar5 == 0) {
    if (1.0 <= *(float *)&param_1[2].field_0x7908) {
      return;
    }
    pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                       ((CMotionController *)&param_1->field_0x158);
    iStack_14 = *(int *)(pSVar6 + 0x24);
    if ((iStack_14 == 6) || (iStack_14 == 7)) {
      *(uint *)&param_1->field_0xf8 = 1;
      *(uint *)&param_1->field_0xfc = 0;
    }
    if (((iStack_14 == 7) &&
        (fVar3 = param_2 * (float)_DAT_005d99bd + *(float *)&param_1[2].field_0x7908,
        *(float *)&param_1[2].field_0x7908 = fVar3, 1.0 <= fVar3)) &&
       (*(CDemonActor **)&param_1[2].field_0x6cd8 != (CDemonActor *)0x0)) {
      core_mission_cpp_FUN_004f6930(0x01D81080,*(CDemonActor **)&param_1[2].field_0x6cd8);
      pCVar4 = 0x01D81080;
      *(uint *)&param_1[2].field_0x6cd8 = 0;
      core_mission_cpp_FUN_004f6f10(pCVar4,param_1,1);
    }
    if (iStack_14 != 0) {
      core_actor_cpp_FUN_00408b00(param_1,&param_1->field_0x249c);
      puVar1 = &param_1->field_0x20;
      afStack_68[2] = fStack_6c;
      afStack_68[(uint)bVar9 * -2 + 3] = afStack_68[(uint)bVar9 * -2];
      afStack_68[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
           afStack_68[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      *(float *)puVar1 = *(float *)puVar1 + afStack_68[2];
      *(float *)&param_1->field_0x24 = *(float *)&param_1->field_0x24 + afStack_68[3];
      *(float *)&param_1->field_0x28 = *(float *)&param_1->field_0x28 + fStack_58;
      iVar5 = *(int *)&param_1[2].field_0x6cd8;
      if (iVar5 != 0) {
        *(uint *)(iVar5 + 0x20) = *(uint *)puVar1;
        *(uint *)(iVar5 + 0x24) = *(uint *)&param_1->field_0x24;
        *(uint *)(iVar5 + 0x28) = *(uint *)&param_1->field_0x28;
        *(uint *)(iVar5 + 0x2c) = *(uint *)&param_1->field_0x2c;
      }
    }
    if (iStack_14 == 2) {
      iVar5 = 0;
      for (iVar8 = 0; iVar8 < *(int *)&g_CDemonSetPtr->field_0x14d164; iVar8 = iVar8 + 1) {
        pcVar10 = (char *)core_actor_cpp_castToClassHash_FUN_0040c840
                                    (*(uint *)(&g_CDemonSetPtr->field_0x14d168 + iVar5),
                                     g_CWayPointClassInfo.name_hash);
        if (((pcVar10 != (char *)0x0) &&
            (iVar7 = _strcmp(pcVar10,"AcrossBridge"), iVar7 == 0)
            ) && (&CStack_30 != (CVector3f *)(pcVar10 + 0x20))) {
          CStack_30._0_4_ = *(uint *)(pcVar10 + 0x20);
          CStack_30._4_1_ = pcVar10[0x24];
          CStack_30._5_1_ = pcVar10[0x25];
          CStack_30._6_1_ = pcVar10[0x26];
          CStack_30._7_1_ = pcVar10[0x27];
          CStack_30._8_1_ = pcVar10[0x28];
          CStack_30._9_1_ = pcVar10[0x29];
          CStack_30._10_1_ = pcVar10[0x2a];
          CStack_30._11_1_ = pcVar10[0x2b];
        }
        iVar5 = iVar5 + 4;
      }
      CStack_78._0_4_ = 0;
      CStack_78._4_4_ = 0;
      CStack_78._8_4_ = 0;
      iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                        (param_1,&CStack_30,(CPathMap *)0x0,&CStack_78,1.0,0.08726646);
      if (iVar5 < 0) {
        engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s gave up chase - I'm confused\n",param_1);
      }
      else if (iVar5 < 1) goto LAB_005999f5;
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)&param_1->field_0x158,0,1);
    }
LAB_005999f5:
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
              ((CDeformableModelInstance *)&param_1->field_0x158);
    core_charactr_cpp_FUN_00433350(param_1,param_2);
    goto LAB_005996b8;
  }
  uVar2 = *(uint *)&param_1->field_0x273c;
  if (uVar2 < 2) {
    if (uVar2 == 1) {
      pcVar10 = &DAT_005d995c;
    }
    else {
LAB_005997ec:
      if (*(char **)&param_1->field_0x2704 == (char *)0x0) {
        pcVar10 = "STAND";
      }
      else {
        iVar5 = _strcmp
                          (*(char **)&param_1->field_0x2704,"WPPerch*");
        if (iVar5 == 1) {
          pcVar10 = "PERCH";
        }
        else {
          engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"Landing...");
          pcVar10 = "LAND_GROUND";
        }
      }
    }
LAB_0059968b:
    core_motion_cpp_CMotionController_setDesiredStateByName_FUN_004fc160
              ((CMotionController *)&param_1->field_0x158,pcVar10,1);
  }
  else {
    if (uVar2 < 3) {
      pcVar10 = &DAT_005d9958;
      goto LAB_0059968b;
    }
    if (uVar2 != 3) goto LAB_005997ec;
    core_motion_cpp_CMotionController_setDesiredStateByName_FUN_004fc160
              ((CMotionController *)&param_1->field_0x158,"STAND",1);
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
LAB_005996b8:
  if (((iStack_14 != 2) && (iStack_14 != 3)) && ((iStack_14 != 1 && (iStack_14 != 4)))) {
    core_charactr_cpp_FUN_0042c1e0(param_1,param_2);
  }
  *(uint *)&param_1->field_0x2514 = 0;
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  core_charactr_cpp_FUN_0042cd30(param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            ((CDeformableModelInstance *)&param_1->field_0x158);
  core_charactr_cpp_FUN_00432330(param_1,param_2,uStack_18);
  core_charactr_cpp_FUN_00433350(param_1,param_2);
  return;
}
