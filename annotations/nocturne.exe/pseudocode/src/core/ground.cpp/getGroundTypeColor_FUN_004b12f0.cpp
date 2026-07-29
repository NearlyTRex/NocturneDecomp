// Name: core_ground.cpp_getGroundTypeColor_FUN_004b12f0
// Address: 004b12f0
// Address Range: [[004b12f0, 004b1348]]
// Convention: __cdecl
// Signature: uint __cdecl core_ground_cpp_getGroundTypeColor_FUN_004b12f0(EGroundType type)

#include "nocturne.h"

uint __cdecl core_ground_cpp_getGroundTypeColor_FUN_004b12f0(EGroundType type)

{
  switch(type) {
  case GROUND_TYPE_NONE:
    return 5;
  case GROUND_TYPE_CONCRETE:
  case GROUND_TYPE_METAL:
    return 0xf8;
  case GROUND_TYPE_DIRT:
    return 2;
  case GROUND_TYPE_GRASS:
    return 0xfa;
  case GROUND_TYPE_WATER:
    return 4;
  case GROUND_TYPE_WOOD:
    return 3;
  case GROUND_TYPE_MARBLE:
    return 6;
  case GROUND_TYPE_MUD:
  case GROUND_TYPE_BLOOD:
    return 1;
  case GROUND_TYPE_CARPET:
    return 0xf9;
  case GROUND_TYPE_GLASS:
    return 0xfc;
  case GROUND_TYPE_GRAVEL:
    return 7;
  default:
    return 0xfd;
  }
}
