// Name: FUN_0045a6a0
// Address: 0045a6a0
// Address Range: [[0045a6a0, 0045a6ee]]
// Convention: unknown
// Signature: void FUN_0045a6a0(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045a6a0(int param_1,int *param_2)

{
  byte *puVar1;
  
  puVar1 = PTR_DAT_005ad350;
  if (((param_2[0xc] != 0x6c) && (*param_2 == *(int *)(param_1 + 0xbd3c))) && (param_2[0xc] == 0x68)
     ) {
    param_2[1] = (int)((float)param_2[1] * (float)_DAT_0057d82e);
    FUN_0043ac60(puVar1,"Shot thru the heart\n");
    return;
  }
  return;
}
