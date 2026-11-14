// Name: core_teleport.cpp_CTeleport_ctor_FUN_005722f0
// Address: 005722f0
// Address Range: [[005722f0, 0057232f]]
// Convention: __cdecl
// Signature: CTeleport * __cdecl core_teleport_cpp_CTeleport_ctor_FUN_005722f0(CTeleport *this_ptr)

#include "nocturne.h"

CTeleport * __cdecl core_teleport_cpp_CTeleport_ctor_FUN_005722f0(CTeleport *this_ptr)

{
  CTeleport *pCVar1;
  
  pCVar1 = (CTeleport *)core_actor_cpp_CDemonActor_ctor_FUN_00408790(&this_ptr->base);
  (pCVar1->base).vtable._ub = &g_CTeleportVTable;
  (pCVar1->trigger_extents).x = 5.0;
  (pCVar1->trigger_extents).y = 9.0;
  (pCVar1->trigger_extents).z = 5.0;
  pCVar1->destination = (CDemonActor *)0x0;
  return pCVar1;
}
