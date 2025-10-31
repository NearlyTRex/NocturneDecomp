// Name: core_manpuz.cpp_FUN_0050b840
// Address: 0050b840
// Address Range: [[0050b840, 0050b88d]]
// Convention: __cdecl
// Signature: CMirrorHack * core_manpuz.cpp_FUN_0050b840(CMirrorHack * this_ptr, uint d1, uint d2)
// Globals:
//   WatcomTypeInfo g_CMirrorHackTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CMirrorHack * __cdecl core_manpuz_cpp_FUN_0050b840(CMirrorHack *this_ptr,uint d1,uint d2)

{
  CMirrorHack *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CMirrorHackTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CMirrorHack *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base_actor,1);
  if ((d2 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 0050b840: PUSH EBX
//   Label: core_manpuz.cpp_FUN_0050b840
// 0050b841: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0050b845: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 0050b84a: JNZ 0x0050b866
//   XREF to: 0050b866 (CONDITIONAL_JUMP)
// 0050b84c: PUSH 0x1
// 0050b84e: PUSH EBX
// 0050b84f: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 0050b854: ADD ESP,0x8
// 0050b857: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0050b85b: MOV EBX,EAX
// 0050b85d: TEST DL,0x2
// 0050b860: JNZ 0x0050b881
//   XREF to: 0050b881 (CONDITIONAL_JUMP)
// 0050b862: MOV EAX,EBX
// 0050b864: POP EBX
// 0050b865: RET
// 0050b866: PUSH 0x660fe0
//   Label: LAB_0050b866
//   XREF to: 00660fe0 (DATA)
// 0050b86b: PUSH EBX
// 0050b86c: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 0050b871: ADD ESP,0x8
// 0050b874: PUSH EAX
// 0050b875: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0050b87a: ADD ESP,0x4
// 0050b87d: MOV EAX,EBX
// 0050b87f: POP EBX
// 0050b880: RET
// 0050b881: PUSH EAX
//   Label: LAB_0050b881
// 0050b882: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 0050b887: ADD ESP,0x4
// 0050b88a: MOV EAX,EBX
// 0050b88c: POP EBX
// 0050b88d: RET
