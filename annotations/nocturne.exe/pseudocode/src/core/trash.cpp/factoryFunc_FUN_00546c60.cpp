// Name: core_trash.cpp_factoryFunc_FUN_00546c60
// Address: 00546c60
// Address Range: [[00546c60, 00546c7b]]
// Convention: __cdecl
// Signature: CTrash * __cdecl core_trash_cpp_factoryFunc_FUN_00546c60(void)

#include "nocturne.h"

CTrash * __cdecl core_trash_cpp_factoryFunc_FUN_00546c60(void)

{
  CTrash *pCVar1;
  
  pCVar1 = (CTrash *)FUN_0056497c(800);
  if (pCVar1 == (CTrash *)0x0) {
    return (CTrash *)0x0;
  }
  pCVar1 = core_trash_cpp_CTrash_ctor_FUN_00546c90(pCVar1);
  return pCVar1;
}
