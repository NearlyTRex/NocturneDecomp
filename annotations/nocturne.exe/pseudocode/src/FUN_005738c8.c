// Name: FUN_005738c8
// Address: 005738c8
// Address Range: [[005738c8, 00573924]]
// Convention: unknown
// Signature: int FUN_005738c8(byte param_1)

#include "nocturne.h"

int FUN_005738c8(byte param_1)

{
  byte bVar1;
  
  if ((0x2f < param_1) && (param_1 < 0x3a)) {
    return param_1 - 0x30;
  }
  bVar1 = tolower(param_1);
  if ((0x60 < bVar1) && (bVar1 < 0x6a)) {
    return bVar1 - 0x57;
  }
  if ((0x69 < bVar1) && (bVar1 < 0x73)) {
    return bVar1 - 0x57;
  }
  if ((0x72 < bVar1) && (bVar1 < 0x7b)) {
    return bVar1 - 0x57;
  }
  return 0x25;
}
