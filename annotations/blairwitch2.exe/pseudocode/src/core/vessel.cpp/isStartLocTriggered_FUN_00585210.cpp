// Name: core_vessel.cpp_isStartLocTriggered_FUN_00585210
// Address: 00585210
// Address Range: [[00585210, 00585220]]
// Convention: __cdecl
// Signature: int __cdecl core_vessel_cpp_isStartLocTriggered_FUN_00585210(CCryptVessel *actor)

#include "nocturne.h"

int __cdecl core_vessel_cpp_isStartLocTriggered_FUN_00585210(CCryptVessel *actor)

{
  return *(int *)(*(int *)&actor->field_0x504 + 0x2e0);
}
