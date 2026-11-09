// Name: core_teleport.cpp_CTeleport_ctor_FUN_00568e00
// Address: 00568e00
// Address Range: [[00568e00, 00568e3f]]
// Convention: __cdecl
// Signature: CTeleport * __cdecl core_teleport_cpp_CTeleport_ctor_FUN_00568e00(CTeleport *this_ptr)

#include "nocturne.h"

CTeleport * __cdecl core_teleport_cpp_CTeleport_ctor_FUN_00568e00(CTeleport *this_ptr)

{
  CTeleport *pCVar1;
  
  pCVar1 = (CTeleport *)core_actor_cpp_CDemonActor_ctor_FUN_00408600((CDemonActor *)this_ptr);
  *(byte **)&pCVar1->field_0x154 = &g_CTeleportVTable;
  *(uint *)&pCVar1->field_0x158 = 0x40a00000;
  *(uint *)&pCVar1->field_0x15c = 0x41100000;
  *(uint *)&pCVar1->field_0x160 = 0x40a00000;
  *(uint *)&pCVar1->field_0x164 = 0;
  return pCVar1;
}
