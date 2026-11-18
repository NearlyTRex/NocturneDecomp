// Name: core_stone.cpp_CTempleStone_dtor_FUN_005624f0
// Address: 005624f0
// Address Range: [[005624f0, 00562554]]
// Convention: __cdecl
// Signature: CTempleStone * __cdecl core_stone_cpp_CTempleStone_dtor_FUN_005624f0(CTempleStone *this_ptr,uint flags)

#include "nocturne.h"

CTempleStone * __cdecl core_stone_cpp_CTempleStone_dtor_FUN_005624f0(CTempleStone *this_ptr,uint flags)

{
  CBox *pCVar1;
  CTempleStone *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CTempleStoneTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_box_cpp_CBox_dtor_FUN_005b1c70(&(this_ptr->base).physics_box,0);
  ptr = (CTempleStone *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408930
                  ((CDemonActor *)&pCVar1[-3].scrape_points[6].raytrace_normal.y,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
