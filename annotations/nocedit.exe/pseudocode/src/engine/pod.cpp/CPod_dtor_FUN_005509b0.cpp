// Name: engine_pod.cpp_CPod_dtor_FUN_005509b0
// Address: 005509b0
// Address Range: [[005509b0, 005509df] [005509e1, 00550a08]]
// Convention: __cdecl
// Signature: CPod * engine_pod.cpp_CPod_dtor_FUN_005509b0(CPod * this_ptr, uint d1, uint d2)
// Cross-references:
//   core_podmain.cpp_CDemonPod_dtor_FUN_00551b20 (00551b20) at 00551b2f [UNCONDITIONAL_CALL]
// Globals:
//   CPod_vtable g_CPodVTable
//   WatcomTypeInfo g_CPodTypeInfo
// Function calls:
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   engine_pod.cpp_CPod_cleanup_FUN_00550c80
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CPod * __cdecl engine_pod_cpp_CPod_dtor_FUN_005509b0(CPod *this_ptr,uint d1,uint d2)

{
  void *ptr;
  
  if ((d1 & 4) != 0) {
    ptr = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CPodTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr);
    return this_ptr;
  }
  this_ptr->vtable = &g_CPodVTable;
  engine_pod_cpp_CPod_cleanup_FUN_00550c80(this_ptr);
  if ((d2 & 2) == 0) {
    return this_ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(this_ptr);
  return this_ptr;
}


// Assembly code:
// 005509b0: PUSH EBX
//   Label: engine_pod.cpp_CPod_dtor_FUN_005509b0
// 005509b1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005509b5: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 005509ba: JNZ 0x005509e1
//   XREF to: 005509e1 (CONDITIONAL_JUMP)
// 005509bc: PUSH EBX
// 005509bd: MOV dword ptr [EBX + 0x194],0x6623b4
//   XREF to: 006623b4 (DATA)
// 005509c7: CALL engine_pod.cpp_CPod_cleanup_FUN_00550c80
//   XREF to: 00550c80 (UNCONDITIONAL_CALL)
// 005509cc: ADD ESP,0x4
// 005509cf: TEST byte ptr [ESP + 0xc],0x2
//   XREF to: Stack[0x8] (READ)
// 005509d4: JNZ 0x005509fc
//   XREF to: 005509fc (CONDITIONAL_JUMP)
// 005509d6: MOV EAX,EBX
// 005509d8: POP EBX
// 005509d9: LEA EAX,[EAX]
// 005509df: NOP
// 005509e1: PUSH 0x6623d0
//   Label: LAB_005509e1
//   XREF to: 006623d0 (DATA)
// 005509e6: PUSH EBX
// 005509e7: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 005509ec: ADD ESP,0x8
// 005509ef: PUSH EAX
// 005509f0: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005509f5: ADD ESP,0x4
// 005509f8: MOV EAX,EBX
// 005509fa: POP EBX
// 005509fb: RET
// 005509fc: PUSH EBX
//   Label: LAB_005509fc
// 005509fd: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 00550a02: ADD ESP,0x4
// 00550a05: MOV EAX,EBX
// 00550a07: POP EBX
// 00550a08: RET
