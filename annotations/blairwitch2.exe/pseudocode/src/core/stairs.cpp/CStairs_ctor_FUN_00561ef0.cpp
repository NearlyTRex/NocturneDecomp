// Name: core_stairs.cpp_CStairs_ctor_FUN_00561ef0
// Address: 00561ef0
// Address Range: [[00561ef0, 00561f52]]
// Convention: __cdecl
// Signature: CStairs * __cdecl core_stairs_cpp_CStairs_ctor_FUN_00561ef0(CStairs *this_ptr)

#include "nocturne.h"

CStairs * __cdecl core_stairs_cpp_CStairs_ctor_FUN_00561ef0(CStairs *this_ptr)

{
  CDemonActor *pCVar1;
  int iVar2;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_00408790(&this_ptr->base);
  iVar2 = __arrinit
                    (pCVar1[1].actor_name + 0x18,0x28,&g_CDemonTriangleTypeInfo);
  *(CDemonActor_vtable **)(iVar2 + -0x1c) = &g_CStairsVTable;
  *(uint *)(iVar2 + -0x18) = 0x3f800000;
  *(uint *)(iVar2 + -0x14) = 0x3f800000;
  *(uint *)(iVar2 + -0x10) = 0x40400000;
  *(uint *)(iVar2 + -4) = 5;
  *(uint *)(iVar2 + -0xc) = 0x3f000000;
  *(uint *)(iVar2 + -8) = 0x3e99999a;
  *(uint *)(iVar2 + 0x8c0) = 0;
  return (CStairs *)(iVar2 + -0x2cc);
}
