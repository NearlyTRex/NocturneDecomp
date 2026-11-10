// Name: core_npc.cpp_CNPC_process_FUN_005105b0
// Address: 005105b0
// Address Range: [[005105b0, 005108cb]]
// Convention: __cdecl
// Signature: void __cdecl core_npc_cpp_CNPC_process_FUN_005105b0(CNPC *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_npc_cpp_CNPC_process_FUN_005105b0(CNPC *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  byte *puVar2;
  byte *puVar3;
  float fVar4;
  uint uVar5;
  EWalkState EVar6;
  int iVar7;
  EDeathState EVar8;
  CMotionList *this_ptr_00;
  byte bVar9;
  float afStackY_1074 [1014];
  CGore *this_ptr_01;
  CVector3f *position;
  char *pcVar10;
  float *pfVar11;
  EBloodType blood_type;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  CVector3f CStack_74;
  float fStack_68;
  float afStack_64 [2];
  CVector3f CStack_5c;
  float fStack_50;
  float afStack_4c [5];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float afStack_20 [3];
  int local_14;
  
  bVar9 = 0;
  iVar7 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0(&this_ptr->base,delta_time);
  if (iVar7 == 0) {
    return;
  }
  core_charactr_cpp_CCharacter_processSmoking_FUN_0042a7a0(&this_ptr->base,delta_time);
  *(uint *)&(this_ptr->base).model.field_0x225c = 0;
  *(uint *)&(this_ptr->base).model.field_0x2258 =
       *(uint *)&(this_ptr->base).model.field_0x225c;
  *(uint *)&(this_ptr->base).model.field_0x2254 =
       *(uint *)&(this_ptr->base).model.field_0x2258;
  local_90 = delta_time * *(float *)&this_ptr->field_0x24344;
  local_14 = 0;
  pCVar1 = &(this_ptr->base).model;
  while (0.0 < local_90) {
    iVar7 = core_motion_cpp_CMotionController_advance_FUN_005030c0
                      ((CMotionController *)pCVar1,&stack0xffffff70);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00(&this_ptr->base,iVar7);
  }
  EVar8 = (*(((this_ptr->base).base.vtable._uc)->_uc).getDeathState)(&this_ptr->base);
  if ((((1 < (int)EVar8) && ((this_ptr->base).base.lifecycle_state == ACTOR_CREATED)) &&
      (*(int *)&this_ptr->field_0x24340 == 0)) && (*(int *)&(this_ptr->base).base.field_0xdc == 0))
  {
    core_skeleton_cpp_FUN_005469a0(pCVar1,0);
    pfVar11 = afStack_4c + 0xb;
    afStack_20[0] = afStack_4c[2];
    afStack_4c[(uint)bVar9 * -2 + 0xc] = afStack_4c[(uint)bVar9 * -2 + 3];
    afStack_4c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
         afStack_4c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
    core_actor_cpp_FUN_00408d70(this_ptr,pfVar11);
    blood_type = BLOOD_TYPE_RED;
    position = &CStack_5c;
    CStack_5c.x = fStack_68;
    *(float *)((int)&CStack_5c + (uint)bVar9 * -8 + 4) = afStack_64[(uint)bVar9 * -2];
    this_ptr_01 = g_CGorePtr;
    *(float *)((int)&CStack_5c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         afStack_64[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(this_ptr_01,position,blood_type);
    *(uint *)&this_ptr->field_0x24340 = 1;
    local_14 = 1;
  }
  fVar4 = *(float *)&this_ptr->field_0x24344;
  *(uint *)&(this_ptr->base).field_0x2594 =
       *(uint *)&(this_ptr->base).model.field_0x225c;
  core_charactr_cpp_FUN_0042b2a0(this_ptr,delta_time * fVar4);
  iVar7 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0(&this_ptr->base,delta_time);
  if (iVar7 == 0) goto LAB_00510740;
  EVar6 = (this_ptr->base).walk_state;
  if (EVar6 < 2) {
    if (EVar6 == WALK_STATE_WALKING) {
LAB_00510712:
      pcVar10 = &DAT_005e151e;
    }
    else {
LAB_005108c0:
      pcVar10 = "STAND";
    }
    core_motion_cpp_CMotionController_setDesiredStateByName_FUN_005036b0
              ((CMotionController *)&(this_ptr->base).model,pcVar10,1);
  }
  else {
    pCVar1 = &(this_ptr->base).model;
    if (EVar6 < WALK_STATE_NO_PATH) {
      iVar7 = 0;
      pcVar10 = &DAT_005e151a;
      this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_00503860
                              ((CMotionController *)pCVar1);
      iVar7 = core_motion_cpp_CMotionList_findStateIndex_FUN_00502fa0(this_ptr_00,pcVar10,iVar7);
      if (iVar7 < 0) goto LAB_00510712;
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)pCVar1,iVar7,1);
    }
    else {
      if (EVar6 != WALK_STATE_NO_PATH) goto LAB_005108c0;
      core_motion_cpp_CMotionController_setDesiredStateByName_FUN_005036b0
                ((CMotionController *)pCVar1,"STAND",1);
      engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
    }
  }
  *(uint *)&(this_ptr->base).model.field_0x225c = 0;
  *(uint *)&(this_ptr->base).model.field_0x2258 =
       *(uint *)&(this_ptr->base).model.field_0x225c;
  *(uint *)&(this_ptr->base).model.field_0x2254 =
       *(uint *)&(this_ptr->base).model.field_0x2258;
