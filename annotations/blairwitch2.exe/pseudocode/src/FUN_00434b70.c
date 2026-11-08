// Name: FUN_00434b70
// Address: 00434b70
// Address Range: [[00434b70, 00434b83]]
// Convention: unknown
// Signature: void FUN_00434b70(undefined4 param_1)

#include "nocturne.h"

void FUN_00434b70(uint param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_00433e80(param_1);
  *puVar1 = &PTR_FUN_005f42b4;
  return;
}
