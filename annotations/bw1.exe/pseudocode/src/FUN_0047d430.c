// Name: FUN_0047d430
// Address: 0047d430
// Address Range: [[0047d430, 0047d47e]]
// Convention: unknown
// Signature: void FUN_0047d430(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047d430(int param_1,int *param_2)

{
  byte *puVar1;
  
  puVar1 = PTR_DAT_00611100;
  if (((param_2[0xc] != 0x6c) && (*param_2 == *(int *)(param_1 + 0xc280))) && (param_2[0xc] == 0x68)
     ) {
    param_2[1] = (int)((float)param_2[1] * (float)_DAT_005daf95);
    FUN_00445430(puVar1,"Shot thru the heart\n");
    return;
  }
  return;
}
