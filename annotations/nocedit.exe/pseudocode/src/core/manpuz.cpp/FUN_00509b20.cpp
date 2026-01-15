// Name: core_manpuz.cpp_FUN_00509b20
// Address: 00509b20
// Address Range: [[00509b20, 00509beb]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_00509b20()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_other_manpuz.cpp_FUN_00509b20(uint param_1, uint
   param_2) */

void core_manpuz_cpp_FUN_00509b20(void)

{
  char *pcVar1;
  float fVar2;
  int iVar3;
  CVector3f *pCVar4;
  CDemonActor *in_stack_00000004;
  int in_stack_00000008;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  int local_10;
  
  iVar3 = in_stack_00000008 * 100;
  local_10 = in_stack_00000008;
  fVar2 = ((float)in_stack_00000008 + *(float *)(in_stack_00000004[4].create_event + iVar3 + 0x1c))
          * _DAT_00660d8c;
  pcVar1 = in_stack_00000004[4].create_event + iVar3 + 0x30;
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1 = in_stack_00000004[4].create_event + iVar3 + 0x38;
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  *(float *)(in_stack_00000004[4].create_event + iVar3 + 0x34) = fVar2;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)(in_stack_00000004[4].create_event + iVar3 + 0x3c),
             (CVector3f *)(in_stack_00000004[4].create_event + iVar3 + 0x30));
  local_34.z = in_stack_00000004[0xf].field12_0xe0.y;
  local_34.x = 0.0;
  local_34.y = 0.0;
  pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                     ((CMatrix3x3f *)(in_stack_00000004[4].create_event + iVar3 + 0x3c),&local_28,
                      &local_34);
  if ((CVector3f *)(in_stack_00000004[4].create_event + iVar3 + 0x24) != pCVar4) {
    ((CVector3f *)(in_stack_00000004[4].create_event + iVar3 + 0x24))->x = pCVar4->x;
    *(float *)(in_stack_00000004[4].create_event + iVar3 + 0x28) = pCVar4->y;
    *(float *)(in_stack_00000004[4].create_event + iVar3 + 0x2c) = pCVar4->z;
  }
  pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     (in_stack_00000004,&local_1c,
                      (CVector3f *)(in_stack_00000004[4].create_event + iVar3 + 0x24));
  if ((CVector3f *)(in_stack_00000004[4].create_event + iVar3 + 0x70) == pCVar4) {
    return;
  }
  ((CVector3f *)(in_stack_00000004[4].create_event + iVar3 + 0x70))->x = pCVar4->x;
  *(float *)(in_stack_00000004[4].create_event + iVar3 + 0x74) = pCVar4->y;
  *(float *)(in_stack_00000004[4].create_event + iVar3 + 0x78) = pCVar4->z;
  return;
}
