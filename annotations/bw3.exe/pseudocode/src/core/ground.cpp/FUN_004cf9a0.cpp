// Name: core_ground.cpp_FUN_004cf9a0
// Address: 004cf9a0
// Address Range: [[004cf9a0, 004cfa0a]]
// Convention: __cdecl
// Signature: char * __cdecl core_ground_cpp_FUN_004cf9a0(EGroundType type)

#include "nocturne.h"

char * __cdecl core_ground_cpp_FUN_004cf9a0(EGroundType type)

{
  switch(type) {
  case GROUND_TYPE_NONE:
    return &DAT_005c486c;
  case GROUND_TYPE_CONCRETE:
    return &DAT_005c486f;
  case GROUND_TYPE_DIRT:
    return &DAT_005c4872;
  case GROUND_TYPE_GRASS:
    return &DAT_005c4875;
  case GROUND_TYPE_METAL:
    return &DAT_005c4878;
  case GROUND_TYPE_WATER:
    return &DAT_005c487b;
  case GROUND_TYPE_WOOD:
    return &DAT_005c487e;
  case GROUND_TYPE_MARBLE:
    return &DAT_005c4881;
  case GROUND_TYPE_MUD:
    return &DAT_005c4884;
  case GROUND_TYPE_CARPET:
    return &DAT_005c4887;
  case GROUND_TYPE_BLOOD:
    return &DAT_005c488a;
  case GROUND_TYPE_GLASS:
    return &DAT_005c488d;
  case GROUND_TYPE_GRAVEL:
    return &DAT_005c4890;
  case GROUND_TYPE_GLASS|GROUND_TYPE_CONCRETE:
    return &DAT_005c4893;
  default:
    return &DAT_005c4896;
  }
}
