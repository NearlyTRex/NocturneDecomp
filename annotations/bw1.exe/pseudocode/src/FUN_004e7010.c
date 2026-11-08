// Name: FUN_004e7010
// Address: 004e7010
// Address Range: [[004e7010, 004e707a]]
// Convention: unknown
// Signature: undefined * FUN_004e7010(undefined4 param_1)

#include "nocturne.h"

byte * FUN_004e7010(uint param_1)

{
  switch(param_1) {
  case 1:
    return &DAT_005e4248;
  case 2:
    return &DAT_005e424b;
  case 3:
    return &DAT_005e424e;
  case 4:
    return &DAT_005e4251;
  case 5:
    return &DAT_005e4254;
  case 6:
    return &DAT_005e4257;
  case 7:
    return &DAT_005e425a;
  case 8:
    return &DAT_005e425d;
  case 9:
    return &DAT_005e4260;
  case 10:
    return &DAT_005e4263;
  case 0xb:
    return &DAT_005e4266;
  case 0xc:
    return &DAT_005e4269;
  case 0xd:
    return &DAT_005e426c;
  case 0xe:
    return &DAT_005e426f;
  default:
    return &DAT_005e4272;
  }
}
