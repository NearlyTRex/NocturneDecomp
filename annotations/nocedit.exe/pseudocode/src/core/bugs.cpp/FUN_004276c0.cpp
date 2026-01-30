// Name: core_bugs.cpp_FUN_004276c0
// Address: 004276c0
// Address Range: [[004276c0, 004277db]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_FUN_004276c0(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_bugs.cpp_FUN_004276c0(uint param_1, uint param_2)
    */

void __cdecl core_bugs_cpp_FUN_004276c0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int in_stack_00000004;
  float *in_stack_00000008;
  
  fVar1 = *in_stack_00000008 - *(float *)(in_stack_00000004 + 0x20);
  fVar2 = in_stack_00000008[1] - *(float *)(in_stack_00000004 + 0x24);
  fVar3 = in_stack_00000008[2] - *(float *)(in_stack_00000004 + 0x28);
  *(float *)(in_stack_00000004 + 0x20) = *in_stack_00000008;
  *(float *)(in_stack_00000004 + 0x24) = in_stack_00000008[1];
  *(float *)(in_stack_00000004 + 0x28) = in_stack_00000008[2];
  iVar7 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0xbec0)) {
    pfVar4 = (float *)(in_stack_00000004 + 0xbecc);
    do {
      *pfVar4 = *pfVar4 - fVar1;
      pfVar4[1] = pfVar4[1] - fVar2;
      pfVar4[2] = pfVar4[2] - fVar3;
      pfVar4[6] = pfVar4[6] - fVar1;
      pfVar4[7] = pfVar4[7] - fVar2;
      iVar7 = iVar7 + 1;
      pfVar4[8] = pfVar4[8] - fVar3;
      pfVar4 = pfVar4 + 0x10;
    } while (iVar7 < *(int *)(in_stack_00000004 + 0xbec0));
  }
  *(float *)(in_stack_00000004 + 0x199cc) = *(float *)(in_stack_00000004 + 0x199cc) - fVar1;
  *(float *)(in_stack_00000004 + 0x199d0) = *(float *)(in_stack_00000004 + 0x199d0) - fVar2;
  *(float *)(in_stack_00000004 + 0x199d4) = *(float *)(in_stack_00000004 + 0x199d4) - fVar3;
  iVar8 = 0;
  *(float *)(in_stack_00000004 + 0x199d8) = *(float *)(in_stack_00000004 + 0x199d8) - fVar1;
  *(float *)(in_stack_00000004 + 0x199dc) = *(float *)(in_stack_00000004 + 0x199dc) - fVar2;
  *(float *)(in_stack_00000004 + 0x199e0) = *(float *)(in_stack_00000004 + 0x199e0) - fVar3;
  iVar7 = in_stack_00000004;
  do {
    iVar7 = iVar7 + 0x30;
    iVar5 = iVar8 * 0x30 + in_stack_00000004;
    do {
      iVar6 = iVar5 + 4;
      *(float *)(iVar5 + 0x128b8) = *(float *)(iVar5 + 0x128b8) - fVar2;
      iVar5 = iVar6;
    } while (iVar6 != iVar7);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0xc);
  return;
}
