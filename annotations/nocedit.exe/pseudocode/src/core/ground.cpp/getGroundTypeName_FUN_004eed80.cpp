// Name: core_ground.cpp_getGroundTypeName_FUN_004eed80
// Address: 004eed80
// Address Range: [[004eed80, 004eedde]]
// Convention: __cdecl
// Signature: char * core_ground.cpp_getGroundTypeName_FUN_004eed80(int type)

#include "nocturne.h"

char * __cdecl core_ground_cpp_getGroundTypeName_FUN_004eed80(int type)

{
  switch(type) {
  case 1:
    return "GROUND_NONE" + 7;
  case 2:
    return "GROUND_CONCRETE" + 7;
  case 3:
    return "GROUND_DIRT" + 7;
  case 4:
    return "GROUND_GRASS" + 7;
  case 5:
    return "GROUND_METAL" + 7;
  case 6:
    return "GROUND_WATER" + 7;
  case 7:
    return "GROUND_WOOD" + 7;
  case 8:
    return "GROUND_MARBLE" + 7;
  case 9:
    return "GROUND_MUD" + 7;
  case 10:
    return "GROUND_CARPET" + 7;
  default:
    return "DEFAULT";
  case 0xc:
    return "GROUND_GLASS" + 7;
  case 0xd:
    return "GROUND_GRAVEL" + 7;
  }
}
