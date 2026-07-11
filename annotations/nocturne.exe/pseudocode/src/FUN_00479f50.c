// Name: FUN_00479f50
// Address: 00479f50
// Address Range: [[00479f50, 00479f68]]
// Convention: unknown
// Signature: void FUN_00479f50(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00479f50(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0xbca8) = 0;
  *(uint *)(param_1 + 0xbd1c) = param_2;
  return;
}
