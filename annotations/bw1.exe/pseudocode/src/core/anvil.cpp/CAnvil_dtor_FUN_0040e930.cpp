// Name: core_anvil.cpp_CAnvil_dtor_FUN_0040e930
// Address: 0040e930
// Address Range: [[0040e930, 0040e97d]]
// Convention: __cdecl
// Signature: CAnvil * __cdecl core_anvil_cpp_CAnvil_dtor_FUN_0040e930(CAnvil *this_ptr,uint flags)

#include "nocturne.h"

CAnvil * __cdecl core_anvil_cpp_CAnvil_dtor_FUN_0040e930(CAnvil *this_ptr,uint flags)

{
  CAnvil *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CAnvilTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = (CAnvil *)core_actor_cpp_CDemonActor_dtor_FUN_00408730(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
