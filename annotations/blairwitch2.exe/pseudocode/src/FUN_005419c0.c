// Name: FUN_005419c0
// Address: 005419c0
// Address Range: [[005419c0, 005419f9]]
// Convention: unknown
// Signature: void FUN_005419c0(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_005419c0(int param_1,int param_2,uint param_3)

{
  param_1 = param_2 * 4 + param_1;
  FUN_00532190(0x01E661B8,*(uint *)(param_1 + 0x2c),*(uint *)(param_1 + 0x54),
               *(uint *)(param_1 + 0x7c),param_3,0xfffffffd,0);
  return;
}
