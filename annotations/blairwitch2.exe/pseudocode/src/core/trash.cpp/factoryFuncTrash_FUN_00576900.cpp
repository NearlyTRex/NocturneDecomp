// Name: core_trash.cpp_factoryFuncTrash_FUN_00576900
// Address: 00576900
// Address Range: [[00576900, 0057691b]]
// Convention: __cdecl
// Signature: CTrash * __cdecl core_trash_cpp_factoryFuncTrash_FUN_00576900(void)

#include "nocturne.h"

CTrash * __cdecl core_trash_cpp_factoryFuncTrash_FUN_00576900(void)

{
  CTrash *pCVar1;
  
  pCVar1 = (CTrash *)operator_new(0x484);
  if (pCVar1 == (CTrash *)0x0) {
    return (CTrash *)0x0;
  }
  pCVar1 = core_trash_cpp_CTrash_ctor_FUN_00576930(pCVar1);
  return pCVar1;
}
