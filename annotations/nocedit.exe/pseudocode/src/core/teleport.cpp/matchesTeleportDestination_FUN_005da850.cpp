// Name: core_teleport.cpp_matchesTeleportDestination_FUN_005da850
// Address: 005da850
// Address Range: [[005da850, 005da868]]
// Convention: __cdecl
// Signature: int __cdecl core_teleport_cpp_matchesTeleportDestination_FUN_005da850(CTeleportDest *dest,CTeleport *candidate)

#include "nocturne.h"

int __cdecl core_teleport_cpp_matchesTeleportDestination_FUN_005da850(CTeleportDest *dest,CTeleport *candidate)

{
  return (uint)(candidate->destination == &dest->base);
}
