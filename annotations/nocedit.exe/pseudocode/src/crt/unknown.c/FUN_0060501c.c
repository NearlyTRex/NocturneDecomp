// Name: crt_unknown.c_FUN_0060501c
// Address: 0060501c
// Address Range: [[0060501c, 00605060]]
// Convention: unknown
// Signature: byte * crt_unknown_c_FUN_0060501c(void)

#include "nocturne.h"

/* Signature: byte FUN_0060501c(uint param_1, uint param_2) */

byte * FUN_0060501c(void)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  byte *in_stack_00000004;
  void *in_stack_00000008;
  
  pbVar3 = in_stack_00000004 + 1;
  memset(in_stack_00000008,0,0x20);
  uVar2 = (uint)*in_stack_00000004;
  if (uVar2 != 0) {
    do {
      pbVar1 = (byte *)(((int)uVar2 >> 3) + (int)in_stack_00000008);
      *pbVar1 = *pbVar1 | (&DAT_00685030)[uVar2 & 7];
      uVar2 = (uint)*pbVar3;
      if (uVar2 == 0) {
        return pbVar3;
      }
      pbVar3 = pbVar3 + 1;
    } while (uVar2 != 0x5d);
  }
  return pbVar3;
}
