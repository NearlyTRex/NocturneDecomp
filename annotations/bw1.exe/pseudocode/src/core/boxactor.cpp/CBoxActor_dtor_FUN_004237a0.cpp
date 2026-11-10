// Name: core_boxactor.cpp_CBoxActor_dtor_FUN_004237a0
// Address: 004237a0
// Address Range: [[004237a0, 00423804]]
// Convention: __cdecl
// Signature: CBoxActor * __cdecl core_boxactor_cpp_CBoxActor_dtor_FUN_004237a0(CBoxActor *this_ptr,uint flags)

#include "nocturne.h"

CBoxActor * __cdecl core_boxactor_cpp_CBoxActor_dtor_FUN_004237a0(CBoxActor *this_ptr,uint flags)

{
  CBox *pCVar1;
  CBoxActor *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CBoxActorTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = core_box_cpp_CBox_dtor_FUN_0041dab0(&this_ptr->physics_box,0);
  pCVar2 = (CBoxActor *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408730
                     ((CDemonActor *)(pCVar1[-2].scrape_points + 2),1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_005c0344(pCVar2);
  return pCVar2;
}
