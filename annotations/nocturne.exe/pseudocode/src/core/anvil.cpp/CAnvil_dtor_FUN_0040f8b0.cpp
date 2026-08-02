// Name: core_anvil.cpp_CAnvil_dtor_FUN_0040f8b0
// Address: 0040f8b0
// Address Range: [[0040f8b0, 0040f8fd]]
// Convention: __cdecl
// Signature: CAnvil * __cdecl core_anvil_cpp_CAnvil_dtor_FUN_0040f8b0(CAnvil *this_ptr,uint flags)

#include "nocturne.h"

CAnvil * __cdecl core_anvil_cpp_CAnvil_dtor_FUN_0040f8b0(CAnvil *this_ptr,uint flags)

{
  CAnvil *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CAnvilTypeInfo_00599770);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = (CAnvil *)core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_00564494(pCVar1);
  return pCVar1;
}
