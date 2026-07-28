// Name: core_manpuz.cpp_SGem_dtor_FUN_004cbef0
// Address: 004cbef0
// Address Range: [[004cbef0, 004cbf05]]
// Convention: unknown
// Signature: int * core_manpuz_cpp_SGem_dtor_FUN_004cbef0(int param_1)

#include "nocturne.h"

int * core_manpuz_cpp_SGem_dtor_FUN_004cbef0(int param_1)

{
  CDemonTriangle *pCVar1;
  
  pCVar1 = core_manpuz_cpp_CDemonTriangle_arrdtor_FUN_004cc000((CDemonTriangle *)(param_1 + 0x3c),0)
  ;
  return &pCVar1[-2].dominant_axis;
}
