// Name: core_litecone.cpp_FUN_00506e30
// Address: 00506e30
// Address Range: [[00506e30, 00506e7d]]
// Convention: __cdecl
// Signature: CLightCone * core_litecone.cpp_FUN_00506e30(CLightCone * this_ptr, uint d1, uint d2)
// Globals:
//   WatcomTypeInfo g_CLightConeTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CLightCone * __cdecl core_litecone_cpp_FUN_00506e30(CLightCone *this_ptr,uint d1,uint d2)

{
  CLightCone *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CLightConeTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CLightCone *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base_actor,1);
  if ((d2 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 00506e30: PUSH EBX
//   Label: core_litecone.cpp_FUN_00506e30
// 00506e31: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00506e35: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 00506e3a: JNZ 0x00506e56
//   XREF to: 00506e56 (CONDITIONAL_JUMP)
// 00506e3c: PUSH 0x1
// 00506e3e: PUSH EBX
// 00506e3f: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 00506e44: ADD ESP,0x8
// 00506e47: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00506e4b: MOV EBX,EAX
// 00506e4d: TEST DL,0x2
// 00506e50: JNZ 0x00506e71
//   XREF to: 00506e71 (CONDITIONAL_JUMP)
// 00506e52: MOV EAX,EBX
// 00506e54: POP EBX
// 00506e55: RET
// 00506e56: PUSH 0x660ca0
//   Label: LAB_00506e56
//   XREF to: 00660ca0 (DATA)
// 00506e5b: PUSH EBX
// 00506e5c: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 00506e61: ADD ESP,0x8
// 00506e64: PUSH EAX
// 00506e65: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00506e6a: ADD ESP,0x4
// 00506e6d: MOV EAX,EBX
// 00506e6f: POP EBX
// 00506e70: RET
// 00506e71: PUSH EAX
//   Label: LAB_00506e71
// 00506e72: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 00506e77: ADD ESP,0x4
// 00506e7a: MOV EAX,EBX
// 00506e7c: POP EBX
// 00506e7d: RET
