// Name: core_pendulum.cpp_factoryFuncPendulum_FUN_0050dcd0
// Address: 0050dcd0
// Address Range: [[0050dcd0, 0050dceb]]
// Convention: __cdecl
// Signature: CPendulum * __cdecl core_pendulum_cpp_factoryFuncPendulum_FUN_0050dcd0(void)

#include "nocturne.h"

CPendulum * __cdecl core_pendulum_cpp_factoryFuncPendulum_FUN_0050dcd0(void)

{
  CPendulum *pCVar1;
  
  pCVar1 = (CPendulum *)operator_new(0x444);
  if (pCVar1 == (CPendulum *)0x0) {
    return (CPendulum *)0x0;
  }
  pCVar1 = core_pendulum_cpp_CPendulum_ctor_FUN_0050dd00(pCVar1);
  return pCVar1;
}
