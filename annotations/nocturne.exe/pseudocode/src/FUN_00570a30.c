// Name: FUN_00570a30
// Address: 00570a30
// Address Range: [[00570a30, 00570a66]]
// Convention: unknown
// Signature: undefined4 FUN_00570a30(undefined4 *param_1)

#include "nocturne.h"

uint FUN_00570a30(uint *param_1)

{
  int iVar1;
  uint uVar2;
  int aiStack_28 [9];
  
  iVar1 = FUN_00572b00(aiStack_28);
  if (499 < iVar1) {
    aiStack_28[0] = aiStack_28[0] + 1;
  }
  uVar2 = _mktime(aiStack_28);
  if (param_1 != (uint *)0x0) {
    *param_1 = uVar2;
  }
  return uVar2;
}
