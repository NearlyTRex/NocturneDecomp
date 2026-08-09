// Name: core_pendulum.cpp_factoryFuncPendulum_FUN_004f2c00
// Address: 004f2c00
// Address Range: [[004f2c00, 004f2c1b]]
// Convention: __cdecl
// Signature: CPendulum * __cdecl core_pendulum_cpp_factoryFuncPendulum_FUN_004f2c00(void)

#include "nocturne.h"

CPendulum * __cdecl core_pendulum_cpp_factoryFuncPendulum_FUN_004f2c00(void)

{
  CPendulum *pCVar1;
  
  pCVar1 = operator_new(0x43c);
  if (pCVar1 == (CPendulum *)0x0) {
    return (CPendulum *)0x0;
  }
  pCVar1 = core_pendulum_cpp_CPendulum_ctor_FUN_004f2c30(pCVar1);
  return pCVar1;
}
