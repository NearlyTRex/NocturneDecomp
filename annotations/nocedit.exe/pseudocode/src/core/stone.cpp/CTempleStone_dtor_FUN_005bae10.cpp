// Name: core_stone.cpp_CTempleStone_dtor_FUN_005bae10
// Address: 005bae10
// Address Range: [[005bae10, 005bae74]]
// Convention: __cdecl
// Signature: CTempleStone * __cdecl core_stone_cpp_CTempleStone_dtor_FUN_005bae10(CTempleStone *this_ptr,uint d1,uint d2,uint d3)

#include "nocturne.h"

CTempleStone * __cdecl
core_stone_cpp_CTempleStone_dtor_FUN_005bae10(CTempleStone *this_ptr,uint d1,uint d2,uint d3)

{
  CBox *pCVar1;
  CTempleStone *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CTempleStoneTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_box_cpp_CBox_dtor_FUN_0041dd00((CBox *)&(this_ptr->base).sim_box);
  ptr = (CTempleStone *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar1[-2].scrape_points + 2),1);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
