// Name: core_teleport.cpp_CTeleportDest_ctor_FUN_005da770
// Address: 005da770
// Address Range: [[005da770, 005da787]]
// Convention: __cdecl
// Signature: CTeleportDest * core_teleport.cpp_CTeleportDest_ctor_FUN_005da770(CTeleportDest * this_ptr)
// Cross-references:
//   core_teleport.cpp_FUN_005da730 (005da730) at 005da74a [UNCONDITIONAL_CALL]
// Globals:
//   CDemonActor_vtable g_CTeleportDestVTable
// Function calls:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0

#include "nocturne.h"

CTeleportDest * __cdecl core_teleport_cpp_CTeleportDest_ctor_FUN_005da770(CTeleportDest *this_ptr)

{
  CDemonActor *pCVar1;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  pCVar1->vtable = &g_CTeleportDestVTable;
  return (CTeleportDest *)pCVar1;
}


// Assembly code:
// 005da770: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_teleport.cpp_CTeleportDest_ctor_FUN_005da770
//   XREF to: Stack[0x4] (READ)
// 005da774: PUSH EDX
// 005da775: CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   XREF to: 004088b0 (UNCONDITIONAL_CALL)
// 005da77a: ADD ESP,0x4
// 005da77d: MOV dword ptr [EAX + 0x154],0x664234
//   XREF to: 00664234 (DATA)
// 005da787: RET
