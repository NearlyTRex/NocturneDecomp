// Name: FUN_00464f10
// Address: 00464f10
// Address Range: [[00464f10, 00464f5e]]
// Convention: unknown
// Signature: void FUN_00464f10(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00464f10(int param_1,int *param_2)

{
  byte *puVar1;
  
  puVar1 = PTR_DAT_00609ed0;
  if (((param_2[0xc] != 0x6c) && (*param_2 == *(int *)(param_1 + 0x10b10))) &&
     (param_2[0xc] == 0x68)) {
    param_2[1] = (int)((float)param_2[1] * (float)_DAT_005d119c);
    FUN_00436710(puVar1,"Shot thru the heart\n");
    return;
  }
  return;
}
