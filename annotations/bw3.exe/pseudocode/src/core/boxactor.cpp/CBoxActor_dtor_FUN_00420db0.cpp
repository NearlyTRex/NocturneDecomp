// Name: core_boxactor.cpp_CBoxActor_dtor_FUN_00420db0
// Address: 00420db0
// Address Range: [[00420db0, 00420e14]]
// Convention: __cdecl
// Signature: CBoxActor * __cdecl core_boxactor_cpp_CBoxActor_dtor_FUN_00420db0(CBoxActor *this_ptr,uint flags)

#include "nocturne.h"

CBoxActor * __cdecl core_boxactor_cpp_CBoxActor_dtor_FUN_00420db0(CBoxActor *this_ptr,uint flags)

{
  CBox *pCVar1;
  CBoxActor *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CBoxActorTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = core_box_cpp_CBox_dtor_FUN_0041adf0((CBox *)&this_ptr->field_0x394,0);
  pCVar2 = (CBoxActor *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408770((CDemonActor *)(pCVar1 + -0x394),1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_005a30c4(pCVar2);
  return pCVar2;
}
