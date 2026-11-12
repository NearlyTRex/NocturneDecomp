// Name: core_vessel.cpp_isStartLocTriggered_FUN_00576690
// Address: 00576690
// Address Range: [[00576690, 005766a0]]
// Convention: __cdecl
// Signature: int __cdecl core_vessel_cpp_isStartLocTriggered_FUN_00576690(CCryptVessel *actor)

#include "nocturne.h"

int __cdecl core_vessel_cpp_isStartLocTriggered_FUN_00576690(CCryptVessel *actor)

{
  return actor->start_loc->triggered;
}
