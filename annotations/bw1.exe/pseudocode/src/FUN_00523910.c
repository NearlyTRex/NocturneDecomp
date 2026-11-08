// Name: FUN_00523910
// Address: 00523910
// Address Range: [[00523910, 00523971]]
// Convention: unknown
// Signature: void FUN_00523910(undefined4 *param_1)

#include "nocturne.h"

void FUN_00523910(uint *param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = param_1;
  if (0 < (int)param_1[0x709]) {
    do {
      if (puVar1[0x727] != 0) {
        FUN_005c09f0(puVar1[0x727]);
      }
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 0x48;
    } while (iVar2 < (int)param_1[0x709]);
  }
  *param_1 = 0;
  param_1[0x709] = 0;
  FUN_005bfb70(param_1 + 0x70a,0,0x1c200);
  return;
}
