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
  uint *puVar4;
  CVector3f *pCVar5;
  uint local_34;
  uint local_30;
  uint local_2c;
  byte local_28 [12];
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
  local_2c = *(uint *)(param_1[0x10].actor_name + 4);
  local_34 = 0;
  local_30 = 0;
  puVar4 = (uint *)
           core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                     (param_1[4].create_event + iVar3 + 0x54,local_28,&local_34);
  if (param_1[4].create_event + iVar3 + 0x3c != (char *)puVar4) {
    *(uint *)(param_1[4].create_event + iVar3 + 0x3c) = *puVar4;
    *(uint *)(param_1[4].create_event + iVar3 + 0x40) = puVar4[1];
    *(uint *)(param_1[4].create_event + iVar3 + 0x44) = puVar4[2];
  }
  pCVar5 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                     (param_1,&local_1c,(CVector3f *)(param_1[4].create_event + iVar3 + 0x3c));
  if ((CVector3f *)(param_1[4].footstep_sound_code + iVar3 + -0x1c) == pCVar5) {
    return;
  }
  ((CVector3f *)(param_1[4].footstep_sound_code + iVar3 + -0x1c))->x = pCVar5->x;
  *(float *)(param_1[4].footstep_sound_code + iVar3 + -0x18) = pCVar5->y;
  *(float *)(param_1[4].footstep_sound_code + iVar3 + -0x14) = pCVar5->z;
  return;
}
