// Name: core_door.cpp_CDoor_dtor_FUN_00460860
// Address: 00460860
// Address Range: [[00460860, 004608ad]]
// Convention: __cdecl
// Signature: CDoor * __cdecl core_door_cpp_CDoor_dtor_FUN_00460860(CDoor *this_ptr,uint flags)

#include "nocturne.h"

CDoor * __cdecl core_door_cpp_CDoor_dtor_FUN_00460860(CDoor *this_ptr,uint flags)

{
  CDoor *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CDoorTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = (CDoor *)core_actor_cpp_CDemonActor_dtor_FUN_00408930((CDemonActor *)this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
