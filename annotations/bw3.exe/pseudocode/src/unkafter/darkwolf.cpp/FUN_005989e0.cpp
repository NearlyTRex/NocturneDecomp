// Name: unkafter_darkwolf.cpp_FUN_005989e0
// Address: 005989e0
// Address Range: [[005989e0, 00598df6]]
// Convention: unknown
// Signature: void unkafter_darkwolf_cpp_FUN_005989e0(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_darkwolf_cpp_FUN_005989e0(CCharacter *param_1,float param_2)

{
  byte *puVar1;
  uint uVar2;
  float fVar3;
  CDemonMission *pCVar4;
  int iVar5;
  SMotion *pSVar6;
  uint uVar7;
  byte bVar8;
  float afStackY_106c [1014];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  CVector3f CStack_6c;
  float fStack_60;
  float afStack_5c [4];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  int iStack_1c;
  float fStack_18;
  
  bVar8 = 0;
  if ((1.0 <= *(float *)&param_1[1].field_0xec4) ||
     (iVar5 = (**(code **)(*(int *)&param_1->field_0x154 + 0x148))(param_1,param_2), iVar5 == 0)) {
    return;
  }
  core_charactr_cpp_FUN_00433c60(param_1,param_2);
  core_charactr_cpp_FUN_00432330(param_1,param_2,0);
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  fStack_88 = param_2 * *(float *)(param_1 + 1);
  while (0.0 < fStack_88) {
    iVar5 = core_motion_cpp_CMotionController_advance_FUN_004fbb70
                      ((CMotionController *)&param_1->field_0x158,&stack0xffffff78);
    core_charactr_cpp_FUN_00433fb0(param_1,iVar5);
  }
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)&param_1->field_0x158);
  iVar5 = *(int *)(pSVar6 + 0x24);
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  core_charactr_cpp_FUN_00434850(param_1,param_2 * *(float *)(param_1 + 1));
  if (iVar5 == 2) {
    *(float *)&param_1->field_0x2528 = *(float *)&param_1->field_0x2528 * (float)_DAT_005d9872;
  }
  iVar5 = core_charactr_cpp_FUN_00431660(param_1,param_2);
  if (iVar5 == 0) {
    if (1.0 <= *(float *)&param_1[1].field_0xec4) {
      return;
    }
    pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                       ((CMotionController *)&param_1->field_0x158);
    iStack_1c = *(int *)(pSVar6 + 0x24);
    if ((((iStack_1c == 6) || (iStack_1c == 7)) && (iStack_1c == 7)) &&
       ((fVar3 = param_2 * (float)_DAT_005d987a + *(float *)&param_1[1].field_0xec4,
        *(float *)&param_1[1].field_0xec4 = fVar3, 1.0 <= fVar3 &&
        (*(CDemonActor **)&param_1[1].field_0x294 != (CDemonActor *)0x0)))) {
      core_mission_cpp_FUN_004f6930(0x01D81080,*(CDemonActor **)&param_1[1].field_0x294);
      pCVar4 = 0x01D81080;
      *(uint *)&param_1[1].field_0x294 = 0;
      core_mission_cpp_FUN_004f6f10(pCVar4,param_1,1);
    }
    if (iStack_1c != 0) {
      core_actor_cpp_FUN_00408b00(param_1,&param_1->field_0x249c);
      puVar1 = &param_1->field_0x20;
      fStack_78 = fStack_3c;
      *(float *)((int)&stack0xffffff8c + (uint)bVar8 * -8) = afStack_5c[(uint)bVar8 * -2 + 9];
      *(float *)((int)&stack0xffffff90 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
           afStack_5c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
      *(float *)puVar1 = *(float *)puVar1 + fStack_78;
      *(float *)&param_1->field_0x24 = *(float *)&param_1->field_0x24 + fStack_74;
      *(float *)&param_1->field_0x28 = *(float *)&param_1->field_0x28 + fStack_70;
      iVar5 = *(int *)&param_1[1].field_0x294;
      if (iVar5 != 0) {
        *(uint *)(iVar5 + 0x20) = *(uint *)puVar1;
        *(uint *)(iVar5 + 0x24) = *(uint *)&param_1->field_0x24;
        *(uint *)(iVar5 + 0x28) = *(uint *)&param_1->field_0x28;
        *(uint *)(iVar5 + 0x2c) = *(uint *)&param_1->field_0x2c;
      }
    }
    if (((iStack_1c == 3) &&
        (fStack_18 = core_motion_cpp_FUN_004fc930((CMotionController *)&param_1->field_0x158),
        fStack_18 < (float)_DAT_005d9882)) &&
       (iVar5 = sound_sndmain_cpp_FUN_00556700(*(uint *)&param_1[1].field_0xec8), iVar5 == 0)) {
      uVar7 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"dog_howl.wav");
      *(uint *)&param_1[1].field_0xec8 = uVar7;
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
              ((CDeformableModelInstance *)&param_1->field_0x158);
    core_charactr_cpp_FUN_00433350(param_1,param_2);
    goto LAB_00598b24;
  }
  uVar2 = *(uint *)&param_1->field_0x273c;
  if (uVar2 < 2) {
    if (uVar2 == 1) {
      iVar5 = 1;
    }
    else {
LAB_00598c63:
      iVar5 = 0;
    }
LAB_00598b04:
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              ((CMotionController *)&param_1->field_0x158,iVar5,1);
  }
  else {
    if (uVar2 < 3) {
      iVar5 = 2;
      goto LAB_00598b04;
    }
    if (uVar2 != 3) goto LAB_00598c63;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              ((CMotionController *)&param_1->field_0x158,0,1);
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
LAB_00598b24:
  core_charactr_cpp_FUN_0042c1e0(param_1,param_2);
  fStack_48 = *(float *)&param_1->field_0x2518 * param_2;
  fStack_44 = *(float *)&param_1->field_0x251c * param_2;
  fStack_40 = *(float *)&param_1->field_0x2520 * param_2;
  fStack_30 = fStack_48;
  afStack_5c[(uint)bVar8 * -2 + 0xc] = afStack_5c[(uint)bVar8 * -2 + 6];
  afStack_5c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd] =
       afStack_5c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
  fStack_84 = fStack_30 + *(float *)&param_1->field_0x250c;
  fStack_80 = fStack_2c + *(float *)&param_1->field_0x2510;
  fStack_7c = fStack_28 + *(float *)&param_1->field_0x2514;
  fStack_60 = fStack_84;
  afStack_5c[(uint)bVar8 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffff80 + (uint)bVar8 * -8);
  afStack_5c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
       (float)*(uint *)((int)&stack0xffffff84 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
  afStack_5c[2] = fStack_60 + *(float *)&param_1->field_0x249c;
  afStack_5c[3] = afStack_5c[0] + *(float *)&param_1->field_0x24a0;
  fStack_4c = afStack_5c[1] + *(float *)&param_1->field_0x24a4;
  CStack_6c._0_4_ = afStack_5c[2];
  *(float *)((int)&CStack_6c + (uint)bVar8 * -8 + 4) = afStack_5c[(uint)bVar8 * -2 + 3];
  *(float *)((int)&CStack_6c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
       afStack_5c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
  *(uint *)&param_1->field_0x2514 = 0;
  *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a4;
  core_charactr_cpp_FUN_0042c230(param_1,&CStack_6c);
  core_charactr_cpp_FUN_0042cd30(param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            ((CDeformableModelInstance *)&param_1->field_0x158);
  core_charactr_cpp_FUN_00433350(param_1,param_2);
  return;
}
