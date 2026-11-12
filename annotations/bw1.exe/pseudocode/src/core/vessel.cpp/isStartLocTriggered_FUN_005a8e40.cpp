// Name: core_vessel.cpp_isStartLocTriggered_FUN_005a8e40
// Address: 005a8e40
// Address Range: [[005a8e40, 005a8e50]]
// Convention: __cdecl
// Signature: int __cdecl core_vessel_cpp_isStartLocTriggered_FUN_005a8e40(CCryptVessel *actor)

#include "nocturne.h"

int __cdecl core_vessel_cpp_isStartLocTriggered_FUN_005a8e40(CCryptVessel *actor)

{
  return actor->start_loc->triggered;
}
