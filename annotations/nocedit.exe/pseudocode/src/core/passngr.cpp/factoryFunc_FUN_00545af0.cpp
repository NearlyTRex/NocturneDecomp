// Name: core_passngr.cpp_factoryFunc_FUN_00545af0
// Address: 00545af0
// Address Range: [[00545af0, 00545b12]]
// Convention: __cdecl
// Signature: CPassenger * __cdecl core_passngr_cpp_factoryFunc_FUN_00545af0(void)

#include "nocturne.h"

CPassenger * __cdecl core_passngr_cpp_factoryFunc_FUN_00545af0(void)

{
  CPassenger *pCVar1;
  
  pCVar1 = (CPassenger *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0
                     (0x20448,"..\\core\\passngr.cpp",67);
  if (pCVar1 == (CPassenger *)0x0) {
    return (CPassenger *)0x0;
  }
  pCVar1 = core_passngr_cpp_CPassenger_ctor_FUN_00545b30(pCVar1);
  return pCVar1;
}
