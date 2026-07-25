// Name: FUN_0056d4d0
// Address: 0056d4d0
// Address Range: [[0056d4d0, 0056d4e7]]
// Convention: unknown
// Signature: uint FUN_0056d4d0(void)

#include "nocturne.h"

uint FUN_0056d4d0(void)

{
  uint uVar1;
  
  uVar1 = DAT_005c1f20 & 1;
  DAT_005c1f20 = DAT_005c1f20 & 0xfffffffc;
  return uVar1;
}
