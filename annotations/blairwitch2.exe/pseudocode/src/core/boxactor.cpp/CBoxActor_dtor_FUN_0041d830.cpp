// Name: core_boxactor.cpp_CBoxActor_dtor_FUN_0041d830
// Address: 0041d830
// Address Range: [[0041d830, 0041d894]]
// Convention: __cdecl
// Signature: CBoxActor * __cdecl core_boxactor_cpp_CBoxActor_dtor_FUN_0041d830(CBoxActor *this_ptr,uint flags)

#include "nocturne.h"

CBoxActor * __cdecl core_boxactor_cpp_CBoxActor_dtor_FUN_0041d830(CBoxActor *this_ptr,uint flags)

{
  CBox *pCVar1;
  CBoxActor *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CBoxActorTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = core_box_cpp_CBox_dtor_FUN_005b1c70(&this_ptr->physics_box,0);
  pCVar2 = (CBoxActor *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408930
                     ((CDemonActor *)&pCVar1[-3].scrape_points[6].raytrace_normal.y,1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_005b7fdc(pCVar2);
  return pCVar2;
}
