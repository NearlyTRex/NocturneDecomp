// Name: core_teleport.cpp_CTeleport_ctor_FUN_005722f0
// Address: 005722f0
// Address Range: [[005722f0, 0057232f]]
// Convention: __cdecl
// Signature: CTeleport * __cdecl core_teleport_cpp_CTeleport_ctor_FUN_005722f0(CTeleport *this_ptr)

#include "nocturne.h"

CTeleport * __cdecl core_teleport_cpp_CTeleport_ctor_FUN_005722f0(CTeleport *this_ptr)

{
  CTeleport *pCVar1;
  
  pCVar1 = (CTeleport *)core_actor_cpp_CDemonActor_ctor_FUN_00408790((CDemonActor *)this_ptr);
  *(byte **)&pCVar1->field_0x2b0 = &g_CTeleportVTable;
  *(uint *)&pCVar1->field_0x2b4 = 0x40a00000;
  *(uint *)&pCVar1->field_0x2b8 = 0x41100000;
  *(uint *)&pCVar1->field_0x2bc = 0x40a00000;
  *(uint *)&pCVar1->field_0x2c0 = 0;
  return pCVar1;
}
