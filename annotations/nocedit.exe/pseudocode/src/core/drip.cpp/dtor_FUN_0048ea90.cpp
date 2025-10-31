// Name: core_drip.cpp_dtor_FUN_0048ea90
// Address: 0048ea90
// Address Range: [[0048ea90, 0048eadd]]
// Convention: __cdecl
// Signature: CDrip * core_drip.cpp_dtor_FUN_0048ea90(CDrip * this_ptr, uint d1, uint d2)
// Globals:
//   WatcomTypeInfo g_CDripTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CDrip * __cdecl core_drip_cpp_dtor_FUN_0048ea90(CDrip *this_ptr,uint d1,uint d2)

{
  CDrip *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CDripTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CDrip *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base_actor,1);
  if ((d2 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 0048ea90: PUSH EBX
//   Label: core_drip.cpp_dtor_FUN_0048ea90
// 0048ea91: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0048ea95: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 0048ea9a: JNZ 0x0048eab6
//   XREF to: 0048eab6 (CONDITIONAL_JUMP)
// 0048ea9c: PUSH 0x1
// 0048ea9e: PUSH EBX
// 0048ea9f: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 0048eaa4: ADD ESP,0x8
// 0048eaa7: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0048eaab: MOV EBX,EAX
// 0048eaad: TEST DL,0x2
// 0048eab0: JNZ 0x0048ead1
//   XREF to: 0048ead1 (CONDITIONAL_JUMP)
// 0048eab2: MOV EAX,EBX
// 0048eab4: POP EBX
// 0048eab5: RET
// 0048eab6: PUSH 0x65d070
//   Label: LAB_0048eab6
//   XREF to: 0065d070 (DATA)
// 0048eabb: PUSH EBX
// 0048eabc: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 0048eac1: ADD ESP,0x8
// 0048eac4: PUSH EAX
// 0048eac5: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0048eaca: ADD ESP,0x4
// 0048eacd: MOV EAX,EBX
// 0048eacf: POP EBX
// 0048ead0: RET
// 0048ead1: PUSH EAX
//   Label: LAB_0048ead1
// 0048ead2: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 0048ead7: ADD ESP,0x4
// 0048eada: MOV EAX,EBX
// 0048eadc: POP EBX
// 0048eadd: RET
