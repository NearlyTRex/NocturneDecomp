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
    return &DAT_005e4248;
  case GROUND_TYPE_CONCRETE:
    return &DAT_005e424b;
  case GROUND_TYPE_DIRT:
    return &DAT_005e424e;
  case GROUND_TYPE_GRASS:
    return &DAT_005e4251;
  case GROUND_TYPE_METAL:
    return &DAT_005e4254;
  case GROUND_TYPE_WATER:
    return &DAT_005e4257;
  case GROUND_TYPE_WOOD:
    return &DAT_005e425a;
  case GROUND_TYPE_MARBLE:
    return &DAT_005e425d;
  case GROUND_TYPE_MUD:
    return &DAT_005e4260;
  case GROUND_TYPE_CARPET:
    return &DAT_005e4263;
  case GROUND_TYPE_BLOOD:
    return &DAT_005e4266;
  case GROUND_TYPE_GLASS:
    return &DAT_005e4269;
  case GROUND_TYPE_GRAVEL:
    return &DAT_005e426c;
  case GROUND_TYPE_GLASS|GROUND_TYPE_CONCRETE:
    return &DAT_005e426f;
  default:
    return &DAT_005e4272;
  }
}
