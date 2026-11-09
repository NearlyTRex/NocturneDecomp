// Name: core_door.cpp_CDoor_dtor_FUN_00478d70
// Address: 00478d70
// Address Range: [[00478d70, 00478dbd]]
// Convention: __cdecl
// Signature: CDoor * __cdecl core_door_cpp_CDoor_dtor_FUN_00478d70(CDoor *this_ptr,uint flags)

#include "nocturne.h"

CDoor * __cdecl core_door_cpp_CDoor_dtor_FUN_00478d70(CDoor *this_ptr,uint flags)

{
  CDoor *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CDoorTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = (CDoor *)core_actor_cpp_CDemonActor_dtor_FUN_00408730((CDemonActor *)this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
