// Name: core_ground.cpp_getGroundTypeName_FUN_004eed80
// Address: 004eed80
// MANUAL RECONSTRUCTION
// Address Range: [[004eed80, 004eedde]]
// Convention: __cdecl
// Signature: char * __cdecl core_ground_cpp_getGroundTypeName_FUN_004eed80(EGroundType type)

#include "nocturne.h"

char * __cdecl core_ground_cpp_getGroundTypeName_FUN_004eed80(EGroundType type)

{
  switch(type) {
  case GROUND_TYPE_NONE:
    return (char *)"GROUND_NONE" + 7;
  case GROUND_TYPE_CONCRETE:
    return (char *)"GROUND_CONCRETE" + 7;
  case GROUND_TYPE_DIRT:
    return (char *)"GROUND_DIRT" + 7;
  case GROUND_TYPE_GRASS:
    return (char *)"GROUND_GRASS" + 7;
  case GROUND_TYPE_METAL:
    return (char *)"GROUND_METAL" + 7;
  case GROUND_TYPE_WATER:
    return (char *)"GROUND_WATER" + 7;
  case GROUND_TYPE_WOOD:
    return (char *)"GROUND_WOOD" + 7;
  case GROUND_TYPE_MARBLE:
    return (char *)"GROUND_MARBLE" + 7;
  case GROUND_TYPE_MUD:
    return (char *)"GROUND_MUD" + 7;
  case GROUND_TYPE_CARPET:
    return (char *)"GROUND_CARPET" + 7;
  default:
    return (char *)"DEFAULT";
  case GROUND_TYPE_GLASS:
    return (char *)"GROUND_GLASS" + 7;
  case GROUND_TYPE_GRAVEL:
    return (char *)"GROUND_GRAVEL" + 7;
  }
}
