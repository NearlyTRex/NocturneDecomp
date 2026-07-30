// Name: core_stairs.cpp_FUN_005347b0
// Address: 005347b0
// Address Range: [[005347b0, 00534812]]
// Convention: unknown
// Signature: int core_stairs_cpp_FUN_005347b0(CDemonActor *param_1)

#include "nocturne.h"

int core_stairs_cpp_FUN_005347b0(CDemonActor *param_1)

{
  CDemonActor *pCVar1;
  void *pvVar2;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_00409d30(param_1);
  pvVar2 = __arrinit
                     (pCVar1[1].actor_name + 0x18,0x28,&g_CDemonTriangleTypeInfo_0059c080);
  *(CDemonActor_vtable **)((int)pvVar2 + -0x1c) = &g_CStairsVTable;
  *(uint *)((int)pvVar2 + -0x18) = 0x3f800000;
  *(uint *)((int)pvVar2 + -0x14) = 0x3f800000;
  *(uint *)((int)pvVar2 + -0x10) = 0x40400000;
  *(uint *)((int)pvVar2 + -4) = 5;
  *(uint *)((int)pvVar2 + -0xc) = 0x3f000000;
  *(uint *)((int)pvVar2 + -8) = 0x3e99999a;
  *(uint *)((int)pvVar2 + 0x8c0) = 0;
  return (int)pvVar2 + -0x168;
}
