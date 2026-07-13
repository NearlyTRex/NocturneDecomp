// Name: FUN_100116f0
// Address: 100116f0
// Address Range: [[100116f0, 100117a4]]
// Convention: unknown
// Signature: byte * FUN_100116f0(byte *param_1,uint param_2)

#include "nocturne.h"

byte * FUN_100116f0(byte *param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  
  if (DAT_10016edc == 0) {
    pbVar2 = (byte *)FUN_100117f0(param_1,param_2);
    return pbVar2;
  }
  __lock(0x19);
  bVar1 = *param_1;
  while (bVar1 != 0) {
    if ((*(byte *)((int)&DAT_10016dd8 + bVar1 + 1) & 4) == 0) {
      pbVar2 = param_1;
      if ((ushort)bVar1 == param_2) break;
    }
    else {
      if (param_1[1] == 0) {
        FUN_10005a10(0x19);
        return (byte *)0x0;
      }
      pbVar2 = param_1 + 1;
      if (CONCAT11(bVar1,param_1[1]) == param_2) {
        FUN_10005a10(0x19);
        return param_1;
      }
    }
    param_1 = pbVar2 + 1;
    bVar1 = pbVar2[1];
  }
  FUN_10005a10(0x19);
  return (byte *)(-(uint)((ushort)bVar1 == param_2) & (uint)param_1);
}
