// Name: core_boxactor.cpp_getLightActorTypeName_FUN_00423080
// Address: 00423080
// Address Range: [[00423080, 004230ad]]
// Convention: __cdecl
// Signature: char * __cdecl core_boxactor_cpp_getLightActorTypeName_FUN_00423080(ELightActorType type)

#include "nocturne.h"

char * __cdecl core_boxactor_cpp_getLightActorTypeName_FUN_00423080(ELightActorType type)

{
  switch(type) {
  case LIGHT_TYPE_CUSTOM:
    return "Custom";
  case LIGHT_TYPE_FLASHLIGHT:
    return "Flashlight";
  case LIGHT_TYPE_LANTERN:
    return "Lantern";
  case LIGHT_TYPE_GLOBE:
    return "Globe";
  default:
    return "???";
  }
}
