// Name: core_teleport.cpp_CTeleport_ctor_FUN_005da9e0
// Address: 005da9e0
// Address Range: [[005da9e0, 005daa1f]]
// Convention: __cdecl
// Signature: CTeleport * core_teleport.cpp_CTeleport_ctor_FUN_005da9e0(CTeleport * this_ptr)

#include "nocturne.h"

CTeleport * __cdecl core_teleport_cpp_CTeleport_ctor_FUN_005da9e0(CTeleport *this_ptr)

{
  CTeleport *pCVar1;
  
  pCVar1 = (CTeleport *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  (pCVar1->base_actor).vtable = &g_CTeleportVTable;
  pCVar1->field1_0x158[0] = '\0';
  pCVar1->field1_0x158[1] = '\0';
  pCVar1->field1_0x158[2] = -0x60;
  pCVar1->field1_0x158[3] = '@';
  pCVar1->field1_0x158[4] = '\0';
  pCVar1->field1_0x158[5] = '\0';
  pCVar1->field1_0x158[6] = '\x10';
  pCVar1->field1_0x158[7] = 'A';
  pCVar1->field1_0x158[8] = '\0';
  pCVar1->field1_0x158[9] = '\0';
  pCVar1->field1_0x158[10] = -0x60;
  pCVar1->field1_0x158[0xb] = '@';
  pCVar1->field1_0x158[0xc] = '\0';
  pCVar1->field1_0x158[0xd] = '\0';
  pCVar1->field1_0x158[0xe] = '\0';
  pCVar1->field1_0x158[0xf] = '\0';
  return pCVar1;
}
