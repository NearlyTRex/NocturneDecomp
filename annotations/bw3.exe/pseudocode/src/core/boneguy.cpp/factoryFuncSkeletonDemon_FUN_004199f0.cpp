// Name: core_boneguy.cpp_factoryFuncSkeletonDemon_FUN_004199f0
// Address: 004199f0
// Address Range: [[004199f0, 00419a0b]]
// Convention: __cdecl
// Signature: CSkeletonDemon * __cdecl core_boneguy_cpp_factoryFuncSkeletonDemon_FUN_004199f0(void)

#include "nocturne.h"

CSkeletonDemon * __cdecl core_boneguy_cpp_factoryFuncSkeletonDemon_FUN_004199f0(void)

{
  CSkeletonDemon *pCVar1;
  
  pCVar1 = operator_new(0xd698);
  if (pCVar1 == (CSkeletonDemon *)0x0) {
    return (CSkeletonDemon *)0x0;
  }
  pCVar1 = core_boneguy_cpp_CSkeletonDemon_ctor_FUN_00419a20(pCVar1);
  return pCVar1;
}
