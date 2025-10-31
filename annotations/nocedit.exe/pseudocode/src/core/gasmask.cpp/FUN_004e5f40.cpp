// Name: core_gasmask.cpp_FUN_004e5f40
// Address: 004e5f40
// Address Range: [[004e5f40, 004e5f8d]]
// Convention: __cdecl
// Signature: CGasMask * core_gasmask.cpp_FUN_004e5f40(CGasMask * this_ptr, uint d1, uint d2)
// Globals:
//   WatcomTypeInfo g_CGasMaskTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CGasMask * __cdecl core_gasmask_cpp_FUN_004e5f40(CGasMask *this_ptr,uint d1,uint d2)

{
  CGasMask *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CGasMaskTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CGasMask *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base_actor,1);
  if ((d2 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 004e5f40: PUSH EBX
//   Label: core_gasmask.cpp_FUN_004e5f40
// 004e5f41: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004e5f45: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 004e5f4a: JNZ 0x004e5f66
//   XREF to: 004e5f66 (CONDITIONAL_JUMP)
// 004e5f4c: PUSH 0x1
// 004e5f4e: PUSH EBX
// 004e5f4f: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 004e5f54: ADD ESP,0x8
// 004e5f57: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004e5f5b: MOV EBX,EAX
// 004e5f5d: TEST DL,0x2
// 004e5f60: JNZ 0x004e5f81
//   XREF to: 004e5f81 (CONDITIONAL_JUMP)
// 004e5f62: MOV EAX,EBX
// 004e5f64: POP EBX
// 004e5f65: RET
// 004e5f66: PUSH 0x65ece0
//   Label: LAB_004e5f66
//   XREF to: 0065ece0 (DATA)
// 004e5f6b: PUSH EBX
// 004e5f6c: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 004e5f71: ADD ESP,0x8
// 004e5f74: PUSH EAX
// 004e5f75: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 004e5f7a: ADD ESP,0x4
// 004e5f7d: MOV EAX,EBX
// 004e5f7f: POP EBX
// 004e5f80: RET
// 004e5f81: PUSH EAX
//   Label: LAB_004e5f81
// 004e5f82: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 004e5f87: ADD ESP,0x4
// 004e5f8a: MOV EAX,EBX
// 004e5f8c: POP EBX
// 004e5f8d: RET
