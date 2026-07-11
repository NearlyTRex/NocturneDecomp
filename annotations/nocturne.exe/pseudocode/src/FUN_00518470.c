// Name: FUN_00518470
// Address: 00518470
// Address Range: [[00518470, 005184a9]]
// Convention: unknown
// Signature: void FUN_00518470(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_00518470(int param_1,int param_2,uint param_3)

{
  param_1 = param_2 * 4 + param_1;
  FUN_0050c2d0(0x01E57284,*(uint *)(param_1 + 0x2c),*(uint *)(param_1 + 0x54),
               *(uint *)(param_1 + 0x7c),param_3,0xfffffffd,0);
  return;
}