LAB_00510740:
  core_charactr_cpp_FUN_00423a10(this_ptr,delta_time);
  fStack_38 = *(float *)&(this_ptr->base).field_0x2588 * delta_time;
  fStack_34 = *(float *)&(this_ptr->base).field_0x258c * delta_time;
  fStack_30 = *(float *)&(this_ptr->base).field_0x2590 * delta_time;
  fStack_80 = fStack_38;
  *(float *)((int)&stack0xffffff84 + (uint)bVar9 * -8) = afStack_4c[(uint)bVar9 * -2 + 6];
  *(float *)((int)&stack0xffffff88 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
       afStack_4c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
  puVar2 = &(this_ptr->base).field_0x257c;
  fStack_50 = fStack_80 + *(float *)puVar2;
  afStack_4c[0] = fStack_7c + *(float *)&(this_ptr->base).field_0x2580;
  afStack_4c[1] = fStack_78 + *(float *)&(this_ptr->base).field_0x2584;
  fStack_8c = fStack_50;
  *(float *)((int)&stack0xffffff78 + (uint)bVar9 * -8) = afStack_4c[(uint)bVar9 * -2];
  *(float *)((int)&stack0xffffff7c + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
       afStack_4c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
  puVar3 = &(this_ptr->base).model.field_0x2254;
  fStack_2c = fStack_8c + *(float *)puVar3;
  fStack_28 = fStack_88 + *(float *)&(this_ptr->base).model.field_0x2258;
  fStack_24 = fStack_84 + *(float *)&(this_ptr->base).model.field_0x225c;
  CStack_74.x = fStack_2c;
  *(float *)((int)&CStack_74 + (uint)bVar9 * -8 + 4) = afStack_4c[(uint)bVar9 * -2 + 9];
  *(float *)((int)&CStack_74 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
       afStack_4c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
  *(uint *)&(this_ptr->base).field_0x2584 = 0;
  *(uint *)&(this_ptr->base).field_0x2580 = *(uint *)&(this_ptr->base).field_0x2584;
  *(uint *)puVar2 = *(uint *)&(this_ptr->base).field_0x2580;
  *(uint *)&(this_ptr->base).model.field_0x225c = 0;
  uVar5 = *(uint *)&(this_ptr->base).model.field_0x225c;
  *(uint *)&(this_ptr->base).model.field_0x2258 = uVar5;
  *(uint *)puVar3 = uVar5;
  core_charactr_cpp_FUN_00423a60(&this_ptr->base,&CStack_74);
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470(&this_ptr->base);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(&(this_ptr->base).model);
  core_charactr_cpp_CCharacter_findSomethingToLookAt_FUN_00429420
            (&this_ptr->base,delta_time,local_14);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90(&this_ptr->base,delta_time);
  return;
}
