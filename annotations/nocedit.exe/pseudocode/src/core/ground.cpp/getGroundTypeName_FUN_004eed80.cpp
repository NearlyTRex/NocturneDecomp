// Name: core_ground.cpp_getGroundTypeName_FUN_004eed80
// Address: 004eed80
// Address Range: [[004eed80, 004eedde]]
// Convention: __cdecl
// Signature: char * __cdecl core_ground_cpp_getGroundTypeName_FUN_004eed80(EGroundType type)

#include "nocturne.h"

char * __cdecl core_ground_cpp_getGroundTypeName_FUN_004eed80(EGroundType type)

{
  switch(type) {
  case GROUND_TYPE_NONE:
    return "GROUND_NONE" + 7;
  case GROUND_TYPE_CONCRETE:
    return "GROUND_CONCRETE" + 7;
  case GROUND_TYPE_DIRT:
    return "GROUND_DIRT" + 7;
  case GROUND_TYPE_GRASS:
    return "GROUND_GRASS" + 7;
  case GROUND_TYPE_METAL:
    return "GROUND_METAL" + 7;
  case GROUND_TYPE_WATER:
    return "GROUND_WATER" + 7;
  case GROUND_TYPE_WOOD:
    return "GROUND_WOOD" + 7;
  case GROUND_TYPE_MARBLE:
    return "GROUND_MARBLE" + 7;
  case GROUND_TYPE_MUD:
    return "GROUND_MUD" + 7;
  case GROUND_TYPE_CARPET:
    return "GROUND_CARPET" + 7;
  default:
    return "DEFAULT";
  case GROUND_TYPE_GLASS:
    return "GROUND_GLASS" + 7;
  case GROUND_TYPE_GRAVEL:
    return "GROUND_GRAVEL" + 7;
  }
}
