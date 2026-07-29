// Name: core_manpuz.cpp_CMansionPuzzleCircle_updatePanelTransform_FUN_004ca640
// Address: 004ca640
// Address Range: [[004ca640, 004ca70b]]
// Convention: unknown
// Signature: void core_manpuz_cpp_CMansionPuzzleCircle_updatePanelTransform_FUN_004ca640(CDemonActor *param_1,int param_2)

#include "nocturne.h"

void core_manpuz_cpp_CMansionPuzzleCircle_updatePanelTransform_FUN_004ca640(CDemonActor *param_1,int param_2)

{
  char *pcVar1;
  float fVar2;
  int iVar3;
  CVector3f *pCVar4;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  int local_10;
  
  iVar3 = param_2 * 100;
  local_10 = param_2;
  fVar2 = ((float)param_2 + *(float *)(param_1[4].create_event + iVar3 + 0x34)) * 0.5235988f;
  pcVar1 = param_1[4].create_event + iVar3 + 0x48;
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1 = param_1[4].create_event + iVar3 + 0x50;
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  *(float *)(param_1[4].create_event + iVar3 + 0x4c) = fVar2;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
            ((CMatrix3x3f *)(param_1[4].create_event + iVar3 + 0x54),
             (CVector3f *)(param_1[4].create_event + iVar3 + 0x48));
  local_34.z = *(float *)(param_1[0x10].actor_name + 4);
  local_34.x = 0.0;
  local_34.y = 0.0;
  pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                     ((CMatrix3x3f *)(param_1[4].create_event + iVar3 + 0x54),&local_28,&local_34);
  if ((CVector3f *)(param_1[4].create_event + iVar3 + 0x3c) != pCVar4) {
    ((CVector3f *)(param_1[4].create_event + iVar3 + 0x3c))->x = pCVar4->x;
    *(float *)(param_1[4].create_event + iVar3 + 0x40) = pCVar4->y;
    *(float *)(param_1[4].create_event + iVar3 + 0x44) = pCVar4->z;
  }
  pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                     (param_1,&local_1c,(CVector3f *)(param_1[4].create_event + iVar3 + 0x3c));
  if ((CVector3f *)(param_1[4].footstep_sound_code + iVar3 + -0x1c) == pCVar4) {
    return;
  }
  ((CVector3f *)(param_1[4].footstep_sound_code + iVar3 + -0x1c))->x = pCVar4->x;
  *(float *)(param_1[4].footstep_sound_code + iVar3 + -0x18) = pCVar4->y;
  *(float *)(param_1[4].footstep_sound_code + iVar3 + -0x14) = pCVar4->z;
  return;
}
