// Name: FUN_00564030
// Address: 00564030
// Address Range: [[00564030, 00564069]]
// Convention: unknown
// Signature: void FUN_00564030(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_00564030(int param_1,int param_2,uint param_3)

{
  param_1 = param_2 * 4 + param_1;
  FUN_00553440(0x01E82168,*(uint *)(param_1 + 0x2c),*(uint *)(param_1 + 0x54),
               *(uint *)(param_1 + 0x7c),param_3,0xfffffffd,0);
  return;
}
