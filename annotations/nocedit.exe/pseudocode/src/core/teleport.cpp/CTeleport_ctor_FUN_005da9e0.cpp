// Name: core_teleport.cpp_CTeleport_ctor_FUN_005da9e0
// Address: 005da9e0
// Address Range: [[005da9e0, 005daa1f]]
// Convention: __cdecl
// Signature: CTeleport * __cdecl core_teleport_cpp_CTeleport_ctor_FUN_005da9e0(CTeleport *this_ptr)

#include "nocturne.h"

CTeleport * __cdecl core_teleport_cpp_CTeleport_ctor_FUN_005da9e0(CTeleport *this_ptr)

{
  CTeleport *pCVar1;
  
  pCVar1 = (CTeleport *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  (pCVar1->base).vtable._ub = &g_CTeleportVTable;
  pCVar1->unk1 = 0x40a00000;
  pCVar1->unk2 = 0x41100000;
  pCVar1->unk3 = 0x40a00000;
  pCVar1->destination = (CDemonActor *)0x0;
  return pCVar1;
}
