// Name: unkafter_morph.cpp_FUN_005c4cf0
// Address: 005c4cf0
// Address Range: [[005c4cf0, 005c4d18]]
// Convention: unknown
// Signature: undefined4 * unkafter_morph_cpp_FUN_005c4cf0(undefined4 *param_1,undefined4 *param_2,uint param_3)

#include "nocturne.h"

uint * unkafter_morph_cpp_FUN_005c4cf0(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = param_1;
  for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
    *(byte *)puVar2 = *(byte *)param_2;
    param_2 = (uint *)((int)param_2 + 1);
    puVar2 = (uint *)((int)puVar2 + 1);
  }
  return param_1;
}
