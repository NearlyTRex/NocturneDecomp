// Name: core_ground.cpp_getGroundTypeColor_FUN_004eee20
// Address: 004eee20
// Address Range: [[004eee20, 004eee78]]
// Convention: __cdecl
// Signature: uint __cdecl core_ground_cpp_getGroundTypeColor_FUN_004eee20(EGroundType type)

#include "nocturne.h"

uint __cdecl core_ground_cpp_getGroundTypeColor_FUN_004eee20(EGroundType type)

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
