// Name: core_moon.cpp_FUN_005027b0
// Address: 005027b0
// Address Range: [[005027b0, 00502811]]
// Convention: unknown
// Signature: void core_moon_cpp_FUN_005027b0(undefined4 *param_1)

#include "nocturne.h"

void core_moon_cpp_FUN_005027b0(uint *param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = param_1;
  if (0 < (int)param_1[0x709]) {
    do {
      if (puVar1[0x725] != 0) {
        FUN_005b86a0(puVar1[0x725]);
      }
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 0x46;
    } while (iVar2 < (int)param_1[0x709]);
  }
  *param_1 = 0;
  param_1[0x709] = 0;
  memset(param_1 + 0x70a,0,0x1b580);
  return;
}
