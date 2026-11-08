// Name: FUN_004a7bb0
// Address: 004a7bb0
// Address Range: [[004a7bb0, 004a7cc5]]
// Convention: unknown
// Signature: void FUN_004a7bb0(undefined4 *param_1)

#include "nocturne.h"

void FUN_004a7bb0(uint *param_1)

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
    puVar2[0x65] = 0;
    puVar3 = puVar3 + 0x14;
    puVar2[0x69] = 0;
    puVar2 = puVar1;
  } while (puVar1 != param_1 + 4);
  *(byte *)(param_1 + 0x51) = 0;
  puVar2 = param_1;
  do {
    puVar3 = puVar2 + 1;
    puVar2[0x87a] = 0;
    puVar2[0xd7a] = 0;
    puVar2[0xe7a] = 0;
    puVar2[0xf7a] = 0;
    puVar2[0x77a] = 0;
    puVar2 = puVar3;
  } while (puVar3 != param_1 + 0x100);
  param_1[0x107b] = 0;
  param_1[0x107c] = 0;
  param_1[0x107d] = 1;
  param_1[0x107e] = 2;
  param_1[0xd9a] = 8;
  param_1[0x107f] = 2;
  param_1[0x1080] = 1;
  param_1[0x1081] = 0;
  param_1[0x779] = 0;
  param_1[0x1083] = 0;
  param_1[0x1084] = 0;
  param_1[0x1085] = 0;
  param_1[0x773] = 0;
  param_1[0x775] = 0;
  param_1[0x776] = 0;
  param_1[0x777] = 0;
  param_1[0x107a] = 0;
  return;
}
