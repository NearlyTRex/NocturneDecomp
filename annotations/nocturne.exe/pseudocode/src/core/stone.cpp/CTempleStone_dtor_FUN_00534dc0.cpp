// Name: core_stone.cpp_CTempleStone_dtor_FUN_00534dc0
// Address: 00534dc0
// Address Range: [[00534dc0, 00534e24]]
// Convention: __cdecl
// Signature: CTempleStone * __cdecl core_stone_cpp_CTempleStone_dtor_FUN_00534dc0(CTempleStone *this_ptr,uint flags)

#include "nocturne.h"

CTempleStone * __cdecl core_stone_cpp_CTempleStone_dtor_FUN_00534dc0(CTempleStone *this_ptr,uint flags)

{
  CBox *pCVar1;
  CTempleStone *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CTempleStoneTypeInfo_005a26b0);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = core_box_cpp_CBox_dtor_FUN_0041a6c0(&(this_ptr->base).physics_box,0);
  pCVar2 = (CTempleStone *)
           core_actor_cpp_CDemonActor_dtor_FUN_00409ea0
                     ((CDemonActor *)&pCVar1[-2].scrape_points[2].local_position.z,1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_00564494(pCVar2);
  return pCVar2;
}
