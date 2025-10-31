// Name: core_crate.cpp_FUN_00448bb0
// Address: 00448bb0
// Address Range: [[00448bb0, 00448bfd]]
// Convention: __cdecl
// Signature: CCrate * core_crate.cpp_FUN_00448bb0(CCrate * this_ptr, uint d1, uint d2)
// Globals:
//   WatcomTypeInfo g_CCrateTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CCrate * __cdecl core_crate_cpp_FUN_00448bb0(CCrate *this_ptr,uint d1,uint d2)

{
  CCrate *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CCrateTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CCrate *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base_actor,1);
  if ((d2 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 00448bb0: PUSH EBX
//   Label: core_crate.cpp_FUN_00448bb0
// 00448bb1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00448bb5: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 00448bba: JNZ 0x00448bd6
//   XREF to: 00448bd6 (CONDITIONAL_JUMP)
// 00448bbc: PUSH 0x1
// 00448bbe: PUSH EBX
// 00448bbf: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 00448bc4: ADD ESP,0x8
// 00448bc7: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00448bcb: MOV EBX,EAX
// 00448bcd: TEST DL,0x2
// 00448bd0: JNZ 0x00448bf1
//   XREF to: 00448bf1 (CONDITIONAL_JUMP)
// 00448bd2: MOV EAX,EBX
// 00448bd4: POP EBX
// 00448bd5: RET
// 00448bd6: PUSH 0x65c350
//   Label: LAB_00448bd6
//   XREF to: 0065c350 (DATA)
// 00448bdb: PUSH EBX
// 00448bdc: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 00448be1: ADD ESP,0x8
// 00448be4: PUSH EAX
// 00448be5: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00448bea: ADD ESP,0x4
// 00448bed: MOV EAX,EBX
// 00448bef: POP EBX
// 00448bf0: RET
// 00448bf1: PUSH EAX
//   Label: LAB_00448bf1
// 00448bf2: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 00448bf7: ADD ESP,0x4
// 00448bfa: MOV EAX,EBX
// 00448bfc: POP EBX
// 00448bfd: RET
