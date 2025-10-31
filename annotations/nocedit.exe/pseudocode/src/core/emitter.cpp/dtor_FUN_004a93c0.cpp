// Name: core_emitter.cpp_dtor_FUN_004a93c0
// Address: 004a93c0
// Address Range: [[004a93c0, 004a940d]]
// Convention: __cdecl
// Signature: CEmitter * core_emitter.cpp_dtor_FUN_004a93c0(CEmitter * this_ptr, uint d1, uint d2)
// Globals:
//   WatcomTypeInfo g_CEmitterTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CEmitter * __cdecl core_emitter_cpp_dtor_FUN_004a93c0(CEmitter *this_ptr,uint d1,uint d2)

{
  CEmitter *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CEmitterTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CEmitter *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base_actor,1);
  if ((d2 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 004a93c0: PUSH EBX
//   Label: core_emitter.cpp_dtor_FUN_004a93c0
// 004a93c1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004a93c5: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 004a93ca: JNZ 0x004a93e6
//   XREF to: 004a93e6 (CONDITIONAL_JUMP)
// 004a93cc: PUSH 0x1
// 004a93ce: PUSH EBX
// 004a93cf: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 004a93d4: ADD ESP,0x8
// 004a93d7: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004a93db: MOV EBX,EAX
// 004a93dd: TEST DL,0x2
// 004a93e0: JNZ 0x004a9401
//   XREF to: 004a9401 (CONDITIONAL_JUMP)
// 004a93e2: MOV EAX,EBX
// 004a93e4: POP EBX
// 004a93e5: RET
// 004a93e6: PUSH 0x65d790
//   Label: LAB_004a93e6
//   XREF to: 0065d790 (DATA)
// 004a93eb: PUSH EBX
// 004a93ec: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 004a93f1: ADD ESP,0x8
// 004a93f4: PUSH EAX
// 004a93f5: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 004a93fa: ADD ESP,0x4
// 004a93fd: MOV EAX,EBX
// 004a93ff: POP EBX
// 004a9400: RET
// 004a9401: PUSH EAX
//   Label: LAB_004a9401
// 004a9402: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 004a9407: ADD ESP,0x4
// 004a940a: MOV EAX,EBX
// 004a940c: POP EBX
// 004a940d: RET
