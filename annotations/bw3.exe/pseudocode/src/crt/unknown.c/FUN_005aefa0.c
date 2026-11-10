// Name: crt_unknown.c_FUN_005aefa0
// Address: 005aefa0
// Address Range: [[005aefa0, 005aefd6]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005aefa0(undefined4 *param_1)

#include "nocturne.h"

uint FUN_005aefa0(uint *param_1)

{
  int iVar1;
  uint uVar2;
  int aiStack_28 [9];
  
  iVar1 = FUN_005b0910(aiStack_28);
  if (499 < iVar1) {
    aiStack_28[0] = aiStack_28[0] + 1;
  }
  uVar2 = _mktime(aiStack_28);
  if (param_1 != (uint *)0x0) {
    *param_1 = uVar2;
  }
  return uVar2;
}
