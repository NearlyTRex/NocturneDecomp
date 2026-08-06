// Name: core_anvil.cpp_CAnvil_dtor_FUN_0040f8b0
// Address: 0040f8b0
// Address Range: [[0040f8b0, 0040f8fd]]
// Convention: __cdecl
// Signature: CAnvil * __cdecl core_anvil_cpp_CAnvil_dtor_FUN_0040f8b0(CAnvil *this_ptr,uint flags)

#include "nocturne.h"

CAnvil * __cdecl core_anvil_cpp_CAnvil_dtor_FUN_0040f8b0(CAnvil *this_ptr,uint flags)

{
  CAnvil *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CAnvilTypeInfo_00599770);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  ptr = (CAnvil *)core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  operator_delete(ptr);
  return ptr;
}
