// Name: core_wateract.cpp_CLava_ctor_FUN_00579020
// Address: 00579020
// Address Range: [[00579020, 00579041]]
// Convention: __cdecl
// Signature: CLava * __cdecl core_wateract_cpp_CLava_ctor_FUN_00579020(CLava *this_ptr)

#include "nocturne.h"

CLava * __cdecl core_wateract_cpp_CLava_ctor_FUN_00579020(CLava *this_ptr)

{
  CWaterActor *pCVar1;
  
  pCVar1 = core_wateract_cpp_CWaterActor_ctor_FUN_00577d90(&this_ptr->base);
  (pCVar1->base).vtable._ub = &g_CLavaVTable;
  pCVar1->is_lava = 1;
  return (CLava *)pCVar1;
}
