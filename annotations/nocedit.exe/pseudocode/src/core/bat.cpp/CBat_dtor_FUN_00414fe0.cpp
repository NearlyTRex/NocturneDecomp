// Name: core_bat.cpp_CBat_dtor_FUN_00414fe0
// Address: 00414fe0
// Address Range: [[00414fe0, 00415044]]
// Convention: __cdecl
// Signature: CBat * __cdecl core_bat_cpp_CBat_dtor_FUN_00414fe0(CBat *this_ptr,uint flags)

#include "nocturne.h"

CBat * __cdecl core_bat_cpp_CBat_dtor_FUN_00414fe0(CBat *this_ptr,uint flags)

{
  CCourse *pCVar1;
  CBat *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CBatTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_course_cpp_CCourse_dtor_FUN_004424e0((CCourse *)(this_ptr->course_filename + 0x20));
  ptr = (CBat *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)&pCVar1[-0x20].loop,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
