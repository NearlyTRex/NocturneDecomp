// Name: core_platfrm.cpp_CPlatform_dtor_FUN_00512cf0
// Address: 00512cf0
// Address Range: [[00512cf0, 00512d54]]
// Convention: __cdecl
// Signature: CPlatform * __cdecl core_platfrm_cpp_CPlatform_dtor_FUN_00512cf0(CPlatform *this_ptr,uint flags)

#include "nocturne.h"

CPlatform * __cdecl core_platfrm_cpp_CPlatform_dtor_FUN_00512cf0(CPlatform *this_ptr,uint flags)

{
  CCourse *pCVar1;
  CPlatform *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CPlatformTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_course_cpp_CCourse_dtor_FUN_004448f0(&this_ptr->course,0);
  ptr = (CPlatform *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408770((CDemonActor *)&pCVar1[-0x42].loop,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
