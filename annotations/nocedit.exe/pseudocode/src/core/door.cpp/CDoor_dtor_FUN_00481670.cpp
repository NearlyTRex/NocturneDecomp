// Name: core_door.cpp_CDoor_dtor_FUN_00481670
// Address: 00481670
// Address Range: [[00481670, 004816bd]]
// Convention: __cdecl
// Signature: CDoor * __cdecl core_door_cpp_CDoor_dtor_FUN_00481670(CDoor *this_ptr,uint d1,uint d2)

#include "nocturne.h"

CDoor * __cdecl core_door_cpp_CDoor_dtor_FUN_00481670(CDoor *this_ptr,uint d1,uint d2)

{
  CDoor *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CDoorTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CDoor *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base,1);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
