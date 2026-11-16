// Name: core_bat.cpp_CBat_dtor_FUN_0040f3d0
// Address: 0040f3d0
// Address Range: [[0040f3d0, 0040f434]]
// Convention: __cdecl
// Signature: CBat * __cdecl core_bat_cpp_CBat_dtor_FUN_0040f3d0(CBat *this_ptr,uint flags)

#include "nocturne.h"

CBat * __cdecl core_bat_cpp_CBat_dtor_FUN_0040f3d0(CBat *this_ptr,uint flags)

{
  CCourse *pCVar1;
  CBat *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CBatTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_course_cpp_CCourse_dtor_FUN_004448f0(&this_ptr->course,0);
  ptr = (CBat *)core_actor_cpp_CDemonActor_dtor_FUN_00408770((CDemonActor *)&pCVar1[-0x20].loop,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
