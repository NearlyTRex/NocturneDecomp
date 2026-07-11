// Name: FUN_0048fe50
// Address: 0048fe50
// Address Range: [[0048fe50, 0048ff36]]
// Convention: unknown
// Signature: void FUN_0048fe50(undefined4 *param_1)

#include "nocturne.h"

void FUN_0048fe50(uint *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  
  *param_1 = 0;
  puVar2 = param_1;
  puVar3 = param_1;
  do {
    puVar1 = puVar2 + 1;
    *(byte *)(puVar3 + 1) = 0;
    puVar2[0x51] = 0;
    puVar3 = puVar3 + 0x14;
    puVar2[0x55] = 0;
    puVar2 = puVar1;
  } while (puVar1 != param_1 + 4);
  puVar2 = param_1;
  do {
    puVar3 = puVar2 + 1;
    puVar2[0x85a] = 0;
    puVar2[0x95a] = 0;
    puVar2[0xa5a] = 0;
    puVar2[0xb5a] = 0;
    puVar2[0x75a] = 0;
    puVar2 = puVar3;
  } while (puVar3 != param_1 + 0x100);
  param_1[0xc5b] = 0;
  param_1[0xc5c] = 0;
  param_1[0xc5d] = 1;
  param_1[0xc5e] = 2;
  param_1[0x97a] = 8;
  param_1[0xc5f] = 2;
  param_1[0xc60] = 1;
  param_1[0xc61] = 0;
  param_1[0x759] = 0;
  param_1[0xc63] = 0;
  param_1[0xc64] = 0;
  param_1[0xc65] = 0;
  param_1[0xc5a] = 0;
  return;
}
