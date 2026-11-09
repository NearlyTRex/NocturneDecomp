// Name: core_inv.cpp_FUN_004da760
// Address: 004da760
// Address Range: [[004da760, 004da836]]
// Convention: unknown
// Signature: undefined4 * core_inv_cpp_FUN_004da760(undefined4 *param_1)

#include "nocturne.h"

uint * core_inv_cpp_FUN_004da760(uint *param_1)

{
  uint *puVar1;
  uint *puVar2;
  
  param_1[0xcd] = 0;
  *param_1 = 0x42c80000;
  param_1[1] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0x115] = 0;
  param_1[0x118] = 0;
  param_1[0x116] = 0;
  param_1[0xd3] = 0;
  *(byte *)(param_1 + 0xd5) = 0;
  param_1[0x119] = 0;
  param_1[0x117] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0x11a] = 0;
  param_1[4] = 0;
  puVar2 = param_1;
  do {
    puVar1 = puVar2 + 1;
    puVar2[0x11b] = 0;
    puVar2 = puVar1;
  } while (puVar1 != param_1 + 100);
  puVar2 = param_1;
  do {
    puVar1 = puVar2 + 1;
    puVar2[0x17f] = 0;
    puVar2[0x184] = 0;
    puVar2 = puVar1;
  } while (puVar1 != param_1 + 5);
  return param_1;
}
