// Name: FUN_005bd84c
// Address: 005bd84c
// Address Range: [[005bd84c, 005bd890]]
// Convention: unknown
// Signature: byte * FUN_005bd84c(byte *param_1,int param_2)

#include "nocturne.h"

byte * FUN_005bd84c(byte *param_1,int param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  
  pbVar3 = param_1 + 1;
  FUN_005b77c0(param_2,0,0x20);
  uVar2 = (uint)*param_1;
  if (uVar2 != 0) {
    do {
      pbVar1 = (byte *)(((int)uVar2 >> 3) + param_2);
      *pbVar1 = *pbVar1 | (&DAT_0061f2f0)[uVar2 & 7];
      uVar2 = (uint)*pbVar3;
      if (uVar2 == 0) {
        return pbVar3;
      }
      pbVar3 = pbVar3 + 1;
    } while (uVar2 != 0x5d);
  }
  return pbVar3;
}
