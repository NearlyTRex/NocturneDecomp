// Name: core_stone.cpp_CTempleStone_ctor_FUN_005bad10
// Address: 005bad10
// Address Range: [[005bad10, 005bad31]]
// Convention: __cdecl
// Signature: CTempleStone * core_stone.cpp_CTempleStone_ctor_FUN_005bad10(CTempleStone * this_ptr)

#include "nocturne.h"

CTempleStone * __cdecl core_stone_cpp_CTempleStone_ctor_FUN_005bad10(CTempleStone *this_ptr)

{
  CTempleStone *pCVar1;
  
  pCVar1 = (CTempleStone *)core_boxactor_cpp_CBoxActor_ctor_FUN_00421700(&this_ptr->base);
  (pCVar1->base).base.vtable._ub = &g_CTempleStoneVTable;
  pCVar1->unk = 0;
  return pCVar1;
}
