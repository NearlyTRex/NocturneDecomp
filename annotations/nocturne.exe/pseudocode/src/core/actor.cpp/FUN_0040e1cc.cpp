// Name: core_actor.cpp_FUN_0040e1cc
// Address: 0040e1cc
// Address Range: [[0040e1cc, 0040e21c]]
// Convention: unknown
// Signature: void core_actor_cpp_FUN_0040e1cc(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_actor_cpp_FUN_0040e1cc(void)

{
  uint in_EAX;
  byte *pbVar1;
  char in_CL;
  float *in_EDX;
  int unaff_EBX;
  int *unaff_retaddr;
  
  *(char *)(unaff_EBX + 0x24448bdb) = *(char *)(unaff_EBX + 0x24448bdb) + in_CL;
  pbVar1 = (byte *)(CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + -0x39) + 1);
  *pbVar1 = *pbVar1 | (byte)pbVar1;
  *pbVar1 = *pbVar1 + (byte)pbVar1;
  *(char *)(unaff_EBX + 0x50890850) = *(char *)(unaff_EBX + 0x50890850) + in_CL;
  *unaff_retaddr = (int)ROUND(*in_EDX * _DAT_005992b0);
  unaff_retaddr[1] = (int)ROUND(in_EDX[1] * _DAT_005992b0);
  unaff_retaddr[2] = (int)ROUND(in_EDX[2] * _DAT_005992b0);
  return;
}
