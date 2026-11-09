// Name: core_flies.cpp_CFlies_ctor_FUN_004ad7b0
// Address: 004ad7b0
// Address Range: [[004ad7b0, 004ad865]]
// Convention: __cdecl
// Signature: CFlies * __cdecl core_flies_cpp_CFlies_ctor_FUN_004ad7b0(CFlies *this_ptr)

#include "nocturne.h"

CFlies * __cdecl core_flies_cpp_CFlies_ctor_FUN_004ad7b0(CFlies *this_ptr)

{
  CDemonActor *pCVar1;
  int iVar2;
  uint local_c [3];
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_00408600((CDemonActor *)this_ptr);
  iVar2 = __arrinit(&pCVar1[1].field_0x10,200,&g_SFlyTypeInfo);
  *(byte ***)(iVar2 + -0x14) = &g_CFliesVTable;
  *(uint *)(iVar2 + -4) = 0x14;
  if ((uint *)(iVar2 + -0x10) != local_c) {
    *(uint *)(iVar2 + -0x10) = 0x40a00000;
    *(uint *)(iVar2 + -0xc) = 0x40a00000;
    *(uint *)(iVar2 + -8) = 0x40a00000;
  }
  *(uint *)(iVar2 + 0x28ac) = 0;
  *(uint *)(iVar2 + 0x28a8) = 0;
  *(uint *)(iVar2 + 0x28a0) = 0;
  *(uint *)(iVar2 + 0x28b0) = 0;
  *(uint *)(iVar2 + 0x28b4) = 1;
  *(uint *)(iVar2 + 0x28a4) = 0;
  return (CFlies *)(iVar2 + -0x168);
}
