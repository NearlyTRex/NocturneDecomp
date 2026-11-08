// Name: FUN_005abc85
// Address: 005abc85
// Address Range: [[005abc85, 005abcb9]]
// Convention: unknown
// Signature: void FUN_005abc85(int param_1,uint param_2)

#include "nocturne.h"

void FUN_005abc85(int param_1,uint param_2)

{
  byte auStack_8 [4];
  
  param_2 = *(uint *)(param_1 + 0x10) | param_2;
  *(uint *)(param_1 + 0x10) = param_2;
  param_2 = param_2 & *(uint *)(param_1 + 0x14);
  if (param_2 == 0) {
    return;
  }
  FUN_005af042(auStack_8,param_2);
  return;
}
