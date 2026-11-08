// Name: FUN_0056f750
// Address: 0056f750
// Address Range: [[0056f750, 0056f7b4]]
// Convention: unknown
// Signature: undefined4 * FUN_0056f750(undefined4 *param_1,short *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_0056f750(uint *param_1,short *param_2)

{
  ushort uVar1;
  uint *puVar2;
  char *apcStack_10 [2];
  
  if (*param_2 != 2) {
    apcStack_10[0] = "sockaddr is not of AF_INET family!";
    _DAT_01d71de0 = "..\\support\\trisock.cpp";
    _DAT_01d71de4 = 0xd8;
    FUN_004e4330();
  }
  apcStack_10[0] = (char *)(uint)(ushort)param_2[1];
  uVar1 = Ordinal_15();
  *(ushort *)(param_1 + 1) = uVar1;
  puVar2 = (uint *)FUN_0056f4b0(apcStack_10,param_2 + 2);
  *param_1 = *puVar2;
  return param_1;
}
