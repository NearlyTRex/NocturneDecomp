// Name: FUN_00578e80
// Address: 00578e80
// Address Range: [[00578e80, 00578ee4]]
// Convention: unknown
// Signature: undefined4 * FUN_00578e80(undefined4 *param_1,short *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_00578e80(uint *param_1,short *param_2)

{
  ushort uVar1;
  uint *puVar2;
  char *apcStack_10 [2];
  
  if (*param_2 != 2) {
    apcStack_10[0] = "sockaddr is not of AF_INET family!";
    _DAT_01d046a0 = "..\\support\\trisock.cpp";
    _DAT_01d046a4 = 0xd6;
    FUN_004e4500();
  }
  apcStack_10[0] = (char *)(uint)(ushort)param_2[1];
  uVar1 = Ordinal_15();
  *(ushort *)(param_1 + 1) = uVar1;
  puVar2 = (uint *)FUN_00578be0(apcStack_10,param_2 + 2);
  *param_1 = *puVar2;
  return param_1;
}
