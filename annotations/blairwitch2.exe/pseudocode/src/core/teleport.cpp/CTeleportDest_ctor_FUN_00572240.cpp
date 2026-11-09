// Name: core_teleport.cpp_CTeleportDest_ctor_FUN_00572240
// Address: 00572240
// Address Range: [[00572240, 00572257]]
// Convention: __cdecl
// Signature: CTeleportDest * __cdecl core_teleport_cpp_CTeleportDest_ctor_FUN_00572240(CTeleportDest *this_ptr)

#include "nocturne.h"

CTeleportDest * __cdecl core_teleport_cpp_CTeleportDest_ctor_FUN_00572240(CTeleportDest *this_ptr)

{
  CDemonActor *pCVar1;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_00408790((CDemonActor *)this_ptr);
  *(byte **)&pCVar1->field_0x2b0 = &g_CTeleportDestVTable;
  return (CTeleportDest *)pCVar1;
}
