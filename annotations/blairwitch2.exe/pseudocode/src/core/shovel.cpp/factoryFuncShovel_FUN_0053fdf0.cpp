// Name: core_shovel.cpp_factoryFuncShovel_FUN_0053fdf0
// Address: 0053fdf0
// Address Range: [[0053fdf0, 0053fe0b]]
// Convention: __cdecl
// Signature: CShovel * __cdecl core_shovel_cpp_factoryFuncShovel_FUN_0053fdf0(void)

#include "nocturne.h"

CShovel * __cdecl core_shovel_cpp_factoryFuncShovel_FUN_0053fdf0(void)

{
  CShovel *pCVar1;
  
  pCVar1 = (CShovel *)operator_new(0x6d4);
  if (pCVar1 == (CShovel *)0x0) {
    return (CShovel *)0x0;
  }
  pCVar1 = core_shovel_cpp_CShovel_ctor_FUN_0053fe20(pCVar1);
  return pCVar1;
}
