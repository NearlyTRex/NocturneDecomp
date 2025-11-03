// Name: core_stone.cpp_CTempleStone_ctor_FUN_005bad10
// Address: 005bad10
// Address Range: [[005bad10, 005bad31]]
// Convention: __cdecl
// Signature: CTempleStone * core_stone.cpp_CTempleStone_ctor_FUN_005bad10(CTempleStone * this_ptr)
// Cross-references:
//   core_stone.cpp_FUN_005bacd0 (005bacd0) at 005bacea [UNCONDITIONAL_CALL]
// Globals:
//   CDemonActor_vtable g_CTempleStoneVTable
// Function calls:
//   core_boxactor.cpp_CBoxActor_ctor_FUN_00421700

#include "nocturne.h"

CTempleStone * __cdecl core_stone_cpp_CTempleStone_ctor_FUN_005bad10(CTempleStone *this_ptr)

{
  CBoxActor *pCVar1;
  
  pCVar1 = core_boxactor_cpp_CBoxActor_ctor_FUN_00421700((CBoxActor *)this_ptr);
  (pCVar1->base_actor).vtable = &g_CTempleStoneVTable;
  pCVar1[1].base_actor.actor_name[0] = '\0';
  pCVar1[1].base_actor.actor_name[1] = '\0';
  pCVar1[1].base_actor.actor_name[2] = '\0';
  pCVar1[1].base_actor.actor_name[3] = '\0';
  return (CTempleStone *)pCVar1;
}


// Assembly code:
// 005bad10: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_stone.cpp_CTempleStone_ctor_FUN_005bad10
//   XREF to: Stack[0x4] (READ)
// 005bad14: PUSH EDX
// 005bad15: CALL core_boxactor.cpp_CBoxActor_ctor_FUN_00421700
//   XREF to: 00421700 (UNCONDITIONAL_CALL)
// 005bad1a: MOV dword ptr [EAX + 0x154],0x663604
//   XREF to: 00663604 (DATA)
// 005bad24: ADD ESP,0x4
// 005bad27: MOV dword ptr [EAX + 0x66c],0x0
// 005bad31: RET
