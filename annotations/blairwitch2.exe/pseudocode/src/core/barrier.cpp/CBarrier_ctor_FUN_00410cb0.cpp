// Name: core_barrier.cpp_CBarrier_ctor_FUN_00410cb0
// Address: 00410cb0
// Address Range: [[00410cb0, 00410cfa]]
// Convention: __cdecl
// Signature: CBarrier * __cdecl core_barrier_cpp_CBarrier_ctor_FUN_00410cb0(CBarrier *this_ptr)

#include "nocturne.h"

CBarrier * __cdecl core_barrier_cpp_CBarrier_ctor_FUN_00410cb0(CBarrier *this_ptr)

{
  CBarrier *pCVar1;
  
  pCVar1 = (CBarrier *)core_actor_cpp_CDemonActor_ctor_FUN_00408790((CDemonActor *)this_ptr);
  *(byte **)&pCVar1->field_0x2b0 = &g_CBarrierVTable;
  *(uint *)&pCVar1->field_0x2bc = 0x40a00000;
  pCVar1->field_0x2c4 = 0;
  *(uint *)&pCVar1->field_0x2c0 = 1;
  *(uint *)&pCVar1->field_0x2b8 = *(uint *)&pCVar1->field_0x2bc;
  *(uint *)&pCVar1->field_0x2b4 = *(uint *)&pCVar1->field_0x2b8;
  return pCVar1;
}
