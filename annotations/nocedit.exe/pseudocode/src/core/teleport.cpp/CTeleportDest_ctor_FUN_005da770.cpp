// Name: core_teleport.cpp_CTeleportDest_ctor_FUN_005da770
// Address: 005da770
// Address Range: [[005da770, 005da787]]
// Convention: __cdecl
// Signature: CTeleportDest * __cdecl core_teleport_cpp_CTeleportDest_ctor_FUN_005da770(CTeleportDest *this_ptr)

#include "nocturne.h"

CTeleportDest * __cdecl core_teleport_cpp_CTeleportDest_ctor_FUN_005da770(CTeleportDest *this_ptr)

{
  CTeleportDest *pCVar1;
  
  pCVar1 = (CTeleportDest *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  (pCVar1->base).vtable._ub = &g_CTeleportDestVTable;
  return pCVar1;
}
