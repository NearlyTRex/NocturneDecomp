// Name: core_ground.cpp_getGroundTypeColor_FUN_004eee20
// Address: 004eee20
// Address Range: [[004eee20, 004eee78]]
// Convention: __cdecl
// Signature: uint core_ground.cpp_getGroundTypeColor_FUN_004eee20(int type)

#include "nocturne.h"

uint __cdecl core_ground_cpp_getGroundTypeColor_FUN_004eee20(int type)

{
  switch(type) {
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
