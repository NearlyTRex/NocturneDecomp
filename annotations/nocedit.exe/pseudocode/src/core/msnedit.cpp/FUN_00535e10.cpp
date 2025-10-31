// Name: core_msnedit.cpp_FUN_00535e10
// Address: 00535e10
// Address Range: [[00535e10, 00535e65]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_00535e10()
// Globals:
//   int g_WindowWidth = 0x140
//   int g_ClipLeft
// Function calls:
//   engine_2d.c_drawText_FUN_00401fd0

#include "nocturne.h"

/* Signature: undefined1 core_msnedit.cpp_FUN_00535e10(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

void core_msnedit_cpp_FUN_00535e10(void)

{
  int *in_stack_00000004;
  char *in_stack_00000008;
  char *in_stack_00000010;
  
  engine_2d_c_drawText_FUN_00401fd0(in_stack_00000008,g_ClipLeft,*in_stack_00000004);
  engine_2d_c_drawText_FUN_00401fd0
            (in_stack_00000010,
             ((int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -8) -
                   (uint)((g_WindowWidth >> 0x1f) << 2 < 0)) >> 3) + g_ClipLeft,*in_stack_00000004);
  *in_stack_00000004 = *in_stack_00000004 + 0xb;
  return;
}


// Assembly code:
// 00535e10: PUSH EBX
//   Label: core_msnedit.cpp_FUN_00535e10
// 00535e11: PUSH ESI
// 00535e12: PUSH EDI
// 00535e13: PUSH EBP
// 00535e14: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00535e18: MOV EDX,dword ptr [EBX]
// 00535e1a: PUSH EDX
// 00535e1b: MOV ECX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 00535e21: PUSH ECX
// 00535e22: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 00535e26: PUSH ESI
// 00535e27: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00535e2c: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00535e31: MOV EDX,EAX
// 00535e33: SAR EDX,0x1f
// 00535e36: SHL EDX,0x3
// 00535e39: SBB EAX,EDX
// 00535e3b: SAR EAX,0x3
// 00535e3e: ADD ESP,0xc
// 00535e41: MOV EDI,dword ptr [EBX]
// 00535e43: MOV EBP,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 00535e49: PUSH EDI
// 00535e4a: ADD EAX,EBP
// 00535e4c: PUSH EAX
// 00535e4d: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 00535e51: PUSH EAX
// 00535e52: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00535e57: MOV EDX,dword ptr [EBX]
// 00535e59: ADD EDX,0xb
// 00535e5c: ADD ESP,0xc
// 00535e5f: MOV dword ptr [EBX],EDX
// 00535e61: POP EBP
// 00535e62: POP EDI
// 00535e63: POP ESI
// 00535e64: POP EBX
// 00535e65: RET
