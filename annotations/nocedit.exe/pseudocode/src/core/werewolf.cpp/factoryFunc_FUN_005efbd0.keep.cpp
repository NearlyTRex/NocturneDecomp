// Name: core_werewolf.cpp_factoryFunc_FUN_005efbd0
// Address: 005efbd0
// MANUAL RECONSTRUCTION
// Address Range: [[005efbd0, 005efbf2]]
// Convention: __cdecl
// Signature: CWerewolf * __cdecl core_werewolf_cpp_factoryFunc_FUN_005efbd0(void)

#include "nocturne.h"

CWerewolf * __cdecl core_werewolf_cpp_factoryFunc_FUN_005efbd0(void)

{
  CWerewolf *pCVar1;
  
  pCVar1 = (CWerewolf *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0
                     (sizeof(CWerewolf),"..\\core\\werewolf.cpp",89);
  if (pCVar1 == (CWerewolf *)0x0) {
    return (CWerewolf *)0x0;
  }
  pCVar1 = core_werewolf_cpp_CWerewolf_ctor_FUN_005efc10(pCVar1);
  return pCVar1;
}
