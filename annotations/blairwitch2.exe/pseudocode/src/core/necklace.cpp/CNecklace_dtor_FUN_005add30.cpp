// Name: core_necklace.cpp_CNecklace_dtor_FUN_005add30
// Address: 005add30
// Address Range: [[005add30, 005add94]]
// Convention: __cdecl
// Signature: CNecklace * __cdecl core_necklace_cpp_CNecklace_dtor_FUN_005add30(CNecklace *this_ptr,uint flags)

#include "nocturne.h"

CNecklace * __cdecl core_necklace_cpp_CNecklace_dtor_FUN_005add30(CNecklace *this_ptr,uint flags)

{
  CBox *pCVar1;
  CDemonActor *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CNecklaceTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_box_cpp_CBox_dtor_FUN_005b1c70(&(this_ptr->base).physics_box,0);
  ptr = core_actor_cpp_CDemonActor_dtor_FUN_00408930
                  ((CDemonActor *)&pCVar1[-3].scrape_points[6].raytrace_normal.y,1);
  if ((flags & 2) == 0) {
    return (CNecklace *)ptr;
  }
  debugFreeChecked(ptr);
  return (CNecklace *)ptr;
}
