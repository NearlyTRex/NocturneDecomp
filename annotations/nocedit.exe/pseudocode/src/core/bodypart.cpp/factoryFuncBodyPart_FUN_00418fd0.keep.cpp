// Name: core_bodypart.cpp_factoryFuncBodyPart_FUN_00418fd0
// Address: 00418fd0
// MANUAL RECONSTRUCTION
// Address Range: [[00418fd0, 00418ff2]]
// Convention: __cdecl
// Signature: CBodyPart * __cdecl core_bodypart_cpp_factoryFuncBodyPart_FUN_00418fd0(void)

#include "nocturne.h"

CBodyPart * __cdecl core_bodypart_cpp_factoryFuncBodyPart_FUN_00418fd0(void)

{
  CBodyPart *pCVar1;
  
  pCVar1 = (CBodyPart *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(sizeof(CBodyPart),"..\\core\\bodypart.cpp",124)
  ;
  if (pCVar1 == (CBodyPart *)0x0) {
    return (CBodyPart *)0x0;
  }
  pCVar1 = core_bodypart_cpp_CBodyPart_ctor_FUN_00419010(pCVar1);
  return pCVar1;
}
