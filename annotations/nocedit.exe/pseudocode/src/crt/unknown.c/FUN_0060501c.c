// Name: crt_unknown.c_FUN_0060501c
// Address: 0060501c
// Address Range: [[0060501c, 00605060]]
// Convention: unknown
// Signature: byte * crt_unknown_c_FUN_0060501c(byte *param_1,void *param_2)

#include "nocturne.h"

byte * FUN_0060501c(byte *param_1,void *param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  
  pbVar3 = param_1 + 1;
  memset(param_2,0,0x20);
  uVar2 = (uint)*param_1;
  if (uVar2 != 0) {
    do {
      pbVar1 = (byte *)(((int)uVar2 >> 3) + (int)param_2);
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
