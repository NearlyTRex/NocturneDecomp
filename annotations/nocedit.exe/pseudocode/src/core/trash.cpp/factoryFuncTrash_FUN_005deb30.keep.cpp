// Name: core_trash.cpp_factoryFuncTrash_FUN_005deb30
// Address: 005deb30
// MANUAL RECONSTRUCTION
// Address Range: [[005deb30, 005deb52]]
// Convention: __cdecl
// Signature: CTrash * __cdecl core_trash_cpp_factoryFuncTrash_FUN_005deb30(void)

#include "nocturne.h"

CTrash * __cdecl core_trash_cpp_factoryFuncTrash_FUN_005deb30(void)

{
  CTrash *pCVar1;
  
  pCVar1 = (CTrash *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(sizeof(CTrash),"..\\core\\trash.cpp",67);
  if (pCVar1 == (CTrash *)0x0) {
    return (CTrash *)0x0;
  }
  pCVar1 = core_trash_cpp_CTrash_ctor_FUN_005deb70(pCVar1);
  return pCVar1;
}
