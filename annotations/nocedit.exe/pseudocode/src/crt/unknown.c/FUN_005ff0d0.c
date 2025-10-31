// Name: crt_unknown.c_FUN_005ff0d0
// Address: 005ff0d0
// Address Range: [[005ff0d0, 005ff0f2]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_005ff0d0()
// Cross-references:
//   cockpit_ckptutil.c_loadEdgeListFile_FUN_004331f0 (004331f0) at 00433411 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_00684cde
// Function calls:
//   crt_stdio.c_vfprintf_FUN_00604850

#include "nocturne.h"

void crt_unknown_c_FUN_005ff0d0(void)

{
  BADSPACEBASE *in_ESP;
  char *in_stack_00000004;
  undefined1 *local_4;
  
  local_4 = &stack0x00000008;
  crt_stdio_c_vfprintf_FUN_00604850((FILE *)&DAT_00684cde,in_stack_00000004,(va_list_t)&local_4);
  return;
}


// Assembly code:
// 005ff0d0: SUB ESP,0x4
//   Label: crt_unknown.c_FUN_005ff0d0
// 005ff0d3: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[0x8] (DATA)
// 005ff0d7: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x4] (DATA)
// 005ff0da: MOV EAX,ESP
// 005ff0dc: PUSH EAX
// 005ff0dd: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005ff0e1: PUSH EDX
// 005ff0e2: PUSH 0x684cde
//   XREF to: 00684cde (DATA)
// 005ff0e7: CALL crt_stdio.c_vfprintf_FUN_00604850
//   XREF to: 00604850 (UNCONDITIONAL_CALL)
// 005ff0ec: ADD ESP,0xc
// 005ff0ef: ADD ESP,0x4
// 005ff0f2: RET
