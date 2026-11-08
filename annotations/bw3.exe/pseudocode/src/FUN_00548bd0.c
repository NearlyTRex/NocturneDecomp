// Name: FUN_00548bd0
// Address: 00548bd0
// Address Range: [[00548bd0, 00548c09]]
// Convention: unknown
// Signature: void FUN_00548bd0(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_00548bd0(int param_1,int param_2,uint param_3)

{
  param_1 = param_2 * 4 + param_1;
  FUN_00538dd0(0x01ED78C8,*(uint *)(param_1 + 0x2c),*(uint *)(param_1 + 0x54),
               *(uint *)(param_1 + 0x7c),param_3,0xfffffffd,0);
  return;
}
