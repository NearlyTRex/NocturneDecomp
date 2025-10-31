// Name: crt_string.c_wcsdup_FUN_0060a660
// Address: 0060a660
// Address Range: [[0060a660, 0060a699]]
// Convention: __watcallRegister
// Signature: WCHAR * crt_string.c_wcsdup_FUN_0060a660(WCHAR * str)
// Cross-references:
//   crt_startup.c_initialize_runtime_FUN_0060245c (0060245c) at 006025d0 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_memory.c_malloc_FUN_00601bb0
//   crt_string.c_memcpy_FUN_0060cd60
//   crt_string.c_wcslen_FUN_0060cd30

#include "nocturne.h"

WCHAR * crt_string_c_wcsdup_FUN_0060a660(WCHAR *str)

{
  ulong uVar1;
  WCHAR *dest;
  LPWSTR in_stack_00000004;
  void *in_stack_0000000c;
  
  uVar1 = crt_string_c_wcslen_FUN_0060cd30(in_stack_00000004);
  uVar1 = (uVar1 + 1) * 2;
  dest = (WCHAR *)crt_memory_c_malloc_FUN_00601bb0(uVar1);
  if (dest != (WCHAR *)0x0) {
    crt_string_c_memcpy_FUN_0060cd60(dest,in_stack_0000000c,uVar1);
  }
  return dest;
}


// Assembly code:
// 0060a660: PUSH EBX
//   Label: crt_string.c_wcsdup_FUN_0060a660
// 0060a661: PUSH ESI
// 0060a662: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0060a666: PUSH EDX
// 0060a667: CALL crt_string.c_wcslen_FUN_0060cd30
//   XREF to: 0060cd30 (UNCONDITIONAL_CALL)
// 0060a66c: INC EAX
// 0060a66d: ADD ESP,0x4
// 0060a670: LEA ESI,[EAX*0x2 + 0x0]
// 0060a677: PUSH ESI
// 0060a678: CALL crt_memory.c_malloc_FUN_00601bb0
//   XREF to: 00601bb0 (UNCONDITIONAL_CALL)
// 0060a67d: ADD ESP,0x4
// 0060a680: MOV EBX,EAX
// 0060a682: TEST EAX,EAX
// 0060a684: JZ 0x0060a695
//   XREF to: 0060a695 (CONDITIONAL_JUMP)
// 0060a686: PUSH ESI
// 0060a687: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0060a68b: PUSH ECX
// 0060a68c: PUSH EAX
// 0060a68d: CALL crt_string.c_memcpy_FUN_0060cd60
//   XREF to: 0060cd60 (UNCONDITIONAL_CALL)
// 0060a692: ADD ESP,0xc
// 0060a695: MOV EAX,EBX
//   Label: LAB_0060a695
// 0060a697: POP ESI
// 0060a698: POP EBX
// 0060a699: RET
