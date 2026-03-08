// Name: core_ground.cpp_getGroundTypeCode_FUN_004eece0
// Address: 004eece0
// Address Range: [[004eece0, 004eed44]]
// Convention: __cdecl
// Signature: char * __cdecl core_ground_cpp_getGroundTypeCode_FUN_004eece0(EGroundType type)

#include "nocturne.h"

char * __cdecl core_ground_cpp_getGroundTypeCode_FUN_004eece0(EGroundType type)

{
  switch(type) {
  case GROUND_TYPE_NONE:
    return "no";
  case GROUND_TYPE_CONCRETE:
    return "ct";
  case GROUND_TYPE_DIRT:
    return "dt";
  case GROUND_TYPE_GRASS:
    return "dt";
  case GROUND_TYPE_METAL:
    return "mt";
  case GROUND_TYPE_WATER:
    return "wt";
  case GROUND_TYPE_WOOD:
    return "wd";
  case GROUND_TYPE_MARBLE:
    return "mb";
  case GROUND_TYPE_MUD:
    return "md";
  case GROUND_TYPE_CARPET:
    return "cp";
  case GROUND_TYPE_BLOOD:
    return "bd";
  case GROUND_TYPE_GLASS:
    return "gl";
  case GROUND_TYPE_GRAVEL:
    return "gr";
  default:
    return "df";
  }
}
