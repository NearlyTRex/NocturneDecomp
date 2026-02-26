// Name: core_vessel.cpp_isStartLocTriggered_FUN_005e9180
// Address: 005e9180
// Address Range: [[005e9180, 005e9190]]
// Convention: __cdecl
// Signature: int __cdecl core_vessel_cpp_isStartLocTriggered_FUN_005e9180(CCryptVessel *actor)

#include "nocturne.h"

int __cdecl core_vessel_cpp_isStartLocTriggered_FUN_005e9180(CCryptVessel *actor)

{
  return actor->start_loc->triggered;
}
