// Name: core_charactr.cpp_FUN_0042d500
// Address: 0042d500
// Address Range: [[0042d500, 0042d85f]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_0042d500(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_charactr_cpp_FUN_0042d500(CDemonActor *param_1)

{
  char *pcVar1;
  CDemonActor *pCVar2;
  int iVar3;
  CDeformableModel *this_ptr;
  float fVar4;
  uint uVar5;
  CDemonActor *pCVar6;
  float fVar7;
  UActorVTable UVar8;
  
  iVar3 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
  if ((iVar3 != 0) || (param_1[0x98].prev_actor == (CDemonActor *)0xffffffff)) {
    return;
  }
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
                       ((CDeformableModelInstance *)(param_1 + 1));
  if (param_1[0x98].prev_actor == (CDemonActor *)0xfffffffe) {
    pCVar6 = (CDemonActor *)
             core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                       (this_ptr,&DAT_005b8276,0);
    param_1[0x98].prev_actor = pCVar6;
    if (pCVar6 == (CDemonActor *)0xffffffff) {
      return;
    }
    iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310(this_ptr,&DAT_005b827b,0)
    ;
    *(int *)(param_1[0x99].actor_name + 0x1c) = iVar3;
    if (iVar3 == -1) {
      param_1[0x98].prev_actor = (CDemonActor *)0xffffffff;
      return;
    }
    fVar7 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                             (this_ptr,&DAT_005b827e,1);
    param_1[0x99].location.position.x = fVar7;
    fVar7 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                             (this_ptr,&DAT_005b8281,1);
    param_1[0x99].location.position.y = fVar7;
    fVar7 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                             (this_ptr,&DAT_005b8284,1);
    param_1[0x99].location.position.z = fVar7;
    UVar8 = (UActorVTable)
            core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                      (this_ptr,"e1_left",0);
    param_1[0x98].vtable = UVar8;
    iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                      (this_ptr,"e2_left",0);
    *(int *)param_1[0x99].actor_name = iVar3;
    iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                      (this_ptr,"e3_left",0);
    *(int *)(param_1[0x99].actor_name + 4) = iVar3;
    iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                      (this_ptr,"e4_left",0);
    *(int *)(param_1[0x99].actor_name + 8) = iVar3;
    iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                      (this_ptr,"e1_right",0);
    *(int *)(param_1[0x99].actor_name + 0xc) = iVar3;
    iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                      (this_ptr,"e2_right",0);
    *(int *)(param_1[0x99].actor_name + 0x10) = iVar3;
    iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                      (this_ptr,"e3_right",0);
    *(int *)(param_1[0x99].actor_name + 0x14) = iVar3;
    iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                      (this_ptr,"e4_right",0);
    *(int *)(param_1[0x99].actor_name + 0x18) = iVar3;
  }
  pCVar6 = param_1;
  do {
    if (pCVar6[0x98].vtable._ub != (CDemonActor_vtable *)0xffffffff) {
      pcVar1 = param_1[0x19].footstep_sound_code + (int)pCVar6[0x98].vtable._ub * 4 + -0x20;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
    }
    if (*(int *)(pCVar6[0x99].actor_name + 0xc) != -1) {
      pcVar1 = param_1[0x19].footstep_sound_code +
               *(int *)(pCVar6[0x99].actor_name + 0xc) * 4 + -0x20;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
    }
    pCVar2 = pCVar6 + 0x99;
    pCVar6 = (CDemonActor *)(pCVar6->actor_name + 4);
    pcVar1 = param_1[0x19].footstep_sound_code + *(int *)(pCVar2->actor_name + 0x1c) * 4 + -0x20;
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
  } while (pCVar6 != (CDemonActor *)(param_1->actor_name + 0x10));
  fVar7 = (float)_DAT_01c5fad0 * _DAT_005b82ce;
  iVar3 = param_1[0x98].previous_transform_state.dirty_flags;
  param_1[0x98].render_needs_update = (int)((float)param_1[0x98].render_needs_update - fVar7);
  if (iVar3 == 1) {
    if ((float)param_1[0x98].render_needs_update <= 0.0) {
      fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(5.0,8.0);
      param_1[0x98].previous_transform_state.orientation.vec.x = 0.0;
      param_1[0x98].previous_transform_state.orientation.vec.y = 0.0;
      param_1[0x98].previous_transform_state.dirty_flags = 0;
      param_1[0x98].render_needs_update = (int)fVar4;
    }
  }
  else if ((float)param_1[0x98].render_needs_update <= 0.0) {
    param_1[0x98].previous_transform_state.orientation.vec.y = 4.2039e-45;
    param_1[0x98].previous_transform_state.dirty_flags = 1;
    param_1[0x98].render_needs_update = 0x3d4ccccd;
    param_1[0x98].previous_transform_state.orientation.vec.x = 4.2039e-45;
  }
  param_1[0x98].next_actor = (CDemonActor *)((float)param_1[0x98].next_actor - fVar7);
  if ((float)param_1[0x98].next_actor <= 0.0) {
    pCVar6 = g_CScriptPtr->who_is_speaking;
    if (param_1 == pCVar6) {
      pCVar6[0x98].next_actor = (CDemonActor *)0x3e19999a;
      uVar5 = rand();
      pCVar6[0x98].previous_transform_state.orientation.vec.z = (float)(uVar5 & 3);
    }
    else {
      param_1[0x98].previous_transform_state.orientation.vec.z = 0.0;
      param_1[0x98].next_actor = (CDemonActor *)0x0;
    }
  }
  if (*(int *)(param_1[0x98].footstep_sound_code +
              *(int *)&param_1[0x98].previous_transform_state.orientation * 4 + 0x34) != -1) {
    core_charactr_cpp_FUN_0042d390
              (this_ptr,param_1[0x98].prev_actor,
               *(int *)(param_1[0x98].footstep_sound_code +
                       *(int *)&param_1[0x98].previous_transform_state.orientation * 4 + 0x34));
  }
  if (*(int *)(param_1[0x99].actor_name +
              *(int *)((int)&param_1[0x98].previous_transform_state.orientation + 4) * 4 + 0xc) !=
      -1) {
    core_charactr_cpp_FUN_0042d390
              (this_ptr,param_1[0x98].prev_actor,
               *(int *)(param_1[0x99].actor_name +
                       *(int *)((int)&param_1[0x98].previous_transform_state.orientation + 4) * 4 +
                       0xc));
  }
  core_charactr_cpp_FUN_0042d390
            (this_ptr,param_1[0x98].prev_actor,
             *(uint *)
              (param_1[0x99].actor_name +
              *(int *)((int)&param_1[0x98].previous_transform_state.orientation + 8) * 4 + 0x1c));
  return;
}
