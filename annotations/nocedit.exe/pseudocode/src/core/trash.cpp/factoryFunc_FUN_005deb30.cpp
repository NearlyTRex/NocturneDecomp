// Name: core_trash.cpp_factoryFunc_FUN_005deb30
// Address: 005deb30
// Address Range: [[005deb30, 005deb52]]
// Convention: __cdecl
// Signature: CTrash * core_trash.cpp_factoryFunc_FUN_005deb30(void)

#include "nocturne.h"

CTrash * __cdecl core_trash_cpp_factoryFunc_FUN_005deb30(void)

{
  CTrash *pCVar1;
  
  pCVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x328,"..\\core\\trash.cpp",0x43);
  if (pCVar1 == (CTrash *)0x0) {
    return (CTrash *)0x0;
  }
  pCVar1 = core_trash_cpp_CTrash_ctor_FUN_005deb70(pCVar1);
  return pCVar1;
}
