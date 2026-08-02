// Name: core_bat.cpp_CBat_dtor_FUN_00412000
// Address: 00412000
// Address Range: [[00412000, 00412064]]
// Convention: __cdecl
// Signature: CBat * __cdecl core_bat_cpp_CBat_dtor_FUN_00412000(CBat *this_ptr,uint flags)

#include "nocturne.h"

CBat * __cdecl core_bat_cpp_CBat_dtor_FUN_00412000(CBat *this_ptr,uint flags)

{
  CCourse *pCVar1;
  CBat *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CBatTypeInfo_00599f70);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = core_course_cpp_CCourse_dtor_FUN_0043b5f0(&this_ptr->course,0);
  pCVar2 = (CBat *)core_actor_cpp_CDemonActor_dtor_FUN_00409ea0
                             ((CDemonActor *)&pCVar1[-0x1f].frames,1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_00564494(pCVar2);
  return pCVar2;
}
