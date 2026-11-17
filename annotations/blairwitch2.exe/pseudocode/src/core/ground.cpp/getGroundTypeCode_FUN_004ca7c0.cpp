// Name: core_ground.cpp_getGroundTypeCode_FUN_004ca7c0
// Address: 004ca7c0
// Address Range: [[004ca7c0, 004ca7f9]]
// Convention: __cdecl
// Signature: char * __cdecl core_ground_cpp_getGroundTypeCode_FUN_004ca7c0(EGroundType type)

#include "nocturne.h"

char * __cdecl core_ground_cpp_getGroundTypeCode_FUN_004ca7c0(EGroundType type)

{
  if (type < GROUND_TYPE_CONCRETE) {
    if (type == GROUND_TYPE_NONE) {
      return "dirt";
    }
  }
  else {
    if (type < GROUND_TYPE_DIRT) {
      return "rock";
    }
    if (GROUND_TYPE_WATER < type) {
      if (type < GROUND_TYPE_MARBLE) {
        return "wood";
      }
      if (type == (GROUND_TYPE_GLASS|GROUND_TYPE_CONCRETE)) {
        return "leaves";
      }
    }
  }
  return "dirt";
}
