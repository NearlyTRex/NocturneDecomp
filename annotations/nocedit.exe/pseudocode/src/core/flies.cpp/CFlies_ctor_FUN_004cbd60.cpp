// Name: core_flies.cpp_CFlies_ctor_FUN_004cbd60
// Address: 004cbd60
// Address Range: [[004cbd60, 004cbe15]]
// Convention: __cdecl
// Signature: CFlies * __cdecl core_flies_cpp_CFlies_ctor_FUN_004cbd60(CFlies *this_ptr)

#include "nocturne.h"

CFlies * __cdecl core_flies_cpp_CFlies_ctor_FUN_004cbd60(CFlies *this_ptr)

{
  CFlies *pCVar1;
  void *pvVar1;
  uint local_c [3];
  
  pCVar1 = (CFlies *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  pvVar1 = __arrinit(pCVar1->unk1,200,&g_SFlyTypeInfo);
  *(CDemonActor_vtable **)((int)pvVar1 + -0x14) = &g_CFliesVTable;
  *(uint *)((int)pvVar1 + -4) = 0x14;
  if ((uint *)((int)pvVar1 + -0x10) != local_c) {
    *(uint *)((int)pvVar1 + -0x10) = 0x40a00000;
    *(uint *)((int)pvVar1 + -0xc) = 0x40a00000;
    *(uint *)((int)pvVar1 + -8) = 0x40a00000;
  }
  *(uint *)((int)pvVar1 + 0x28ac) = 0;
  *(uint *)((int)pvVar1 + 0x28a8) = 0;
  *(uint *)((int)pvVar1 + 0x28a0) = 0;
  *(uint *)((int)pvVar1 + 0x28b0) = 0;
  *(uint *)((int)pvVar1 + 0x28b4) = 1;
  *(uint *)((int)pvVar1 + 0x28a4) = 0;
  return (CFlies *)((int)pvVar1 + -0x168);
}
