// Name: FUN_1000aaf0
// Address: 1000aaf0
// Address Range: [[1000aaf0, 1000ab17]]
// Convention: unknown
// Signature: undefined4 FUN_1000aaf0(undefined4 param_1)

#include "nocturne.h"

uint FUN_1000aaf0(uint param_1)

{
  uint uVar1;
  
  __lock(9);
  uVar1 = DAT_10240794;
  DAT_10240794 = param_1;
  FUN_10005a10(9);
  return uVar1;
}
