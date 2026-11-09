// Name: core_barrier.cpp_CBarrier_ctor_FUN_0040eac0
// Address: 0040eac0
// Address Range: [[0040eac0, 0040eb0a]]
// Convention: __cdecl
// Signature: CBarrier * __cdecl core_barrier_cpp_CBarrier_ctor_FUN_0040eac0(CBarrier *this_ptr)

#include "nocturne.h"

CBarrier * __cdecl core_barrier_cpp_CBarrier_ctor_FUN_0040eac0(CBarrier *this_ptr)

{
  CBarrier *pCVar1;
  
  pCVar1 = (CBarrier *)core_actor_cpp_CDemonActor_ctor_FUN_00408600((CDemonActor *)this_ptr);
  *(byte **)&pCVar1->field_0x154 = &g_CBarrierVTable;
  *(uint *)&pCVar1->field_0x160 = 0x40a00000;
  pCVar1->field_0x168 = 0;
  *(uint *)&pCVar1->field_0x164 = 1;
  *(uint *)&pCVar1->field_0x15c = *(uint *)&pCVar1->field_0x160;
  *(uint *)&pCVar1->field_0x158 = *(uint *)&pCVar1->field_0x15c;
  return pCVar1;
}
