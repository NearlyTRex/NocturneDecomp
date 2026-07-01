// Name: core_bugs.cpp_factoryFunc_FUN_00424c70
// Address: 00424c70
// Address Range: [[00424c70, 00424c92]]
// Convention: __cdecl
// Signature: CBugs * __cdecl core_bugs_cpp_factoryFunc_FUN_00424c70(void)

#include "nocturne.h"

CBugs * __cdecl core_bugs_cpp_factoryFunc_FUN_00424c70(void)

{
  CBugs *pCVar1;
  
  pCVar1 = (CBugs *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(0x199f8,"..\\core\\bugs.cpp",62);
  if (pCVar1 == (CBugs *)0x0) {
    return (CBugs *)0x0;
  }
  pCVar1 = core_bugs_cpp_CBugs_ctor_FUN_00424cb0(pCVar1);
  return pCVar1;
}
