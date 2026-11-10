// Name: core_teleport.cpp_CTeleportDest_ctor_FUN_00594e70
// Address: 00594e70
// Address Range: [[00594e70, 00594e87]]
// Convention: __cdecl
// Signature: CTeleportDest * __cdecl core_teleport_cpp_CTeleportDest_ctor_FUN_00594e70(CTeleportDest *this_ptr)

#include "nocturne.h"

CTeleportDest * __cdecl core_teleport_cpp_CTeleportDest_ctor_FUN_00594e70(CTeleportDest *this_ptr)

{
  CDemonActor *pCVar1;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_004085c0((CDemonActor *)this_ptr);
  (pCVar1->vtable)._ub = &g_CTeleportDestVTable;
  return (CTeleportDest *)pCVar1;
}
