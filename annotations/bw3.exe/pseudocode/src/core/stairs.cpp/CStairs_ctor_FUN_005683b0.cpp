// Name: core_stairs.cpp_CStairs_ctor_FUN_005683b0
// Address: 005683b0
// Address Range: [[005683b0, 00568412]]
// Convention: __cdecl
// Signature: CStairs * __cdecl core_stairs_cpp_CStairs_ctor_FUN_005683b0(CStairs *this_ptr)

#include "nocturne.h"

CStairs * __cdecl core_stairs_cpp_CStairs_ctor_FUN_005683b0(CStairs *this_ptr)

{
  CDemonActor *pCVar1;
  void *pvVar2;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_00408600(&this_ptr->base);
  pvVar2 = __arrinit
                     (pCVar1[1].actor_name + 0x18,0x28,&g_CDemonTriangleTypeInfo);
  *(CDemonActor_vtable **)((int)pvVar2 + -0x1c) = &g_CStairsVTable;
  *(uint *)((int)pvVar2 + -0x18) = 0x3f800000;
  *(uint *)((int)pvVar2 + -0x14) = 0x3f800000;
  *(uint *)((int)pvVar2 + -0x10) = 0x40400000;
  *(uint *)((int)pvVar2 + -4) = 5;
  *(uint *)((int)pvVar2 + -0xc) = 0x3f000000;
  *(uint *)((int)pvVar2 + -8) = 0x3e99999a;
  *(uint *)((int)pvVar2 + 0x8c0) = 0;
  return (CStairs *)((int)pvVar2 + -0x170);
}
