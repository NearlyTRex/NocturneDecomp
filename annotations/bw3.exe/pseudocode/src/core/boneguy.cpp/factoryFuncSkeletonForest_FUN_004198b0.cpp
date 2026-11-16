// Name: core_boneguy.cpp_factoryFuncSkeletonForest_FUN_004198b0
// Address: 004198b0
// Address Range: [[004198b0, 004198cb]]
// Convention: __cdecl
// Signature: CSkeletonForest * __cdecl core_boneguy_cpp_factoryFuncSkeletonForest_FUN_004198b0(void)

#include "nocturne.h"

CSkeletonForest * __cdecl core_boneguy_cpp_factoryFuncSkeletonForest_FUN_004198b0(void)

{
  CSkeletonForest *pCVar1;
  
  pCVar1 = operator_new(0xd698);
  if (pCVar1 == (CSkeletonForest *)0x0) {
    return (CSkeletonForest *)0x0;
  }
  pCVar1 = core_boneguy_cpp_CSkeletonForest_ctor_FUN_004198e0(pCVar1);
  return pCVar1;
}
