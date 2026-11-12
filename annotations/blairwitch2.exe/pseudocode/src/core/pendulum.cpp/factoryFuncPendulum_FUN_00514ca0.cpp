// Name: core_pendulum.cpp_factoryFuncPendulum_FUN_00514ca0
// Address: 00514ca0
// Address Range: [[00514ca0, 00514cbb]]
// Convention: __cdecl
// Signature: CPendulum * __cdecl core_pendulum_cpp_factoryFuncPendulum_FUN_00514ca0(void)

#include "nocturne.h"

CPendulum * __cdecl core_pendulum_cpp_factoryFuncPendulum_FUN_00514ca0(void)

{
  CPendulum *pCVar1;
  
  pCVar1 = (CPendulum *)operator_new(0x5a0);
  if (pCVar1 == (CPendulum *)0x0) {
    return (CPendulum *)0x0;
  }
  pCVar1 = core_pendulum_cpp_CPendulum_ctor_FUN_00514cd0(pCVar1);
  return pCVar1;
}
