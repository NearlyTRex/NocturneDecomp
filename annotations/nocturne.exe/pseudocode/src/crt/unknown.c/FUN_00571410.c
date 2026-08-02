// Name: crt_unknown.c_FUN_00571410
// Address: 00571410
// Address Range: [[00571410, 00571438]]
// Convention: unknown
// Signature: undefined4 * crt_unknown_c_FUN_00571410(undefined4 *param_1,undefined4 *param_2,uint param_3)

#include "nocturne.h"

uint * FUN_00571410(uint *param_1,uint *param_2,uint param_3)

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
