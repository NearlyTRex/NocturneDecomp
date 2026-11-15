// Name: core_manpuz.cpp_FUN_00504ee0
// Address: 00504ee0
// Address Range: [[00504ee0, 00504fd4]]
// Convention: unknown
// Signature: void core_manpuz_cpp_FUN_00504ee0(CDemonActor *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_manpuz_cpp_FUN_00504ee0(CDemonActor *param_1,int param_2)

{
  char *pcVar1;
  float fVar2;
  int iVar3;
  byte bVar4;
  float afStackY_1038 [1016];
  CVector3f CStack_50;
  float fStack_44;
  float afStack_40 [4];
  uint uStack_30;
  CVector3f CStack_2c;
  CVector3f CStack_20;
  int iStack_14;
  
  bVar4 = 0;
  iVar3 = param_2 * 100;
  iStack_14 = param_2;
  fVar2 = ((float)param_2 + *(float *)(param_1[4].create_event + iVar3 + 0x1c)) * _DAT_0060343c;
  pcVar1 = param_1[4].create_event + iVar3 + 0x30;
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1 = param_1[4].create_event + iVar3 + 0x38;
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  *(float *)(param_1[4].create_event + iVar3 + 0x34) = fVar2;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
            ((CMatrix3x3f *)(param_1[4].create_event + iVar3 + 0x3c),
             (CVector3f *)(param_1[4].create_event + iVar3 + 0x30));
  CStack_2c.z = param_1[0xf].platform_position_delta.y;
  CStack_2c.x = 0.0;
  CStack_2c.y = 0.0;
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045f690
            ((CMatrix3x3f *)(param_1[4].create_event + iVar3 + 0x3c),&CStack_2c,&CStack_20);
  fStack_44 = CStack_20.x;
  afStack_40[(uint)bVar4 * -2] = *(float *)((int)&CStack_20 + (uint)bVar4 * -8 + 4);
  afStack_40[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       *(float *)((int)&CStack_20 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  if ((float *)(param_1[4].create_event + iVar3 + 0x24) != &fStack_44) {
    *(float *)(param_1[4].create_event + iVar3 + 0x24) = fStack_44;
    *(float *)(param_1[4].create_event + iVar3 + 0x28) = afStack_40[0];
    *(float *)(param_1[4].create_event + iVar3 + 0x2c) = afStack_40[1];
  }
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
            (param_1,(CVector3f *)(param_1[4].create_event + iVar3 + 0x24),&CStack_50);
  afStack_40[2] = CStack_50.x;
  afStack_40[(uint)bVar4 * -2 + 3] = *(float *)((int)&CStack_50 + (uint)bVar4 * -8 + 4);
  afStack_40[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       *(float *)((int)&CStack_50 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  if ((float *)(param_1[4].footstep_sound_code + iVar3 + -0x38) == afStack_40 + 2) {
    return;
  }
  *(float *)(param_1[4].footstep_sound_code + iVar3 + -0x38) = afStack_40[2];
  *(float *)(param_1[4].footstep_sound_code + iVar3 + -0x34) = afStack_40[3];
  *(uint *)(param_1[4].footstep_sound_code + iVar3 + -0x30) = uStack_30;
  return;
}
