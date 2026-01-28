// Name: core_hotdemon.cpp_factoryFunc_FUN_004f6c60
// Address: 004f6c60
// Address Range: [[004f6c60, 004f6c82]]
// Convention: __cdecl
// Signature: CHotDemon * __cdecl core_hotdemon_cpp_factoryFunc_FUN_004f6c60(void)

#include "nocturne.h"

CHotDemon * __cdecl core_hotdemon_cpp_factoryFunc_FUN_004f6c60(void)

{
  CHotDemon *pCVar1;
  
  pCVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xbef0,"..\\core\\hotdemon.cpp",0x54);
  if (pCVar1 == (CHotDemon *)0x0) {
    return (CHotDemon *)0x0;
  }
  pCVar1 = core_hotdemon_cpp_CHotDemon_ctor_FUN_004f6ca0(pCVar1);
  return pCVar1;
}
