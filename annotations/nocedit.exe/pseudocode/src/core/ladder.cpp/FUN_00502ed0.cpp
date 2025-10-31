// Name: core_ladder.cpp_FUN_00502ed0
// Address: 00502ed0
// Address Range: [[00502ed0, 00502f1d]]
// Convention: __cdecl
// Signature: CLadder * core_ladder.cpp_FUN_00502ed0(CLadder * this_ptr, uint d1, uint d2)
// Globals:
//   WatcomTypeInfo g_CLadderTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CLadder * __cdecl core_ladder_cpp_FUN_00502ed0(CLadder *this_ptr,uint d1,uint d2)

{
  CLadder *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CLadderTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CLadder *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base_actor,1);
  if ((d2 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 00502ed0: PUSH EBX
//   Label: core_ladder.cpp_FUN_00502ed0
// 00502ed1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00502ed5: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 00502eda: JNZ 0x00502ef6
//   XREF to: 00502ef6 (CONDITIONAL_JUMP)
// 00502edc: PUSH 0x1
// 00502ede: PUSH EBX
// 00502edf: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 00502ee4: ADD ESP,0x8
// 00502ee7: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00502eeb: MOV EBX,EAX
// 00502eed: TEST DL,0x2
// 00502ef0: JNZ 0x00502f11
//   XREF to: 00502f11 (CONDITIONAL_JUMP)
// 00502ef2: MOV EAX,EBX
// 00502ef4: POP EBX
// 00502ef5: RET
// 00502ef6: PUSH 0x6606e0
//   Label: LAB_00502ef6
//   XREF to: 006606e0 (DATA)
// 00502efb: PUSH EBX
// 00502efc: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 00502f01: ADD ESP,0x8
// 00502f04: PUSH EAX
// 00502f05: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00502f0a: ADD ESP,0x4
// 00502f0d: MOV EAX,EBX
// 00502f0f: POP EBX
// 00502f10: RET
// 00502f11: PUSH EAX
//   Label: LAB_00502f11
// 00502f12: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 00502f17: ADD ESP,0x4
// 00502f1a: MOV EAX,EBX
// 00502f1c: POP EBX
// 00502f1d: RET
