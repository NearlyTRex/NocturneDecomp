// Name: core_platfrm.cpp_CPlatform_dtor_FUN_00512cf0
// Address: 00512cf0
// Address Range: [[00512cf0, 00512d54]]
// Convention: __cdecl
// Signature: CPlatform * __cdecl core_platfrm_cpp_CPlatform_dtor_FUN_00512cf0(CPlatform *this_ptr,uint flags)

#include "nocturne.h"

CPlatform * __cdecl core_platfrm_cpp_CPlatform_dtor_FUN_00512cf0(CPlatform *this_ptr,uint flags)

{
  CCourse *pCVar1;
  CPlatform *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CPlatformTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = core_course_cpp_CCourse_dtor_FUN_004448f0(&this_ptr->course,0);
  pCVar2 = (CPlatform *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408770((CDemonActor *)&pCVar1[-0x42].loop,1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_005a30c4(pCVar2);
  return pCVar2;
}
