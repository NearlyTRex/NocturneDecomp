// Name: FUN_00544de0
// Address: 00544de0
// Address Range: [[00544de0, 00544e27]]
// Convention: unknown
// Signature: undefined4 * FUN_00544de0(undefined4 *param_1,undefined4 param_2)

#include "nocturne.h"

uint * FUN_00544de0(uint *param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  
  param_1[0x34c02] = 0;
  param_1[1] = param_2;
  puVar1 = param_1;
  do {
    puVar2 = puVar1 + 1;
    puVar1[0x402] = 0;
    puVar1[0x802] = 0;
    puVar1[2] = 0;
    puVar1 = puVar2;
  } while (puVar2 != param_1 + 0x400);
  *param_1 = 0;
  return param_1;
}
