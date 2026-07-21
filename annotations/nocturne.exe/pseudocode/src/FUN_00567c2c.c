// Name: FUN_00567c2c
// Address: 00567c2c
// Address Range: [[00567c2c, 00567c70]]
// Convention: unknown
// Signature: byte * FUN_00567c2c(byte *param_1,int param_2)

#include "nocturne.h"

byte * FUN_00567c2c(byte *param_1,int param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  
  pbVar3 = param_1 + 1;
  memset(param_2,0,0x20);
  uVar2 = (uint)*param_1;
  if (uVar2 != 0) {
    do {
      pbVar1 = (byte *)(((int)uVar2 >> 3) + param_2);
      *pbVar1 = *pbVar1 | (&DAT_005c1b08)[uVar2 & 7];
      uVar2 = (uint)*pbVar3;
      if (uVar2 == 0) {
        return pbVar3;
      }
      pbVar3 = pbVar3 + 1;
    } while (uVar2 != 0x5d);
  }
  return pbVar3;
}
