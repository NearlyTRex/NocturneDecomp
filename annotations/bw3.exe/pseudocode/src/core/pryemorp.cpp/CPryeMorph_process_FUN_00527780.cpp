// Name: core_pryemorp.cpp_CPryeMorph_process_FUN_00527780
// Address: 00527780
// Address Range: [[00527780, 00527969]]
// Convention: __cdecl
// Signature: void __cdecl core_pryemorp_cpp_CPryeMorph_process_FUN_00527780(CPryeMorph *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_pryemorp_cpp_CPryeMorph_process_FUN_00527780(CPryeMorph *this_ptr,float delta_time)

{
  byte *puVar1;
  int iVar2;
  float fVar3;
  CDemonMission *pCVar4;
  SMotion *pSVar5;
  int iVar6;
  byte bVar7;
  float afStackY_1014 [1014];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  
  bVar7 = 0;
  if (1.0 <= *(float *)&this_ptr->field_0x21440) {
    return;
  }
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)&this_ptr->field_0x158);
  iVar2 = *(int *)(pSVar5 + 0x24);
  if ((iVar2 == 0x91) || (iVar2 == 0x92)) {
    if ((iVar2 == 0x92) &&
       ((fVar3 = delta_time / _DAT_005e36d8 + *(float *)&this_ptr->field_0x21440,
        *(float *)&this_ptr->field_0x21440 = fVar3, 1.0 <= fVar3 &&
        (*(CDemonActor **)&this_ptr->field_0x20810 != (CDemonActor *)0x0)))) {
      core_mission_cpp_CDemonMission_addActorToList_FUN_004f6930
                (0x01D81080,*(CDemonActor **)&this_ptr->field_0x20810);
      pCVar4 = 0x01D81080;
      *(uint *)&this_ptr->field_0x20810 = 0;
      core_mission_cpp_FUN_004f6f10(pCVar4,this_ptr,1);
    }
  }
  else {
    iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                      (0x01C6E360,&this_ptr->field_0x206c8);
    if (iVar6 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)&this_ptr->field_0x158,0x91,1);
      if (this_ptr->field_0x207ac != '\0') {
        (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,&this_ptr->field_0x207ac);
        this_ptr->field_0x207ac = 0;
      }
    }
  }
  fStack_30 = delta_time;
  *(uint *)&this_ptr->field_0x24a4 = 0;
  *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
  *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
  while (0.0 < fStack_30) {
    iVar6 = core_motion_cpp_CMotionController_advance_FUN_004fbb70
                      ((CMotionController *)&this_ptr->field_0x158,&stack0xffffffd0);
    core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,iVar6);
  }
  if (iVar2 != 0) {
    core_actor_cpp_FUN_00408b00(this_ptr,&this_ptr->field_0x249c);
    puVar1 = &this_ptr->field_0x20;
    fStack_2c = fStack_20;
    *(uint *)((int)&stack0xffffffd8 + (uint)bVar7 * -8) =
         *(uint *)(&stack0xffffffe4 + (uint)bVar7 * -8);
    *(uint *)((int)&stack0xffffffdc + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
         *(uint *)(&stack0xffffffe8 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
    *(float *)puVar1 = *(float *)puVar1 + fStack_2c;
    *(float *)&this_ptr->field_0x24 = *(float *)&this_ptr->field_0x24 + fStack_28;
    *(float *)&this_ptr->field_0x28 = *(float *)&this_ptr->field_0x28 + fStack_24;
    iVar2 = *(int *)&this_ptr->field_0x20810;
    if (iVar2 != 0) {
      *(uint *)(iVar2 + 0x20) = *(uint *)puVar1;
      *(uint *)(iVar2 + 0x24) = *(uint *)&this_ptr->field_0x24;
      *(uint *)(iVar2 + 0x28) = *(uint *)&this_ptr->field_0x28;
      *(uint *)(iVar2 + 0x2c) = *(uint *)&this_ptr->field_0x2c;
    }
  }
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            ((CDeformableModelInstance *)&this_ptr->field_0x158);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
  return;
}
