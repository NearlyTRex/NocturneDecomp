// Name: core_bat.cpp_CBat_dtor_FUN_004115c0
// Address: 004115c0
// Address Range: [[004115c0, 00411624]]
// Convention: __cdecl
// Signature: CBat * __cdecl core_bat_cpp_CBat_dtor_FUN_004115c0(CBat *this_ptr,uint flags)

#include "nocturne.h"

CBat * __cdecl core_bat_cpp_CBat_dtor_FUN_004115c0(CBat *this_ptr,uint flags)

{
  CCourse *pCVar1;
  CBat *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CBatTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = core_course_cpp_CCourse_dtor_FUN_00438a70(&this_ptr->course,0);
  pCVar2 = (CBat *)core_actor_cpp_CDemonActor_dtor_FUN_00408930
                             ((CDemonActor *)&pCVar1[-0x3d].loop,1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_005b7fdc(pCVar2);
  return pCVar2;
}
