// Name: FUN_0042b890
// Address: 0042b890
// Address Range: [[0042b890, 0042b8e8]]
// Convention: unknown
// Signature: undefined4 FUN_0042b890(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_0042b890(int param_1,uint param_2)

{
  uint uVar1;
  byte local_14 [12];
  
  uVar1 = FUN_0055a8b0(local_14,&DAT_02dd1184,
                       *(int *)(param_1 + 0x160) * 0x30 + *(int *)(param_1 + 0x15c) + 0xfd0);
  FUN_0040a240(*(uint *)(param_1 + 0x15c),param_2,uVar1);
  return param_2;
}
