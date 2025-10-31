// Name: core_hero.cpp_CHeroPlaceholder_dtor_FUN_004f3c30
// Address: 004f3c30
// Address Range: [[004f3c30, 004f3c87]]
// Convention: __cdecl
// Signature: CHeroPlaceholder * core_hero.cpp_CHeroPlaceholder_dtor_FUN_004f3c30(CHeroPlaceholder * this_ptr, uint d1, uint d2)
// Globals:
//   CDemonActor_vtable g_CHeroPlaceholderVTable
//   WatcomTypeInfo g_CHeroPlaceholderTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CHeroPlaceholder * __cdecl
core_hero_cpp_CHeroPlaceholder_dtor_FUN_004f3c30(CHeroPlaceholder *this_ptr,uint d1,uint d2)

{
  CHeroPlaceholder *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CHeroPlaceholderTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  (this_ptr->base_actor).metadata.vtable = &g_CHeroPlaceholderVTable;
  ptr = (CHeroPlaceholder *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base_actor,1);
  if ((d2 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 004f3c30: PUSH EBX
//   Label: core_hero.cpp_CHeroPlaceholder_dtor_FUN_004f3c30
// 004f3c31: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004f3c35: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 004f3c3a: JNZ 0x004f3c60
//   XREF to: 004f3c60 (CONDITIONAL_JUMP)
// 004f3c3c: PUSH 0x1
// 004f3c3e: PUSH EBX
// 004f3c3f: MOV dword ptr [EBX + 0x154],0x65f844
//   XREF to: 0065f844 (DATA)
// 004f3c49: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 004f3c4e: ADD ESP,0x8
// 004f3c51: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004f3c55: MOV EBX,EAX
// 004f3c57: TEST DL,0x2
// 004f3c5a: JNZ 0x004f3c7b
//   XREF to: 004f3c7b (CONDITIONAL_JUMP)
// 004f3c5c: MOV EAX,EBX
// 004f3c5e: POP EBX
// 004f3c5f: RET
// 004f3c60: PUSH 0x65f930
//   Label: LAB_004f3c60
//   XREF to: 0065f930 (DATA)
// 004f3c65: PUSH EBX
// 004f3c66: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 004f3c6b: ADD ESP,0x8
// 004f3c6e: PUSH EAX
// 004f3c6f: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 004f3c74: ADD ESP,0x4
// 004f3c77: MOV EAX,EBX
// 004f3c79: POP EBX
// 004f3c7a: RET
// 004f3c7b: PUSH EAX
//   Label: LAB_004f3c7b
// 004f3c7c: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 004f3c81: ADD ESP,0x4
// 004f3c84: MOV EAX,EBX
// 004f3c86: POP EBX
// 004f3c87: RET
