// Name: engine_colquant.c_FUN_00441040
// Address: 00441040
// Address Range: [[00441040, 00441105]]
// Convention: unknown
// Signature: double engine_colquant_c_FUN_00441040(void)

#include "nocturne.h"

double engine_colquant_c_FUN_00441040(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  byte *pbVar5;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  pbVar5 = (byte *)(in_stack_0000000c * 4 + *(int *)(in_stack_00000004 + 0x2004));
  in_stack_00000004 = in_stack_00000008 * 0x40 + in_stack_00000004;
  dVar4 = (double)(int)((uint)*pbVar5 - (*(int *)(in_stack_00000004 + 0x4006) >> 0x10));
  dVar3 = (double)(int)((uint)pbVar5[1] - (*(int *)(in_stack_00000004 + 0x4008) >> 0x10));
  dVar2 = (double)(int)((uint)pbVar5[2] - (*(int *)(in_stack_00000004 + 0x400a) >> 0x10));
  dVar1 = (double)(int)((uint)pbVar5[3] - (*(int *)(in_stack_00000004 + 0x400c) >> 0x10));
  return dVar1 * dVar1 * 0.69999999999999996 +
         dVar2 * dVar2 * 0.11 +
         dVar3 * dVar3 * 0.58999999999999997 + dVar4 * dVar4 * 0.29999999999999999;
}
