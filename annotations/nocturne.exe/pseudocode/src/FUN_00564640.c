// Name: FUN_00564640
// Address: 00564640
// Address Range: [[00564640, 0056466e]]
// Convention: unknown
// Signature: uint FUN_00564640(undefined4 *param_1)

#include "nocturne.h"

uint FUN_00564640(uint *param_1)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = FUN_00564670(param_1);
  if (iVar2 == 0) {
    return 0xffffffff;
  }
  pbVar1 = (byte *)*param_1;
  param_1[1] = param_1[1] + -1;
  *param_1 = pbVar1 + 1;
  return (uint)*pbVar1;
}
