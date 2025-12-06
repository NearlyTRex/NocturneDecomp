// Name: core_flies.cpp_FUN_004cbd60
// Address: 004cbd60
// Address Range: [[004cbd60, 004cbe15]]
// Convention: __cdecl
// Signature: CFlies * core_flies.cpp_FUN_004cbd60(CFlies * this_ptr)

#include "nocturne.h"

CFlies * __cdecl core_flies_cpp_FUN_004cbd60(CFlies *this_ptr)

{
  CDemonActor *pCVar1;
  void *pvVar2;
  BADSPACEBASE *in_ESP;
  uint local_4;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  pvVar2 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     (pCVar1[1].actor_name + 0x10,200,&g_SFlyTypeInfo);
  *(CDemonActor_vtable **)((int)pvVar2 + -0x14) = &PTR_core_flies_cpp_FUN_004cbe20_0065e524;
  *(uint *)((int)pvVar2 + -4) = 0x14;
  if ((uint *)((int)pvVar2 + -0x10) != &local_4) {
    *(uint *)((int)pvVar2 + -0x10) = 0x40a00000;
    *(uint *)((int)pvVar2 + -0xc) = 0x40a00000;
    *(uint *)((int)pvVar2 + -8) = 0x40a00000;
  }
  *(uint *)((int)pvVar2 + 0x28ac) = 0;
  *(uint *)((int)pvVar2 + 0x28a8) = 0;
  *(uint *)((int)pvVar2 + 0x28a0) = 0;
  *(uint *)((int)pvVar2 + 0x28b0) = 0;
  *(uint *)((int)pvVar2 + 0x28b4) = 1;
  *(uint *)((int)pvVar2 + 0x28a4) = 0;
  return (CFlies *)((int)pvVar2 + -0x168);
}
