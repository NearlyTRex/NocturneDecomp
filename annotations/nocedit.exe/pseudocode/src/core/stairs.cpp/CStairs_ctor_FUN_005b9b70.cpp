// Name: core_stairs.cpp_CStairs_ctor_FUN_005b9b70
// Address: 005b9b70
// Address Range: [[005b9b70, 005b9bd2]]
// Convention: __cdecl
// Signature: CStairs * core_stairs.cpp_CStairs_ctor_FUN_005b9b70(CStairs * this_ptr)
// Cross-references:
//   core_stairs.cpp_FUN_005b9b30 (005b9b30) at 005b9b4a [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_CDemonTriangleTypeInfo
//   CDemonActor_vtable g_CStairsVTable
// Function calls:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

CStairs * __cdecl core_stairs_cpp_CStairs_ctor_FUN_005b9b70(CStairs *this_ptr)

{
  CDemonActor *pCVar1;
  void *pvVar2;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  pvVar2 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     (pCVar1[1].actor_name + 0x18,0x28,&g_CDemonTriangleTypeInfo);
  *(CDemonActor_vtable **)((int)pvVar2 + -0x1c) = &g_CStairsVTable;
  *(undefined4 *)((int)pvVar2 + -0x18) = 0x3f800000;
  *(undefined4 *)((int)pvVar2 + -0x14) = 0x3f800000;
  *(undefined4 *)((int)pvVar2 + -0x10) = 0x40400000;
  *(undefined4 *)((int)pvVar2 + -4) = 5;
  *(undefined4 *)((int)pvVar2 + -0xc) = 0x3f000000;
  *(undefined4 *)((int)pvVar2 + -8) = 0x3e99999a;
  *(undefined4 *)((int)pvVar2 + 0x8c0) = 0;
  return (CStairs *)((int)pvVar2 + -0x170);
}


// Assembly code:
// 005b9b70: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_stairs.cpp_CStairs_ctor_FUN_005b9b70
//   XREF to: Stack[0x4] (READ)
// 005b9b74: PUSH EAX
// 005b9b75: CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   XREF to: 004088b0 (UNCONDITIONAL_CALL)
// 005b9b7a: ADD ESP,0x4
// 005b9b7d: PUSH 0x65c990
//   XREF to: 0065c990 (DATA)
// 005b9b82: PUSH 0x28
// 005b9b84: ADD EAX,0x170
// 005b9b89: PUSH EAX
// 005b9b8a: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 005b9b8f: MOV dword ptr [EAX + -0x1c],0x6634d4
//   XREF to: 006634d4 (DATA)
// 005b9b96: MOV dword ptr [EAX + -0x18],0x3f800000
// 005b9b9d: MOV dword ptr [EAX + -0x14],0x3f800000
// 005b9ba4: MOV dword ptr [EAX + -0x10],0x40400000
// 005b9bab: MOV dword ptr [EAX + -0x4],0x5
// 005b9bb2: MOV dword ptr [EAX + -0xc],0x3f000000
// 005b9bb9: MOV dword ptr [EAX + -0x8],0x3e99999a
// 005b9bc0: ADD ESP,0xc
// 005b9bc3: MOV dword ptr [EAX + 0x8c0],0x0
// 005b9bcd: SUB EAX,0x170
// 005b9bd2: RET
