// Name: core_barrier.cpp_CBarrier_ctor_FUN_004141c0
// Address: 004141c0
// Address Range: [[004141c0, 0041420a]]
// Convention: __cdecl
// Signature: CBarrier * core_barrier.cpp_CBarrier_ctor_FUN_004141c0(CBarrier * this_ptr)
// Cross-references:
//   core_barrier.cpp_constructor_FUN_00414180 (00414180) at 0041419a [UNCONDITIONAL_CALL]
// Globals:
//   CDemonActor_vtable g_CBarrierVTable
// Function calls:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0

#include "nocturne.h"

CBarrier * __cdecl core_barrier_cpp_CBarrier_ctor_FUN_004141c0(CBarrier *this_ptr)

{
  CBarrier *pCVar1;
  
  pCVar1 = (CBarrier *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  (pCVar1->base_actor).vtable = &g_CBarrierVTable;
  pCVar1->field1_0x158[8] = '\0';
  pCVar1->field1_0x158[9] = '\0';
  pCVar1->field1_0x158[10] = -0x60;
  pCVar1->field1_0x158[0xb] = '@';
  pCVar1->field1_0x158[0x10] = '\0';
  pCVar1->field1_0x158[0xc] = '\x01';
  pCVar1->field1_0x158[0xd] = '\0';
  pCVar1->field1_0x158[0xe] = '\0';
  pCVar1->field1_0x158[0xf] = '\0';
  *(undefined4 *)(pCVar1->field1_0x158 + 4) = *(undefined4 *)(pCVar1->field1_0x158 + 8);
  *(undefined4 *)pCVar1->field1_0x158 = *(undefined4 *)(pCVar1->field1_0x158 + 4);
  return pCVar1;
}


// Assembly code:
// 004141c0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_barrier.cpp_CBarrier_ctor_FUN_004141c0
//   XREF to: Stack[0x4] (READ)
// 004141c4: PUSH EDX
// 004141c5: CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   XREF to: 004088b0 (UNCONDITIONAL_CALL)
// 004141ca: MOV dword ptr [EAX + 0x154],0x65a354
//   XREF to: 0065a354 (DATA)
// 004141d4: MOV dword ptr [EAX + 0x160],0x40a00000
// 004141de: MOV byte ptr [EAX + 0x168],0x0
// 004141e5: MOV dword ptr [EAX + 0x164],0x1
// 004141ef: ADD ESP,0x4
// 004141f2: MOV EDX,dword ptr [EAX + 0x160]
// 004141f8: MOV dword ptr [EAX + 0x15c],EDX
// 004141fe: MOV EDX,dword ptr [EAX + 0x15c]
// 00414204: MOV dword ptr [EAX + 0x158],EDX
// 0041420a: RET
