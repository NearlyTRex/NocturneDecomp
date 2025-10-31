// Name: core_lever.cpp_FUN_00505430
// Address: 00505430
// Address Range: [[00505430, 0050547d]]
// Convention: __cdecl
// Signature: CLever * core_lever.cpp_FUN_00505430(CLever * this_ptr, uint d1, uint d2)
// Globals:
//   WatcomTypeInfo g_CLeverTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CLever * __cdecl core_lever_cpp_FUN_00505430(CLever *this_ptr,uint d1,uint d2)

{
  CLever *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CLeverTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CLever *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base_actor,1);
  if ((d2 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 00505430: PUSH EBX
//   Label: core_lever.cpp_FUN_00505430
// 00505431: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00505435: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 0050543a: JNZ 0x00505456
//   XREF to: 00505456 (CONDITIONAL_JUMP)
// 0050543c: PUSH 0x1
// 0050543e: PUSH EBX
// 0050543f: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 00505444: ADD ESP,0x8
// 00505447: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0050544b: MOV EBX,EAX
// 0050544d: TEST DL,0x2
// 00505450: JNZ 0x00505471
//   XREF to: 00505471 (CONDITIONAL_JUMP)
// 00505452: MOV EAX,EBX
// 00505454: POP EBX
// 00505455: RET
// 00505456: PUSH 0x660a00
//   Label: LAB_00505456
//   XREF to: 00660a00 (DATA)
// 0050545b: PUSH EBX
// 0050545c: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 00505461: ADD ESP,0x8
// 00505464: PUSH EAX
// 00505465: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0050546a: ADD ESP,0x4
// 0050546d: MOV EAX,EBX
// 0050546f: POP EBX
// 00505470: RET
// 00505471: PUSH EAX
//   Label: LAB_00505471
// 00505472: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 00505477: ADD ESP,0x4
// 0050547a: MOV EAX,EBX
// 0050547c: POP EBX
// 0050547d: RET
