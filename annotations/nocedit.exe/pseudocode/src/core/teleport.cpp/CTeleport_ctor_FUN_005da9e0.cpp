// Name: core_teleport.cpp_CTeleport_ctor_FUN_005da9e0
// Address: 005da9e0
// Address Range: [[005da9e0, 005daa1f]]
// Convention: __cdecl
// Signature: CTeleport * core_teleport.cpp_CTeleport_ctor_FUN_005da9e0(CTeleport * this_ptr)
// Cross-references:
//   core_teleport.cpp_FUN_005da9a0 (005da9a0) at 005da9bd [UNCONDITIONAL_CALL]
// Globals:
//   CDemonActor_vtable g_CTeleportVTable
// Function calls:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0

#include "nocturne.h"

CTeleport * __cdecl core_teleport_cpp_CTeleport_ctor_FUN_005da9e0(CTeleport *this_ptr)

{
  CTeleport *pCVar1;
  
  pCVar1 = (CTeleport *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  (pCVar1->base_actor).metadata.vtable = &g_CTeleportVTable;
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


// Assembly code:
// 005da9e0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_teleport.cpp_CTeleport_ctor_FUN_005da9e0
//   XREF to: Stack[0x4] (READ)
// 005da9e4: PUSH EDX
// 005da9e5: CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   XREF to: 004088b0 (UNCONDITIONAL_CALL)
// 005da9ea: MOV dword ptr [EAX + 0x154],0x664324
//   XREF to: 00664324 (DATA)
// 005da9f4: MOV dword ptr [EAX + 0x158],0x40a00000
// 005da9fe: MOV dword ptr [EAX + 0x15c],0x41100000
// 005daa08: MOV dword ptr [EAX + 0x160],0x40a00000
// 005daa12: ADD ESP,0x4
// 005daa15: MOV dword ptr [EAX + 0x164],0x0
// 005daa1f: RET
