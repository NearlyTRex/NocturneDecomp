// Name: core_barrier.cpp_CBarrier_dtor_FUN_00414670
// Address: 00414670
// Address Range: [[00414670, 004146bd]]
// Convention: __cdecl
// Signature: CBarrier * core_barrier.cpp_CBarrier_dtor_FUN_00414670(CBarrier * this_ptr, uint d1, uint d2)
// Globals:
//   WatcomTypeInfo g_CBarrierTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CBarrier * __cdecl core_barrier_cpp_CBarrier_dtor_FUN_00414670(CBarrier *this_ptr,uint d1,uint d2)

{
  CBarrier *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CBarrierTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CBarrier *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base_actor,1);
  if ((d2 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 00414670: PUSH EBX
//   Label: core_barrier.cpp_CBarrier_dtor_FUN_00414670
// 00414671: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00414675: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 0041467a: JNZ 0x00414696
//   XREF to: 00414696 (CONDITIONAL_JUMP)
// 0041467c: PUSH 0x1
// 0041467e: PUSH EBX
// 0041467f: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 00414684: ADD ESP,0x8
// 00414687: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0041468b: MOV EBX,EAX
// 0041468d: TEST DL,0x2
// 00414690: JNZ 0x004146b1
//   XREF to: 004146b1 (CONDITIONAL_JUMP)
// 00414692: MOV EAX,EBX
// 00414694: POP EBX
// 00414695: RET
// 00414696: PUSH 0x65a440
//   Label: LAB_00414696
//   XREF to: 0065a440 (DATA)
// 0041469b: PUSH EBX
// 0041469c: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 004146a1: ADD ESP,0x8
// 004146a4: PUSH EAX
// 004146a5: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 004146aa: ADD ESP,0x4
// 004146ad: MOV EAX,EBX
// 004146af: POP EBX
// 004146b0: RET
// 004146b1: PUSH EAX
//   Label: LAB_004146b1
// 004146b2: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 004146b7: ADD ESP,0x4
// 004146ba: MOV EAX,EBX
// 004146bc: POP EBX
// 004146bd: RET
