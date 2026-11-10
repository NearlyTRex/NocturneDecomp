// Name: core_anvil.cpp_CAnvil_dtor_FUN_0040ed90
// Address: 0040ed90
// Address Range: [[0040ed90, 0040eddd]]
// Convention: __cdecl
// Signature: CAnvil * __cdecl core_anvil_cpp_CAnvil_dtor_FUN_0040ed90(CAnvil *this_ptr,uint flags)

#include "nocturne.h"

CAnvil * __cdecl core_anvil_cpp_CAnvil_dtor_FUN_0040ed90(CAnvil *this_ptr,uint flags)

{
  CAnvil *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CAnvilTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = (CAnvil *)core_actor_cpp_CDemonActor_dtor_FUN_00408930(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
