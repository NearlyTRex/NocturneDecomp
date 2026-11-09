// Name: core_bat.cpp_CBat_dtor_FUN_0040f3d0
// Address: 0040f3d0
// Address Range: [[0040f3d0, 0040f434]]
// Convention: __cdecl
// Signature: CBat * __cdecl core_bat_cpp_CBat_dtor_FUN_0040f3d0(CBat *this_ptr,uint flags)

#include "nocturne.h"

CBat * __cdecl core_bat_cpp_CBat_dtor_FUN_0040f3d0(CBat *this_ptr,uint flags)

{
  CCourse *pCVar1;
  CBat *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CBatTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = core_course_cpp_FUN_004448f0((CCourse *)&this_ptr->field_0x178,0);
  pCVar2 = (CBat *)core_actor_cpp_CDemonActor_dtor_FUN_00408770((CDemonActor *)(pCVar1 + -0x178),1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_005a30c4(pCVar2);
  return pCVar2;
}
