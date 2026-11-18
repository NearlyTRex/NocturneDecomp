// Name: core_stone.cpp_CTempleStone_dtor_FUN_00584f70
// Address: 00584f70
// Address Range: [[00584f70, 00584fd4]]
// Convention: __cdecl
// Signature: CTempleStone * __cdecl core_stone_cpp_CTempleStone_dtor_FUN_00584f70(CTempleStone *this_ptr,uint flags)

#include "nocturne.h"

CTempleStone * __cdecl core_stone_cpp_CTempleStone_dtor_FUN_00584f70(CTempleStone *this_ptr,uint flags)

{
  CBox *pCVar1;
  CTempleStone *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CTempleStoneTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_box_cpp_CBox_dtor_FUN_0041dab0(&(this_ptr->base).physics_box,0);
  ptr = (CTempleStone *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408730
                  ((CDemonActor *)(pCVar1[-2].scrape_points + 2),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
