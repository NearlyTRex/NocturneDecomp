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
  pCVar1->unk[0] = '\0';
  pCVar1->unk[1] = '\0';
  pCVar1->unk[2] = -0x60;
  pCVar1->unk[3] = '@';
  pCVar1->unk[4] = '\0';
  pCVar1->unk[5] = '\0';
  pCVar1->unk[6] = '\x10';
  pCVar1->unk[7] = 'A';
  pCVar1->unk[8] = '\0';
  pCVar1->unk[9] = '\0';
  pCVar1->unk[10] = -0x60;
  pCVar1->unk[0xb] = '@';
  pCVar1->unk[0xc] = '\0';
  pCVar1->unk[0xd] = '\0';
  pCVar1->unk[0xe] = '\0';
  pCVar1->unk[0xf] = '\0';
  return pCVar1;
}
