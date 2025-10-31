// Name: core_setedit.cpp_FUN_00581520
// Address: 00581520
// Address Range: [[00581520, 00581583]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_FUN_00581520()
// Globals:
//   int g_WindowWidth = 0x140
// Function calls:
//   engine_2d.c_drawText_FUN_00401fd0

#include "nocturne.h"

void core_setedit_cpp_FUN_00581520(void)

{
  int x_pos;
  int in_stack_00000004;
  int in_stack_00000008;
  char *in_stack_0000000c;
  char *in_stack_00000014;
  
  x_pos = (in_stack_00000004 * g_WindowWidth) / 2;
  engine_2d_c_drawText_FUN_00401fd0(in_stack_0000000c,x_pos,in_stack_00000008 * 0xb);
  engine_2d_c_drawText_FUN_00401fd0
            (in_stack_00000014,g_WindowWidth / 10 + x_pos,in_stack_00000008 * 0xb);
  return;
}


// Assembly code:
// 00581520: PUSH EBX
//   Label: core_setedit.cpp_FUN_00581520
// 00581521: PUSH ESI
// 00581522: PUSH EDI
// 00581523: PUSH EBP
// 00581524: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00581528: LEA ESI,[EDX*0x4 + 0x0]
// 0058152f: SUB ESI,EDX
// 00581531: SHL ESI,0x2
// 00581534: MOV ECX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 0058153a: SUB ESI,EDX
// 0058153c: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00581540: IMUL EDX,ECX
// 00581543: MOV EAX,EDX
// 00581545: SAR EDX,0x1f
// 00581548: SUB EAX,EDX
// 0058154a: SAR EAX,0x1
// 0058154c: PUSH ESI
// 0058154d: PUSH EAX
// 0058154e: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 00581552: PUSH EDI
// 00581553: MOV EBX,EAX
// 00581555: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0058155a: ADD ESP,0xc
// 0058155d: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00581562: PUSH ESI
// 00581563: MOV EDX,EAX
// 00581565: MOV ESI,0xa
// 0058156a: SAR EDX,0x1f
// 0058156d: IDIV ESI
// 0058156f: ADD EAX,EBX
// 00581571: PUSH EAX
// 00581572: MOV EBP,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x10] (READ)
// 00581576: PUSH EBP
// 00581577: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0058157c: ADD ESP,0xc
// 0058157f: POP EBP
// 00581580: POP EDI
// 00581581: POP ESI
// 00581582: POP EBX
// 00581583: RET
