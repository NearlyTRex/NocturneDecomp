// Name: core_boxactor.cpp_getLightActorTypeName_FUN_0042307e
// Address: 0042307e
// Address Range: [[0042307e, 004230ad]]
// Convention: __cdecl
// Signature: char * __cdecl core_boxactor_cpp_getLightActorTypeName_FUN_0042307e(ELightActorType type)

#include "nocturne.h"

char * __cdecl core_boxactor_cpp_getLightActorTypeName_FUN_0042307e(ELightActorType type)

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
