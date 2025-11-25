// Name: shape_design.c_displayMemoryStatus_FUN_0046e6f0
// Address: 0046e6f0
// Address Range: [[0046e6f0, 0046e75b]]
// Convention: __cdecl
// Signature: void shape_design.c_displayMemoryStatus_FUN_0046e6f0(int line_number)
// Globals:
//   TerminatedCString s_Memory_available_d_0061dea9
//   TerminatedCString s_Largest_block_d_0061debe
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_watcom.c_memavl_FUN_006008f0
//   crt_watcom.c_memmax_FUN_00600940
//   engine_2d.c_drawText_FUN_00401fd0

#include "nocturne.h"

void __cdecl shape_design_c_displayMemoryStatus_FUN_0046e6f0(int line_number)

{
  BADSPACEBASE *in_ESP;
  
  crt_watcom_c_memavl_FUN_006008f0();
  crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffffa0,"Memory available: %d");
  engine_2d_c_drawText_FUN_00401fd0(&stack0xffffffa0,0,line_number * 0xb);
  crt_watcom_c_memmax_FUN_00600940();
  crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffffa0,"Largest block: %d");
  engine_2d_c_drawText_FUN_00401fd0(&stack0xffffffa0,0,(line_number + 1) * 0xb);
  return;
}


// Assembly code:
// 0046e6f0: PUSH EBX
//   Label: shape_design.c_displayMemoryStatus_FUN_0046e6f0
// 0046e6f1: PUSH ESI
// 0046e6f2: PUSH EDI
// 0046e6f3: PUSH EBP
// 0046e6f4: MOV EBP,ESP
// 0046e6f6: SUB ESP,0x50
// 0046e6fc: CALL crt_watcom.c_memavl_FUN_006008f0
//   XREF to: 006008f0 (UNCONDITIONAL_CALL)
// 0046e701: PUSH EAX
// 0046e702: MOV EAX,0x61dea9
//   XREF to: 0061dea9 (DATA)
// 0046e707: PUSH EAX
//   XREF to: 0061dea9 (DATA)
// 0046e708: LEA EAX,[EBP + -0x50]
//   XREF to: Stack[-0x60] (DATA)
// 0046e70b: PUSH EAX
// 0046e70c: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0046e711: ADD ESP,0xc
// 0046e714: IMUL EAX,dword ptr [EBP + 0x14],0xb
//   XREF to: Stack[0x4] (READ)
// 0046e718: PUSH EAX
// 0046e719: PUSH 0x0
// 0046e71b: LEA EAX,[EBP + -0x50]
//   XREF to: Stack[-0x60] (DATA)
// 0046e71e: PUSH EAX
// 0046e71f: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046e724: ADD ESP,0xc
// 0046e727: CALL crt_watcom.c_memmax_FUN_00600940
//   XREF to: 00600940 (UNCONDITIONAL_CALL)
// 0046e72c: PUSH EAX
// 0046e72d: MOV EAX,0x61debe
//   XREF to: 0061debe (DATA)
// 0046e732: PUSH EAX
//   XREF to: 0061debe (DATA)
// 0046e733: LEA EAX,[EBP + -0x50]
//   XREF to: Stack[-0x60] (DATA)
// 0046e736: PUSH EAX
// 0046e737: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0046e73c: ADD ESP,0xc
// 0046e73f: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046e742: INC EAX
// 0046e743: IMUL EAX,EAX,0xb
// 0046e746: PUSH EAX
// 0046e747: PUSH 0x0
// 0046e749: LEA EAX,[EBP + -0x50]
//   XREF to: Stack[-0x60] (DATA)
// 0046e74c: PUSH EAX
// 0046e74d: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046e752: ADD ESP,0xc
// 0046e755: MOV ESP,EBP
// 0046e757: POP EBP
// 0046e758: POP EDI
// 0046e759: POP ESI
// 0046e75a: POP EBX
// 0046e75b: RET
