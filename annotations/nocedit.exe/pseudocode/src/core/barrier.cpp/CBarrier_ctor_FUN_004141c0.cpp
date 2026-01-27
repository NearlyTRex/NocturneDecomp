// Name: core_barrier.cpp_CBarrier_ctor_FUN_004141c0
// Address: 004141c0
// Address Range: [[004141c0, 0041420a]]
// Convention: __cdecl
// Signature: CBarrier * core_barrier.cpp_CBarrier_ctor_FUN_004141c0(CBarrier * this_ptr)

#include "nocturne.h"

CBarrier * __cdecl core_barrier_cpp_CBarrier_ctor_FUN_004141c0(CBarrier *this_ptr)

{
  CBarrier *pCVar1;
  
  pCVar1 = (CBarrier *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  (pCVar1->base).vtable._ub = &g_CBarrierVTable;
  pCVar1->unk[8] = '\0';
  pCVar1->unk[9] = '\0';
  pCVar1->unk[10] = -0x60;
  pCVar1->unk[0xb] = '@';
  pCVar1->unk[0x10] = '\0';
  pCVar1->unk[0xc] = '\x01';
  pCVar1->unk[0xd] = '\0';
  pCVar1->unk[0xe] = '\0';
  pCVar1->unk[0xf] = '\0';
  *(uint *)(pCVar1->unk + 4) = *(uint *)(pCVar1->unk + 8);
  *(uint *)pCVar1->unk = *(uint *)(pCVar1->unk + 4);
  return pCVar1;
}
