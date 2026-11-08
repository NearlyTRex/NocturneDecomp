// Name: FUN_0059c760
// Address: 0059c760
// Address Range: [[0059c760, 0059c7c4]]
// Convention: unknown
// Signature: undefined4 * FUN_0059c760(undefined4 *param_1,short *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_0059c760(uint *param_1,short *param_2)

{
  ushort uVar1;
  uint *puVar2;
  char *apcStack_10 [2];
  
  if (*param_2 != 2) {
    apcStack_10[0] = "sockaddr is not of AF_INET family!";
    _DAT_01d1d400 = "..\\support\\trisock.cpp";
    _DAT_01d1d404 = 0xd8;
    FUN_005030e0();
  }
  apcStack_10[0] = (char *)(uint)(ushort)param_2[1];
  uVar1 = Ordinal_15();
  *(ushort *)(param_1 + 1) = uVar1;
  puVar2 = (uint *)FUN_0059c4c0(apcStack_10,param_2 + 2);
  *param_1 = *puVar2;
  return param_1;
}
