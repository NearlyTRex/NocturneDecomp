// Name: core_boneguy.cpp_factoryFuncBaalSkel_FUN_00419a90
// Address: 00419a90
// Address Range: [[00419a90, 00419aab]]
// Convention: __cdecl
// Signature: CBaalSkel * __cdecl core_boneguy_cpp_factoryFuncBaalSkel_FUN_00419a90(void)

#include "nocturne.h"

CBaalSkel * __cdecl core_boneguy_cpp_factoryFuncBaalSkel_FUN_00419a90(void)

{
  CBaalSkel *pCVar1;
  
  pCVar1 = operator_new(0xd698);
  if (pCVar1 == (CBaalSkel *)0x0) {
    return (CBaalSkel *)0x0;
  }
  pCVar1 = core_boneguy_cpp_CBaalSkel_ctor_FUN_00419ac0(pCVar1);
  return pCVar1;
}
