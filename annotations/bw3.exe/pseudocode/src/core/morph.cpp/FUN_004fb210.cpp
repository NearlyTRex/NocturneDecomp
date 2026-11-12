// Name: core_morph.cpp_FUN_004fb210
// Address: 004fb210
// Address Range: [[004fb210, 004fb271]]
// Convention: unknown
// Signature: void core_morph_cpp_FUN_004fb210(undefined4 *param_1)

#include "nocturne.h"

void core_morph_cpp_FUN_004fb210(uint *param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = param_1;
  if (0 < (int)param_1[0x709]) {
    do {
      if (puVar1[0x727] != 0) {
        FUN_005a3770(puVar1[0x727]);
      }
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 0x48;
    } while (iVar2 < (int)param_1[0x709]);
  }
  *param_1 = 0;
  param_1[0x709] = 0;
  memset(param_1 + 0x70a,0,0x1c200);
  return;
}
