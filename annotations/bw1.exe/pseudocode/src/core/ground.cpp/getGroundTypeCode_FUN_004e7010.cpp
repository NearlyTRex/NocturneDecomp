// Name: core_ground.cpp_getGroundTypeCode_FUN_004e7010
// Address: 004e7010
// Address Range: [[004e7010, 004e707a]]
// Convention: __cdecl
// Signature: char * __cdecl core_ground_cpp_getGroundTypeCode_FUN_004e7010(EGroundType type)

#include "nocturne.h"

char * __cdecl core_ground_cpp_getGroundTypeCode_FUN_004e7010(EGroundType type)

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
  case GROUND_TYPE_GLASS|GROUND_TYPE_CONCRETE:
    return "lv";
  default:
    return &DAT_005e4272;
  }
}
