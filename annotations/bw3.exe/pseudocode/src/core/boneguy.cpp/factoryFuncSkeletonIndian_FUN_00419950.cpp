// Name: core_boneguy.cpp_factoryFuncSkeletonIndian_FUN_00419950
// Address: 00419950
// Address Range: [[00419950, 0041996b]]
// Convention: __cdecl
// Signature: CSkeletonIndian * __cdecl core_boneguy_cpp_factoryFuncSkeletonIndian_FUN_00419950(void)

#include "nocturne.h"

CSkeletonIndian * __cdecl core_boneguy_cpp_factoryFuncSkeletonIndian_FUN_00419950(void)

{
  CSkeletonIndian *pCVar1;
  
  pCVar1 = (CSkeletonIndian *)operator_new(0xd698);
  if (pCVar1 == (CSkeletonIndian *)0x0) {
    return (CSkeletonIndian *)0x0;
  }
  pCVar1 = core_boneguy_cpp_CSkeletonIndian_ctor_FUN_00419980(pCVar1);
  return pCVar1;
}
