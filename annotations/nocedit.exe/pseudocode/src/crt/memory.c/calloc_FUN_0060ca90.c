// Name: crt_memory.c_calloc_FUN_0060ca90
// Address: 0060ca90
// Address Range: [[0060ca90, 0060cab4]]
// Convention: __cdecl
// Signature: void * crt_memory.c_calloc_FUN_0060ca90(ulong count, ulong size)
// Cross-references:
//   crt_startup.cpp_GetOrCreateThreadData_FUN_0060a23c (0060a23c) at 0060a24e [UNCONDITIONAL_CALL]
//   crt_sync.c_allocate_critical_section_FUN_00609f24 (00609f24) at 00609f54 [UNCONDITIONAL_CALL]
//   crt_tls.c_getThreadLocalData_FUN_0060caf8 (0060caf8) at 0060cb57 [UNCONDITIONAL_CALL]
//   crt_tls.c_register_thread_data_FUN_0060cbd0 (0060cbd0) at 0060cbe5 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_memory.c_malloc_FUN_00601bb0
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

void * __cdecl crt_memory_c_calloc_FUN_0060ca90(ulong count,ulong size)

{
  void *dest;
  
  dest = crt_memory_c_malloc_FUN_00601bb0(count * size);
  if (dest != (void *)0x0) {
    dest = crt_memory_c_memset_FUN_005fde40(dest,0,count * size);
  }
  return dest;
}


// Assembly code:
// 0060ca90: PUSH EBX
//   Label: crt_memory.c_calloc_FUN_0060ca90
// 0060ca91: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0060ca95: IMUL EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0060ca9a: PUSH EBX
// 0060ca9b: CALL crt_memory.c_malloc_FUN_00601bb0
//   XREF to: 00601bb0 (UNCONDITIONAL_CALL)
// 0060caa0: ADD ESP,0x4
// 0060caa3: TEST EAX,EAX
// 0060caa5: JZ 0x0060cab3
//   XREF to: 0060cab3 (CONDITIONAL_JUMP)
// 0060caa7: PUSH EBX
// 0060caa8: PUSH 0x0
// 0060caaa: PUSH EAX
// 0060caab: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0060cab0: ADD ESP,0xc
// 0060cab3: POP EBX
//   Label: LAB_0060cab3
// 0060cab4: RET
