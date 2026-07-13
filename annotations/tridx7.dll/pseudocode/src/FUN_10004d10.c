// Name: FUN_10004d10
// Address: 10004d10
// Address Range: [[10004d10, 10004d2e]]
// Convention: unknown
// Signature: int FUN_10004d10(uint param_1)

#include "nocturne.h"

int FUN_10004d10(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 == 0) {
    return 0x20;
  }
  for (; 1 < param_1; param_1 = param_1 >> 1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}
