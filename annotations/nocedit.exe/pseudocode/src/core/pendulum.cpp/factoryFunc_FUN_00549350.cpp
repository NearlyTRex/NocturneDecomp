// Name: core_pendulum.cpp_factoryFunc_FUN_00549350
// Address: 00549350
// Address Range: [[00549350, 00549372]]
// Convention: __cdecl
// Signature: CPendulum * core_pendulum.cpp_factoryFunc_FUN_00549350(void)

#include "nocturne.h"

CPendulum * __cdecl core_pendulum_cpp_factoryFunc_FUN_00549350(void)

{
  CPendulum *pCVar1;
  
  pCVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x444,"..\\core\\pendulum.cpp",0x2b);
  if (pCVar1 == (CPendulum *)0x0) {
    return (CPendulum *)0x0;
  }
  pCVar1 = core_pendulum_cpp_CPendulum_ctor_FUN_00549390(pCVar1);
  return pCVar1;
}
