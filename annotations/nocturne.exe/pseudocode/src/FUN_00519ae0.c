// Name: FUN_00519ae0
// Address: 00519ae0
// Address Range: [[00519ae0, 00519b02]]
// Convention: unknown
// Signature: void FUN_00519ae0(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00519ae0(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x2a6c) = param_2;
  FUN_0051b280(param_1);
  FUN_0051b480(param_1);
  return;
}
