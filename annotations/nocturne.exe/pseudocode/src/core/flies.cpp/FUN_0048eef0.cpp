// Name: core_flies.cpp_FUN_0048eef0
// Address: 0048eef0
// Address Range: [[0048eef0, 0048efa5]]
// Convention: unknown
// Signature: int core_flies_cpp_FUN_0048eef0(CDemonActor *param_1)

#include "nocturne.h"

int core_flies_cpp_FUN_0048eef0(CDemonActor *param_1)

{
  CDemonActor *pCVar1;
  void *pvVar2;
  uint local_c [3];
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_00409d30(param_1);
  pvVar2 = __arrinit
                     (pCVar1[1].actor_name + 0x10,200,&g_SFlyTypeInfo_0059db10);
  *(CDemonActor_vtable **)((int)pvVar2 + -0x14) = &g_CFliesVTable;
  *(uint *)((int)pvVar2 + -4) = 0x14;
  if ((uint *)((int)pvVar2 + -0x10) != local_c) {
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
  return (int)pvVar2 + -0x160;
}
