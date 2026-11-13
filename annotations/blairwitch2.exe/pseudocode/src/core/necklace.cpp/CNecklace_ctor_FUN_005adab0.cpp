// Name: core_necklace.cpp_CNecklace_ctor_FUN_005adab0
// Address: 005adab0
// Address Range: [[005adab0, 005adac7]]
// Convention: __cdecl
// Signature: CNecklace * __cdecl core_necklace_cpp_CNecklace_ctor_FUN_005adab0(CNecklace *this_ptr)

#include "nocturne.h"

CNecklace * __cdecl core_necklace_cpp_CNecklace_ctor_FUN_005adab0(CNecklace *this_ptr)

{
  CBoxActor *pCVar1;
  
  pCVar1 = core_boxactor_cpp_CBoxActor_ctor_FUN_0041bd30(&this_ptr->base);
  (pCVar1->base).vtable._ub = &g_CNecklaceVTable;
  return (CNecklace *)pCVar1;
}
