// Name: FUN_00562f70
// Address: 00562f70
// Address Range: [[00562f70, 00562ff2]]
// Convention: unknown
// Signature: void FUN_00562f70(int param_1,int param_2)

#include "nocturne.h"

void FUN_00562f70(int param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00523910(param_1);
  }
  *(uint *)(param_1 + 0x1de78) = 0;
  *(uint *)(param_1 + 0x1ec8c) = 0;
  FUN_005c0336(*(uint *)(param_1 + 0x1ec90));
  FUN_005c0336(*(uint *)(param_1 + 0x1ec94));
  FUN_005c0336(*(uint *)(param_1 + 0x1ec98));
  *(uint *)(param_1 + 0x1ec90) = 0;
  *(uint *)(param_1 + 0x1ec94) = 0;
  *(uint *)(param_1 + 0x1ec98) = 0;
  *(byte *)(param_1 + 0x1de28) = 0;
  return;
}
