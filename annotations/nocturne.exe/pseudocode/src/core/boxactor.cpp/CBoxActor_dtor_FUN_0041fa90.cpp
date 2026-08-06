// Name: core_boxactor.cpp_CBoxActor_dtor_FUN_0041fa90
// Address: 0041fa90
// Address Range: [[0041fa90, 0041faf4]]
// Convention: __cdecl
// Signature: CBoxActor * __cdecl core_boxactor_cpp_CBoxActor_dtor_FUN_0041fa90(CBoxActor *this_ptr,uint flags)

#include "nocturne.h"

CBoxActor * __cdecl core_boxactor_cpp_CBoxActor_dtor_FUN_0041fa90(CBoxActor *this_ptr,uint flags)

{
  CBox *pCVar1;
  CBoxActor *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CBoxActorTypeInfo_0059acd0);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_box_cpp_CBox_dtor_FUN_0041a6c0(&this_ptr->physics_box,0);
  ptr = (CBoxActor *)
        core_actor_cpp_CDemonActor_dtor_FUN_00409ea0
                  ((CDemonActor *)&pCVar1[-2].scrape_points[2].local_position.z,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  operator_delete(ptr);
  return ptr;
}
