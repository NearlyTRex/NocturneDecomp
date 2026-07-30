// Name: core_teleport.cpp_CTeleportDest_ctor_FUN_00543840
// Address: 00543840
// Address Range: [[00543840, 00543857]]
// Convention: __cdecl
// Signature: CTeleportDest * __cdecl core_teleport_cpp_CTeleportDest_ctor_FUN_00543840(CTeleportDest *this_ptr)

#include "nocturne.h"

CTeleportDest * __cdecl core_teleport_cpp_CTeleportDest_ctor_FUN_00543840(CTeleportDest *this_ptr)

{
  CDemonActor *pCVar1;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_00409d30(&this_ptr->base);
  (pCVar1->vtable)._ub = &g_CTeleportDestVTable;
  return (CTeleportDest *)pCVar1;
}
