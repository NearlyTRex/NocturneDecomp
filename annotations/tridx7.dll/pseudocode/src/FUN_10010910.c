// Name: FUN_10010910
// Address: 10010910
// Address Range: [[10010910, 1001096a]]
// Convention: unknown
// Signature: undefined4 FUN_10010910(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint FUN_10010910(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  
  bVar2 = DAT_10240854 == 0;
  if (bVar2) {
    DAT_10240858 = DAT_10240858 + 1;
  }
  else {
    __lock(0x13);
  }
  uVar1 = FUN_10010970(param_1,param_2,param_3);
  if (!bVar2) {
    FUN_10005a10(0x13);
    return uVar1;
  }
  DAT_10240858 = DAT_10240858 + -1;
  return uVar1;
}
