// Name: crt_unknown.c_FUN_0060c640
// Address: 0060c640
// Address Range: [[0060c640, 0060c64d]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060c640()
// Cross-references:
//   crt_unknown.c_staticInit_FUN_0060c650 (0060c650) at 0060c699 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_memory.c_malloc_FUN_00601bb0

#include "nocturne.h"

void crt_unknown_c_FUN_0060c640(void)

{
  ulong in_stack_00000004;
  
  crt_memory_c_malloc_FUN_00601bb0(in_stack_00000004);
  return;
}


// Assembly code:
// 0060c640: MOV EDX,dword ptr [ESP + 0x4]
//   Label: crt_unknown.c_FUN_0060c640
//   XREF to: Stack[0x4] (READ)
// 0060c644: PUSH EDX
// 0060c645: CALL crt_memory.c_malloc_FUN_00601bb0
//   XREF to: 00601bb0 (UNCONDITIONAL_CALL)
// 0060c64a: ADD ESP,0x4
// 0060c64d: RET
