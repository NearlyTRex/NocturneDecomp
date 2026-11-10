// Name: core_necklace.cpp_CNecklace_ctor_FUN_005adab0
// Address: 005adab0
// Address Range: [[005adab0, 005adac7]]
// Convention: unknown
// Signature: CNecklace * core_necklace_cpp_CNecklace_ctor_FUN_005adab0(CNecklace *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CNecklace * core_necklace_cpp_CNecklace_ctor_FUN_005adab0(CNecklace *this_ptr)

{
  CBoxActor *pCVar1;
  
  pCVar1 = core_boxactor_cpp_CBoxActor_ctor_FUN_0041bd30((CBoxActor *)this_ptr);
  (pCVar1->base).vtable._ub = &g_CNecklaceVTable;
  return (CNecklace *)pCVar1;
}
