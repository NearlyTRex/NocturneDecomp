// Name: core_charactr.cpp_FUN_0042e580
// Address: 0042e580
// Address Range: [[0042e580, 0042e8df]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_0042e580(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_charactr_cpp_FUN_0042e580(CDemonActor *param_1)

{
  char *pcVar1;
  CDemonActor *pCVar2;
  int iVar3;
  CDeformableModel *this_ptr;
  CDemonActor *pCVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  
  iVar3 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
  if ((iVar3 != 0) || (*(int *)(param_1[0x90].actor_name + 0x1c) == -1)) {
    return;
  }
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
                       ((CDeformableModelInstance *)(param_1 + 1));
  if (*(int *)(param_1[0x90].actor_name + 0x1c) == -2) {
    iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780(this_ptr,&DAT_005d5937,0)
    ;
    *(int *)(param_1[0x90].actor_name + 0x1c) = iVar3;
    if (iVar3 == -1) {
      return;
    }
    fVar7 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                             (this_ptr,&DAT_005d593c,0);
    param_1[0x90].orient_matrix.m[0].y = fVar7;
    if (fVar7 == -NAN) {
      param_1[0x90].actor_name[0x1c] = -1;
      param_1[0x90].actor_name[0x1d] = -1;
      param_1[0x90].actor_name[0x1e] = -1;
      param_1[0x90].actor_name[0x1f] = -1;
      return;
    }
    fVar7 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                             (this_ptr,&DAT_005d593f,1);
    param_1[0x90].orient_matrix.m[0].z = fVar7;
    fVar7 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                             (this_ptr,&DAT_005d5942,1);
    param_1[0x90].orient_matrix.m[1].x = fVar7;
    fVar7 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                             (this_ptr,&DAT_005d5945,1);
    param_1[0x90].orient_matrix.m[1].y = fVar7;
    fVar7 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                             (this_ptr,"e1_left",0);
    param_1[0x90].location.position.x = fVar7;
    fVar7 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                             (this_ptr,"e2_left",0);
    param_1[0x90].location.position.y = fVar7;
    fVar7 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                             (this_ptr,"e3_left",0);
    param_1[0x90].location.position.z = fVar7;
    iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                      (this_ptr,"e4_left",0);
    param_1[0x90].location.area_id = iVar3;
    fVar7 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                             (this_ptr,"e1_right",0);
    param_1[0x90].orient.vec.x = fVar7;
    fVar7 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                             (this_ptr,"e2_right",0);
    param_1[0x90].orient.vec.y = fVar7;
    fVar7 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                             (this_ptr,"e3_right",0);
    param_1[0x90].orient.vec.z = fVar7;
    fVar7 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                             (this_ptr,"e4_right",0);
    param_1[0x90].orient_matrix.m[0].x = fVar7;
  }
  pCVar4 = param_1;
  do {
    fVar7 = pCVar4[0x90].location.position.x;
    if (fVar7 != -NAN) {
      pcVar1 = param_1[0x19].footstep_sound_code + (int)fVar7 * 4 + -0x20;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
    }
    if (*(int *)&pCVar4[0x90].orient != -1) {
      pcVar1 = param_1[0x19].footstep_sound_code + *(int *)&pCVar4[0x90].orient * 4 + -0x20;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
    }
    pCVar2 = pCVar4 + 0x90;
    pCVar4 = (CDemonActor *)(pCVar4->actor_name + 4);
    pcVar1 = param_1[0x19].footstep_sound_code + (int)(pCVar2->orient_matrix).m[0].y * 4 + -0x20;
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
  } while (pCVar4 != (CDemonActor *)(param_1->actor_name + 0x10));
  fVar7 = (float)_DAT_01c43530 * _DAT_005d598f;
  iVar3 = *(int *)(param_1[0x90].actor_name + 0x10);
  *(float *)(param_1[0x90].actor_name + 0x14) = *(float *)(param_1[0x90].actor_name + 0x14) - fVar7;
  if (iVar3 == 1) {
    if (*(float *)(param_1[0x90].actor_name + 0x14) <= 0.0) {
      fVar5 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(5.0,8.0);
      param_1[0x90].actor_name[4] = '\0';
      param_1[0x90].actor_name[5] = '\0';
      param_1[0x90].actor_name[6] = '\0';
      param_1[0x90].actor_name[7] = '\0';
      param_1[0x90].actor_name[8] = '\0';
      param_1[0x90].actor_name[9] = '\0';
      param_1[0x90].actor_name[10] = '\0';
      param_1[0x90].actor_name[0xb] = '\0';
      param_1[0x90].actor_name[0x10] = '\0';
      param_1[0x90].actor_name[0x11] = '\0';
      param_1[0x90].actor_name[0x12] = '\0';
      param_1[0x90].actor_name[0x13] = '\0';
      *(float *)(param_1[0x90].actor_name + 0x14) = fVar5;
    }
  }
  else if (*(float *)(param_1[0x90].actor_name + 0x14) <= 0.0) {
    param_1[0x90].actor_name[8] = '\x03';
    param_1[0x90].actor_name[9] = '\0';
    param_1[0x90].actor_name[10] = '\0';
    param_1[0x90].actor_name[0xb] = '\0';
    param_1[0x90].actor_name[0x10] = '\x01';
    param_1[0x90].actor_name[0x11] = '\0';
    param_1[0x90].actor_name[0x12] = '\0';
    param_1[0x90].actor_name[0x13] = '\0';
    param_1[0x90].actor_name[0x14] = -0x33;
    param_1[0x90].actor_name[0x15] = -0x34;
    param_1[0x90].actor_name[0x16] = 'L';
    param_1[0x90].actor_name[0x17] = '=';
    param_1[0x90].actor_name[4] = '\x03';
    param_1[0x90].actor_name[5] = '\0';
    param_1[0x90].actor_name[6] = '\0';
    param_1[0x90].actor_name[7] = '\0';
  }
  *(float *)(param_1[0x90].actor_name + 0x18) = *(float *)(param_1[0x90].actor_name + 0x18) - fVar7;
  if (*(float *)(param_1[0x90].actor_name + 0x18) <= 0.0) {
    pCVar4 = g_CScriptPtr->who_is_speaking;
    if (param_1 == pCVar4) {
      pCVar4[0x90].actor_name[0x18] = -0x66;
      pCVar4[0x90].actor_name[0x19] = -0x67;
      pCVar4[0x90].actor_name[0x1a] = '\x19';
      pCVar4[0x90].actor_name[0x1b] = '>';
      uVar6 = rand();
      *(uint *)(pCVar4[0x90].actor_name + 0xc) = uVar6 & 3;
    }
    else {
      param_1[0x90].actor_name[0xc] = '\0';
      param_1[0x90].actor_name[0xd] = '\0';
      param_1[0x90].actor_name[0xe] = '\0';
      param_1[0x90].actor_name[0xf] = '\0';
      param_1[0x90].actor_name[0x18] = '\0';
      param_1[0x90].actor_name[0x19] = '\0';
      param_1[0x90].actor_name[0x1a] = '\0';
      param_1[0x90].actor_name[0x1b] = '\0';
    }
  }
  iVar3 = *(int *)((int)param_1[0x90].orient_matrix.m +
                  *(int *)(param_1[0x90].actor_name + 4) * 4 + -0x1c);
  if (iVar3 != -1) {
    core_charactr_cpp_FUN_0042e410(this_ptr,*(uint *)(param_1[0x90].actor_name + 0x1c),iVar3);
  }
  iVar3 = *(int *)((int)(param_1[0x90].orient_matrix.m + -1) +
                  *(int *)(param_1[0x90].actor_name + 8) * 4);
  if (iVar3 != -1) {
    core_charactr_cpp_FUN_0042e410(this_ptr,*(uint *)(param_1[0x90].actor_name + 0x1c),iVar3);
  }
  core_charactr_cpp_FUN_0042e410
            (this_ptr,*(uint *)(param_1[0x90].actor_name + 0x1c),
             (&param_1[0x90].orient_matrix.m[0].y)[*(int *)(param_1[0x90].actor_name + 0xc)]);
  return;
}
