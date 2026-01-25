// Name: core_stone.cpp_CTempleStone_ctor_FUN_005bad10
// Address: 005bad10
// Address Range: [[005bad10, 005bad31]]
// Convention: __cdecl
// Signature: CTempleStone * core_stone.cpp_CTempleStone_ctor_FUN_005bad10(CTempleStone * this_ptr)

#include "nocturne.h"

CTempleStone * __cdecl core_stone_cpp_CTempleStone_ctor_FUN_005bad10(CTempleStone *this_ptr)

{
  CBoxActor *pCVar1;
  
  pCVar1 = core_boxactor_cpp_CBoxActor_ctor_FUN_00421700((CBoxActor *)this_ptr);
  (pCVar1->base_actor).vtable._ub = &g_CTempleStoneVTable;
  pCVar1[1].base_actor.actor_name[0] = '\0';
  pCVar1[1].base_actor.actor_name[1] = '\0';
  pCVar1[1].base_actor.actor_name[2] = '\0';
  pCVar1[1].base_actor.actor_name[3] = '\0';
  return (CTempleStone *)pCVar1;
}
