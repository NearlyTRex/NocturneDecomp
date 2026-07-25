// Name: FUN_0046c410
// Address: 0046c410
// Address Range: [[0046c410, 0046c45d]]
// Convention: unknown
// Signature: void FUN_0046c410(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0046c410(int param_1,uint param_2)

{
  _fwrite(param_1,0xc,1,param_2);
  _fwrite(param_1 + 0xc,0xc,1,param_2);
  _fwrite(param_1 + 0x18,0xc,1,param_2);
  _fwrite(param_1 + 0x24,0x14,1,param_2);
  return;
}
