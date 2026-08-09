// Name: core_pendulum.cpp_factoryFuncPendulum_FUN_00549350
// Address: 00549350
// MANUAL RECONSTRUCTION
// Address Range: [[00549350, 00549372]]
// Convention: __cdecl
// Signature: CPendulum * __cdecl core_pendulum_cpp_factoryFuncPendulum_FUN_00549350(void)

#include "nocturne.h"

CPendulum * __cdecl core_pendulum_cpp_factoryFuncPendulum_FUN_00549350(void)

{
  CPendulum *pCVar1;
  
  pCVar1 = (CPendulum *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(sizeof(CPendulum),"..\\core\\pendulum.cpp",43)
  ;
  if (pCVar1 == (CPendulum *)0x0) {
    return (CPendulum *)0x0;
  }
  pCVar1 = core_pendulum_cpp_CPendulum_ctor_FUN_00549390(pCVar1);
  return pCVar1;
}
