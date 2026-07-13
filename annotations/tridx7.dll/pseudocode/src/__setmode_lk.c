// Name: __setmode_lk
// Address: 1000e880
// Address Range: [[1000e880, 1000e8e8]]
// Convention: unknown
// Signature: int __setmode_lk(uint param_1,int param_2)

#include "nocturne.h"

/* Library Function - Single Match
int __setmode_lk(uint param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint *puVar3;
  byte bVar4;
  
  pbVar1 = (byte *)(*(int *)((int)&DAT_10241870 + ((int)(param_1 & 0xffffffe7) >> 3)) + 4 +
                   (param_1 & 0x1f) * 0x24);
  bVar2 = *pbVar1;
  if (param_2 == 0x8000) {
    bVar4 = bVar2 & 0x7f;
  }
  else {
    if (param_2 != 0x4000) {
      puVar3 = (uint *)FUN_10008a20();
      *puVar3 = 0x16;
      return -1;
    }
    bVar4 = bVar2 | 0x80;
  }
  *pbVar1 = bVar4;
  return (-(uint)((bVar2 & 0x80) == 0) & 0x4000) + 0x4000;
}
