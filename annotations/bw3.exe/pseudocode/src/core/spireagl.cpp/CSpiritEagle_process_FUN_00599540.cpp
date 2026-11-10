// Name: core_spireagl.cpp_CSpiritEagle_process_FUN_00599540
// Address: 00599540
// Address Range: [[00599540, 00599a30]]
// Convention: __cdecl
// Signature: void __cdecl core_spireagl_cpp_CSpiritEagle_process_FUN_00599540(CSpiritEagle *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_spireagl_cpp_CSpiritEagle_process_FUN_00599540(CSpiritEagle *this_ptr,float delta_time)

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
  float fStack_84;
  CVector3f CStack_78;
  float fStack_6c;
  float afStack_68 [4];
  float fStack_58;
  CVector3f CStack_54;
  uint uStack_48;
  float afStack_44 [5];
  CVector3f CStack_30;
  float fStack_1c;
  uint uStack_18;
  int iStack_14;
  
  bVar9 = 0;
  core_charactr_cpp_FUN_00433c60(this_ptr,delta_time);
  *(uint *)&this_ptr->field_0x24a4 = 0;
  *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
  *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
  uStack_18 = 1;
  fStack_1c = delta_time;
  while (0.0 < fStack_1c) {
    iVar5 = core_motion_cpp_CMotionController_advance_FUN_004fbb70
                      ((CMotionController *)&this_ptr->field_0x158,&fStack_1c);
    core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,iVar5);
  }
  iVar5 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x10c))(this_ptr);
  if ((((1 < iVar5) && (*(int *)&this_ptr->field_0x70 == 1)) &&
      (*(int *)&this_ptr->field_0x20868 == 0)) && (*(int *)&this_ptr->field_0xdc == 0)) {
    core_skeleton_cpp_FUN_0054dbd0(&this_ptr->field_0x158,0);
    puVar11 = &uStack_48;
    uStack_48 = afStack_44[2];
    afStack_44[(uint)bVar9 * -2] = afStack_44[(uint)bVar9 * -2 + 3];
    afStack_44[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         afStack_44[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
    core_actor_cpp_FUN_00408b80(this_ptr,puVar11);
    blood_type = BLOOD_TYPE_RED;
    CStack_54.x = fStack_84;
    *(uint *)((int)&CStack_54 + (uint)bVar9 * -8 + 4) =
         *(uint *)(&stack0xffffff80 + (uint)bVar9 * -8);
    *(uint *)((int)&CStack_54 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         *(uint *)(&stack0xffffff84 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
    core_gore_cpp_CGore_createBloodPool_FUN_004cec40(g_CGorePtr,&CStack_54,blood_type);
    uStack_18 = 1;
    *(uint *)&this_ptr->field_0x20868 = 1;
  }
  *(uint *)&this_ptr->field_0x2524 = *(uint *)&this_ptr->field_0x24a4;
  core_charactr_cpp_FUN_00434850(this_ptr,delta_time);
  iVar5 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
    if (1.0 <= *(float *)&this_ptr->field_0x214a0) {
      return;
    }
    pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                       ((CMotionController *)&this_ptr->field_0x158);
    iStack_14 = *(int *)(pSVar6 + 0x24);
    if ((iStack_14 == 6) || (iStack_14 == 7)) {
      *(uint *)&this_ptr->field_0xf8 = 1;
      *(uint *)&this_ptr->field_0xfc = 0;
    }
    if (((iStack_14 == 7) &&
        (fVar3 = delta_time * (float)_DAT_005d99bd + *(float *)&this_ptr->field_0x214a0,
        *(float *)&this_ptr->field_0x214a0 = fVar3, 1.0 <= fVar3)) &&
       (*(CDemonActor **)&this_ptr->field_0x20870 != (CDemonActor *)0x0)) {
      core_mission_cpp_CDemonMission_addActorToList_FUN_004f6930
                (0x01D81080,*(CDemonActor **)&this_ptr->field_0x20870);
      pCVar4 = 0x01D81080;
      *(uint *)&this_ptr->field_0x20870 = 0;
      core_mission_cpp_FUN_004f6f10(pCVar4,this_ptr,1);
    }
    if (iStack_14 != 0) {
      core_actor_cpp_FUN_00408b00(this_ptr,&this_ptr->field_0x249c);
      puVar1 = &this_ptr->field_0x20;
      afStack_68[2] = fStack_6c;
      afStack_68[(uint)bVar9 * -2 + 3] = afStack_68[(uint)bVar9 * -2];
      afStack_68[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
           afStack_68[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      *(float *)puVar1 = *(float *)puVar1 + afStack_68[2];
      *(float *)&this_ptr->field_0x24 = *(float *)&this_ptr->field_0x24 + afStack_68[3];
      *(float *)&this_ptr->field_0x28 = *(float *)&this_ptr->field_0x28 + fStack_58;
      iVar5 = *(int *)&this_ptr->field_0x20870;
      if (iVar5 != 0) {
        *(uint *)(iVar5 + 0x20) = *(uint *)puVar1;
        *(uint *)(iVar5 + 0x24) = *(uint *)&this_ptr->field_0x24;
        *(uint *)(iVar5 + 0x28) = *(uint *)&this_ptr->field_0x28;
        *(uint *)(iVar5 + 0x2c) = *(uint *)&this_ptr->field_0x2c;
      }
    }
    if (iStack_14 == 2) {
      iVar5 = 0;
      for (iVar8 = 0; iVar8 < g_CDemonSetPtr->actor_count; iVar8 = iVar8 + 1) {
        pcVar10 = (char *)core_actor_cpp_castToClassHash_FUN_0040c840
                                    (*(uint *)((int)g_CDemonSetPtr->actors + iVar5),
                                     g_CWayPointClassInfo.name_hash);
        if (((pcVar10 != (char *)0x0) &&
            (iVar7 = _strcmp(pcVar10,"AcrossBridge"), iVar7 == 0)
            ) && (&CStack_30 != (CVector3f *)(pcVar10 + 0x20))) {
          CStack_30.x = ((CVector3f *)(pcVar10 + 0x20))->x;
          CStack_30.y = *(float *)(pcVar10 + 0x24);
          CStack_30.z = *(float *)(pcVar10 + 0x28);
        }
        iVar5 = iVar5 + 4;
      }
      CStack_78.x = 0.0;
      CStack_78.y = 0.0;
      CStack_78.z = 0.0;
      iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                        ((CCharacter *)this_ptr,&CStack_30,(CPathMap *)0x0,&CStack_78,1.0,0.08726646
                        );
      if (iVar5 < 0) {
        engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s gave up chase - I'm confused\n",this_ptr);
      }
      else if (iVar5 < 1) goto LAB_005999f5;
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)&this_ptr->field_0x158,0,1);
    }
LAB_005999f5:
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
              ((CDeformableModelInstance *)&this_ptr->field_0x158);
    core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
    goto LAB_005996b8;
  }
  uVar2 = *(uint *)&this_ptr->field_0x273c;
  if (uVar2 < 2) {
    if (uVar2 == 1) {
      pcVar10 = &DAT_005d995c;
    }
    else {
LAB_005997ec:
      if (*(char **)&this_ptr->field_0x2704 == (char *)0x0) {
        pcVar10 = "STAND";
      }
      else {
        iVar5 = _strcmp
                          (*(char **)&this_ptr->field_0x2704,"WPPerch*");
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
              ((CMotionController *)&this_ptr->field_0x158,pcVar10,1);
  }
  else {
    if (uVar2 < 3) {
      pcVar10 = &DAT_005d9958;
      goto LAB_0059968b;
    }
    if (uVar2 != 3) goto LAB_005997ec;
    core_motion_cpp_CMotionController_setDesiredStateByName_FUN_004fc160
              ((CMotionController *)&this_ptr->field_0x158,"STAND",1);
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
  }
  *(uint *)&this_ptr->field_0x24a4 = 0;
  *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
  *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
LAB_005996b8:
  if (((iStack_14 != 2) && (iStack_14 != 3)) && ((iStack_14 != 1 && (iStack_14 != 4)))) {
    core_charactr_cpp_FUN_0042c1e0(this_ptr,delta_time);
  }
  *(uint *)&this_ptr->field_0x2514 = 0;
  *(uint *)&this_ptr->field_0x24a4 = 0;
  *(uint *)&this_ptr->field_0x2510 = *(uint *)&this_ptr->field_0x2514;
  *(uint *)&this_ptr->field_0x250c = *(uint *)&this_ptr->field_0x2510;
  *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
  *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
  core_charactr_cpp_FUN_0042cd30((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            ((CDeformableModelInstance *)&this_ptr->field_0x158);
  core_charactr_cpp_FUN_00432330(this_ptr,delta_time,uStack_18);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
  return;
}
