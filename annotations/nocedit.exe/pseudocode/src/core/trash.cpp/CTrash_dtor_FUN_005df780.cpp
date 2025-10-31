// Name: core_trash.cpp_CTrash_dtor_FUN_005df780
// Address: 005df780
// Address Range: [[005df780, 005df7cd]]
// Convention: __cdecl
// Signature: CTrash * core_trash.cpp_CTrash_dtor_FUN_005df780(CTrash * this_ptr, uint d1, uint d2)
// Globals:
//   WatcomTypeInfo g_CTrashTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CTrash * __cdecl core_trash_cpp_CTrash_dtor_FUN_005df780(CTrash *this_ptr,uint d1,uint d2)

{
  CTrash *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CTrashTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CTrash *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base_actor,1);
  if ((d2 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 005df780: PUSH EBX
//   Label: core_trash.cpp_CTrash_dtor_FUN_005df780
// 005df781: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005df785: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 005df78a: JNZ 0x005df7a6
//   XREF to: 005df7a6 (CONDITIONAL_JUMP)
// 005df78c: PUSH 0x1
// 005df78e: PUSH EBX
// 005df78f: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 005df794: ADD ESP,0x8
// 005df797: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005df79b: MOV EBX,EAX
// 005df79d: TEST DL,0x2
// 005df7a0: JNZ 0x005df7c1
//   XREF to: 005df7c1 (CONDITIONAL_JUMP)
// 005df7a2: MOV EAX,EBX
// 005df7a4: POP EBX
// 005df7a5: RET
// 005df7a6: PUSH 0x6649e0
//   Label: LAB_005df7a6
//   XREF to: 006649e0 (DATA)
// 005df7ab: PUSH EBX
// 005df7ac: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 005df7b1: ADD ESP,0x8
// 005df7b4: PUSH EAX
// 005df7b5: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005df7ba: ADD ESP,0x4
// 005df7bd: MOV EAX,EBX
// 005df7bf: POP EBX
// 005df7c0: RET
// 005df7c1: PUSH EAX
//   Label: LAB_005df7c1
// 005df7c2: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005df7c7: ADD ESP,0x4
// 005df7ca: MOV EAX,EBX
// 005df7cc: POP EBX
// 005df7cd: RET
