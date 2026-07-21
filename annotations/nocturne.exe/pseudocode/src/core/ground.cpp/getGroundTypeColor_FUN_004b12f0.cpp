// Name: core_ground.cpp_getGroundTypeColor_FUN_004b12f0
// Address: 004b12f0
// Address Range: [[004b12f0, 004b1348]]
// Convention: unknown
// Signature: undefined4 core_ground_cpp_getGroundTypeColor_FUN_004b12f0(undefined4 param_1)

#include "nocturne.h"

uint core_ground_cpp_getGroundTypeColor_FUN_004b12f0(uint param_1)

{
  switch(param_1) {
  case 1:
    return 5;
  case 2:
  case 5:
    return 0xf8;
  case 3:
    return 2;
  case 4:
    return 0xfa;
  case 6:
    return 4;
  case 7:
    return 3;
  case 8:
    return 6;
  case 9:
  case 0xb:
    return 1;
  case 10:
    return 0xf9;
  case 0xc:
    return 0xfc;
  case 0xd:
    return 7;
  default:
    return 0xfd;
  }
}
