// Name: core_minecar.cpp_FUN_00520e50
// Address: 00520e50
// Address Range: [[00520e50, 00520e7c]]
// Convention: unknown
// Signature: undefined core_minecar.cpp_FUN_00520e50()

#include "nocturne.h"

void core_minecar_cpp_FUN_00520e50(void)

{
  CPlatform *pCVar1;
  
  pCVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x730,"..\\core\\minecar.cpp",0x39);
  if (pCVar1 == (CPlatform *)0x0) {
    return;
  }
  pCVar1 = core_platfrm_cpp_FUN_0054c850(pCVar1);
  (pCVar1->base_actor).vtable._ub = &PTR_core_minecar_cpp_FUN_006615d4;
  return;
}
