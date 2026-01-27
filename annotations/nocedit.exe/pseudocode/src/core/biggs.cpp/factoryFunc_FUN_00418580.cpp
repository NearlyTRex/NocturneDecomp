// Name: core_biggs.cpp_factoryFunc_FUN_00418580
// Address: 00418580
// Address Range: [[00418580, 004185a2]]
// Convention: __cdecl
// Signature: CBiggs * core_biggs.cpp_factoryFunc_FUN_00418580(void)

#include "nocturne.h"

CBiggs * __cdecl core_biggs_cpp_factoryFunc_FUN_00418580(void)

{
  CBiggs *pCVar1;
  
  pCVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xccd0,"..\\core\\biggs.cpp",0x52);
  if (pCVar1 == (CBiggs *)0x0) {
    return (CBiggs *)0x0;
  }
  pCVar1 = core_biggs_cpp_CBiggs_ctor_FUN_004185c0(pCVar1);
  return pCVar1;
}
