// Name: core_stone.cpp_CTempleStone_dtor_FUN_005689e0
// Address: 005689e0
// Address Range: [[005689e0, 00568a44]]
// Convention: __cdecl
// Signature: CTempleStone * __cdecl core_stone_cpp_CTempleStone_dtor_FUN_005689e0(CTempleStone *this_ptr,uint flags)

#include "nocturne.h"

CTempleStone * __cdecl core_stone_cpp_CTempleStone_dtor_FUN_005689e0(CTempleStone *this_ptr,uint flags)

{
  CBox *pCVar1;
  CTempleStone *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CTempleStoneTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = core_box_cpp_CBox_dtor_FUN_0041adf0(&(this_ptr->base).physics_box,0);
  pCVar2 = (CTempleStone *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408770
                     ((CDemonActor *)(pCVar1[-2].scrape_points + 2),1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_005a30c4(pCVar2);
  return pCVar2;
}
