// Name: FUN_00437400
// Address: 00437400
// Address Range: [[00437400, 00437485]]
// Convention: unknown
// Signature: void FUN_00437400(undefined4 param_1,undefined1 *param_2)

#include "nocturne.h"

void FUN_00437400(uint param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  byte abStack_30c [768];
  
  FUN_00437490(param_1,abStack_30c);
  pbVar4 = abStack_30c;
  do {
    bVar3 = *pbVar4;
    pbVar1 = pbVar4 + 1;
    pbVar2 = pbVar4 + 2;
    pbVar4 = pbVar4 + 3;
    *param_2 = (&DAT_01c45ad0)
               [((int)(uint)*pbVar2 >> 3) +
                ((int)(uint)bVar3 >> 3) * 0x400 + ((int)(uint)*pbVar1 >> 3) * 0x20];
    param_2 = param_2 + 1;
  } while (pbVar4 != &stack0xfffffff4);
  return;
}
