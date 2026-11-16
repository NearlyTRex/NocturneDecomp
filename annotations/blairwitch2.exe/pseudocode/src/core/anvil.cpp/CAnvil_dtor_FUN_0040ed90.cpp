// Name: core_anvil.cpp_CAnvil_dtor_FUN_0040ed90
// Address: 0040ed90
// Address Range: [[0040ed90, 0040eddd]]
// Convention: __cdecl
// Signature: CAnvil * __cdecl core_anvil_cpp_CAnvil_dtor_FUN_0040ed90(CAnvil *this_ptr,uint flags)

#include "nocturne.h"

CAnvil * __cdecl core_anvil_cpp_CAnvil_dtor_FUN_0040ed90(CAnvil *this_ptr,uint flags)

{
  CAnvil *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CAnvilTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CAnvil *)core_actor_cpp_CDemonActor_dtor_FUN_00408930(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
